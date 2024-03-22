// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from steve_msgs:msg/SetPoints.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__SET_POINTS__STRUCT_H_
#define STEVE_MSGS__MSG__DETAIL__SET_POINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SetPoints in the package steve_msgs.
/**
  *  Message for setting tuning values
  * Header header
 */
typedef struct steve_msgs__msg__SetPoints
{
  /// PID
  float kp_val;
  float ki_val;
  float pwm_val;
  /// Hazards
  float temp_val;
  float tvok_val;
  float co2_val;
  float h2_val;
} steve_msgs__msg__SetPoints;

// Struct for a sequence of steve_msgs__msg__SetPoints.
typedef struct steve_msgs__msg__SetPoints__Sequence
{
  steve_msgs__msg__SetPoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} steve_msgs__msg__SetPoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STEVE_MSGS__MSG__DETAIL__SET_POINTS__STRUCT_H_
