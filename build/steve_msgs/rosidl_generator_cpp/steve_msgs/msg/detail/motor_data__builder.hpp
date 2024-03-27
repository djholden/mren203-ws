// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from steve_msgs:msg/MotorData.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_
#define STEVE_MSGS__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "steve_msgs/msg/detail/motor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace steve_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorData_ang_vel
{
public:
  explicit Init_MotorData_ang_vel(::steve_msgs::msg::MotorData & msg)
  : msg_(msg)
  {}
  ::steve_msgs::msg::MotorData ang_vel(::steve_msgs::msg::MotorData::_ang_vel_type arg)
  {
    msg_.ang_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::steve_msgs::msg::MotorData msg_;
};

class Init_MotorData_fwd_vel
{
public:
  explicit Init_MotorData_fwd_vel(::steve_msgs::msg::MotorData & msg)
  : msg_(msg)
  {}
  Init_MotorData_ang_vel fwd_vel(::steve_msgs::msg::MotorData::_fwd_vel_type arg)
  {
    msg_.fwd_vel = std::move(arg);
    return Init_MotorData_ang_vel(msg_);
  }

private:
  ::steve_msgs::msg::MotorData msg_;
};

class Init_MotorData_right_vel
{
public:
  explicit Init_MotorData_right_vel(::steve_msgs::msg::MotorData & msg)
  : msg_(msg)
  {}
  Init_MotorData_fwd_vel right_vel(::steve_msgs::msg::MotorData::_right_vel_type arg)
  {
    msg_.right_vel = std::move(arg);
    return Init_MotorData_fwd_vel(msg_);
  }

private:
  ::steve_msgs::msg::MotorData msg_;
};

class Init_MotorData_left_vel
{
public:
  explicit Init_MotorData_left_vel(::steve_msgs::msg::MotorData & msg)
  : msg_(msg)
  {}
  Init_MotorData_right_vel left_vel(::steve_msgs::msg::MotorData::_left_vel_type arg)
  {
    msg_.left_vel = std::move(arg);
    return Init_MotorData_right_vel(msg_);
  }

private:
  ::steve_msgs::msg::MotorData msg_;
};

class Init_MotorData_ang_cmd
{
public:
  explicit Init_MotorData_ang_cmd(::steve_msgs::msg::MotorData & msg)
  : msg_(msg)
  {}
  Init_MotorData_left_vel ang_cmd(::steve_msgs::msg::MotorData::_ang_cmd_type arg)
  {
    msg_.ang_cmd = std::move(arg);
    return Init_MotorData_left_vel(msg_);
  }

private:
  ::steve_msgs::msg::MotorData msg_;
};

class Init_MotorData_fwd_cmd
{
public:
  Init_MotorData_fwd_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorData_ang_cmd fwd_cmd(::steve_msgs::msg::MotorData::_fwd_cmd_type arg)
  {
    msg_.fwd_cmd = std::move(arg);
    return Init_MotorData_ang_cmd(msg_);
  }

private:
  ::steve_msgs::msg::MotorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::steve_msgs::msg::MotorData>()
{
  return steve_msgs::msg::builder::Init_MotorData_fwd_cmd();
}

}  // namespace steve_msgs

#endif  // STEVE_MSGS__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_
