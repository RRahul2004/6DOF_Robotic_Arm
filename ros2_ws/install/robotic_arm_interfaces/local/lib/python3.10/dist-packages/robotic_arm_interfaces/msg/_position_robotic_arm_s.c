// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robotic_arm_interfaces:msg/PositionRoboticArm.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robotic_arm_interfaces/msg/detail/position_robotic_arm__struct.h"
#include "robotic_arm_interfaces/msg/detail/position_robotic_arm__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robotic_arm_interfaces__msg__position_robotic_arm__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robotic_arm_interfaces.msg._position_robotic_arm.PositionRoboticArm", full_classname_dest, 67) == 0);
  }
  robotic_arm_interfaces__msg__PositionRoboticArm * ros_message = _ros_message;
  {  // servo_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->servo_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // servo_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->servo_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // servo_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->servo_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // servo_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->servo_4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // servo_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->servo_5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // servo_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->servo_6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stepper
    PyObject * field = PyObject_GetAttrString(_pymsg, "stepper");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stepper = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robotic_arm_interfaces__msg__position_robotic_arm__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PositionRoboticArm */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robotic_arm_interfaces.msg._position_robotic_arm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PositionRoboticArm");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robotic_arm_interfaces__msg__PositionRoboticArm * ros_message = (robotic_arm_interfaces__msg__PositionRoboticArm *)raw_ros_message;
  {  // servo_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->servo_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->servo_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->servo_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->servo_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->servo_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->servo_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stepper
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stepper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stepper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
