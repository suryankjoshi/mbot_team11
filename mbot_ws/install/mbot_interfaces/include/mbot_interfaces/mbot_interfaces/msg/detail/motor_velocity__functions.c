// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mbot_interfaces:msg/MotorVelocity.idl
// generated code does not contain a copyright notice
#include "mbot_interfaces/msg/detail/motor_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mbot_interfaces__msg__MotorVelocity__init(mbot_interfaces__msg__MotorVelocity * msg)
{
  if (!msg) {
    return false;
  }
  // velocity
  return true;
}

void
mbot_interfaces__msg__MotorVelocity__fini(mbot_interfaces__msg__MotorVelocity * msg)
{
  if (!msg) {
    return;
  }
  // velocity
}

bool
mbot_interfaces__msg__MotorVelocity__are_equal(const mbot_interfaces__msg__MotorVelocity * lhs, const mbot_interfaces__msg__MotorVelocity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // velocity
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->velocity[i] != rhs->velocity[i]) {
      return false;
    }
  }
  return true;
}

bool
mbot_interfaces__msg__MotorVelocity__copy(
  const mbot_interfaces__msg__MotorVelocity * input,
  mbot_interfaces__msg__MotorVelocity * output)
{
  if (!input || !output) {
    return false;
  }
  // velocity
  for (size_t i = 0; i < 3; ++i) {
    output->velocity[i] = input->velocity[i];
  }
  return true;
}

mbot_interfaces__msg__MotorVelocity *
mbot_interfaces__msg__MotorVelocity__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mbot_interfaces__msg__MotorVelocity * msg = (mbot_interfaces__msg__MotorVelocity *)allocator.allocate(sizeof(mbot_interfaces__msg__MotorVelocity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mbot_interfaces__msg__MotorVelocity));
  bool success = mbot_interfaces__msg__MotorVelocity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mbot_interfaces__msg__MotorVelocity__destroy(mbot_interfaces__msg__MotorVelocity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mbot_interfaces__msg__MotorVelocity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mbot_interfaces__msg__MotorVelocity__Sequence__init(mbot_interfaces__msg__MotorVelocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mbot_interfaces__msg__MotorVelocity * data = NULL;

  if (size) {
    data = (mbot_interfaces__msg__MotorVelocity *)allocator.zero_allocate(size, sizeof(mbot_interfaces__msg__MotorVelocity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mbot_interfaces__msg__MotorVelocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mbot_interfaces__msg__MotorVelocity__fini(&data[i - 1]);
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
mbot_interfaces__msg__MotorVelocity__Sequence__fini(mbot_interfaces__msg__MotorVelocity__Sequence * array)
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
      mbot_interfaces__msg__MotorVelocity__fini(&array->data[i]);
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

mbot_interfaces__msg__MotorVelocity__Sequence *
mbot_interfaces__msg__MotorVelocity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mbot_interfaces__msg__MotorVelocity__Sequence * array = (mbot_interfaces__msg__MotorVelocity__Sequence *)allocator.allocate(sizeof(mbot_interfaces__msg__MotorVelocity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mbot_interfaces__msg__MotorVelocity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mbot_interfaces__msg__MotorVelocity__Sequence__destroy(mbot_interfaces__msg__MotorVelocity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mbot_interfaces__msg__MotorVelocity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mbot_interfaces__msg__MotorVelocity__Sequence__are_equal(const mbot_interfaces__msg__MotorVelocity__Sequence * lhs, const mbot_interfaces__msg__MotorVelocity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mbot_interfaces__msg__MotorVelocity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mbot_interfaces__msg__MotorVelocity__Sequence__copy(
  const mbot_interfaces__msg__MotorVelocity__Sequence * input,
  mbot_interfaces__msg__MotorVelocity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mbot_interfaces__msg__MotorVelocity);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mbot_interfaces__msg__MotorVelocity * data =
      (mbot_interfaces__msg__MotorVelocity *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mbot_interfaces__msg__MotorVelocity__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mbot_interfaces__msg__MotorVelocity__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mbot_interfaces__msg__MotorVelocity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
