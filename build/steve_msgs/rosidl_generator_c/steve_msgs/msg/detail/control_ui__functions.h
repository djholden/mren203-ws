// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from steve_msgs:msg/ControlUI.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__CONTROL_UI__FUNCTIONS_H_
#define STEVE_MSGS__MSG__DETAIL__CONTROL_UI__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "steve_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "steve_msgs/msg/detail/control_ui__struct.h"

/// Initialize msg/ControlUI message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * steve_msgs__msg__ControlUI
 * )) before or use
 * steve_msgs__msg__ControlUI__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_steve_msgs
bool
steve_msgs__msg__ControlUI__init(steve_msgs__msg__ControlUI * msg);

/// Finalize msg/ControlUI message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_steve_msgs
void
steve_msgs__msg__ControlUI__fini(steve_msgs__msg__ControlUI * msg);

/// Create msg/ControlUI message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * steve_msgs__msg__ControlUI__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_steve_msgs
steve_msgs__msg__ControlUI *
steve_msgs__msg__ControlUI__create();

/// Destroy msg/ControlUI message.
/**
 * It calls
 * steve_msgs__msg__ControlUI__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_steve_msgs
void
steve_msgs__msg__ControlUI__destroy(steve_msgs__msg__ControlUI * msg);

/// Check for msg/ControlUI message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_steve_msgs
bool
steve_msgs__msg__ControlUI__are_equal(const steve_msgs__msg__ControlUI * lhs, const steve_msgs__msg__ControlUI * rhs);

/// Copy a msg/ControlUI message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_steve_msgs
bool
steve_msgs__msg__ControlUI__copy(
  const steve_msgs__msg__ControlUI * input,
  steve_msgs__msg__ControlUI * output);

/// Initialize array of msg/ControlUI messages.
/**
 * It allocates the memory for the number of elements and calls
 * steve_msgs__msg__ControlUI__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_steve_msgs
bool
steve_msgs__msg__ControlUI__Sequence__init(steve_msgs__msg__ControlUI__Sequence * array, size_t size);

/// Finalize array of msg/ControlUI messages.
/**
 * It calls
 * steve_msgs__msg__ControlUI__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_steve_msgs
void
steve_msgs__msg__ControlUI__Sequence__fini(steve_msgs__msg__ControlUI__Sequence * array);

/// Create array of msg/ControlUI messages.
/**
 * It allocates the memory for the array and calls
 * steve_msgs__msg__ControlUI__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_steve_msgs
steve_msgs__msg__ControlUI__Sequence *
steve_msgs__msg__ControlUI__Sequence__create(size_t size);

/// Destroy array of msg/ControlUI messages.
/**
 * It calls
 * steve_msgs__msg__ControlUI__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_steve_msgs
void
steve_msgs__msg__ControlUI__Sequence__destroy(steve_msgs__msg__ControlUI__Sequence * array);

/// Check for msg/ControlUI message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_steve_msgs
bool
steve_msgs__msg__ControlUI__Sequence__are_equal(const steve_msgs__msg__ControlUI__Sequence * lhs, const steve_msgs__msg__ControlUI__Sequence * rhs);

/// Copy an array of msg/ControlUI messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_steve_msgs
bool
steve_msgs__msg__ControlUI__Sequence__copy(
  const steve_msgs__msg__ControlUI__Sequence * input,
  steve_msgs__msg__ControlUI__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STEVE_MSGS__MSG__DETAIL__CONTROL_UI__FUNCTIONS_H_
