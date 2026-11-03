// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mbot_interfaces:msg/Pose2DArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mbot_interfaces/msg/detail/pose2_d_array__functions.h"
#include "mbot_interfaces/msg/detail/pose2_d_array__struct.hpp"
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

void Pose2DArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mbot_interfaces::msg::Pose2DArray(_init);
}

void Pose2DArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mbot_interfaces::msg::Pose2DArray *>(message_memory);
  typed_message->~Pose2DArray();
}

size_t size_function__Pose2DArray__poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pose2DArray__poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return &member[index];
}

void * get_function__Pose2DArray__poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return &member[index];
}

void fetch_function__Pose2DArray__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose2D *>(
    get_const_function__Pose2DArray__poses(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose2D *>(untyped_value);
  value = item;
}

void assign_function__Pose2DArray__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose2D *>(
    get_function__Pose2DArray__poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose2D *>(untyped_value);
  item = value;
}

void resize_function__Pose2DArray__poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pose2DArray_message_member_array[1] = {
  {
    "poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose2D>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mbot_interfaces::msg::Pose2DArray, poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pose2DArray__poses,  // size() function pointer
    get_const_function__Pose2DArray__poses,  // get_const(index) function pointer
    get_function__Pose2DArray__poses,  // get(index) function pointer
    fetch_function__Pose2DArray__poses,  // fetch(index, &value) function pointer
    assign_function__Pose2DArray__poses,  // assign(index, value) function pointer
    resize_function__Pose2DArray__poses  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pose2DArray_message_members = {
  "mbot_interfaces::msg",  // message namespace
  "Pose2DArray",  // message name
  1,  // number of fields
  sizeof(mbot_interfaces::msg::Pose2DArray),
  false,  // has_any_key_member_
  Pose2DArray_message_member_array,  // message members
  Pose2DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  Pose2DArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pose2DArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pose2DArray_message_members,
  get_message_typesupport_handle_function,
  &mbot_interfaces__msg__Pose2DArray__get_type_hash,
  &mbot_interfaces__msg__Pose2DArray__get_type_description,
  &mbot_interfaces__msg__Pose2DArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mbot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mbot_interfaces::msg::Pose2DArray>()
{
  return &::mbot_interfaces::msg::rosidl_typesupport_introspection_cpp::Pose2DArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mbot_interfaces, msg, Pose2DArray)() {
  return &::mbot_interfaces::msg::rosidl_typesupport_introspection_cpp::Pose2DArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
