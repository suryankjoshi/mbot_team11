// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mbot_interfaces:msg/Encoders.idl
// generated code does not contain a copyright notice

#include "mbot_interfaces/msg/detail/encoders__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mbot_interfaces
const rosidl_type_hash_t *
mbot_interfaces__msg__Encoders__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0x0e, 0x74, 0xdf, 0xd6, 0x23, 0x3c, 0x78,
      0x4f, 0x4c, 0x1f, 0x6d, 0xca, 0xb4, 0x8c, 0x40,
      0x1e, 0x82, 0x0d, 0x64, 0xd9, 0x63, 0x96, 0x9a,
      0x1a, 0xc5, 0x13, 0x14, 0xe9, 0x32, 0x93, 0xdd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char mbot_interfaces__msg__Encoders__TYPE_NAME[] = "mbot_interfaces/msg/Encoders";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mbot_interfaces__msg__Encoders__FIELD_NAME__stamp[] = "stamp";
static char mbot_interfaces__msg__Encoders__FIELD_NAME__ticks[] = "ticks";
static char mbot_interfaces__msg__Encoders__FIELD_NAME__delta_ticks[] = "delta_ticks";
static char mbot_interfaces__msg__Encoders__FIELD_NAME__delta_time[] = "delta_time";

static rosidl_runtime_c__type_description__Field mbot_interfaces__msg__Encoders__FIELDS[] = {
  {
    {mbot_interfaces__msg__Encoders__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mbot_interfaces__msg__Encoders__FIELD_NAME__ticks, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mbot_interfaces__msg__Encoders__FIELD_NAME__delta_ticks, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mbot_interfaces__msg__Encoders__FIELD_NAME__delta_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mbot_interfaces__msg__Encoders__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mbot_interfaces__msg__Encoders__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mbot_interfaces__msg__Encoders__TYPE_NAME, 28, 28},
      {mbot_interfaces__msg__Encoders__FIELDS, 4, 4},
    },
    {mbot_interfaces__msg__Encoders__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp    # ROS time when encoder data was read\n"
  "int64[3] ticks                   # no units\n"
  "int32[3] delta_ticks             # no units  \n"
  "int32 delta_time                 # [usec]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mbot_interfaces__msg__Encoders__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mbot_interfaces__msg__Encoders__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 202, 202},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mbot_interfaces__msg__Encoders__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mbot_interfaces__msg__Encoders__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
