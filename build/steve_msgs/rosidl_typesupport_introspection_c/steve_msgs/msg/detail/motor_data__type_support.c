// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from steve_msgs:msg/MotorData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "steve_msgs/msg/detail/motor_data__rosidl_typesupport_introspection_c.h"
#include "steve_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "steve_msgs/msg/detail/motor_data__functions.h"
#include "steve_msgs/msg/detail/motor_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void steve_msgs__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  steve_msgs__msg__MotorData__init(message_memory);
}

void steve_msgs__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_fini_function(void * message_memory)
{
  steve_msgs__msg__MotorData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember steve_msgs__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_member_array[6] = {
  {
    "fwd_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(steve_msgs__msg__MotorData, fwd_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ang_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(steve_msgs__msg__MotorData, ang_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(steve_msgs__msg__MotorData, left_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(steve_msgs__msg__MotorData, right_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fwd_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(steve_msgs__msg__MotorData, fwd_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ang_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(steve_msgs__msg__MotorData, ang_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers steve_msgs__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_members = {
  "steve_msgs__msg",  // message namespace
  "MotorData",  // message name
  6,  // number of fields
  sizeof(steve_msgs__msg__MotorData),
  steve_msgs__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_member_array,  // message members
  steve_msgs__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_init_function,  // function to initialize message memory (memory has to be allocated)
  steve_msgs__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t steve_msgs__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_type_support_handle = {
  0,
  &steve_msgs__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_steve_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, steve_msgs, msg, MotorData)() {
  if (!steve_msgs__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_type_support_handle.typesupport_identifier) {
    steve_msgs__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &steve_msgs__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
