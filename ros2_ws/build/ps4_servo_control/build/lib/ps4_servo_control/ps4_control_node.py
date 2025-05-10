import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from ps4_servo_control.msg import ServoStepperCommand

class PS4ControlNode(Node):
    def __init__(self):
        super().__init__('ps4_control_node')

        self.subscription = self.create_subscription(
            Joy,
            '/joy',
            self.joy_callback,
            10
        )

        self.publisher = self.create_publisher(
            ServoStepperCommand,
            '/servo_stepper_command',
            10
        )

    def joy_callback(self, msg):
        command = ServoStepperCommand()

        # Example mapping - update axis indices for your needs
        command.servo_angles = [
            msg.axes[0] * 90 + 90,  # Servo 1
            msg.axes[1] * 90 + 90,  # Servo 2
            msg.axes[2] * 90 + 90,  # Servo 3
            msg.axes[3] * 90 + 90,  # Servo 4
            90.0,                   # Servo 5 (neutral)
            90.0                    # Servo 6 (neutral)
        ]

        command.stepper_value = msg.axes[4] * 1000  # Stepper control

        self.get_logger().info(f'Publishing: {command}')
        self.publisher.publish(command)

def main(args=None):
    rclpy.init(args=args)
    node = PS4ControlNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

