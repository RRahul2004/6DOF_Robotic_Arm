// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotic_arm_interfaces:msg/PositionRoboticArm.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_ARM_INTERFACES__MSG__DETAIL__POSITION_ROBOTIC_ARM__BUILDER_HPP_
#define ROBOTIC_ARM_INTERFACES__MSG__DETAIL__POSITION_ROBOTIC_ARM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotic_arm_interfaces/msg/detail/position_robotic_arm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotic_arm_interfaces
{

namespace msg
{

namespace builder
{

class Init_PositionRoboticArm_stepper
{
public:
  explicit Init_PositionRoboticArm_stepper(::robotic_arm_interfaces::msg::PositionRoboticArm & msg)
  : msg_(msg)
  {}
  ::robotic_arm_interfaces::msg::PositionRoboticArm stepper(::robotic_arm_interfaces::msg::PositionRoboticArm::_stepper_type arg)
  {
    msg_.stepper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotic_arm_interfaces::msg::PositionRoboticArm msg_;
};

class Init_PositionRoboticArm_servo_6
{
public:
  explicit Init_PositionRoboticArm_servo_6(::robotic_arm_interfaces::msg::PositionRoboticArm & msg)
  : msg_(msg)
  {}
  Init_PositionRoboticArm_stepper servo_6(::robotic_arm_interfaces::msg::PositionRoboticArm::_servo_6_type arg)
  {
    msg_.servo_6 = std::move(arg);
    return Init_PositionRoboticArm_stepper(msg_);
  }

private:
  ::robotic_arm_interfaces::msg::PositionRoboticArm msg_;
};

class Init_PositionRoboticArm_servo_5
{
public:
  explicit Init_PositionRoboticArm_servo_5(::robotic_arm_interfaces::msg::PositionRoboticArm & msg)
  : msg_(msg)
  {}
  Init_PositionRoboticArm_servo_6 servo_5(::robotic_arm_interfaces::msg::PositionRoboticArm::_servo_5_type arg)
  {
    msg_.servo_5 = std::move(arg);
    return Init_PositionRoboticArm_servo_6(msg_);
  }

private:
  ::robotic_arm_interfaces::msg::PositionRoboticArm msg_;
};

class Init_PositionRoboticArm_servo_4
{
public:
  explicit Init_PositionRoboticArm_servo_4(::robotic_arm_interfaces::msg::PositionRoboticArm & msg)
  : msg_(msg)
  {}
  Init_PositionRoboticArm_servo_5 servo_4(::robotic_arm_interfaces::msg::PositionRoboticArm::_servo_4_type arg)
  {
    msg_.servo_4 = std::move(arg);
    return Init_PositionRoboticArm_servo_5(msg_);
  }

private:
  ::robotic_arm_interfaces::msg::PositionRoboticArm msg_;
};

class Init_PositionRoboticArm_servo_3
{
public:
  explicit Init_PositionRoboticArm_servo_3(::robotic_arm_interfaces::msg::PositionRoboticArm & msg)
  : msg_(msg)
  {}
  Init_PositionRoboticArm_servo_4 servo_3(::robotic_arm_interfaces::msg::PositionRoboticArm::_servo_3_type arg)
  {
    msg_.servo_3 = std::move(arg);
    return Init_PositionRoboticArm_servo_4(msg_);
  }

private:
  ::robotic_arm_interfaces::msg::PositionRoboticArm msg_;
};

class Init_PositionRoboticArm_servo_2
{
public:
  explicit Init_PositionRoboticArm_servo_2(::robotic_arm_interfaces::msg::PositionRoboticArm & msg)
  : msg_(msg)
  {}
  Init_PositionRoboticArm_servo_3 servo_2(::robotic_arm_interfaces::msg::PositionRoboticArm::_servo_2_type arg)
  {
    msg_.servo_2 = std::move(arg);
    return Init_PositionRoboticArm_servo_3(msg_);
  }

private:
  ::robotic_arm_interfaces::msg::PositionRoboticArm msg_;
};

class Init_PositionRoboticArm_servo_1
{
public:
  Init_PositionRoboticArm_servo_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionRoboticArm_servo_2 servo_1(::robotic_arm_interfaces::msg::PositionRoboticArm::_servo_1_type arg)
  {
    msg_.servo_1 = std::move(arg);
    return Init_PositionRoboticArm_servo_2(msg_);
  }

private:
  ::robotic_arm_interfaces::msg::PositionRoboticArm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotic_arm_interfaces::msg::PositionRoboticArm>()
{
  return robotic_arm_interfaces::msg::builder::Init_PositionRoboticArm_servo_1();
}

}  // namespace robotic_arm_interfaces

#endif  // ROBOTIC_ARM_INTERFACES__MSG__DETAIL__POSITION_ROBOTIC_ARM__BUILDER_HPP_
