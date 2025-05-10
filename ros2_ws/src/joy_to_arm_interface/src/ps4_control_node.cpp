#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "std_msgs/msg/float32.hpp"

using Joy    = sensor_msgs::msg::Joy;
using Float32 = std_msgs::msg::Float32;
using std::placeholders::_1;

class PS4ToSevenFloats : public rclcpp::Node
{
public:
  PS4ToSevenFloats()
  : Node("ps4_to_seven_floats")
  {
    joy_sub_ = create_subscription<Joy>(
      "/joy", 10, std::bind(&PS4ToSevenFloats::joy_callback, this, _1));

    // topic names for the 7 channels
    topics_ = {
      "stepper",
      "servo_1",
      "servo_2",
      "servo_3",
      "servo_4",
      "servo_5",
      "servo_6"
    };

    // create one publisher per topic
    for (auto & t : topics_) {
      pubs_.push_back(
        create_publisher<Float32>(t, 10)
      );
    }
  }

private:
  void joy_callback(const Joy::SharedPtr msg)
  {
    // extract and map axes/buttons → floats
    float left_stick_lr  = msg->axes[0];                 // stepper
    float left_stick_ud  = msg->axes[1];                 // servo 1 & 2
    float right_stick_ud = msg->axes[4];                 // servo 3
    float right_stick_lr = msg->axes[3];                 // servo 4
    float dpad_lr        = msg->axes[6];                 // servo 5
    float l2 = (1.0f - msg->axes[2]) / 2.0f;              // L2 0–1
    float r2 = (1.0f - msg->axes[5]) / 2.0f;              // R2 0–1
    float servo6 = l2 - r2;                              // combine → servo_6

    std::array<float,7> values = {
      left_stick_lr,
      left_stick_ud,
      left_stick_ud,
      right_stick_ud,
      right_stick_lr,
      dpad_lr,
      servo6
    };

    // publish each
    for (size_t i = 0; i < pubs_.size(); ++i) {
      Float32 out;
      out.data = values[i];
      pubs_[i]->publish(out);
    }
  }

  rclcpp::Subscription<Joy>::SharedPtr joy_sub_;
  std::vector<rclcpp::Publisher<Float32>::SharedPtr> pubs_;
  std::vector<std::string> topics_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PS4ToSevenFloats>());
  rclcpp::shutdown();
  return 0;
}
