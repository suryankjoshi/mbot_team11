// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mbot_interfaces:msg/BatteryADC.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mbot_interfaces/msg/battery_adc.hpp"


#ifndef MBOT_INTERFACES__MSG__DETAIL__BATTERY_ADC__TRAITS_HPP_
#define MBOT_INTERFACES__MSG__DETAIL__BATTERY_ADC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mbot_interfaces/msg/detail/battery_adc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BatteryADC & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: raw
  {
    if (msg.raw.size() == 0) {
      out << "raw: []";
    } else {
      out << "raw: [";
      size_t pending_items = msg.raw.size();
      for (auto item : msg.raw) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: volts
  {
    if (msg.volts.size() == 0) {
      out << "volts: []";
    } else {
      out << "volts: [";
      size_t pending_items = msg.volts.size();
      for (auto item : msg.volts) {
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
  const BatteryADC & msg,
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

  // member: raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.raw.size() == 0) {
      out << "raw: []\n";
    } else {
      out << "raw:\n";
      for (auto item : msg.raw) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: volts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.volts.size() == 0) {
      out << "volts: []\n";
    } else {
      out << "volts:\n";
      for (auto item : msg.volts) {
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

inline std::string to_yaml(const BatteryADC & msg, bool use_flow_style = false)
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
  const mbot_interfaces::msg::BatteryADC & msg,
  std::ostream & out, size_t indentation = 0)
{
  mbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mbot_interfaces::msg::BatteryADC & msg)
{
  return mbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mbot_interfaces::msg::BatteryADC>()
{
  return "mbot_interfaces::msg::BatteryADC";
}

template<>
inline const char * name<mbot_interfaces::msg::BatteryADC>()
{
  return "mbot_interfaces/msg/BatteryADC";
}

template<>
struct has_fixed_size<mbot_interfaces::msg::BatteryADC>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mbot_interfaces::msg::BatteryADC>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mbot_interfaces::msg::BatteryADC>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MBOT_INTERFACES__MSG__DETAIL__BATTERY_ADC__TRAITS_HPP_
