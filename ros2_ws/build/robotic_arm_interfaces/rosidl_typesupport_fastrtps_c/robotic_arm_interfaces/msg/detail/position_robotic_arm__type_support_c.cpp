// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robotic_arm_interfaces:msg/PositionRoboticArm.idl
// generated code does not contain a copyright notice
#include "robotic_arm_interfaces/msg/detail/position_robotic_arm__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robotic_arm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robotic_arm_interfaces/msg/detail/position_robotic_arm__struct.h"
#include "robotic_arm_interfaces/msg/detail/position_robotic_arm__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PositionRoboticArm__ros_msg_type = robotic_arm_interfaces__msg__PositionRoboticArm;

static bool _PositionRoboticArm__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PositionRoboticArm__ros_msg_type * ros_message = static_cast<const _PositionRoboticArm__ros_msg_type *>(untyped_ros_message);
  // Field name: servo_1
  {
    cdr << ros_message->servo_1;
  }

  // Field name: servo_2
  {
    cdr << ros_message->servo_2;
  }

  // Field name: servo_3
  {
    cdr << ros_message->servo_3;
  }

  // Field name: servo_4
  {
    cdr << ros_message->servo_4;
  }

  // Field name: servo_5
  {
    cdr << ros_message->servo_5;
  }

  // Field name: servo_6
  {
    cdr << ros_message->servo_6;
  }

  // Field name: stepper
  {
    cdr << ros_message->stepper;
  }

  return true;
}

static bool _PositionRoboticArm__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PositionRoboticArm__ros_msg_type * ros_message = static_cast<_PositionRoboticArm__ros_msg_type *>(untyped_ros_message);
  // Field name: servo_1
  {
    cdr >> ros_message->servo_1;
  }

  // Field name: servo_2
  {
    cdr >> ros_message->servo_2;
  }

  // Field name: servo_3
  {
    cdr >> ros_message->servo_3;
  }

  // Field name: servo_4
  {
    cdr >> ros_message->servo_4;
  }

  // Field name: servo_5
  {
    cdr >> ros_message->servo_5;
  }

  // Field name: servo_6
  {
    cdr >> ros_message->servo_6;
  }

  // Field name: stepper
  {
    cdr >> ros_message->stepper;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotic_arm_interfaces
size_t get_serialized_size_robotic_arm_interfaces__msg__PositionRoboticArm(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PositionRoboticArm__ros_msg_type * ros_message = static_cast<const _PositionRoboticArm__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name servo_1
  {
    size_t item_size = sizeof(ros_message->servo_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servo_2
  {
    size_t item_size = sizeof(ros_message->servo_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servo_3
  {
    size_t item_size = sizeof(ros_message->servo_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servo_4
  {
    size_t item_size = sizeof(ros_message->servo_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servo_5
  {
    size_t item_size = sizeof(ros_message->servo_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servo_6
  {
    size_t item_size = sizeof(ros_message->servo_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stepper
  {
    size_t item_size = sizeof(ros_message->stepper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PositionRoboticArm__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robotic_arm_interfaces__msg__PositionRoboticArm(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotic_arm_interfaces
size_t max_serialized_size_robotic_arm_interfaces__msg__PositionRoboticArm(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: servo_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: servo_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: servo_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: servo_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: servo_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: servo_6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stepper
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robotic_arm_interfaces__msg__PositionRoboticArm;
    is_plain =
      (
      offsetof(DataType, stepper) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PositionRoboticArm__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robotic_arm_interfaces__msg__PositionRoboticArm(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PositionRoboticArm = {
  "robotic_arm_interfaces::msg",
  "PositionRoboticArm",
  _PositionRoboticArm__cdr_serialize,
  _PositionRoboticArm__cdr_deserialize,
  _PositionRoboticArm__get_serialized_size,
  _PositionRoboticArm__max_serialized_size
};

static rosidl_message_type_support_t _PositionRoboticArm__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PositionRoboticArm,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotic_arm_interfaces, msg, PositionRoboticArm)() {
  return &_PositionRoboticArm__type_support;
}

#if defined(__cplusplus)
}
#endif
