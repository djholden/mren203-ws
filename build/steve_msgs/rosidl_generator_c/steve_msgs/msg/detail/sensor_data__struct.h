// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from steve_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
#define STEVE_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorData in the package steve_msgs.
/**
  *  Message for plotting live data
  * Header header
 */
typedef struct steve_msgs__msg__SensorData
{
  /// Hazards
  float temp;
  float h2;
  float co2;
  float tvok;
  /// Range Sensors
  float ir_left;
  float ir_right;
  float ir_center;
} steve_msgs__msg__SensorData;

// Struct for a sequence of steve_msgs__msg__SensorData.
typedef struct steve_msgs__msg__SensorData__Sequence
{
  steve_msgs__msg__SensorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} steve_msgs__msg__SensorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STEVE_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
