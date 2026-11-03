// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mbot_interfaces:msg/Encoders.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mbot_interfaces/msg/encoders.hpp"


#ifndef MBOT_INTERFACES__MSG__DETAIL__ENCODERS__BUILDER_HPP_
#define MBOT_INTERFACES__MSG__DETAIL__ENCODERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mbot_interfaces/msg/detail/encoders__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Encoders_delta_time
{
public:
  explicit Init_Encoders_delta_time(::mbot_interfaces::msg::Encoders & msg)
  : msg_(msg)
  {}
  ::mbot_interfaces::msg::Encoders delta_time(::mbot_interfaces::msg::Encoders::_delta_time_type arg)
  {
    msg_.delta_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mbot_interfaces::msg::Encoders msg_;
};

class Init_Encoders_delta_ticks
{
public:
  explicit Init_Encoders_delta_ticks(::mbot_interfaces::msg::Encoders & msg)
  : msg_(msg)
  {}
  Init_Encoders_delta_time delta_ticks(::mbot_interfaces::msg::Encoders::_delta_ticks_type arg)
  {
    msg_.delta_ticks = std::move(arg);
    return Init_Encoders_delta_time(msg_);
  }

private:
  ::mbot_interfaces::msg::Encoders msg_;
};

class Init_Encoders_ticks
{
public:
  explicit Init_Encoders_ticks(::mbot_interfaces::msg::Encoders & msg)
  : msg_(msg)
  {}
  Init_Encoders_delta_ticks ticks(::mbot_interfaces::msg::Encoders::_ticks_type arg)
  {
    msg_.ticks = std::move(arg);
    return Init_Encoders_delta_ticks(msg_);
  }

private:
  ::mbot_interfaces::msg::Encoders msg_;
};

class Init_Encoders_stamp
{
public:
  Init_Encoders_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Encoders_ticks stamp(::mbot_interfaces::msg::Encoders::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Encoders_ticks(msg_);
  }

private:
  ::mbot_interfaces::msg::Encoders msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mbot_interfaces::msg::Encoders>()
{
  return mbot_interfaces::msg::builder::Init_Encoders_stamp();
}

}  // namespace mbot_interfaces

#endif  // MBOT_INTERFACES__MSG__DETAIL__ENCODERS__BUILDER_HPP_
