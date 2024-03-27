// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from steve_msgs:msg/ControlUI.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__CONTROL_UI__TRAITS_HPP_
#define STEVE_MSGS__MSG__DETAIL__CONTROL_UI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "steve_msgs/msg/detail/control_ui__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace steve_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlUI & msg,
  std::ostream & out)
{
  out << "{";
  // member: new_poi
  {
    out << "new_poi: ";
    rosidl_generator_traits::value_to_yaml(msg.new_poi, out);
    out << ", ";
  }

  // member: e_stop
  {
    out << "e_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.e_stop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlUI & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: new_poi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_poi: ";
    rosidl_generator_traits::value_to_yaml(msg.new_poi, out);
    out << "\n";
  }

  // member: e_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.e_stop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlUI & msg, bool use_flow_style = false)
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
  const steve_msgs::msg::ControlUI & msg,
  std::ostream & out, size_t indentation = 0)
{
  steve_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use steve_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const steve_msgs::msg::ControlUI & msg)
{
  return steve_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<steve_msgs::msg::ControlUI>()
{
  return "steve_msgs::msg::ControlUI";
}

template<>
inline const char * name<steve_msgs::msg::ControlUI>()
{
  return "steve_msgs/msg/ControlUI";
}

template<>
struct has_fixed_size<steve_msgs::msg::ControlUI>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<steve_msgs::msg::ControlUI>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<steve_msgs::msg::ControlUI>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STEVE_MSGS__MSG__DETAIL__CONTROL_UI__TRAITS_HPP_
