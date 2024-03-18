// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from steve_msgs:msg/SetPoints.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__SET_POINTS__TRAITS_HPP_
#define STEVE_MSGS__MSG__DETAIL__SET_POINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "steve_msgs/msg/detail/set_points__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace steve_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetPoints & msg,
  std::ostream & out)
{
  out << "{";
  // member: kp_val
  {
    out << "kp_val: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_val, out);
    out << ", ";
  }

  // member: ki_val
  {
    out << "ki_val: ";
    rosidl_generator_traits::value_to_yaml(msg.ki_val, out);
    out << ", ";
  }

  // member: pwm_val
  {
    out << "pwm_val: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_val, out);
    out << ", ";
  }

  // member: temp_val
  {
    out << "temp_val: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_val, out);
    out << ", ";
  }

  // member: tvok_val
  {
    out << "tvok_val: ";
    rosidl_generator_traits::value_to_yaml(msg.tvok_val, out);
    out << ", ";
  }

  // member: co2_val
  {
    out << "co2_val: ";
    rosidl_generator_traits::value_to_yaml(msg.co2_val, out);
    out << ", ";
  }

  // member: h2_val
  {
    out << "h2_val: ";
    rosidl_generator_traits::value_to_yaml(msg.h2_val, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kp_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp_val: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_val, out);
    out << "\n";
  }

  // member: ki_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ki_val: ";
    rosidl_generator_traits::value_to_yaml(msg.ki_val, out);
    out << "\n";
  }

  // member: pwm_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_val: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_val, out);
    out << "\n";
  }

  // member: temp_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_val: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_val, out);
    out << "\n";
  }

  // member: tvok_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tvok_val: ";
    rosidl_generator_traits::value_to_yaml(msg.tvok_val, out);
    out << "\n";
  }

  // member: co2_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "co2_val: ";
    rosidl_generator_traits::value_to_yaml(msg.co2_val, out);
    out << "\n";
  }

  // member: h2_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h2_val: ";
    rosidl_generator_traits::value_to_yaml(msg.h2_val, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPoints & msg, bool use_flow_style = false)
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
  const steve_msgs::msg::SetPoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  steve_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use steve_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const steve_msgs::msg::SetPoints & msg)
{
  return steve_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<steve_msgs::msg::SetPoints>()
{
  return "steve_msgs::msg::SetPoints";
}

template<>
inline const char * name<steve_msgs::msg::SetPoints>()
{
  return "steve_msgs/msg/SetPoints";
}

template<>
struct has_fixed_size<steve_msgs::msg::SetPoints>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<steve_msgs::msg::SetPoints>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<steve_msgs::msg::SetPoints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STEVE_MSGS__MSG__DETAIL__SET_POINTS__TRAITS_HPP_
