// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from steve_msgs:msg/SetPoints.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__SET_POINTS__BUILDER_HPP_
#define STEVE_MSGS__MSG__DETAIL__SET_POINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "steve_msgs/msg/detail/set_points__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace steve_msgs
{

namespace msg
{

namespace builder
{

class Init_SetPoints_h2_val
{
public:
  explicit Init_SetPoints_h2_val(::steve_msgs::msg::SetPoints & msg)
  : msg_(msg)
  {}
  ::steve_msgs::msg::SetPoints h2_val(::steve_msgs::msg::SetPoints::_h2_val_type arg)
  {
    msg_.h2_val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::steve_msgs::msg::SetPoints msg_;
};

class Init_SetPoints_co2_val
{
public:
  explicit Init_SetPoints_co2_val(::steve_msgs::msg::SetPoints & msg)
  : msg_(msg)
  {}
  Init_SetPoints_h2_val co2_val(::steve_msgs::msg::SetPoints::_co2_val_type arg)
  {
    msg_.co2_val = std::move(arg);
    return Init_SetPoints_h2_val(msg_);
  }

private:
  ::steve_msgs::msg::SetPoints msg_;
};

class Init_SetPoints_tvok_val
{
public:
  explicit Init_SetPoints_tvok_val(::steve_msgs::msg::SetPoints & msg)
  : msg_(msg)
  {}
  Init_SetPoints_co2_val tvok_val(::steve_msgs::msg::SetPoints::_tvok_val_type arg)
  {
    msg_.tvok_val = std::move(arg);
    return Init_SetPoints_co2_val(msg_);
  }

private:
  ::steve_msgs::msg::SetPoints msg_;
};

class Init_SetPoints_temp_val
{
public:
  explicit Init_SetPoints_temp_val(::steve_msgs::msg::SetPoints & msg)
  : msg_(msg)
  {}
  Init_SetPoints_tvok_val temp_val(::steve_msgs::msg::SetPoints::_temp_val_type arg)
  {
    msg_.temp_val = std::move(arg);
    return Init_SetPoints_tvok_val(msg_);
  }

private:
  ::steve_msgs::msg::SetPoints msg_;
};

class Init_SetPoints_pwm_val
{
public:
  explicit Init_SetPoints_pwm_val(::steve_msgs::msg::SetPoints & msg)
  : msg_(msg)
  {}
  Init_SetPoints_temp_val pwm_val(::steve_msgs::msg::SetPoints::_pwm_val_type arg)
  {
    msg_.pwm_val = std::move(arg);
    return Init_SetPoints_temp_val(msg_);
  }

private:
  ::steve_msgs::msg::SetPoints msg_;
};

class Init_SetPoints_ki_val
{
public:
  explicit Init_SetPoints_ki_val(::steve_msgs::msg::SetPoints & msg)
  : msg_(msg)
  {}
  Init_SetPoints_pwm_val ki_val(::steve_msgs::msg::SetPoints::_ki_val_type arg)
  {
    msg_.ki_val = std::move(arg);
    return Init_SetPoints_pwm_val(msg_);
  }

private:
  ::steve_msgs::msg::SetPoints msg_;
};

class Init_SetPoints_kp_val
{
public:
  Init_SetPoints_kp_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPoints_ki_val kp_val(::steve_msgs::msg::SetPoints::_kp_val_type arg)
  {
    msg_.kp_val = std::move(arg);
    return Init_SetPoints_ki_val(msg_);
  }

private:
  ::steve_msgs::msg::SetPoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::steve_msgs::msg::SetPoints>()
{
  return steve_msgs::msg::builder::Init_SetPoints_kp_val();
}

}  // namespace steve_msgs

#endif  // STEVE_MSGS__MSG__DETAIL__SET_POINTS__BUILDER_HPP_
