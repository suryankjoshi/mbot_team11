// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mbot_interfaces:msg/MotorPWM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mbot_interfaces/msg/motor_pwm.hpp"


#ifndef MBOT_INTERFACES__MSG__DETAIL__MOTOR_PWM__TRAITS_HPP_
#define MBOT_INTERFACES__MSG__DETAIL__MOTOR_PWM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mbot_interfaces/msg/detail/motor_pwm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorPWM & msg,
  std::ostream & out)
{
  out << "{";
  // member: pwm
  {
    if (msg.pwm.size() == 0) {
      out << "pwm: []";
    } else {
      out << "pwm: [";
      size_t pending_items = msg.pwm.size();
      for (auto item : msg.pwm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorPWM & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pwm.size() == 0) {
      out << "pwm: []\n";
    } else {
      out << "pwm:\n";
      for (auto item : msg.pwm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorPWM & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mbot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mbot_interfaces::msg::MotorPWM & msg,
  std::ostream & out, size_t indentation = 0)
{
  mbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mbot_interfaces::msg::MotorPWM & msg)
{
  return mbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mbot_interfaces::msg::MotorPWM>()
{
  return "mbot_interfaces::msg::MotorPWM";
}

template<>
inline const char * name<mbot_interfaces::msg::MotorPWM>()
{
  return "mbot_interfaces/msg/MotorPWM";
}

template<>
struct has_fixed_size<mbot_interfaces::msg::MotorPWM>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mbot_interfaces::msg::MotorPWM>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mbot_interfaces::msg::MotorPWM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MBOT_INTERFACES__MSG__DETAIL__MOTOR_PWM__TRAITS_HPP_
