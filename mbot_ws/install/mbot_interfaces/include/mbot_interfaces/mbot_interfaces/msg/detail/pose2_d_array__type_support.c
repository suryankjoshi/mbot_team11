// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mbot_interfaces:msg/Pose2DArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mbot_interfaces/msg/detail/pose2_d_array__rosidl_typesupport_introspection_c.h"
#include "mbot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mbot_interfaces/msg/detail/pose2_d_array__functions.h"
#include "mbot_interfaces/msg/detail/pose2_d_array__struct.h"


// Include directives for member types
// Member `poses`
#include "geometry_msgs/msg/pose2_d.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__Pose2DArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mbot_interfaces__msg__Pose2DArray__init(message_memory);
}

void mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__Pose2DArray_fini_function(void * message_memory)
{
  mbot_interfaces__msg__Pose2DArray__fini(message_memory);
}

size_t mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__size_function__Pose2DArray__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose2D__Sequence * member =
    (const geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return member->size;
}

const void * mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__get_const_function__Pose2DArray__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose2D__Sequence * member =
    (const geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__get_function__Pose2DArray__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose2D__Sequence * member =
    (geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__fetch_function__Pose2DArray__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose2D * item =
    ((const geometry_msgs__msg__Pose2D *)
    mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__get_const_function__Pose2DArray__poses(untyped_member, index));
  geometry_msgs__msg__Pose2D * value =
    (geometry_msgs__msg__Pose2D *)(untyped_value);
  *value = *item;
}

void mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__assign_function__Pose2DArray__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose2D * item =
    ((geometry_msgs__msg__Pose2D *)
    mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__get_function__Pose2DArray__poses(untyped_member, index));
  const geometry_msgs__msg__Pose2D * value =
    (const geometry_msgs__msg__Pose2D *)(untyped_value);
  *item = *value;
}

bool mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__resize_function__Pose2DArray__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose2D__Sequence * member =
    (geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose2D__Sequence__fini(member);
  return geometry_msgs__msg__Pose2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__Pose2DArray_message_member_array[1] = {
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mbot_interfaces__msg__Pose2DArray, poses),  // bytes offset in struct
    NULL,  // default value
    mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__size_function__Pose2DArray__poses,  // size() function pointer
    mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__get_const_function__Pose2DArray__poses,  // get_const(index) function pointer
    mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__get_function__Pose2DArray__poses,  // get(index) function pointer
    mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__fetch_function__Pose2DArray__poses,  // fetch(index, &value) function pointer
    mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__assign_function__Pose2DArray__poses,  // assign(index, value) function pointer
    mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__resize_function__Pose2DArray__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__Pose2DArray_message_members = {
  "mbot_interfaces__msg",  // message namespace
  "Pose2DArray",  // message name
  1,  // number of fields
  sizeof(mbot_interfaces__msg__Pose2DArray),
  false,  // has_any_key_member_
  mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__Pose2DArray_message_member_array,  // message members
  mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__Pose2DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__Pose2DArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__Pose2DArray_message_type_support_handle = {
  0,
  &mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__Pose2DArray_message_members,
  get_message_typesupport_handle_function,
  &mbot_interfaces__msg__Pose2DArray__get_type_hash,
  &mbot_interfaces__msg__Pose2DArray__get_type_description,
  &mbot_interfaces__msg__Pose2DArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mbot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mbot_interfaces, msg, Pose2DArray)() {
  mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__Pose2DArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__Pose2DArray_message_type_support_handle.typesupport_identifier) {
    mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__Pose2DArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mbot_interfaces__msg__Pose2DArray__rosidl_typesupport_introspection_c__Pose2DArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
