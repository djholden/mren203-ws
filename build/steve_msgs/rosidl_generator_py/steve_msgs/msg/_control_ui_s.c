// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from steve_msgs:msg/ControlUI.idl
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
#include "steve_msgs/msg/detail/control_ui__struct.h"
#include "steve_msgs/msg/detail/control_ui__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool steve_msgs__msg__control_ui__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("steve_msgs.msg._control_ui.ControlUI", full_classname_dest, 36) == 0);
  }
  steve_msgs__msg__ControlUI * ros_message = _ros_message;
  {  // cmd_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cmd_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // auto_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // new_poi
    PyObject * field = PyObject_GetAttrString(_pymsg, "new_poi");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->new_poi = (Py_True == field);
    Py_DECREF(field);
  }
  {  // e_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "e_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->e_stop = (Py_True == field);
    Py_DECREF(field);
  }
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * steve_msgs__msg__control_ui__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlUI */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("steve_msgs.msg._control_ui");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlUI");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  steve_msgs__msg__ControlUI * ros_message = (steve_msgs__msg__ControlUI *)raw_ros_message;
  {  // cmd_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cmd_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // new_poi
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->new_poi ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "new_poi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // e_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->e_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "e_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
