// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mbot_interfaces:msg/Pose2DArray.idl
// generated code does not contain a copyright notice

#include "mbot_interfaces/msg/detail/pose2_d_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mbot_interfaces
const rosidl_type_hash_t *
mbot_interfaces__msg__Pose2DArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb9, 0x7b, 0x5d, 0x5d, 0x67, 0x8e, 0xf2, 0x4f,
      0x61, 0xed, 0xb3, 0x81, 0x50, 0x08, 0x7d, 0xe2,
      0x21, 0x61, 0x9f, 0x2f, 0x26, 0xcb, 0x4d, 0xe2,
      0x68, 0xac, 0x67, 0xf8, 0x09, 0xe6, 0xf4, 0x6f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Pose2D__EXPECTED_HASH = {1, {
    0xd6, 0x8e, 0xfa, 0x5b, 0x46, 0xe7, 0x0f, 0x7b,
    0x16, 0xca, 0x23, 0x08, 0x54, 0x74, 0xfd, 0xac,
    0x5a, 0x44, 0xb6, 0x38, 0x78, 0x3e, 0xc4, 0x2f,
    0x66, 0x1d, 0xa6, 0x4d, 0xa4, 0x72, 0x4c, 0xcc,
  }};
#endif

static char mbot_interfaces__msg__Pose2DArray__TYPE_NAME[] = "mbot_interfaces/msg/Pose2DArray";
static char geometry_msgs__msg__Pose2D__TYPE_NAME[] = "geometry_msgs/msg/Pose2D";

// Define type names, field names, and default values
static char mbot_interfaces__msg__Pose2DArray__FIELD_NAME__poses[] = "poses";

static rosidl_runtime_c__type_description__Field mbot_interfaces__msg__Pose2DArray__FIELDS[] = {
  {
    {mbot_interfaces__msg__Pose2DArray__FIELD_NAME__poses, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mbot_interfaces__msg__Pose2DArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mbot_interfaces__msg__Pose2DArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mbot_interfaces__msg__Pose2DArray__TYPE_NAME, 31, 31},
      {mbot_interfaces__msg__Pose2DArray__FIELDS, 1, 1},
    },
    {mbot_interfaces__msg__Pose2DArray__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Pose2D__EXPECTED_HASH, geometry_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "geometry_msgs/Pose2D[] poses";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mbot_interfaces__msg__Pose2DArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mbot_interfaces__msg__Pose2DArray__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 28, 28},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mbot_interfaces__msg__Pose2DArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mbot_interfaces__msg__Pose2DArray__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
