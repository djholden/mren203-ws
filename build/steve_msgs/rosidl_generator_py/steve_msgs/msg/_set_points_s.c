// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from steve_msgs:msg/SetPoints.idl
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
#include "steve_msgs/msg/detail/set_points__struct.h"
#include "steve_msgs/msg/detail/set_points__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool steve_msgs__msg__set_points__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("steve_msgs.msg._set_points.SetPoints", full_classname_dest, 36) == 0);
  }
  steve_msgs__msg__SetPoints * ros_message = _ros_message;
  {  // kp_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "kp_val");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kp_val = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ki_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "ki_val");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ki_val = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pwm_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_val");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pwm_val = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_val");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_val = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tvok_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "tvok_val");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tvok_val = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // co2_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "co2_val");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->co2_val = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // h2_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "h2_val");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->h2_val = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * steve_msgs__msg__set_points__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetPoints */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("steve_msgs.msg._set_points");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetPoints");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  steve_msgs__msg__SetPoints * ros_message = (steve_msgs__msg__SetPoints *)raw_ros_message;
  {  // kp_val
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kp_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kp_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ki_val
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ki_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ki_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwm_val
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pwm_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_val
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tvok_val
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tvok_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tvok_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // co2_val
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->co2_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "co2_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h2_val
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->h2_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h2_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
