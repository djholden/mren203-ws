// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from steve_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
#define STEVE_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__steve_msgs__msg__SensorData __attribute__((deprecated))
#else
# define DEPRECATED__steve_msgs__msg__SensorData __declspec(deprecated)
#endif

namespace steve_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorData_
{
  using Type = SensorData_<ContainerAllocator>;

  explicit SensorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = 0.0f;
      this->h2 = 0.0f;
      this->co2 = 0.0f;
      this->tvok = 0.0f;
      this->ir_left = 0.0f;
      this->ir_right = 0.0f;
      this->ir_center = 0.0f;
      this->left_vel = 0.0f;
      this->right_vel = 0.0f;
      this->avg_vel = 0.0f;
      this->fwd_vel = 0.0f;
      this->ang_vel = 0.0f;
    }
  }

  explicit SensorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = 0.0f;
      this->h2 = 0.0f;
      this->co2 = 0.0f;
      this->tvok = 0.0f;
      this->ir_left = 0.0f;
      this->ir_right = 0.0f;
      this->ir_center = 0.0f;
      this->left_vel = 0.0f;
      this->right_vel = 0.0f;
      this->avg_vel = 0.0f;
      this->fwd_vel = 0.0f;
      this->ang_vel = 0.0f;
    }
  }

  // field types and members
  using _temp_type =
    float;
  _temp_type temp;
  using _h2_type =
    float;
  _h2_type h2;
  using _co2_type =
    float;
  _co2_type co2;
  using _tvok_type =
    float;
  _tvok_type tvok;
  using _ir_left_type =
    float;
  _ir_left_type ir_left;
  using _ir_right_type =
    float;
  _ir_right_type ir_right;
  using _ir_center_type =
    float;
  _ir_center_type ir_center;
  using _left_vel_type =
    float;
  _left_vel_type left_vel;
  using _right_vel_type =
    float;
  _right_vel_type right_vel;
  using _avg_vel_type =
    float;
  _avg_vel_type avg_vel;
  using _fwd_vel_type =
    float;
  _fwd_vel_type fwd_vel;
  using _ang_vel_type =
    float;
  _ang_vel_type ang_vel;

  // setters for named parameter idiom
  Type & set__temp(
    const float & _arg)
  {
    this->temp = _arg;
    return *this;
  }
  Type & set__h2(
    const float & _arg)
  {
    this->h2 = _arg;
    return *this;
  }
  Type & set__co2(
    const float & _arg)
  {
    this->co2 = _arg;
    return *this;
  }
  Type & set__tvok(
    const float & _arg)
  {
    this->tvok = _arg;
    return *this;
  }
  Type & set__ir_left(
    const float & _arg)
  {
    this->ir_left = _arg;
    return *this;
  }
  Type & set__ir_right(
    const float & _arg)
  {
    this->ir_right = _arg;
    return *this;
  }
  Type & set__ir_center(
    const float & _arg)
  {
    this->ir_center = _arg;
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
  Type & set__avg_vel(
    const float & _arg)
  {
    this->avg_vel = _arg;
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
    steve_msgs::msg::SensorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const steve_msgs::msg::SensorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<steve_msgs::msg::SensorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<steve_msgs::msg::SensorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      steve_msgs::msg::SensorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<steve_msgs::msg::SensorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      steve_msgs::msg::SensorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<steve_msgs::msg::SensorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<steve_msgs::msg::SensorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<steve_msgs::msg::SensorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__steve_msgs__msg__SensorData
    std::shared_ptr<steve_msgs::msg::SensorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__steve_msgs__msg__SensorData
    std::shared_ptr<steve_msgs::msg::SensorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorData_ & other) const
  {
    if (this->temp != other.temp) {
      return false;
    }
    if (this->h2 != other.h2) {
      return false;
    }
    if (this->co2 != other.co2) {
      return false;
    }
    if (this->tvok != other.tvok) {
      return false;
    }
    if (this->ir_left != other.ir_left) {
      return false;
    }
    if (this->ir_right != other.ir_right) {
      return false;
    }
    if (this->ir_center != other.ir_center) {
      return false;
    }
    if (this->left_vel != other.left_vel) {
      return false;
    }
    if (this->right_vel != other.right_vel) {
      return false;
    }
    if (this->avg_vel != other.avg_vel) {
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
  bool operator!=(const SensorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorData_

// alias to use template instance with default allocator
using SensorData =
  steve_msgs::msg::SensorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace steve_msgs

#endif  // STEVE_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
