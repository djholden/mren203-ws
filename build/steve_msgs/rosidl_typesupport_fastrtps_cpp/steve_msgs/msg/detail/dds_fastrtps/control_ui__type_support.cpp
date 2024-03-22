// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from steve_msgs:msg/ControlUI.idl
// generated code does not contain a copyright notice
#include "steve_msgs/msg/detail/control_ui__rosidl_typesupport_fastrtps_cpp.hpp"
#include "steve_msgs/msg/detail/control_ui__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace steve_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_steve_msgs
cdr_serialize(
  const steve_msgs::msg::ControlUI & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cmd_mode
  cdr << (ros_message.cmd_mode ? true : false);
  // Member: auto_mode
  cdr << (ros_message.auto_mode ? true : false);
  // Member: new_poi
  cdr << (ros_message.new_poi ? true : false);
  // Member: e_stop
  cdr << (ros_message.e_stop ? true : false);
  // Member: fwd_cmd
  cdr << ros_message.fwd_cmd;
  // Member: ang_cmd
  cdr << ros_message.ang_cmd;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_steve_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  steve_msgs::msg::ControlUI & ros_message)
{
  // Member: cmd_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cmd_mode = tmp ? true : false;
  }

  // Member: auto_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.auto_mode = tmp ? true : false;
  }

  // Member: new_poi
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.new_poi = tmp ? true : false;
  }

  // Member: e_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.e_stop = tmp ? true : false;
  }

  // Member: fwd_cmd
  cdr >> ros_message.fwd_cmd;

  // Member: ang_cmd
  cdr >> ros_message.ang_cmd;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_steve_msgs
get_serialized_size(
  const steve_msgs::msg::ControlUI & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cmd_mode
  {
    size_t item_size = sizeof(ros_message.cmd_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_mode
  {
    size_t item_size = sizeof(ros_message.auto_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: new_poi
  {
    size_t item_size = sizeof(ros_message.new_poi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: e_stop
  {
    size_t item_size = sizeof(ros_message.e_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fwd_cmd
  {
    size_t item_size = sizeof(ros_message.fwd_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ang_cmd
  {
    size_t item_size = sizeof(ros_message.ang_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_steve_msgs
max_serialized_size_ControlUI(
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


  // Member: cmd_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: auto_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: new_poi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: e_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fwd_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ang_cmd
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
    using DataType = steve_msgs::msg::ControlUI;
    is_plain =
      (
      offsetof(DataType, ang_cmd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ControlUI__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const steve_msgs::msg::ControlUI *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControlUI__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<steve_msgs::msg::ControlUI *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControlUI__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const steve_msgs::msg::ControlUI *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControlUI__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ControlUI(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ControlUI__callbacks = {
  "steve_msgs::msg",
  "ControlUI",
  _ControlUI__cdr_serialize,
  _ControlUI__cdr_deserialize,
  _ControlUI__get_serialized_size,
  _ControlUI__max_serialized_size
};

static rosidl_message_type_support_t _ControlUI__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControlUI__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace steve_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_steve_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<steve_msgs::msg::ControlUI>()
{
  return &steve_msgs::msg::typesupport_fastrtps_cpp::_ControlUI__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, steve_msgs, msg, ControlUI)() {
  return &steve_msgs::msg::typesupport_fastrtps_cpp::_ControlUI__handle;
}

#ifdef __cplusplus
}
#endif
