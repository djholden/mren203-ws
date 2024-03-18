// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from steve_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
#define STEVE_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "steve_msgs/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace steve_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << ", ";
  }

  // member: h2
  {
    out << "h2: ";
    rosidl_generator_traits::value_to_yaml(msg.h2, out);
    out << ", ";
  }

  // member: co2
  {
    out << "co2: ";
    rosidl_generator_traits::value_to_yaml(msg.co2, out);
    out << ", ";
  }

  // member: tvok
  {
    out << "tvok: ";
    rosidl_generator_traits::value_to_yaml(msg.tvok, out);
    out << ", ";
  }

  // member: ir_left
  {
    out << "ir_left: ";
    rosidl_generator_traits::value_to_yaml(msg.ir_left, out);
    out << ", ";
  }

  // member: ir_right
  {
    out << "ir_right: ";
    rosidl_generator_traits::value_to_yaml(msg.ir_right, out);
    out << ", ";
  }

  // member: ir_center
  {
    out << "ir_center: ";
    rosidl_generator_traits::value_to_yaml(msg.ir_center, out);
    out << ", ";
  }

  // member: left_vel
  {
    out << "left_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.left_vel, out);
    out << ", ";
  }

  // member: right_vel
  {
    out << "right_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.right_vel, out);
    out << ", ";
  }

  // member: avg_vel
  {
    out << "avg_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_vel, out);
    out << ", ";
  }

  // member: fwd_vel
  {
    out << "fwd_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.fwd_vel, out);
    out << ", ";
  }

  // member: ang_vel
  {
    out << "ang_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << "\n";
  }

  // member: h2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h2: ";
    rosidl_generator_traits::value_to_yaml(msg.h2, out);
    out << "\n";
  }

  // member: co2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "co2: ";
    rosidl_generator_traits::value_to_yaml(msg.co2, out);
    out << "\n";
  }

  // member: tvok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tvok: ";
    rosidl_generator_traits::value_to_yaml(msg.tvok, out);
    out << "\n";
  }

  // member: ir_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ir_left: ";
    rosidl_generator_traits::value_to_yaml(msg.ir_left, out);
    out << "\n";
  }

  // member: ir_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ir_right: ";
    rosidl_generator_traits::value_to_yaml(msg.ir_right, out);
    out << "\n";
  }

  // member: ir_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ir_center: ";
    rosidl_generator_traits::value_to_yaml(msg.ir_center, out);
    out << "\n";
  }

  // member: left_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.left_vel, out);
    out << "\n";
  }

  // member: right_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.right_vel, out);
    out << "\n";
  }

  // member: avg_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avg_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_vel, out);
    out << "\n";
  }

  // member: fwd_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fwd_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.fwd_vel, out);
    out << "\n";
  }

  // member: ang_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace steve_msgs

namespace rosidl_generator_traits
{

[[deprecated("use steve_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const steve_msgs::msg::SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  steve_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use steve_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const steve_msgs::msg::SensorData & msg)
{
  return steve_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<steve_msgs::msg::SensorData>()
{
  return "steve_msgs::msg::SensorData";
}

template<>
inline const char * name<steve_msgs::msg::SensorData>()
{
  return "steve_msgs/msg/SensorData";
}

template<>
struct has_fixed_size<steve_msgs::msg::SensorData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<steve_msgs::msg::SensorData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<steve_msgs::msg::SensorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STEVE_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
