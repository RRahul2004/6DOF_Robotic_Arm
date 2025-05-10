// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotic_arm_interfaces:msg/PositionRoboticArm.idl
// generated code does not contain a copyright notice
#include "robotic_arm_interfaces/msg/detail/position_robotic_arm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robotic_arm_interfaces__msg__PositionRoboticArm__init(robotic_arm_interfaces__msg__PositionRoboticArm * msg)
{
  if (!msg) {
    return false;
  }
  // servo_1
  // servo_2
  // servo_3
  // servo_4
  // servo_5
  // servo_6
  // stepper
  return true;
}

void
robotic_arm_interfaces__msg__PositionRoboticArm__fini(robotic_arm_interfaces__msg__PositionRoboticArm * msg)
{
  if (!msg) {
    return;
  }
  // servo_1
  // servo_2
  // servo_3
  // servo_4
  // servo_5
  // servo_6
  // stepper
}

bool
robotic_arm_interfaces__msg__PositionRoboticArm__are_equal(const robotic_arm_interfaces__msg__PositionRoboticArm * lhs, const robotic_arm_interfaces__msg__PositionRoboticArm * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // servo_1
  if (lhs->servo_1 != rhs->servo_1) {
    return false;
  }
  // servo_2
  if (lhs->servo_2 != rhs->servo_2) {
    return false;
  }
  // servo_3
  if (lhs->servo_3 != rhs->servo_3) {
    return false;
  }
  // servo_4
  if (lhs->servo_4 != rhs->servo_4) {
    return false;
  }
  // servo_5
  if (lhs->servo_5 != rhs->servo_5) {
    return false;
  }
  // servo_6
  if (lhs->servo_6 != rhs->servo_6) {
    return false;
  }
  // stepper
  if (lhs->stepper != rhs->stepper) {
    return false;
  }
  return true;
}

bool
robotic_arm_interfaces__msg__PositionRoboticArm__copy(
  const robotic_arm_interfaces__msg__PositionRoboticArm * input,
  robotic_arm_interfaces__msg__PositionRoboticArm * output)
{
  if (!input || !output) {
    return false;
  }
  // servo_1
  output->servo_1 = input->servo_1;
  // servo_2
  output->servo_2 = input->servo_2;
  // servo_3
  output->servo_3 = input->servo_3;
  // servo_4
  output->servo_4 = input->servo_4;
  // servo_5
  output->servo_5 = input->servo_5;
  // servo_6
  output->servo_6 = input->servo_6;
  // stepper
  output->stepper = input->stepper;
  return true;
}

robotic_arm_interfaces__msg__PositionRoboticArm *
robotic_arm_interfaces__msg__PositionRoboticArm__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotic_arm_interfaces__msg__PositionRoboticArm * msg = (robotic_arm_interfaces__msg__PositionRoboticArm *)allocator.allocate(sizeof(robotic_arm_interfaces__msg__PositionRoboticArm), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotic_arm_interfaces__msg__PositionRoboticArm));
  bool success = robotic_arm_interfaces__msg__PositionRoboticArm__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotic_arm_interfaces__msg__PositionRoboticArm__destroy(robotic_arm_interfaces__msg__PositionRoboticArm * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotic_arm_interfaces__msg__PositionRoboticArm__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotic_arm_interfaces__msg__PositionRoboticArm__Sequence__init(robotic_arm_interfaces__msg__PositionRoboticArm__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotic_arm_interfaces__msg__PositionRoboticArm * data = NULL;

  if (size) {
    data = (robotic_arm_interfaces__msg__PositionRoboticArm *)allocator.zero_allocate(size, sizeof(robotic_arm_interfaces__msg__PositionRoboticArm), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotic_arm_interfaces__msg__PositionRoboticArm__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotic_arm_interfaces__msg__PositionRoboticArm__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotic_arm_interfaces__msg__PositionRoboticArm__Sequence__fini(robotic_arm_interfaces__msg__PositionRoboticArm__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotic_arm_interfaces__msg__PositionRoboticArm__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotic_arm_interfaces__msg__PositionRoboticArm__Sequence *
robotic_arm_interfaces__msg__PositionRoboticArm__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotic_arm_interfaces__msg__PositionRoboticArm__Sequence * array = (robotic_arm_interfaces__msg__PositionRoboticArm__Sequence *)allocator.allocate(sizeof(robotic_arm_interfaces__msg__PositionRoboticArm__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotic_arm_interfaces__msg__PositionRoboticArm__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotic_arm_interfaces__msg__PositionRoboticArm__Sequence__destroy(robotic_arm_interfaces__msg__PositionRoboticArm__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotic_arm_interfaces__msg__PositionRoboticArm__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotic_arm_interfaces__msg__PositionRoboticArm__Sequence__are_equal(const robotic_arm_interfaces__msg__PositionRoboticArm__Sequence * lhs, const robotic_arm_interfaces__msg__PositionRoboticArm__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotic_arm_interfaces__msg__PositionRoboticArm__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotic_arm_interfaces__msg__PositionRoboticArm__Sequence__copy(
  const robotic_arm_interfaces__msg__PositionRoboticArm__Sequence * input,
  robotic_arm_interfaces__msg__PositionRoboticArm__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotic_arm_interfaces__msg__PositionRoboticArm);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotic_arm_interfaces__msg__PositionRoboticArm * data =
      (robotic_arm_interfaces__msg__PositionRoboticArm *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotic_arm_interfaces__msg__PositionRoboticArm__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotic_arm_interfaces__msg__PositionRoboticArm__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotic_arm_interfaces__msg__PositionRoboticArm__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
