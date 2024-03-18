// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from steve_msgs:msg/ControlUI.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__CONTROL_UI__STRUCT_H_
#define STEVE_MSGS__MSG__DETAIL__CONTROL_UI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ControlUI in the package steve_msgs.
/**
  *  Message for sending input from UI
  * Header header
 */
typedef struct steve_msgs__msg__ControlUI
{
  /// Buttons
  bool cmd_mode;
  bool auto_mode;
  bool new_poi;
  bool e_stop;
  /// Movement
  float fwd_cmd;
  float ang_cmd;
} steve_msgs__msg__ControlUI;

// Struct for a sequence of steve_msgs__msg__ControlUI.
typedef struct steve_msgs__msg__ControlUI__Sequence
{
  steve_msgs__msg__ControlUI * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} steve_msgs__msg__ControlUI__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STEVE_MSGS__MSG__DETAIL__CONTROL_UI__STRUCT_H_
