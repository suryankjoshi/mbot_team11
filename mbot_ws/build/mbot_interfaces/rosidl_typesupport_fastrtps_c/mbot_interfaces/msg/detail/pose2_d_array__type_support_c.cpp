// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mbot_interfaces:msg/Pose2DArray.idl
// generated code does not contain a copyright notice
#include "mbot_interfaces/msg/detail/pose2_d_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mbot_interfaces/msg/detail/pose2_d_array__struct.h"
#include "mbot_interfaces/msg/detail/pose2_d_array__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose2_d__functions.h"  // poses

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mbot_interfaces
bool cdr_serialize_geometry_msgs__msg__Pose2D(
  const geometry_msgs__msg__Pose2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mbot_interfaces
bool cdr_deserialize_geometry_msgs__msg__Pose2D(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Pose2D * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mbot_interfaces
size_t get_serialized_size_geometry_msgs__msg__Pose2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mbot_interfaces
size_t max_serialized_size_geometry_msgs__msg__Pose2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mbot_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Pose2D(
  const geometry_msgs__msg__Pose2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mbot_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Pose2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mbot_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Pose2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mbot_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D)();


using _Pose2DArray__ros_msg_type = mbot_interfaces__msg__Pose2DArray;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
bool cdr_serialize_mbot_interfaces__msg__Pose2DArray(
  const mbot_interfaces__msg__Pose2DArray * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: poses
  {
    size_t size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Pose2D(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
bool cdr_deserialize_mbot_interfaces__msg__Pose2DArray(
  eprosima::fastcdr::Cdr & cdr,
  mbot_interfaces__msg__Pose2DArray * ros_message)
{
  // Field name: poses
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->poses.data) {
      geometry_msgs__msg__Pose2D__Sequence__fini(&ros_message->poses);
    }
    if (!geometry_msgs__msg__Pose2D__Sequence__init(&ros_message->poses, size)) {
      fprintf(stderr, "failed to create array for field 'poses'");
      return false;
    }
    auto array_ptr = ros_message->poses.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Pose2D(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
size_t get_serialized_size_mbot_interfaces__msg__Pose2DArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Pose2DArray__ros_msg_type * ros_message = static_cast<const _Pose2DArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: poses
  {
    size_t array_size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Pose2D(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
size_t max_serialized_size_mbot_interfaces__msg__Pose2DArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: poses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mbot_interfaces__msg__Pose2DArray;
    is_plain =
      (
      offsetof(DataType, poses) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
bool cdr_serialize_key_mbot_interfaces__msg__Pose2DArray(
  const mbot_interfaces__msg__Pose2DArray * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: poses
  {
    size_t size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Pose2D(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
size_t get_serialized_size_key_mbot_interfaces__msg__Pose2DArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Pose2DArray__ros_msg_type * ros_message = static_cast<const _Pose2DArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: poses
  {
    size_t array_size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose2D(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
size_t max_serialized_size_key_mbot_interfaces__msg__Pose2DArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: poses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mbot_interfaces__msg__Pose2DArray;
    is_plain =
      (
      offsetof(DataType, poses) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Pose2DArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mbot_interfaces__msg__Pose2DArray * ros_message = static_cast<const mbot_interfaces__msg__Pose2DArray *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mbot_interfaces__msg__Pose2DArray(ros_message, cdr);
}

static bool _Pose2DArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mbot_interfaces__msg__Pose2DArray * ros_message = static_cast<mbot_interfaces__msg__Pose2DArray *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mbot_interfaces__msg__Pose2DArray(cdr, ros_message);
}

static uint32_t _Pose2DArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mbot_interfaces__msg__Pose2DArray(
      untyped_ros_message, 0));
}

static size_t _Pose2DArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mbot_interfaces__msg__Pose2DArray(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Pose2DArray = {
  "mbot_interfaces::msg",
  "Pose2DArray",
  _Pose2DArray__cdr_serialize,
  _Pose2DArray__cdr_deserialize,
  _Pose2DArray__get_serialized_size,
  _Pose2DArray__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Pose2DArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Pose2DArray,
  get_message_typesupport_handle_function,
  &mbot_interfaces__msg__Pose2DArray__get_type_hash,
  &mbot_interfaces__msg__Pose2DArray__get_type_description,
  &mbot_interfaces__msg__Pose2DArray__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mbot_interfaces, msg, Pose2DArray)() {
  return &_Pose2DArray__type_support;
}

#if defined(__cplusplus)
}
#endif
