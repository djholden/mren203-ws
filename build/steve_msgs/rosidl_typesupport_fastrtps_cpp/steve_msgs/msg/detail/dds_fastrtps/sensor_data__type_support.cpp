// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from steve_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice
#include "steve_msgs/msg/detail/sensor_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "steve_msgs/msg/detail/sensor_data__struct.hpp"

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
  const steve_msgs::msg::SensorData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: temp
  cdr << ros_message.temp;
  // Member: h2
  cdr << ros_message.h2;
  // Member: co2
  cdr << ros_message.co2;
  // Member: tvok
  cdr << ros_message.tvok;
  // Member: ir_left
  cdr << ros_message.ir_left;
  // Member: ir_right
  cdr << ros_message.ir_right;
  // Member: ir_center
  cdr << ros_message.ir_center;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_steve_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  steve_msgs::msg::SensorData & ros_message)
{
  // Member: temp
  cdr >> ros_message.temp;

  // Member: h2
  cdr >> ros_message.h2;

  // Member: co2
  cdr >> ros_message.co2;

  // Member: tvok
  cdr >> ros_message.tvok;

  // Member: ir_left
  cdr >> ros_message.ir_left;

  // Member: ir_right
  cdr >> ros_message.ir_right;

  // Member: ir_center
  cdr >> ros_message.ir_center;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_steve_msgs
get_serialized_size(
  const steve_msgs::msg::SensorData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: temp
  {
    size_t item_size = sizeof(ros_message.temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: h2
  {
    size_t item_size = sizeof(ros_message.h2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: co2
  {
    size_t item_size = sizeof(ros_message.co2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tvok
  {
    size_t item_size = sizeof(ros_message.tvok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ir_left
  {
    size_t item_size = sizeof(ros_message.ir_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ir_right
  {
    size_t item_size = sizeof(ros_message.ir_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ir_center
  {
    size_t item_size = sizeof(ros_message.ir_center);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_steve_msgs
max_serialized_size_SensorData(
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


  // Member: temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: h2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: co2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tvok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ir_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ir_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ir_center
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
    using DataType = steve_msgs::msg::SensorData;
    is_plain =
      (
      offsetof(DataType, ir_center) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SensorData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const steve_msgs::msg::SensorData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<steve_msgs::msg::SensorData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const steve_msgs::msg::SensorData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SensorData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SensorData__callbacks = {
  "steve_msgs::msg",
  "SensorData",
  _SensorData__cdr_serialize,
  _SensorData__cdr_deserialize,
  _SensorData__get_serialized_size,
  _SensorData__max_serialized_size
};

static rosidl_message_type_support_t _SensorData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorData__callbacks,
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
get_message_type_support_handle<steve_msgs::msg::SensorData>()
{
  return &steve_msgs::msg::typesupport_fastrtps_cpp::_SensorData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, steve_msgs, msg, SensorData)() {
  return &steve_msgs::msg::typesupport_fastrtps_cpp::_SensorData__handle;
}

#ifdef __cplusplus
}
#endif
