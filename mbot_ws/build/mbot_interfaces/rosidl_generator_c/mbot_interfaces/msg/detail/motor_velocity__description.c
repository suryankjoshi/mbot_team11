// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mbot_interfaces:msg/MotorVelocity.idl
// generated code does not contain a copyright notice

#include "mbot_interfaces/msg/detail/motor_velocity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mbot_interfaces
const rosidl_type_hash_t *
mbot_interfaces__msg__MotorVelocity__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x81, 0x70, 0xb2, 0x4a, 0x28, 0xec, 0x12, 0x9c,
      0x43, 0x07, 0x82, 0xd3, 0x05, 0x9e, 0x4f, 0x54,
      0x4d, 0xee, 0xe2, 0x08, 0xad, 0xdf, 0xb9, 0x72,
      0xa7, 0x8e, 0xf7, 0x75, 0xdf, 0x4b, 0x1e, 0x0f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mbot_interfaces__msg__MotorVelocity__TYPE_NAME[] = "mbot_interfaces/msg/MotorVelocity";

// Define type names, field names, and default values
static char mbot_interfaces__msg__MotorVelocity__FIELD_NAME__velocity[] = "velocity";

static rosidl_runtime_c__type_description__Field mbot_interfaces__msg__MotorVelocity__FIELDS[] = {
  {
    {mbot_interfaces__msg__MotorVelocity__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mbot_interfaces__msg__MotorVelocity__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mbot_interfaces__msg__MotorVelocity__TYPE_NAME, 33, 33},
      {mbot_interfaces__msg__MotorVelocity__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[3] velocity  # [rad/s]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mbot_interfaces__msg__MotorVelocity__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mbot_interfaces__msg__MotorVelocity__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 30, 30},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mbot_interfaces__msg__MotorVelocity__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mbot_interfaces__msg__MotorVelocity__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
