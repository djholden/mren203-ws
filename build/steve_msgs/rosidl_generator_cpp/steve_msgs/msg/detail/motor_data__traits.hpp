// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from steve_msgs:msg/MotorData.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__MOTOR_DATA__TRAITS_HPP_
#define STEVE_MSGS__MSG__DETAIL__MOTOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "steve_msgs/msg/detail/motor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace steve_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: fwd_cmd
  {
    out << "fwd_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.fwd_cmd, out);
    out << ", ";
  }

  // member: ang_cmd
  {
    out << "ang_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_cmd, out);
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
  const MotorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fwd_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fwd_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.fwd_cmd, out);
    out << "\n";
  }

  // member: ang_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_cmd, out);
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

inline std::string to_yaml(const MotorData & msg, bool use_flow_style = false)
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
  const steve_msgs::msg::MotorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  steve_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use steve_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const steve_msgs::msg::MotorData & msg)
{
  return steve_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<steve_msgs::msg::MotorData>()
{
  return "steve_msgs::msg::MotorData";
}

template<>
inline const char * name<steve_msgs::msg::MotorData>()
{
  return "steve_msgs/msg/MotorData";
}

template<>
struct has_fixed_size<steve_msgs::msg::MotorData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<steve_msgs::msg::MotorData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<steve_msgs::msg::MotorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STEVE_MSGS__MSG__DETAIL__MOTOR_DATA__TRAITS_HPP_
