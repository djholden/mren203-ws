// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from steve_msgs:msg/MotorData.idl
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
#include "steve_msgs/msg/detail/motor_data__struct.h"
#include "steve_msgs/msg/detail/motor_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool steve_msgs__msg__motor_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("steve_msgs.msg._motor_data.MotorData", full_classname_dest, 36) == 0);
  }
  steve_msgs__msg__MotorData * ros_message = _ros_message;
  {  // fwd_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "fwd_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fwd_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ang_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "ang_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ang_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_vel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_vel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fwd_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "fwd_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fwd_vel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ang_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "ang_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ang_vel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * steve_msgs__msg__motor_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("steve_msgs.msg._motor_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  steve_msgs__msg__MotorData * ros_message = (steve_msgs__msg__MotorData *)raw_ros_message;
  {  // fwd_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fwd_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fwd_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ang_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ang_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ang_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fwd_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fwd_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fwd_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ang_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ang_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ang_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
