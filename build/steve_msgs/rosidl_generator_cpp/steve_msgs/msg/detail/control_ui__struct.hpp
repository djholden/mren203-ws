// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from steve_msgs:msg/ControlUI.idl
// generated code does not contain a copyright notice

#ifndef STEVE_MSGS__MSG__DETAIL__CONTROL_UI__STRUCT_HPP_
#define STEVE_MSGS__MSG__DETAIL__CONTROL_UI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__steve_msgs__msg__ControlUI __attribute__((deprecated))
#else
# define DEPRECATED__steve_msgs__msg__ControlUI __declspec(deprecated)
#endif

namespace steve_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlUI_
{
  using Type = ControlUI_<ContainerAllocator>;

  explicit ControlUI_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_poi = false;
      this->e_stop = false;
    }
  }

  explicit ControlUI_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_poi = false;
      this->e_stop = false;
    }
  }

  // field types and members
  using _new_poi_type =
    bool;
  _new_poi_type new_poi;
  using _e_stop_type =
    bool;
  _e_stop_type e_stop;

  // setters for named parameter idiom
  Type & set__new_poi(
    const bool & _arg)
  {
    this->new_poi = _arg;
    return *this;
  }
  Type & set__e_stop(
    const bool & _arg)
  {
    this->e_stop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    steve_msgs::msg::ControlUI_<ContainerAllocator> *;
  using ConstRawPtr =
    const steve_msgs::msg::ControlUI_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<steve_msgs::msg::ControlUI_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<steve_msgs::msg::ControlUI_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      steve_msgs::msg::ControlUI_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<steve_msgs::msg::ControlUI_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      steve_msgs::msg::ControlUI_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<steve_msgs::msg::ControlUI_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<steve_msgs::msg::ControlUI_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<steve_msgs::msg::ControlUI_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__steve_msgs__msg__ControlUI
    std::shared_ptr<steve_msgs::msg::ControlUI_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__steve_msgs__msg__ControlUI
    std::shared_ptr<steve_msgs::msg::ControlUI_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlUI_ & other) const
  {
    if (this->new_poi != other.new_poi) {
      return false;
    }
    if (this->e_stop != other.e_stop) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlUI_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlUI_

// alias to use template instance with default allocator
using ControlUI =
  steve_msgs::msg::ControlUI_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace steve_msgs

#endif  // STEVE_MSGS__MSG__DETAIL__CONTROL_UI__STRUCT_HPP_
