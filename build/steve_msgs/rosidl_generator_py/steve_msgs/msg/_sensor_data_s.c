// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from steve_msgs:msg/SensorData.idl
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
#include "steve_msgs/msg/detail/sensor_data__struct.h"
#include "steve_msgs/msg/detail/sensor_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool steve_msgs__msg__sensor_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("steve_msgs.msg._sensor_data.SensorData", full_classname_dest, 38) == 0);
  }
  steve_msgs__msg__SensorData * ros_message = _ros_message;
  {  // temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // h2
    PyObject * field = PyObject_GetAttrString(_pymsg, "h2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->h2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // co2
    PyObject * field = PyObject_GetAttrString(_pymsg, "co2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->co2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tvok
    PyObject * field = PyObject_GetAttrString(_pymsg, "tvok");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tvok = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ir_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "ir_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ir_left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ir_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "ir_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ir_right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ir_center
    PyObject * field = PyObject_GetAttrString(_pymsg, "ir_center");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ir_center = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * steve_msgs__msg__sensor_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("steve_msgs.msg._sensor_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  steve_msgs__msg__SensorData * ros_message = (steve_msgs__msg__SensorData *)raw_ros_message;
  {  // temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->h2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // co2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->co2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "co2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tvok
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tvok);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tvok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ir_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ir_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ir_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ir_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ir_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ir_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ir_center
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ir_center);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ir_center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
