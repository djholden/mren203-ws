// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from steve_msgs:msg/SetPoints.idl
// generated code does not contain a copyright notice
#include "steve_msgs/msg/detail/set_points__rosidl_typesupport_fastrtps_cpp.hpp"
#include "steve_msgs/msg/detail/set_points__struct.hpp"

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
  const steve_msgs::msg::SetPoints & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: kp_val
  cdr << ros_message.kp_val;
  // Member: ki_val
  cdr << ros_message.ki_val;
  // Member: pwm_val
  cdr << ros_message.pwm_val;
  // Member: temp_val
  cdr << ros_message.temp_val;
  // Member: tvok_val
  cdr << ros_message.tvok_val;
  // Member: co2_val
  cdr << ros_message.co2_val;
  // Member: h2_val
  cdr << ros_message.h2_val;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_steve_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  steve_msgs::msg::SetPoints & ros_message)
{
  // Member: kp_val
  cdr >> ros_message.kp_val;

  // Member: ki_val
  cdr >> ros_message.ki_val;

  // Member: pwm_val
  cdr >> ros_message.pwm_val;

  // Member: temp_val
  cdr >> ros_message.temp_val;

  // Member: tvok_val
  cdr >> ros_message.tvok_val;

  // Member: co2_val
  cdr >> ros_message.co2_val;

  // Member: h2_val
  cdr >> ros_message.h2_val;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_steve_msgs
get_serialized_size(
  const steve_msgs::msg::SetPoints & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: kp_val
  {
    size_t item_size = sizeof(ros_message.kp_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ki_val
  {
    size_t item_size = sizeof(ros_message.ki_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pwm_val
  {
    size_t item_size = sizeof(ros_message.pwm_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp_val
  {
    size_t item_size = sizeof(ros_message.temp_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tvok_val
  {
    size_t item_size = sizeof(ros_message.tvok_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: co2_val
  {
    size_t item_size = sizeof(ros_message.co2_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: h2_val
  {
    size_t item_size = sizeof(ros_message.h2_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_steve_msgs
max_serialized_size_SetPoints(
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


  // Member: kp_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ki_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pwm_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temp_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tvok_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: co2_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: h2_val
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
    using DataType = steve_msgs::msg::SetPoints;
    is_plain =
      (
      offsetof(DataType, h2_val) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetPoints__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const steve_msgs::msg::SetPoints *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetPoints__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<steve_msgs::msg::SetPoints *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetPoints__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const steve_msgs::msg::SetPoints *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetPoints__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetPoints(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetPoints__callbacks = {
  "steve_msgs::msg",
  "SetPoints",
  _SetPoints__cdr_serialize,
  _SetPoints__cdr_deserialize,
  _SetPoints__get_serialized_size,
  _SetPoints__max_serialized_size
};

static rosidl_message_type_support_t _SetPoints__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetPoints__callbacks,
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
get_message_type_support_handle<steve_msgs::msg::SetPoints>()
{
  return &steve_msgs::msg::typesupport_fastrtps_cpp::_SetPoints__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, steve_msgs, msg, SetPoints)() {
  return &steve_msgs::msg::typesupport_fastrtps_cpp::_SetPoints__handle;
}

#ifdef __cplusplus
}
#endif
