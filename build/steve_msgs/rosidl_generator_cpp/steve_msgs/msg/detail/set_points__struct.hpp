// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from steve_msgs:msg/SetPoints.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__SET_POINTS__STRUCT_HPP_
#define STEVE_MSGS__MSG__DETAIL__SET_POINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__steve_msgs__msg__SetPoints __attribute__((deprecated))
#else
# define DEPRECATED__steve_msgs__msg__SetPoints __declspec(deprecated)
#endif

namespace steve_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetPoints_
{
  using Type = SetPoints_<ContainerAllocator>;

  explicit SetPoints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp_val = 0.0f;
      this->ki_val = 0.0f;
      this->pwm_val = 0.0f;
      this->temp_val = 0.0f;
      this->tvok_val = 0.0f;
      this->co2_val = 0.0f;
      this->h2_val = 0.0f;
    }
  }

  explicit SetPoints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp_val = 0.0f;
      this->ki_val = 0.0f;
      this->pwm_val = 0.0f;
      this->temp_val = 0.0f;
      this->tvok_val = 0.0f;
      this->co2_val = 0.0f;
      this->h2_val = 0.0f;
    }
  }

  // field types and members
  using _kp_val_type =
    float;
  _kp_val_type kp_val;
  using _ki_val_type =
    float;
  _ki_val_type ki_val;
  using _pwm_val_type =
    float;
  _pwm_val_type pwm_val;
  using _temp_val_type =
    float;
  _temp_val_type temp_val;
  using _tvok_val_type =
    float;
  _tvok_val_type tvok_val;
  using _co2_val_type =
    float;
  _co2_val_type co2_val;
  using _h2_val_type =
    float;
  _h2_val_type h2_val;

  // setters for named parameter idiom
  Type & set__kp_val(
    const float & _arg)
  {
    this->kp_val = _arg;
    return *this;
  }
  Type & set__ki_val(
    const float & _arg)
  {
    this->ki_val = _arg;
    return *this;
  }
  Type & set__pwm_val(
    const float & _arg)
  {
    this->pwm_val = _arg;
    return *this;
  }
  Type & set__temp_val(
    const float & _arg)
  {
    this->temp_val = _arg;
    return *this;
  }
  Type & set__tvok_val(
    const float & _arg)
  {
    this->tvok_val = _arg;
    return *this;
  }
  Type & set__co2_val(
    const float & _arg)
  {
    this->co2_val = _arg;
    return *this;
  }
  Type & set__h2_val(
    const float & _arg)
  {
    this->h2_val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    steve_msgs::msg::SetPoints_<ContainerAllocator> *;
  using ConstRawPtr =
    const steve_msgs::msg::SetPoints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<steve_msgs::msg::SetPoints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<steve_msgs::msg::SetPoints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      steve_msgs::msg::SetPoints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<steve_msgs::msg::SetPoints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      steve_msgs::msg::SetPoints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<steve_msgs::msg::SetPoints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<steve_msgs::msg::SetPoints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<steve_msgs::msg::SetPoints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__steve_msgs__msg__SetPoints
    std::shared_ptr<steve_msgs::msg::SetPoints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__steve_msgs__msg__SetPoints
    std::shared_ptr<steve_msgs::msg::SetPoints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPoints_ & other) const
  {
    if (this->kp_val != other.kp_val) {
      return false;
    }
    if (this->ki_val != other.ki_val) {
      return false;
    }
    if (this->pwm_val != other.pwm_val) {
      return false;
    }
    if (this->temp_val != other.temp_val) {
      return false;
    }
    if (this->tvok_val != other.tvok_val) {
      return false;
    }
    if (this->co2_val != other.co2_val) {
      return false;
    }
    if (this->h2_val != other.h2_val) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPoints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPoints_

// alias to use template instance with default allocator
using SetPoints =
  steve_msgs::msg::SetPoints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace steve_msgs

#endif  // STEVE_MSGS__MSG__DETAIL__SET_POINTS__STRUCT_HPP_
