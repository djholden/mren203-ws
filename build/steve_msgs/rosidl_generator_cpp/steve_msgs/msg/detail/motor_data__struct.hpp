// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from steve_msgs:msg/MotorData.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__MOTOR_DATA__STRUCT_HPP_
#define STEVE_MSGS__MSG__DETAIL__MOTOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__steve_msgs__msg__MotorData __attribute__((deprecated))
#else
# define DEPRECATED__steve_msgs__msg__MotorData __declspec(deprecated)
#endif

namespace steve_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorData_
{
  using Type = MotorData_<ContainerAllocator>;

  explicit MotorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fwd_cmd = 0.0f;
      this->ang_cmd = 0.0f;
      this->left_vel = 0.0f;
      this->right_vel = 0.0f;
      this->fwd_vel = 0.0f;
      this->ang_vel = 0.0f;
    }
  }

  explicit MotorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fwd_cmd = 0.0f;
      this->ang_cmd = 0.0f;
      this->left_vel = 0.0f;
      this->right_vel = 0.0f;
      this->fwd_vel = 0.0f;
      this->ang_vel = 0.0f;
    }
  }

  // field types and members
  using _fwd_cmd_type =
    float;
  _fwd_cmd_type fwd_cmd;
  using _ang_cmd_type =
    float;
  _ang_cmd_type ang_cmd;
  using _left_vel_type =
    float;
  _left_vel_type left_vel;
  using _right_vel_type =
    float;
  _right_vel_type right_vel;
  using _fwd_vel_type =
    float;
  _fwd_vel_type fwd_vel;
  using _ang_vel_type =
    float;
  _ang_vel_type ang_vel;

  // setters for named parameter idiom
  Type & set__fwd_cmd(
    const float & _arg)
  {
    this->fwd_cmd = _arg;
    return *this;
  }
  Type & set__ang_cmd(
    const float & _arg)
  {
    this->ang_cmd = _arg;
    return *this;
  }
  Type & set__left_vel(
    const float & _arg)
  {
    this->left_vel = _arg;
    return *this;
  }
  Type & set__right_vel(
    const float & _arg)
  {
    this->right_vel = _arg;
    return *this;
  }
  Type & set__fwd_vel(
    const float & _arg)
  {
    this->fwd_vel = _arg;
    return *this;
  }
  Type & set__ang_vel(
    const float & _arg)
  {
    this->ang_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    steve_msgs::msg::MotorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const steve_msgs::msg::MotorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<steve_msgs::msg::MotorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<steve_msgs::msg::MotorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      steve_msgs::msg::MotorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<steve_msgs::msg::MotorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      steve_msgs::msg::MotorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<steve_msgs::msg::MotorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<steve_msgs::msg::MotorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<steve_msgs::msg::MotorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__steve_msgs__msg__MotorData
    std::shared_ptr<steve_msgs::msg::MotorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__steve_msgs__msg__MotorData
    std::shared_ptr<steve_msgs::msg::MotorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorData_ & other) const
  {
    if (this->fwd_cmd != other.fwd_cmd) {
      return false;
    }
    if (this->ang_cmd != other.ang_cmd) {
      return false;
    }
    if (this->left_vel != other.left_vel) {
      return false;
    }
    if (this->right_vel != other.right_vel) {
      return false;
    }
    if (this->fwd_vel != other.fwd_vel) {
      return false;
    }
    if (this->ang_vel != other.ang_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorData_

// alias to use template instance with default allocator
using MotorData =
  steve_msgs::msg::MotorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace steve_msgs

#endif  // STEVE_MSGS__MSG__DETAIL__MOTOR_DATA__STRUCT_HPP_
