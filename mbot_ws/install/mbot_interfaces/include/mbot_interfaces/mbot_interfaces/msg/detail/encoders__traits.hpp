// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mbot_interfaces:msg/Encoders.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mbot_interfaces/msg/encoders.hpp"


#ifndef MBOT_INTERFACES__MSG__DETAIL__ENCODERS__TRAITS_HPP_
#define MBOT_INTERFACES__MSG__DETAIL__ENCODERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mbot_interfaces/msg/detail/encoders__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Encoders & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: ticks
  {
    if (msg.ticks.size() == 0) {
      out << "ticks: []";
    } else {
      out << "ticks: [";
      size_t pending_items = msg.ticks.size();
      for (auto item : msg.ticks) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: delta_ticks
  {
    if (msg.delta_ticks.size() == 0) {
      out << "delta_ticks: []";
    } else {
      out << "delta_ticks: [";
      size_t pending_items = msg.delta_ticks.size();
      for (auto item : msg.delta_ticks) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: delta_time
  {
    out << "delta_time: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Encoders & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ticks.size() == 0) {
      out << "ticks: []\n";
    } else {
      out << "ticks:\n";
      for (auto item : msg.ticks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: delta_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.delta_ticks.size() == 0) {
      out << "delta_ticks: []\n";
    } else {
      out << "delta_ticks:\n";
      for (auto item : msg.delta_ticks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: delta_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_time: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Encoders & msg, bool use_flow_style = false)
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
  const mbot_interfaces::msg::Encoders & msg,
  std::ostream & out, size_t indentation = 0)
{
  mbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mbot_interfaces::msg::Encoders & msg)
{
  return mbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mbot_interfaces::msg::Encoders>()
{
  return "mbot_interfaces::msg::Encoders";
}

template<>
inline const char * name<mbot_interfaces::msg::Encoders>()
{
  return "mbot_interfaces/msg/Encoders";
}

template<>
struct has_fixed_size<mbot_interfaces::msg::Encoders>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mbot_interfaces::msg::Encoders>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mbot_interfaces::msg::Encoders>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MBOT_INTERFACES__MSG__DETAIL__ENCODERS__TRAITS_HPP_
