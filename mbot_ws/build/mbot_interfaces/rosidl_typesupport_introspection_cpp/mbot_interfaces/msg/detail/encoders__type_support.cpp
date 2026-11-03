// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mbot_interfaces:msg/Encoders.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mbot_interfaces/msg/detail/encoders__functions.h"
#include "mbot_interfaces/msg/detail/encoders__struct.hpp"
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

void Encoders_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mbot_interfaces::msg::Encoders(_init);
}

void Encoders_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mbot_interfaces::msg::Encoders *>(message_memory);
  typed_message->~Encoders();
}

size_t size_function__Encoders__ticks(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Encoders__ticks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Encoders__ticks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Encoders__ticks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__Encoders__ticks(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__Encoders__ticks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__Encoders__ticks(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

size_t size_function__Encoders__delta_ticks(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Encoders__delta_ticks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Encoders__delta_ticks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Encoders__delta_ticks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Encoders__delta_ticks(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Encoders__delta_ticks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Encoders__delta_ticks(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Encoders_message_member_array[4] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mbot_interfaces::msg::Encoders, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ticks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(mbot_interfaces::msg::Encoders, ticks),  // bytes offset in struct
    nullptr,  // default value
    size_function__Encoders__ticks,  // size() function pointer
    get_const_function__Encoders__ticks,  // get_const(index) function pointer
    get_function__Encoders__ticks,  // get(index) function pointer
    fetch_function__Encoders__ticks,  // fetch(index, &value) function pointer
    assign_function__Encoders__ticks,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "delta_ticks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(mbot_interfaces::msg::Encoders, delta_ticks),  // bytes offset in struct
    nullptr,  // default value
    size_function__Encoders__delta_ticks,  // size() function pointer
    get_const_function__Encoders__delta_ticks,  // get_const(index) function pointer
    get_function__Encoders__delta_ticks,  // get(index) function pointer
    fetch_function__Encoders__delta_ticks,  // fetch(index, &value) function pointer
    assign_function__Encoders__delta_ticks,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "delta_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mbot_interfaces::msg::Encoders, delta_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Encoders_message_members = {
  "mbot_interfaces::msg",  // message namespace
  "Encoders",  // message name
  4,  // number of fields
  sizeof(mbot_interfaces::msg::Encoders),
  false,  // has_any_key_member_
  Encoders_message_member_array,  // message members
  Encoders_init_function,  // function to initialize message memory (memory has to be allocated)
  Encoders_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Encoders_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Encoders_message_members,
  get_message_typesupport_handle_function,
  &mbot_interfaces__msg__Encoders__get_type_hash,
  &mbot_interfaces__msg__Encoders__get_type_description,
  &mbot_interfaces__msg__Encoders__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mbot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mbot_interfaces::msg::Encoders>()
{
  return &::mbot_interfaces::msg::rosidl_typesupport_introspection_cpp::Encoders_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mbot_interfaces, msg, Encoders)() {
  return &::mbot_interfaces::msg::rosidl_typesupport_introspection_cpp::Encoders_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
