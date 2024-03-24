// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from steve_msgs:msg/MotorData.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__MOTOR_DATA__STRUCT_H_
#define STEVE_MSGS__MSG__DETAIL__MOTOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorData in the package steve_msgs.
/**
  * Movement
 */
typedef struct steve_msgs__msg__MotorData
{
  float fwd_cmd;
  float ang_cmd;
  /// Velocities
  float left_vel;
  float right_vel;
  float fwd_vel;
  float ang_vel;
} steve_msgs__msg__MotorData;

// Struct for a sequence of steve_msgs__msg__MotorData.
typedef struct steve_msgs__msg__MotorData__Sequence
{
  steve_msgs__msg__MotorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} steve_msgs__msg__MotorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STEVE_MSGS__MSG__DETAIL__MOTOR_DATA__STRUCT_H_
