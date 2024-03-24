// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from steve_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define STEVE_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "steve_msgs/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace steve_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorData_ir_center
{
public:
  explicit Init_SensorData_ir_center(::steve_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  ::steve_msgs::msg::SensorData ir_center(::steve_msgs::msg::SensorData::_ir_center_type arg)
  {
    msg_.ir_center = std::move(arg);
    return std::move(msg_);
  }

private:
  ::steve_msgs::msg::SensorData msg_;
};

class Init_SensorData_ir_right
{
public:
  explicit Init_SensorData_ir_right(::steve_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_ir_center ir_right(::steve_msgs::msg::SensorData::_ir_right_type arg)
  {
    msg_.ir_right = std::move(arg);
    return Init_SensorData_ir_center(msg_);
  }

private:
  ::steve_msgs::msg::SensorData msg_;
};

class Init_SensorData_ir_left
{
public:
  explicit Init_SensorData_ir_left(::steve_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_ir_right ir_left(::steve_msgs::msg::SensorData::_ir_left_type arg)
  {
    msg_.ir_left = std::move(arg);
    return Init_SensorData_ir_right(msg_);
  }

private:
  ::steve_msgs::msg::SensorData msg_;
};

class Init_SensorData_tvok
{
public:
  explicit Init_SensorData_tvok(::steve_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_ir_left tvok(::steve_msgs::msg::SensorData::_tvok_type arg)
  {
    msg_.tvok = std::move(arg);
    return Init_SensorData_ir_left(msg_);
  }

private:
  ::steve_msgs::msg::SensorData msg_;
};

class Init_SensorData_co2
{
public:
  explicit Init_SensorData_co2(::steve_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_tvok co2(::steve_msgs::msg::SensorData::_co2_type arg)
  {
    msg_.co2 = std::move(arg);
    return Init_SensorData_tvok(msg_);
  }

private:
  ::steve_msgs::msg::SensorData msg_;
};

class Init_SensorData_h2
{
public:
  explicit Init_SensorData_h2(::steve_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_co2 h2(::steve_msgs::msg::SensorData::_h2_type arg)
  {
    msg_.h2 = std::move(arg);
    return Init_SensorData_co2(msg_);
  }

private:
  ::steve_msgs::msg::SensorData msg_;
};

class Init_SensorData_temp
{
public:
  Init_SensorData_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_h2 temp(::steve_msgs::msg::SensorData::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_SensorData_h2(msg_);
  }

private:
  ::steve_msgs::msg::SensorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::steve_msgs::msg::SensorData>()
{
  return steve_msgs::msg::builder::Init_SensorData_temp();
}

}  // namespace steve_msgs

#endif  // STEVE_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
