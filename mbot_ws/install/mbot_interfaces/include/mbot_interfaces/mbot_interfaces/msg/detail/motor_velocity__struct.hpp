// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mbot_interfaces:msg/MotorVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mbot_interfaces/msg/motor_velocity.hpp"


#ifndef MBOT_INTERFACES__MSG__DETAIL__MOTOR_VELOCITY__STRUCT_HPP_
#define MBOT_INTERFACES__MSG__DETAIL__MOTOR_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mbot_interfaces__msg__MotorVelocity __attribute__((deprecated))
#else
# define DEPRECATED__mbot_interfaces__msg__MotorVelocity __declspec(deprecated)
#endif

namespace mbot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorVelocity_
{
  using Type = MotorVelocity_<ContainerAllocator>;

  explicit MotorVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
    }
  }

  explicit MotorVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
    }
  }

  // field types and members
  using _velocity_type =
    std::array<float, 3>;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__velocity(
    const std::array<float, 3> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mbot_interfaces::msg::MotorVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const mbot_interfaces::msg::MotorVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mbot_interfaces::msg::MotorVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mbot_interfaces::msg::MotorVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mbot_interfaces::msg::MotorVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mbot_interfaces::msg::MotorVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mbot_interfaces::msg::MotorVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mbot_interfaces::msg::MotorVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mbot_interfaces::msg::MotorVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mbot_interfaces::msg::MotorVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mbot_interfaces__msg__MotorVelocity
    std::shared_ptr<mbot_interfaces::msg::MotorVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mbot_interfaces__msg__MotorVelocity
    std::shared_ptr<mbot_interfaces::msg::MotorVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorVelocity_ & other) const
  {
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorVelocity_

// alias to use template instance with default allocator
using MotorVelocity =
  mbot_interfaces::msg::MotorVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mbot_interfaces

#endif  // MBOT_INTERFACES__MSG__DETAIL__MOTOR_VELOCITY__STRUCT_HPP_
