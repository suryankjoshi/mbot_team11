// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mbot_interfaces:msg/Encoders.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mbot_interfaces/msg/encoders.hpp"


#ifndef MBOT_INTERFACES__MSG__DETAIL__ENCODERS__STRUCT_HPP_
#define MBOT_INTERFACES__MSG__DETAIL__ENCODERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mbot_interfaces__msg__Encoders __attribute__((deprecated))
#else
# define DEPRECATED__mbot_interfaces__msg__Encoders __declspec(deprecated)
#endif

namespace mbot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Encoders_
{
  using Type = Encoders_<ContainerAllocator>;

  explicit Encoders_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int64_t, 3>::iterator, int64_t>(this->ticks.begin(), this->ticks.end(), 0ll);
      std::fill<typename std::array<int32_t, 3>::iterator, int32_t>(this->delta_ticks.begin(), this->delta_ticks.end(), 0l);
      this->delta_time = 0l;
    }
  }

  explicit Encoders_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    ticks(_alloc),
    delta_ticks(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int64_t, 3>::iterator, int64_t>(this->ticks.begin(), this->ticks.end(), 0ll);
      std::fill<typename std::array<int32_t, 3>::iterator, int32_t>(this->delta_ticks.begin(), this->delta_ticks.end(), 0l);
      this->delta_time = 0l;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _ticks_type =
    std::array<int64_t, 3>;
  _ticks_type ticks;
  using _delta_ticks_type =
    std::array<int32_t, 3>;
  _delta_ticks_type delta_ticks;
  using _delta_time_type =
    int32_t;
  _delta_time_type delta_time;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__ticks(
    const std::array<int64_t, 3> & _arg)
  {
    this->ticks = _arg;
    return *this;
  }
  Type & set__delta_ticks(
    const std::array<int32_t, 3> & _arg)
  {
    this->delta_ticks = _arg;
    return *this;
  }
  Type & set__delta_time(
    const int32_t & _arg)
  {
    this->delta_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mbot_interfaces::msg::Encoders_<ContainerAllocator> *;
  using ConstRawPtr =
    const mbot_interfaces::msg::Encoders_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mbot_interfaces::msg::Encoders_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mbot_interfaces::msg::Encoders_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mbot_interfaces::msg::Encoders_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mbot_interfaces::msg::Encoders_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mbot_interfaces::msg::Encoders_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mbot_interfaces::msg::Encoders_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mbot_interfaces::msg::Encoders_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mbot_interfaces::msg::Encoders_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mbot_interfaces__msg__Encoders
    std::shared_ptr<mbot_interfaces::msg::Encoders_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mbot_interfaces__msg__Encoders
    std::shared_ptr<mbot_interfaces::msg::Encoders_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Encoders_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->ticks != other.ticks) {
      return false;
    }
    if (this->delta_ticks != other.delta_ticks) {
      return false;
    }
    if (this->delta_time != other.delta_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Encoders_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Encoders_

// alias to use template instance with default allocator
using Encoders =
  mbot_interfaces::msg::Encoders_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mbot_interfaces

#endif  // MBOT_INTERFACES__MSG__DETAIL__ENCODERS__STRUCT_HPP_
