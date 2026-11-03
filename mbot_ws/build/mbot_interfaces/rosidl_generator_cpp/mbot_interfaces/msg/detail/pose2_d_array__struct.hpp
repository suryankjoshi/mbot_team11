// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mbot_interfaces:msg/Pose2DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mbot_interfaces/msg/pose2_d_array.hpp"


#ifndef MBOT_INTERFACES__MSG__DETAIL__POSE2_D_ARRAY__STRUCT_HPP_
#define MBOT_INTERFACES__MSG__DETAIL__POSE2_D_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mbot_interfaces__msg__Pose2DArray __attribute__((deprecated))
#else
# define DEPRECATED__mbot_interfaces__msg__Pose2DArray __declspec(deprecated)
#endif

namespace mbot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pose2DArray_
{
  using Type = Pose2DArray_<ContainerAllocator>;

  explicit Pose2DArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Pose2DArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _poses_type =
    std::vector<geometry_msgs::msg::Pose2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose2D_<ContainerAllocator>>>;
  _poses_type poses;

  // setters for named parameter idiom
  Type & set__poses(
    const std::vector<geometry_msgs::msg::Pose2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose2D_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mbot_interfaces::msg::Pose2DArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const mbot_interfaces::msg::Pose2DArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mbot_interfaces::msg::Pose2DArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mbot_interfaces::msg::Pose2DArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mbot_interfaces::msg::Pose2DArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mbot_interfaces::msg::Pose2DArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mbot_interfaces::msg::Pose2DArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mbot_interfaces::msg::Pose2DArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mbot_interfaces::msg::Pose2DArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mbot_interfaces::msg::Pose2DArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mbot_interfaces__msg__Pose2DArray
    std::shared_ptr<mbot_interfaces::msg::Pose2DArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mbot_interfaces__msg__Pose2DArray
    std::shared_ptr<mbot_interfaces::msg::Pose2DArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pose2DArray_ & other) const
  {
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pose2DArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pose2DArray_

// alias to use template instance with default allocator
using Pose2DArray =
  mbot_interfaces::msg::Pose2DArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mbot_interfaces

#endif  // MBOT_INTERFACES__MSG__DETAIL__POSE2_D_ARRAY__STRUCT_HPP_
