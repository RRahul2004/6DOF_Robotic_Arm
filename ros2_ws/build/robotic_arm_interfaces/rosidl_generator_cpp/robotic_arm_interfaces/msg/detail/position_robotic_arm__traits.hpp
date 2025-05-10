// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotic_arm_interfaces:msg/PositionRoboticArm.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_ARM_INTERFACES__MSG__DETAIL__POSITION_ROBOTIC_ARM__TRAITS_HPP_
#define ROBOTIC_ARM_INTERFACES__MSG__DETAIL__POSITION_ROBOTIC_ARM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotic_arm_interfaces/msg/detail/position_robotic_arm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotic_arm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PositionRoboticArm & msg,
  std::ostream & out)
{
  out << "{";
  // member: servo_1
  {
    out << "servo_1: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_1, out);
    out << ", ";
  }

  // member: servo_2
  {
    out << "servo_2: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_2, out);
    out << ", ";
  }

  // member: servo_3
  {
    out << "servo_3: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_3, out);
    out << ", ";
  }

  // member: servo_4
  {
    out << "servo_4: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_4, out);
    out << ", ";
  }

  // member: servo_5
  {
    out << "servo_5: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_5, out);
    out << ", ";
  }

  // member: servo_6
  {
    out << "servo_6: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_6, out);
    out << ", ";
  }

  // member: stepper
  {
    out << "stepper: ";
    rosidl_generator_traits::value_to_yaml(msg.stepper, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionRoboticArm & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: servo_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_1: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_1, out);
    out << "\n";
  }

  // member: servo_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_2: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_2, out);
    out << "\n";
  }

  // member: servo_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_3: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_3, out);
    out << "\n";
  }

  // member: servo_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_4: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_4, out);
    out << "\n";
  }

  // member: servo_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_5: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_5, out);
    out << "\n";
  }

  // member: servo_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_6: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_6, out);
    out << "\n";
  }

  // member: stepper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stepper: ";
    rosidl_generator_traits::value_to_yaml(msg.stepper, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionRoboticArm & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robotic_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotic_arm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotic_arm_interfaces::msg::PositionRoboticArm & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotic_arm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotic_arm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotic_arm_interfaces::msg::PositionRoboticArm & msg)
{
  return robotic_arm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotic_arm_interfaces::msg::PositionRoboticArm>()
{
  return "robotic_arm_interfaces::msg::PositionRoboticArm";
}

template<>
inline const char * name<robotic_arm_interfaces::msg::PositionRoboticArm>()
{
  return "robotic_arm_interfaces/msg/PositionRoboticArm";
}

template<>
struct has_fixed_size<robotic_arm_interfaces::msg::PositionRoboticArm>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotic_arm_interfaces::msg::PositionRoboticArm>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotic_arm_interfaces::msg::PositionRoboticArm>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIC_ARM_INTERFACES__MSG__DETAIL__POSITION_ROBOTIC_ARM__TRAITS_HPP_
