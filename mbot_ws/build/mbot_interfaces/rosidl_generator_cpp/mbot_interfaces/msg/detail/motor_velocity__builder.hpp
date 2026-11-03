// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mbot_interfaces:msg/MotorVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mbot_interfaces/msg/motor_velocity.hpp"


#ifndef MBOT_INTERFACES__MSG__DETAIL__MOTOR_VELOCITY__BUILDER_HPP_
#define MBOT_INTERFACES__MSG__DETAIL__MOTOR_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mbot_interfaces/msg/detail/motor_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorVelocity_velocity
{
public:
  Init_MotorVelocity_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mbot_interfaces::msg::MotorVelocity velocity(::mbot_interfaces::msg::MotorVelocity::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mbot_interfaces::msg::MotorVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mbot_interfaces::msg::MotorVelocity>()
{
  return mbot_interfaces::msg::builder::Init_MotorVelocity_velocity();
}

}  // namespace mbot_interfaces

#endif  // MBOT_INTERFACES__MSG__DETAIL__MOTOR_VELOCITY__BUILDER_HPP_
