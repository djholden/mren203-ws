// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from steve_msgs:msg/SetPoints.idl
// generated code does not contain a copyright notice
#include "steve_msgs/msg/detail/set_points__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
steve_msgs__msg__SetPoints__init(steve_msgs__msg__SetPoints * msg)
{
  if (!msg) {
    return false;
  }
  // kp_val
  // ki_val
  // pwm_val
  // temp_val
  // tvok_val
  // co2_val
  // h2_val
  return true;
}

void
steve_msgs__msg__SetPoints__fini(steve_msgs__msg__SetPoints * msg)
{
  if (!msg) {
    return;
  }
  // kp_val
  // ki_val
  // pwm_val
  // temp_val
  // tvok_val
  // co2_val
  // h2_val
}

bool
steve_msgs__msg__SetPoints__are_equal(const steve_msgs__msg__SetPoints * lhs, const steve_msgs__msg__SetPoints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kp_val
  if (lhs->kp_val != rhs->kp_val) {
    return false;
  }
  // ki_val
  if (lhs->ki_val != rhs->ki_val) {
    return false;
  }
  // pwm_val
  if (lhs->pwm_val != rhs->pwm_val) {
    return false;
  }
  // temp_val
  if (lhs->temp_val != rhs->temp_val) {
    return false;
  }
  // tvok_val
  if (lhs->tvok_val != rhs->tvok_val) {
    return false;
  }
  // co2_val
  if (lhs->co2_val != rhs->co2_val) {
    return false;
  }
  // h2_val
  if (lhs->h2_val != rhs->h2_val) {
    return false;
  }
  return true;
}

bool
steve_msgs__msg__SetPoints__copy(
  const steve_msgs__msg__SetPoints * input,
  steve_msgs__msg__SetPoints * output)
{
  if (!input || !output) {
    return false;
  }
  // kp_val
  output->kp_val = input->kp_val;
  // ki_val
  output->ki_val = input->ki_val;
  // pwm_val
  output->pwm_val = input->pwm_val;
  // temp_val
  output->temp_val = input->temp_val;
  // tvok_val
  output->tvok_val = input->tvok_val;
  // co2_val
  output->co2_val = input->co2_val;
  // h2_val
  output->h2_val = input->h2_val;
  return true;
}

steve_msgs__msg__SetPoints *
steve_msgs__msg__SetPoints__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  steve_msgs__msg__SetPoints * msg = (steve_msgs__msg__SetPoints *)allocator.allocate(sizeof(steve_msgs__msg__SetPoints), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(steve_msgs__msg__SetPoints));
  bool success = steve_msgs__msg__SetPoints__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
steve_msgs__msg__SetPoints__destroy(steve_msgs__msg__SetPoints * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    steve_msgs__msg__SetPoints__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
steve_msgs__msg__SetPoints__Sequence__init(steve_msgs__msg__SetPoints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  steve_msgs__msg__SetPoints * data = NULL;

  if (size) {
    data = (steve_msgs__msg__SetPoints *)allocator.zero_allocate(size, sizeof(steve_msgs__msg__SetPoints), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = steve_msgs__msg__SetPoints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        steve_msgs__msg__SetPoints__fini(&data[i - 1]);
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
steve_msgs__msg__SetPoints__Sequence__fini(steve_msgs__msg__SetPoints__Sequence * array)
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
      steve_msgs__msg__SetPoints__fini(&array->data[i]);
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

steve_msgs__msg__SetPoints__Sequence *
steve_msgs__msg__SetPoints__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  steve_msgs__msg__SetPoints__Sequence * array = (steve_msgs__msg__SetPoints__Sequence *)allocator.allocate(sizeof(steve_msgs__msg__SetPoints__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = steve_msgs__msg__SetPoints__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
steve_msgs__msg__SetPoints__Sequence__destroy(steve_msgs__msg__SetPoints__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    steve_msgs__msg__SetPoints__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
steve_msgs__msg__SetPoints__Sequence__are_equal(const steve_msgs__msg__SetPoints__Sequence * lhs, const steve_msgs__msg__SetPoints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!steve_msgs__msg__SetPoints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
steve_msgs__msg__SetPoints__Sequence__copy(
  const steve_msgs__msg__SetPoints__Sequence * input,
  steve_msgs__msg__SetPoints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(steve_msgs__msg__SetPoints);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    steve_msgs__msg__SetPoints * data =
      (steve_msgs__msg__SetPoints *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!steve_msgs__msg__SetPoints__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          steve_msgs__msg__SetPoints__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!steve_msgs__msg__SetPoints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
