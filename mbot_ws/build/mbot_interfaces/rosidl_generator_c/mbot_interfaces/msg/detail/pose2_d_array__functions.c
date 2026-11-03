// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mbot_interfaces:msg/Pose2DArray.idl
// generated code does not contain a copyright notice
#include "mbot_interfaces/msg/detail/pose2_d_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `poses`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
mbot_interfaces__msg__Pose2DArray__init(mbot_interfaces__msg__Pose2DArray * msg)
{
  if (!msg) {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose2D__Sequence__init(&msg->poses, 0)) {
    mbot_interfaces__msg__Pose2DArray__fini(msg);
    return false;
  }
  return true;
}

void
mbot_interfaces__msg__Pose2DArray__fini(mbot_interfaces__msg__Pose2DArray * msg)
{
  if (!msg) {
    return;
  }
  // poses
  geometry_msgs__msg__Pose2D__Sequence__fini(&msg->poses);
}

bool
mbot_interfaces__msg__Pose2DArray__are_equal(const mbot_interfaces__msg__Pose2DArray * lhs, const mbot_interfaces__msg__Pose2DArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose2D__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  return true;
}

bool
mbot_interfaces__msg__Pose2DArray__copy(
  const mbot_interfaces__msg__Pose2DArray * input,
  mbot_interfaces__msg__Pose2DArray * output)
{
  if (!input || !output) {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose2D__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  return true;
}

mbot_interfaces__msg__Pose2DArray *
mbot_interfaces__msg__Pose2DArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mbot_interfaces__msg__Pose2DArray * msg = (mbot_interfaces__msg__Pose2DArray *)allocator.allocate(sizeof(mbot_interfaces__msg__Pose2DArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mbot_interfaces__msg__Pose2DArray));
  bool success = mbot_interfaces__msg__Pose2DArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mbot_interfaces__msg__Pose2DArray__destroy(mbot_interfaces__msg__Pose2DArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mbot_interfaces__msg__Pose2DArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mbot_interfaces__msg__Pose2DArray__Sequence__init(mbot_interfaces__msg__Pose2DArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mbot_interfaces__msg__Pose2DArray * data = NULL;

  if (size) {
    data = (mbot_interfaces__msg__Pose2DArray *)allocator.zero_allocate(size, sizeof(mbot_interfaces__msg__Pose2DArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mbot_interfaces__msg__Pose2DArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mbot_interfaces__msg__Pose2DArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mbot_interfaces__msg__Pose2DArray__Sequence__fini(mbot_interfaces__msg__Pose2DArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mbot_interfaces__msg__Pose2DArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mbot_interfaces__msg__Pose2DArray__Sequence *
mbot_interfaces__msg__Pose2DArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mbot_interfaces__msg__Pose2DArray__Sequence * array = (mbot_interfaces__msg__Pose2DArray__Sequence *)allocator.allocate(sizeof(mbot_interfaces__msg__Pose2DArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mbot_interfaces__msg__Pose2DArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mbot_interfaces__msg__Pose2DArray__Sequence__destroy(mbot_interfaces__msg__Pose2DArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mbot_interfaces__msg__Pose2DArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mbot_interfaces__msg__Pose2DArray__Sequence__are_equal(const mbot_interfaces__msg__Pose2DArray__Sequence * lhs, const mbot_interfaces__msg__Pose2DArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mbot_interfaces__msg__Pose2DArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mbot_interfaces__msg__Pose2DArray__Sequence__copy(
  const mbot_interfaces__msg__Pose2DArray__Sequence * input,
  mbot_interfaces__msg__Pose2DArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mbot_interfaces__msg__Pose2DArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mbot_interfaces__msg__Pose2DArray * data =
      (mbot_interfaces__msg__Pose2DArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mbot_interfaces__msg__Pose2DArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mbot_interfaces__msg__Pose2DArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mbot_interfaces__msg__Pose2DArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
