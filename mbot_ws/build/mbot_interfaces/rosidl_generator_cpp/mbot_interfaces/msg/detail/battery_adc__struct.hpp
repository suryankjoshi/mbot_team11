// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mbot_interfaces:msg/BatteryADC.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mbot_interfaces/msg/battery_adc.hpp"


#ifndef MBOT_INTERFACES__MSG__DETAIL__BATTERY_ADC__STRUCT_HPP_
#define MBOT_INTERFACES__MSG__DETAIL__BATTERY_ADC__STRUCT_HPP_

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
# define DEPRECATED__mbot_interfaces__msg__BatteryADC __attribute__((deprecated))
#else
# define DEPRECATED__mbot_interfaces__msg__BatteryADC __declspec(deprecated)
#endif

namespace mbot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryADC_
{
  using Type = BatteryADC_<ContainerAllocator>;

  explicit BatteryADC_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->raw.begin(), this->raw.end(), 0);
      std::fill<typename std::array<float, 4>::iterator, float>(this->volts.begin(), this->volts.end(), 0.0f);
    }
  }

  explicit BatteryADC_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    raw(_alloc),
    volts(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->raw.begin(), this->raw.end(), 0);
      std::fill<typename std::array<float, 4>::iterator, float>(this->volts.begin(), this->volts.end(), 0.0f);
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _raw_type =
    std::array<int16_t, 4>;
  _raw_type raw;
  using _volts_type =
    std::array<float, 4>;
  _volts_type volts;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__raw(
    const std::array<int16_t, 4> & _arg)
  {
    this->raw = _arg;
    return *this;
  }
  Type & set__volts(
    const std::array<float, 4> & _arg)
  {
    this->volts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mbot_interfaces::msg::BatteryADC_<ContainerAllocator> *;
  using ConstRawPtr =
    const mbot_interfaces::msg::BatteryADC_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mbot_interfaces::msg::BatteryADC_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mbot_interfaces::msg::BatteryADC_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mbot_interfaces::msg::BatteryADC_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mbot_interfaces::msg::BatteryADC_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mbot_interfaces::msg::BatteryADC_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mbot_interfaces::msg::BatteryADC_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mbot_interfaces::msg::BatteryADC_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mbot_interfaces::msg::BatteryADC_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mbot_interfaces__msg__BatteryADC
    std::shared_ptr<mbot_interfaces::msg::BatteryADC_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mbot_interfaces__msg__BatteryADC
    std::shared_ptr<mbot_interfaces::msg::BatteryADC_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryADC_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->raw != other.raw) {
      return false;
    }
    if (this->volts != other.volts) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryADC_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryADC_

// alias to use template instance with default allocator
using BatteryADC =
  mbot_interfaces::msg::BatteryADC_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mbot_interfaces

#endif  // MBOT_INTERFACES__MSG__DETAIL__BATTERY_ADC__STRUCT_HPP_
