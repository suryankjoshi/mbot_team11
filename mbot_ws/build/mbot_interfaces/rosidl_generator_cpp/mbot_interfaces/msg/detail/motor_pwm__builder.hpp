// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mbot_interfaces:msg/MotorPWM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mbot_interfaces/msg/motor_pwm.hpp"


#ifndef MBOT_INTERFACES__MSG__DETAIL__MOTOR_PWM__BUILDER_HPP_
#define MBOT_INTERFACES__MSG__DETAIL__MOTOR_PWM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mbot_interfaces/msg/detail/motor_pwm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorPWM_pwm
{
public:
  Init_MotorPWM_pwm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mbot_interfaces::msg::MotorPWM pwm(::mbot_interfaces::msg::MotorPWM::_pwm_type arg)
  {
    msg_.pwm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mbot_interfaces::msg::MotorPWM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mbot_interfaces::msg::MotorPWM>()
{
  return mbot_interfaces::msg::builder::Init_MotorPWM_pwm();
}

}  // namespace mbot_interfaces

#endif  // MBOT_INTERFACES__MSG__DETAIL__MOTOR_PWM__BUILDER_HPP_
