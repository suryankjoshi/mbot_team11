// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mbot_interfaces:msg/Pose2DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mbot_interfaces/msg/pose2_d_array.hpp"


#ifndef MBOT_INTERFACES__MSG__DETAIL__POSE2_D_ARRAY__TRAITS_HPP_
#define MBOT_INTERFACES__MSG__DETAIL__POSE2_D_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mbot_interfaces/msg/detail/pose2_d_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace mbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pose2DArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
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
  const Pose2DArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pose2DArray & msg, bool use_flow_style = false)
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
  const mbot_interfaces::msg::Pose2DArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  mbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mbot_interfaces::msg::Pose2DArray & msg)
{
  return mbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mbot_interfaces::msg::Pose2DArray>()
{
  return "mbot_interfaces::msg::Pose2DArray";
}

template<>
inline const char * name<mbot_interfaces::msg::Pose2DArray>()
{
  return "mbot_interfaces/msg/Pose2DArray";
}

template<>
struct has_fixed_size<mbot_interfaces::msg::Pose2DArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mbot_interfaces::msg::Pose2DArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mbot_interfaces::msg::Pose2DArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MBOT_INTERFACES__MSG__DETAIL__POSE2_D_ARRAY__TRAITS_HPP_
