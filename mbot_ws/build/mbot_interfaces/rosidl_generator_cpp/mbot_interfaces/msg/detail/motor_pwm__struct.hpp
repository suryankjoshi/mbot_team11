// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mbot_interfaces:msg/MotorPWM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mbot_interfaces/msg/motor_pwm.hpp"


#ifndef MBOT_INTERFACES__MSG__DETAIL__MOTOR_PWM__STRUCT_HPP_
#define MBOT_INTERFACES__MSG__DETAIL__MOTOR_PWM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mbot_interfaces__msg__MotorPWM __attribute__((deprecated))
#else
# define DEPRECATED__mbot_interfaces__msg__MotorPWM __declspec(deprecated)
#endif

namespace mbot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorPWM_
{
  using Type = MotorPWM_<ContainerAllocator>;

  explicit MotorPWM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->pwm.begin(), this->pwm.end(), 0.0f);
    }
  }

  explicit MotorPWM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pwm(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->pwm.begin(), this->pwm.end(), 0.0f);
    }
  }

  // field types and members
  using _pwm_type =
    std::array<float, 3>;
  _pwm_type pwm;

  // setters for named parameter idiom
  Type & set__pwm(
    const std::array<float, 3> & _arg)
  {
    this->pwm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mbot_interfaces::msg::MotorPWM_<ContainerAllocator> *;
  using ConstRawPtr =
    const mbot_interfaces::msg::MotorPWM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mbot_interfaces::msg::MotorPWM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mbot_interfaces::msg::MotorPWM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mbot_interfaces::msg::MotorPWM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mbot_interfaces::msg::MotorPWM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mbot_interfaces::msg::MotorPWM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mbot_interfaces::msg::MotorPWM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mbot_interfaces::msg::MotorPWM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mbot_interfaces::msg::MotorPWM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mbot_interfaces__msg__MotorPWM
    std::shared_ptr<mbot_interfaces::msg::MotorPWM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mbot_interfaces__msg__MotorPWM
    std::shared_ptr<mbot_interfaces::msg::MotorPWM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorPWM_ & other) const
  {
    if (this->pwm != other.pwm) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorPWM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorPWM_

// alias to use template instance with default allocator
using MotorPWM =
  mbot_interfaces::msg::MotorPWM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mbot_interfaces

#endif  // MBOT_INTERFACES__MSG__DETAIL__MOTOR_PWM__STRUCT_HPP_
