// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mbot_interfaces:msg/BatteryADC.idl
// generated code does not contain a copyright notice
#include "mbot_interfaces/msg/detail/battery_adc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mbot_interfaces__msg__BatteryADC__init(mbot_interfaces__msg__BatteryADC * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mbot_interfaces__msg__BatteryADC__fini(msg);
    return false;
  }
  // raw
  // volts
  return true;
}

void
mbot_interfaces__msg__BatteryADC__fini(mbot_interfaces__msg__BatteryADC * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // raw
  // volts
}

bool
mbot_interfaces__msg__BatteryADC__are_equal(const mbot_interfaces__msg__BatteryADC * lhs, const mbot_interfaces__msg__BatteryADC * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // raw
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->raw[i] != rhs->raw[i]) {
      return false;
    }
  }
  // volts
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->volts[i] != rhs->volts[i]) {
      return false;
    }
  }
  return true;
}

bool
mbot_interfaces__msg__BatteryADC__copy(
  const mbot_interfaces__msg__BatteryADC * input,
  mbot_interfaces__msg__BatteryADC * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // raw
  for (size_t i = 0; i < 4; ++i) {
    output->raw[i] = input->raw[i];
  }
  // volts
  for (size_t i = 0; i < 4; ++i) {
    output->volts[i] = input->volts[i];
  }
  return true;
}

mbot_interfaces__msg__BatteryADC *
mbot_interfaces__msg__BatteryADC__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mbot_interfaces__msg__BatteryADC * msg = (mbot_interfaces__msg__BatteryADC *)allocator.allocate(sizeof(mbot_interfaces__msg__BatteryADC), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mbot_interfaces__msg__BatteryADC));
  bool success = mbot_interfaces__msg__BatteryADC__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mbot_interfaces__msg__BatteryADC__destroy(mbot_interfaces__msg__BatteryADC * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mbot_interfaces__msg__BatteryADC__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mbot_interfaces__msg__BatteryADC__Sequence__init(mbot_interfaces__msg__BatteryADC__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mbot_interfaces__msg__BatteryADC * data = NULL;

  if (size) {
    data = (mbot_interfaces__msg__BatteryADC *)allocator.zero_allocate(size, sizeof(mbot_interfaces__msg__BatteryADC), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mbot_interfaces__msg__BatteryADC__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mbot_interfaces__msg__BatteryADC__fini(&data[i - 1]);
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
mbot_interfaces__msg__BatteryADC__Sequence__fini(mbot_interfaces__msg__BatteryADC__Sequence * array)
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
      mbot_interfaces__msg__BatteryADC__fini(&array->data[i]);
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

mbot_interfaces__msg__BatteryADC__Sequence *
mbot_interfaces__msg__BatteryADC__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mbot_interfaces__msg__BatteryADC__Sequence * array = (mbot_interfaces__msg__BatteryADC__Sequence *)allocator.allocate(sizeof(mbot_interfaces__msg__BatteryADC__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mbot_interfaces__msg__BatteryADC__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mbot_interfaces__msg__BatteryADC__Sequence__destroy(mbot_interfaces__msg__BatteryADC__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mbot_interfaces__msg__BatteryADC__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mbot_interfaces__msg__BatteryADC__Sequence__are_equal(const mbot_interfaces__msg__BatteryADC__Sequence * lhs, const mbot_interfaces__msg__BatteryADC__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mbot_interfaces__msg__BatteryADC__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mbot_interfaces__msg__BatteryADC__Sequence__copy(
  const mbot_interfaces__msg__BatteryADC__Sequence * input,
  mbot_interfaces__msg__BatteryADC__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mbot_interfaces__msg__BatteryADC);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mbot_interfaces__msg__BatteryADC * data =
      (mbot_interfaces__msg__BatteryADC *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mbot_interfaces__msg__BatteryADC__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mbot_interfaces__msg__BatteryADC__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mbot_interfaces__msg__BatteryADC__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
