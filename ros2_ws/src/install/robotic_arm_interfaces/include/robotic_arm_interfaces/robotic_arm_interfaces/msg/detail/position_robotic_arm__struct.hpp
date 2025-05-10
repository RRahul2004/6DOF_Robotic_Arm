// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotic_arm_interfaces:msg/PositionRoboticArm.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_ARM_INTERFACES__MSG__DETAIL__POSITION_ROBOTIC_ARM__STRUCT_HPP_
#define ROBOTIC_ARM_INTERFACES__MSG__DETAIL__POSITION_ROBOTIC_ARM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotic_arm_interfaces__msg__PositionRoboticArm __attribute__((deprecated))
#else
# define DEPRECATED__robotic_arm_interfaces__msg__PositionRoboticArm __declspec(deprecated)
#endif

namespace robotic_arm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionRoboticArm_
{
  using Type = PositionRoboticArm_<ContainerAllocator>;

  explicit PositionRoboticArm_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_1 = 0.0f;
      this->servo_2 = 0.0f;
      this->servo_3 = 0.0f;
      this->servo_4 = 0.0f;
      this->servo_5 = 0.0f;
      this->servo_6 = 0.0f;
      this->stepper = 0.0f;
    }
  }

  explicit PositionRoboticArm_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_1 = 0.0f;
      this->servo_2 = 0.0f;
      this->servo_3 = 0.0f;
      this->servo_4 = 0.0f;
      this->servo_5 = 0.0f;
      this->servo_6 = 0.0f;
      this->stepper = 0.0f;
    }
  }

  // field types and members
  using _servo_1_type =
    float;
  _servo_1_type servo_1;
  using _servo_2_type =
    float;
  _servo_2_type servo_2;
  using _servo_3_type =
    float;
  _servo_3_type servo_3;
  using _servo_4_type =
    float;
  _servo_4_type servo_4;
  using _servo_5_type =
    float;
  _servo_5_type servo_5;
  using _servo_6_type =
    float;
  _servo_6_type servo_6;
  using _stepper_type =
    float;
  _stepper_type stepper;

  // setters for named parameter idiom
  Type & set__servo_1(
    const float & _arg)
  {
    this->servo_1 = _arg;
    return *this;
  }
  Type & set__servo_2(
    const float & _arg)
  {
    this->servo_2 = _arg;
    return *this;
  }
  Type & set__servo_3(
    const float & _arg)
  {
    this->servo_3 = _arg;
    return *this;
  }
  Type & set__servo_4(
    const float & _arg)
  {
    this->servo_4 = _arg;
    return *this;
  }
  Type & set__servo_5(
    const float & _arg)
  {
    this->servo_5 = _arg;
    return *this;
  }
  Type & set__servo_6(
    const float & _arg)
  {
    this->servo_6 = _arg;
    return *this;
  }
  Type & set__stepper(
    const float & _arg)
  {
    this->stepper = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotic_arm_interfaces::msg::PositionRoboticArm_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotic_arm_interfaces::msg::PositionRoboticArm_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotic_arm_interfaces::msg::PositionRoboticArm_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotic_arm_interfaces::msg::PositionRoboticArm_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotic_arm_interfaces::msg::PositionRoboticArm_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotic_arm_interfaces::msg::PositionRoboticArm_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotic_arm_interfaces::msg::PositionRoboticArm_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotic_arm_interfaces::msg::PositionRoboticArm_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotic_arm_interfaces::msg::PositionRoboticArm_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotic_arm_interfaces::msg::PositionRoboticArm_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotic_arm_interfaces__msg__PositionRoboticArm
    std::shared_ptr<robotic_arm_interfaces::msg::PositionRoboticArm_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotic_arm_interfaces__msg__PositionRoboticArm
    std::shared_ptr<robotic_arm_interfaces::msg::PositionRoboticArm_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionRoboticArm_ & other) const
  {
    if (this->servo_1 != other.servo_1) {
      return false;
    }
    if (this->servo_2 != other.servo_2) {
      return false;
    }
    if (this->servo_3 != other.servo_3) {
      return false;
    }
    if (this->servo_4 != other.servo_4) {
      return false;
    }
    if (this->servo_5 != other.servo_5) {
      return false;
    }
    if (this->servo_6 != other.servo_6) {
      return false;
    }
    if (this->stepper != other.stepper) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionRoboticArm_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionRoboticArm_

// alias to use template instance with default allocator
using PositionRoboticArm =
  robotic_arm_interfaces::msg::PositionRoboticArm_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotic_arm_interfaces

#endif  // ROBOTIC_ARM_INTERFACES__MSG__DETAIL__POSITION_ROBOTIC_ARM__STRUCT_HPP_
