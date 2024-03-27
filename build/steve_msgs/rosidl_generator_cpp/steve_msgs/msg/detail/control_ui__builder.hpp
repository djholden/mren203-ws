// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from steve_msgs:msg/ControlUI.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__CONTROL_UI__BUILDER_HPP_
#define STEVE_MSGS__MSG__DETAIL__CONTROL_UI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "steve_msgs/msg/detail/control_ui__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace steve_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlUI_e_stop
{
public:
  explicit Init_ControlUI_e_stop(::steve_msgs::msg::ControlUI & msg)
  : msg_(msg)
  {}
  ::steve_msgs::msg::ControlUI e_stop(::steve_msgs::msg::ControlUI::_e_stop_type arg)
  {
    msg_.e_stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::steve_msgs::msg::ControlUI msg_;
};

class Init_ControlUI_new_poi
{
public:
  Init_ControlUI_new_poi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlUI_e_stop new_poi(::steve_msgs::msg::ControlUI::_new_poi_type arg)
  {
    msg_.new_poi = std::move(arg);
    return Init_ControlUI_e_stop(msg_);
  }

private:
  ::steve_msgs::msg::ControlUI msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::steve_msgs::msg::ControlUI>()
{
  return steve_msgs::msg::builder::Init_ControlUI_new_poi();
}

}  // namespace steve_msgs

#endif  // STEVE_MSGS__MSG__DETAIL__CONTROL_UI__BUILDER_HPP_
