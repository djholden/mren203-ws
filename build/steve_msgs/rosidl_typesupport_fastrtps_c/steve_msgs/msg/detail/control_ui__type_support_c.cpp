// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from steve_msgs:msg/ControlUI.idl
// generated code does not contain a copyright notice
#include "steve_msgs/msg/detail/control_ui__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "steve_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "steve_msgs/msg/detail/control_ui__struct.h"
#include "steve_msgs/msg/detail/control_ui__functions.h"
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


using _ControlUI__ros_msg_type = steve_msgs__msg__ControlUI;

static bool _ControlUI__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlUI__ros_msg_type * ros_message = static_cast<const _ControlUI__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_mode
  {
    cdr << (ros_message->cmd_mode ? true : false);
  }

  // Field name: auto_mode
  {
    cdr << (ros_message->auto_mode ? true : false);
  }

  // Field name: new_poi
  {
    cdr << (ros_message->new_poi ? true : false);
  }

  // Field name: e_stop
  {
    cdr << (ros_message->e_stop ? true : false);
  }

  // Field name: fwd_cmd
  {
    cdr << ros_message->fwd_cmd;
  }

  // Field name: ang_cmd
  {
    cdr << ros_message->ang_cmd;
  }

  return true;
}

static bool _ControlUI__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlUI__ros_msg_type * ros_message = static_cast<_ControlUI__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cmd_mode = tmp ? true : false;
  }

  // Field name: auto_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_mode = tmp ? true : false;
  }

  // Field name: new_poi
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->new_poi = tmp ? true : false;
  }

  // Field name: e_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->e_stop = tmp ? true : false;
  }

  // Field name: fwd_cmd
  {
    cdr >> ros_message->fwd_cmd;
  }

  // Field name: ang_cmd
  {
    cdr >> ros_message->ang_cmd;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_steve_msgs
size_t get_serialized_size_steve_msgs__msg__ControlUI(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlUI__ros_msg_type * ros_message = static_cast<const _ControlUI__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cmd_mode
  {
    size_t item_size = sizeof(ros_message->cmd_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_mode
  {
    size_t item_size = sizeof(ros_message->auto_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name new_poi
  {
    size_t item_size = sizeof(ros_message->new_poi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name e_stop
  {
    size_t item_size = sizeof(ros_message->e_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fwd_cmd
  {
    size_t item_size = sizeof(ros_message->fwd_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ang_cmd
  {
    size_t item_size = sizeof(ros_message->ang_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControlUI__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_steve_msgs__msg__ControlUI(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_steve_msgs
size_t max_serialized_size_steve_msgs__msg__ControlUI(
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

  // member: cmd_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: new_poi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: e_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fwd_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ang_cmd
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
    using DataType = steve_msgs__msg__ControlUI;
    is_plain =
      (
      offsetof(DataType, ang_cmd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ControlUI__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_steve_msgs__msg__ControlUI(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControlUI = {
  "steve_msgs::msg",
  "ControlUI",
  _ControlUI__cdr_serialize,
  _ControlUI__cdr_deserialize,
  _ControlUI__get_serialized_size,
  _ControlUI__max_serialized_size
};

static rosidl_message_type_support_t _ControlUI__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlUI,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, steve_msgs, msg, ControlUI)() {
  return &_ControlUI__type_support;
}

#if defined(__cplusplus)
}
#endif
