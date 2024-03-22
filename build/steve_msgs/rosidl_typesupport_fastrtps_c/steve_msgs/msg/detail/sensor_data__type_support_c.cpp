// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from steve_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice
#include "steve_msgs/msg/detail/sensor_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "steve_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "steve_msgs/msg/detail/sensor_data__struct.h"
#include "steve_msgs/msg/detail/sensor_data__functions.h"
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


using _SensorData__ros_msg_type = steve_msgs__msg__SensorData;

static bool _SensorData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorData__ros_msg_type * ros_message = static_cast<const _SensorData__ros_msg_type *>(untyped_ros_message);
  // Field name: temp
  {
    cdr << ros_message->temp;
  }

  // Field name: h2
  {
    cdr << ros_message->h2;
  }

  // Field name: co2
  {
    cdr << ros_message->co2;
  }

  // Field name: tvok
  {
    cdr << ros_message->tvok;
  }

  // Field name: ir_left
  {
    cdr << ros_message->ir_left;
  }

  // Field name: ir_right
  {
    cdr << ros_message->ir_right;
  }

  // Field name: ir_center
  {
    cdr << ros_message->ir_center;
  }

  // Field name: left_vel
  {
    cdr << ros_message->left_vel;
  }

  // Field name: right_vel
  {
    cdr << ros_message->right_vel;
  }

  // Field name: avg_vel
  {
    cdr << ros_message->avg_vel;
  }

  // Field name: fwd_vel
  {
    cdr << ros_message->fwd_vel;
  }

  // Field name: ang_vel
  {
    cdr << ros_message->ang_vel;
  }

  return true;
}

static bool _SensorData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorData__ros_msg_type * ros_message = static_cast<_SensorData__ros_msg_type *>(untyped_ros_message);
  // Field name: temp
  {
    cdr >> ros_message->temp;
  }

  // Field name: h2
  {
    cdr >> ros_message->h2;
  }

  // Field name: co2
  {
    cdr >> ros_message->co2;
  }

  // Field name: tvok
  {
    cdr >> ros_message->tvok;
  }

  // Field name: ir_left
  {
    cdr >> ros_message->ir_left;
  }

  // Field name: ir_right
  {
    cdr >> ros_message->ir_right;
  }

  // Field name: ir_center
  {
    cdr >> ros_message->ir_center;
  }

  // Field name: left_vel
  {
    cdr >> ros_message->left_vel;
  }

  // Field name: right_vel
  {
    cdr >> ros_message->right_vel;
  }

  // Field name: avg_vel
  {
    cdr >> ros_message->avg_vel;
  }

  // Field name: fwd_vel
  {
    cdr >> ros_message->fwd_vel;
  }

  // Field name: ang_vel
  {
    cdr >> ros_message->ang_vel;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_steve_msgs
size_t get_serialized_size_steve_msgs__msg__SensorData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorData__ros_msg_type * ros_message = static_cast<const _SensorData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name temp
  {
    size_t item_size = sizeof(ros_message->temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name h2
  {
    size_t item_size = sizeof(ros_message->h2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name co2
  {
    size_t item_size = sizeof(ros_message->co2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tvok
  {
    size_t item_size = sizeof(ros_message->tvok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ir_left
  {
    size_t item_size = sizeof(ros_message->ir_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ir_right
  {
    size_t item_size = sizeof(ros_message->ir_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ir_center
  {
    size_t item_size = sizeof(ros_message->ir_center);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_vel
  {
    size_t item_size = sizeof(ros_message->left_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_vel
  {
    size_t item_size = sizeof(ros_message->right_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name avg_vel
  {
    size_t item_size = sizeof(ros_message->avg_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fwd_vel
  {
    size_t item_size = sizeof(ros_message->fwd_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ang_vel
  {
    size_t item_size = sizeof(ros_message->ang_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SensorData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_steve_msgs__msg__SensorData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_steve_msgs
size_t max_serialized_size_steve_msgs__msg__SensorData(
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

  // member: temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: h2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: co2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tvok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ir_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ir_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ir_center
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: avg_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fwd_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ang_vel
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
    using DataType = steve_msgs__msg__SensorData;
    is_plain =
      (
      offsetof(DataType, ang_vel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SensorData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_steve_msgs__msg__SensorData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorData = {
  "steve_msgs::msg",
  "SensorData",
  _SensorData__cdr_serialize,
  _SensorData__cdr_deserialize,
  _SensorData__get_serialized_size,
  _SensorData__max_serialized_size
};

static rosidl_message_type_support_t _SensorData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, steve_msgs, msg, SensorData)() {
  return &_SensorData__type_support;
}

#if defined(__cplusplus)
}
#endif
