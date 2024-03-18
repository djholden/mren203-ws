// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from steve_msgs:msg/SetPoints.idl
// generated code does not contain a copyright notice
#include "steve_msgs/msg/detail/set_points__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "steve_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "steve_msgs/msg/detail/set_points__struct.h"
#include "steve_msgs/msg/detail/set_points__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetPoints__ros_msg_type = steve_msgs__msg__SetPoints;

static bool _SetPoints__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPoints__ros_msg_type * ros_message = static_cast<const _SetPoints__ros_msg_type *>(untyped_ros_message);
  // Field name: kp_val
  {
    cdr << ros_message->kp_val;
  }

  // Field name: ki_val
  {
    cdr << ros_message->ki_val;
  }

  // Field name: pwm_val
  {
    cdr << ros_message->pwm_val;
  }

  // Field name: temp_val
  {
    cdr << ros_message->temp_val;
  }

  // Field name: tvok_val
  {
    cdr << ros_message->tvok_val;
  }

  // Field name: co2_val
  {
    cdr << ros_message->co2_val;
  }

  // Field name: h2_val
  {
    cdr << ros_message->h2_val;
  }

  return true;
}

static bool _SetPoints__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPoints__ros_msg_type * ros_message = static_cast<_SetPoints__ros_msg_type *>(untyped_ros_message);
  // Field name: kp_val
  {
    cdr >> ros_message->kp_val;
  }

  // Field name: ki_val
  {
    cdr >> ros_message->ki_val;
  }

  // Field name: pwm_val
  {
    cdr >> ros_message->pwm_val;
  }

  // Field name: temp_val
  {
    cdr >> ros_message->temp_val;
  }

  // Field name: tvok_val
  {
    cdr >> ros_message->tvok_val;
  }

  // Field name: co2_val
  {
    cdr >> ros_message->co2_val;
  }

  // Field name: h2_val
  {
    cdr >> ros_message->h2_val;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_steve_msgs
size_t get_serialized_size_steve_msgs__msg__SetPoints(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPoints__ros_msg_type * ros_message = static_cast<const _SetPoints__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name kp_val
  {
    size_t item_size = sizeof(ros_message->kp_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ki_val
  {
    size_t item_size = sizeof(ros_message->ki_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pwm_val
  {
    size_t item_size = sizeof(ros_message->pwm_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp_val
  {
    size_t item_size = sizeof(ros_message->temp_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tvok_val
  {
    size_t item_size = sizeof(ros_message->tvok_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name co2_val
  {
    size_t item_size = sizeof(ros_message->co2_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name h2_val
  {
    size_t item_size = sizeof(ros_message->h2_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetPoints__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_steve_msgs__msg__SetPoints(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_steve_msgs
size_t max_serialized_size_steve_msgs__msg__SetPoints(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: kp_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ki_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pwm_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temp_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tvok_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: co2_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: h2_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = steve_msgs__msg__SetPoints;
    is_plain =
      (
      offsetof(DataType, h2_val) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetPoints__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_steve_msgs__msg__SetPoints(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetPoints = {
  "steve_msgs::msg",
  "SetPoints",
  _SetPoints__cdr_serialize,
  _SetPoints__cdr_deserialize,
  _SetPoints__get_serialized_size,
  _SetPoints__max_serialized_size
};

static rosidl_message_type_support_t _SetPoints__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPoints,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, steve_msgs, msg, SetPoints)() {
  return &_SetPoints__type_support;
}

#if defined(__cplusplus)
}
#endif
