// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mbot_interfaces:msg/BatteryADC.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mbot_interfaces/msg/detail/battery_adc__rosidl_typesupport_introspection_c.h"
#include "mbot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mbot_interfaces/msg/detail/battery_adc__functions.h"
#include "mbot_interfaces/msg/detail/battery_adc__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__BatteryADC_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mbot_interfaces__msg__BatteryADC__init(message_memory);
}

void mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__BatteryADC_fini_function(void * message_memory)
{
  mbot_interfaces__msg__BatteryADC__fini(message_memory);
}

size_t mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__size_function__BatteryADC__raw(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__get_const_function__BatteryADC__raw(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__get_function__BatteryADC__raw(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__fetch_function__BatteryADC__raw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__get_const_function__BatteryADC__raw(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__assign_function__BatteryADC__raw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__get_function__BatteryADC__raw(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

size_t mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__size_function__BatteryADC__volts(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__get_const_function__BatteryADC__volts(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__get_function__BatteryADC__volts(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__fetch_function__BatteryADC__volts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__get_const_function__BatteryADC__volts(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__assign_function__BatteryADC__volts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__get_function__BatteryADC__volts(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__BatteryADC_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mbot_interfaces__msg__BatteryADC, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(mbot_interfaces__msg__BatteryADC, raw),  // bytes offset in struct
    NULL,  // default value
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__size_function__BatteryADC__raw,  // size() function pointer
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__get_const_function__BatteryADC__raw,  // get_const(index) function pointer
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__get_function__BatteryADC__raw,  // get(index) function pointer
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__fetch_function__BatteryADC__raw,  // fetch(index, &value) function pointer
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__assign_function__BatteryADC__raw,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "volts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(mbot_interfaces__msg__BatteryADC, volts),  // bytes offset in struct
    NULL,  // default value
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__size_function__BatteryADC__volts,  // size() function pointer
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__get_const_function__BatteryADC__volts,  // get_const(index) function pointer
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__get_function__BatteryADC__volts,  // get(index) function pointer
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__fetch_function__BatteryADC__volts,  // fetch(index, &value) function pointer
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__assign_function__BatteryADC__volts,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__BatteryADC_message_members = {
  "mbot_interfaces__msg",  // message namespace
  "BatteryADC",  // message name
  3,  // number of fields
  sizeof(mbot_interfaces__msg__BatteryADC),
  false,  // has_any_key_member_
  mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__BatteryADC_message_member_array,  // message members
  mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__BatteryADC_init_function,  // function to initialize message memory (memory has to be allocated)
  mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__BatteryADC_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__BatteryADC_message_type_support_handle = {
  0,
  &mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__BatteryADC_message_members,
  get_message_typesupport_handle_function,
  &mbot_interfaces__msg__BatteryADC__get_type_hash,
  &mbot_interfaces__msg__BatteryADC__get_type_description,
  &mbot_interfaces__msg__BatteryADC__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mbot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mbot_interfaces, msg, BatteryADC)() {
  mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__BatteryADC_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__BatteryADC_message_type_support_handle.typesupport_identifier) {
    mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__BatteryADC_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mbot_interfaces__msg__BatteryADC__rosidl_typesupport_introspection_c__BatteryADC_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
