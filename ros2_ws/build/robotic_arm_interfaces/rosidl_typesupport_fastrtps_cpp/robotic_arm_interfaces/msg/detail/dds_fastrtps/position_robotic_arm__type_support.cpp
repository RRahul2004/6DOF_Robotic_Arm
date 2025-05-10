// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robotic_arm_interfaces:msg/PositionRoboticArm.idl
// generated code does not contain a copyright notice
#include "robotic_arm_interfaces/msg/detail/position_robotic_arm__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robotic_arm_interfaces/msg/detail/position_robotic_arm__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robotic_arm_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotic_arm_interfaces
cdr_serialize(
  const robotic_arm_interfaces::msg::PositionRoboticArm & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: servo_1
  cdr << ros_message.servo_1;
  // Member: servo_2
  cdr << ros_message.servo_2;
  // Member: servo_3
  cdr << ros_message.servo_3;
  // Member: servo_4
  cdr << ros_message.servo_4;
  // Member: servo_5
  cdr << ros_message.servo_5;
  // Member: servo_6
  cdr << ros_message.servo_6;
  // Member: stepper
  cdr << ros_message.stepper;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotic_arm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robotic_arm_interfaces::msg::PositionRoboticArm & ros_message)
{
  // Member: servo_1
  cdr >> ros_message.servo_1;

  // Member: servo_2
  cdr >> ros_message.servo_2;

  // Member: servo_3
  cdr >> ros_message.servo_3;

  // Member: servo_4
  cdr >> ros_message.servo_4;

  // Member: servo_5
  cdr >> ros_message.servo_5;

  // Member: servo_6
  cdr >> ros_message.servo_6;

  // Member: stepper
  cdr >> ros_message.stepper;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotic_arm_interfaces
get_serialized_size(
  const robotic_arm_interfaces::msg::PositionRoboticArm & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: servo_1
  {
    size_t item_size = sizeof(ros_message.servo_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servo_2
  {
    size_t item_size = sizeof(ros_message.servo_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servo_3
  {
    size_t item_size = sizeof(ros_message.servo_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servo_4
  {
    size_t item_size = sizeof(ros_message.servo_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servo_5
  {
    size_t item_size = sizeof(ros_message.servo_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servo_6
  {
    size_t item_size = sizeof(ros_message.servo_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stepper
  {
    size_t item_size = sizeof(ros_message.stepper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotic_arm_interfaces
max_serialized_size_PositionRoboticArm(
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


  // Member: servo_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: servo_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: servo_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: servo_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: servo_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: servo_6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stepper
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
    using DataType = robotic_arm_interfaces::msg::PositionRoboticArm;
    is_plain =
      (
      offsetof(DataType, stepper) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PositionRoboticArm__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robotic_arm_interfaces::msg::PositionRoboticArm *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PositionRoboticArm__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robotic_arm_interfaces::msg::PositionRoboticArm *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PositionRoboticArm__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robotic_arm_interfaces::msg::PositionRoboticArm *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PositionRoboticArm__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PositionRoboticArm(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PositionRoboticArm__callbacks = {
  "robotic_arm_interfaces::msg",
  "PositionRoboticArm",
  _PositionRoboticArm__cdr_serialize,
  _PositionRoboticArm__cdr_deserialize,
  _PositionRoboticArm__get_serialized_size,
  _PositionRoboticArm__max_serialized_size
};

static rosidl_message_type_support_t _PositionRoboticArm__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PositionRoboticArm__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robotic_arm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robotic_arm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robotic_arm_interfaces::msg::PositionRoboticArm>()
{
  return &robotic_arm_interfaces::msg::typesupport_fastrtps_cpp::_PositionRoboticArm__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robotic_arm_interfaces, msg, PositionRoboticArm)() {
  return &robotic_arm_interfaces::msg::typesupport_fastrtps_cpp::_PositionRoboticArm__handle;
}

#ifdef __cplusplus
}
#endif
