// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mbot_interfaces:msg/MotorPWM.idl
// generated code does not contain a copyright notice

#include "mbot_interfaces/msg/detail/motor_pwm__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mbot_interfaces
const rosidl_type_hash_t *
mbot_interfaces__msg__MotorPWM__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0x96, 0x46, 0x01, 0xfb, 0x9a, 0x4b, 0x4e,
      0xcb, 0x1d, 0xfe, 0xe0, 0x94, 0x8c, 0x91, 0x85,
      0x16, 0x09, 0x4e, 0xca, 0x5d, 0x7a, 0x3d, 0x3e,
      0x82, 0x62, 0x67, 0xb0, 0x1f, 0x53, 0xe0, 0xa3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mbot_interfaces__msg__MotorPWM__TYPE_NAME[] = "mbot_interfaces/msg/MotorPWM";

// Define type names, field names, and default values
static char mbot_interfaces__msg__MotorPWM__FIELD_NAME__pwm[] = "pwm";

static rosidl_runtime_c__type_description__Field mbot_interfaces__msg__MotorPWM__FIELDS[] = {
  {
    {mbot_interfaces__msg__MotorPWM__FIELD_NAME__pwm, 3, 3},
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
mbot_interfaces__msg__MotorPWM__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mbot_interfaces__msg__MotorPWM__TYPE_NAME, 28, 28},
      {mbot_interfaces__msg__MotorPWM__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[3] pwm  # [-1.0, 1.0]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mbot_interfaces__msg__MotorPWM__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mbot_interfaces__msg__MotorPWM__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mbot_interfaces__msg__MotorPWM__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mbot_interfaces__msg__MotorPWM__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
