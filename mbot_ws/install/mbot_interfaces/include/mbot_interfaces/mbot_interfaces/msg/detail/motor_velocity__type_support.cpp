// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mbot_interfaces:msg/MotorVelocity.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mbot_interfaces/msg/detail/motor_velocity__functions.h"
#include "mbot_interfaces/msg/detail/motor_velocity__struct.hpp"
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

void MotorVelocity_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mbot_interfaces::msg::MotorVelocity(_init);
}

void MotorVelocity_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mbot_interfaces::msg::MotorVelocity *>(message_memory);
  typed_message->~MotorVelocity();
}

size_t size_function__MotorVelocity__velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MotorVelocity__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorVelocity__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorVelocity__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotorVelocity__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotorVelocity__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotorVelocity__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorVelocity_message_member_array[1] = {
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(mbot_interfaces::msg::MotorVelocity, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorVelocity__velocity,  // size() function pointer
    get_const_function__MotorVelocity__velocity,  // get_const(index) function pointer
    get_function__MotorVelocity__velocity,  // get(index) function pointer
    fetch_function__MotorVelocity__velocity,  // fetch(index, &value) function pointer
    assign_function__MotorVelocity__velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorVelocity_message_members = {
  "mbot_interfaces::msg",  // message namespace
  "MotorVelocity",  // message name
  1,  // number of fields
  sizeof(mbot_interfaces::msg::MotorVelocity),
  false,  // has_any_key_member_
  MotorVelocity_message_member_array,  // message members
  MotorVelocity_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorVelocity_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorVelocity_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorVelocity_message_members,
  get_message_typesupport_handle_function,
  &mbot_interfaces__msg__MotorVelocity__get_type_hash,
  &mbot_interfaces__msg__MotorVelocity__get_type_description,
  &mbot_interfaces__msg__MotorVelocity__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mbot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mbot_interfaces::msg::MotorVelocity>()
{
  return &::mbot_interfaces::msg::rosidl_typesupport_introspection_cpp::MotorVelocity_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mbot_interfaces, msg, MotorVelocity)() {
  return &::mbot_interfaces::msg::rosidl_typesupport_introspection_cpp::MotorVelocity_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
