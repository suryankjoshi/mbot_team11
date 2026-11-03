// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mbot_interfaces:msg/BatteryADC.idl
// generated code does not contain a copyright notice

#include "mbot_interfaces/msg/detail/battery_adc__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mbot_interfaces
const rosidl_type_hash_t *
mbot_interfaces__msg__BatteryADC__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6c, 0x1f, 0x77, 0x14, 0x9f, 0xe2, 0xa3, 0x50,
      0x80, 0x66, 0xe7, 0xd5, 0x65, 0x36, 0x80, 0xc0,
      0x77, 0xd6, 0x34, 0xd7, 0xe8, 0x24, 0xef, 0x75,
      0x70, 0xb3, 0x29, 0x96, 0xfd, 0x87, 0x76, 0x5f,
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

static char mbot_interfaces__msg__BatteryADC__TYPE_NAME[] = "mbot_interfaces/msg/BatteryADC";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mbot_interfaces__msg__BatteryADC__FIELD_NAME__stamp[] = "stamp";
static char mbot_interfaces__msg__BatteryADC__FIELD_NAME__raw[] = "raw";
static char mbot_interfaces__msg__BatteryADC__FIELD_NAME__volts[] = "volts";

static rosidl_runtime_c__type_description__Field mbot_interfaces__msg__BatteryADC__FIELDS[] = {
  {
    {mbot_interfaces__msg__BatteryADC__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mbot_interfaces__msg__BatteryADC__FIELD_NAME__raw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mbot_interfaces__msg__BatteryADC__FIELD_NAME__volts, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mbot_interfaces__msg__BatteryADC__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mbot_interfaces__msg__BatteryADC__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mbot_interfaces__msg__BatteryADC__TYPE_NAME, 30, 30},
      {mbot_interfaces__msg__BatteryADC__FIELDS, 3, 3},
    },
    {mbot_interfaces__msg__BatteryADC__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp    # ROS time when analog data was read\n"
  "int16[4] raw                     # no units\n"
  "float32[4] volts                 # volts";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mbot_interfaces__msg__BatteryADC__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mbot_interfaces__msg__BatteryADC__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 154, 154},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mbot_interfaces__msg__BatteryADC__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mbot_interfaces__msg__BatteryADC__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
