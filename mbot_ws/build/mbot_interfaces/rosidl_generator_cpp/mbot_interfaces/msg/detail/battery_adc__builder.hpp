// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mbot_interfaces:msg/BatteryADC.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mbot_interfaces/msg/battery_adc.hpp"


#ifndef MBOT_INTERFACES__MSG__DETAIL__BATTERY_ADC__BUILDER_HPP_
#define MBOT_INTERFACES__MSG__DETAIL__BATTERY_ADC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mbot_interfaces/msg/detail/battery_adc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_BatteryADC_volts
{
public:
  explicit Init_BatteryADC_volts(::mbot_interfaces::msg::BatteryADC & msg)
  : msg_(msg)
  {}
  ::mbot_interfaces::msg::BatteryADC volts(::mbot_interfaces::msg::BatteryADC::_volts_type arg)
  {
    msg_.volts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mbot_interfaces::msg::BatteryADC msg_;
};

class Init_BatteryADC_raw
{
public:
  explicit Init_BatteryADC_raw(::mbot_interfaces::msg::BatteryADC & msg)
  : msg_(msg)
  {}
  Init_BatteryADC_volts raw(::mbot_interfaces::msg::BatteryADC::_raw_type arg)
  {
    msg_.raw = std::move(arg);
    return Init_BatteryADC_volts(msg_);
  }

private:
  ::mbot_interfaces::msg::BatteryADC msg_;
};

class Init_BatteryADC_stamp
{
public:
  Init_BatteryADC_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryADC_raw stamp(::mbot_interfaces::msg::BatteryADC::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_BatteryADC_raw(msg_);
  }

private:
  ::mbot_interfaces::msg::BatteryADC msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mbot_interfaces::msg::BatteryADC>()
{
  return mbot_interfaces::msg::builder::Init_BatteryADC_stamp();
}

}  // namespace mbot_interfaces

#endif  // MBOT_INTERFACES__MSG__DETAIL__BATTERY_ADC__BUILDER_HPP_
