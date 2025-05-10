// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotic_arm_interfaces:msg/PositionRoboticArm.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_ARM_INTERFACES__MSG__DETAIL__POSITION_ROBOTIC_ARM__STRUCT_H_
#define ROBOTIC_ARM_INTERFACES__MSG__DETAIL__POSITION_ROBOTIC_ARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PositionRoboticArm in the package robotic_arm_interfaces.
typedef struct robotic_arm_interfaces__msg__PositionRoboticArm
{
  float servo_1;
  float servo_2;
  float servo_3;
  float servo_4;
  float servo_5;
  float servo_6;
  float stepper;
} robotic_arm_interfaces__msg__PositionRoboticArm;

// Struct for a sequence of robotic_arm_interfaces__msg__PositionRoboticArm.
typedef struct robotic_arm_interfaces__msg__PositionRoboticArm__Sequence
{
  robotic_arm_interfaces__msg__PositionRoboticArm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotic_arm_interfaces__msg__PositionRoboticArm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIC_ARM_INTERFACES__MSG__DETAIL__POSITION_ROBOTIC_ARM__STRUCT_H_
