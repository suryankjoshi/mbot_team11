// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mbot_interfaces:msg/BatteryADC.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mbot_interfaces/msg/detail/battery_adc__functions.h"
#include "mbot_interfaces/msg/detail/battery_adc__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mbot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BatteryADC_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mbot_interfaces::msg::BatteryADC(_init);
}

void BatteryADC_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mbot_interfaces::msg::BatteryADC *>(message_memory);
  typed_message->~BatteryADC();
}

size_t size_function__BatteryADC__raw(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__BatteryADC__raw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__BatteryADC__raw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__BatteryADC__raw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__BatteryADC__raw(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__BatteryADC__raw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__BatteryADC__raw(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__BatteryADC__volts(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__BatteryADC__volts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__BatteryADC__volts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__BatteryADC__volts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__BatteryADC__volts(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__BatteryADC__volts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__BatteryADC__volts(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BatteryADC_message_member_array[3] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mbot_interfaces::msg::BatteryADC, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "raw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(mbot_interfaces::msg::BatteryADC, raw),  // bytes offset in struct
    nullptr,  // default value
    size_function__BatteryADC__raw,  // size() function pointer
    get_const_function__BatteryADC__raw,  // get_const(index) function pointer
    get_function__BatteryADC__raw,  // get(index) function pointer
    fetch_function__BatteryADC__raw,  // fetch(index, &value) function pointer
    assign_function__BatteryADC__raw,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "volts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(mbot_interfaces::msg::BatteryADC, volts),  // bytes offset in struct
    nullptr,  // default value
    size_function__BatteryADC__volts,  // size() function pointer
    get_const_function__BatteryADC__volts,  // get_const(index) function pointer
    get_function__BatteryADC__volts,  // get(index) function pointer
    fetch_function__BatteryADC__volts,  // fetch(index, &value) function pointer
    assign_function__BatteryADC__volts,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BatteryADC_message_members = {
  "mbot_interfaces::msg",  // message namespace
  "BatteryADC",  // message name
  3,  // number of fields
  sizeof(mbot_interfaces::msg::BatteryADC),
  false,  // has_any_key_member_
  BatteryADC_message_member_array,  // message members
  BatteryADC_init_function,  // function to initialize message memory (memory has to be allocated)
  BatteryADC_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BatteryADC_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BatteryADC_message_members,
  get_message_typesupport_handle_function,
  &mbot_interfaces__msg__BatteryADC__get_type_hash,
  &mbot_interfaces__msg__BatteryADC__get_type_description,
  &mbot_interfaces__msg__BatteryADC__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mbot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mbot_interfaces::msg::BatteryADC>()
{
  return &::mbot_interfaces::msg::rosidl_typesupport_introspection_cpp::BatteryADC_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mbot_interfaces, msg, BatteryADC)() {
  return &::mbot_interfaces::msg::rosidl_typesupport_introspection_cpp::BatteryADC_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
