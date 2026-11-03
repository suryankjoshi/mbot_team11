// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mbot_interfaces:msg/Pose2DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mbot_interfaces/msg/pose2_d_array.hpp"


#ifndef MBOT_INTERFACES__MSG__DETAIL__POSE2_D_ARRAY__BUILDER_HPP_
#define MBOT_INTERFACES__MSG__DETAIL__POSE2_D_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mbot_interfaces/msg/detail/pose2_d_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Pose2DArray_poses
{
public:
  Init_Pose2DArray_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mbot_interfaces::msg::Pose2DArray poses(::mbot_interfaces::msg::Pose2DArray::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mbot_interfaces::msg::Pose2DArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mbot_interfaces::msg::Pose2DArray>()
{
  return mbot_interfaces::msg::builder::Init_Pose2DArray_poses();
}

}  // namespace mbot_interfaces

#endif  // MBOT_INTERFACES__MSG__DETAIL__POSE2_D_ARRAY__BUILDER_HPP_
