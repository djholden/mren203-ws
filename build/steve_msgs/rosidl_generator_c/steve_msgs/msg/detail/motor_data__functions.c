// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from steve_msgs:msg/MotorData.idl
// generated code does not contain a copyright notice
#include "steve_msgs/msg/detail/motor_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
steve_msgs__msg__MotorData__init(steve_msgs__msg__MotorData * msg)
{
  if (!msg) {
    return false;
  }
  // fwd_cmd
  // ang_cmd
  // left_vel
  // right_vel
  // fwd_vel
  // ang_vel
  return true;
}

void
steve_msgs__msg__MotorData__fini(steve_msgs__msg__MotorData * msg)
{
  if (!msg) {
    return;
  }
  // fwd_cmd
  // ang_cmd
  // left_vel
  // right_vel
  // fwd_vel
  // ang_vel
}

bool
steve_msgs__msg__MotorData__are_equal(const steve_msgs__msg__MotorData * lhs, const steve_msgs__msg__MotorData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fwd_cmd
  if (lhs->fwd_cmd != rhs->fwd_cmd) {
    return false;
  }
  // ang_cmd
  if (lhs->ang_cmd != rhs->ang_cmd) {
    return false;
  }
  // left_vel
  if (lhs->left_vel != rhs->left_vel) {
    return false;
  }
  // right_vel
  if (lhs->right_vel != rhs->right_vel) {
    return false;
  }
  // fwd_vel
  if (lhs->fwd_vel != rhs->fwd_vel) {
    return false;
  }
  // ang_vel
  if (lhs->ang_vel != rhs->ang_vel) {
    return false;
  }
  return true;
}

bool
steve_msgs__msg__MotorData__copy(
  const steve_msgs__msg__MotorData * input,
  steve_msgs__msg__MotorData * output)
{
  if (!input || !output) {
    return false;
  }
  // fwd_cmd
  output->fwd_cmd = input->fwd_cmd;
  // ang_cmd
  output->ang_cmd = input->ang_cmd;
  // left_vel
  output->left_vel = input->left_vel;
  // right_vel
  output->right_vel = input->right_vel;
  // fwd_vel
  output->fwd_vel = input->fwd_vel;
  // ang_vel
  output->ang_vel = input->ang_vel;
  return true;
}

steve_msgs__msg__MotorData *
steve_msgs__msg__MotorData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  steve_msgs__msg__MotorData * msg = (steve_msgs__msg__MotorData *)allocator.allocate(sizeof(steve_msgs__msg__MotorData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(steve_msgs__msg__MotorData));
  bool success = steve_msgs__msg__MotorData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
steve_msgs__msg__MotorData__destroy(steve_msgs__msg__MotorData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    steve_msgs__msg__MotorData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
steve_msgs__msg__MotorData__Sequence__init(steve_msgs__msg__MotorData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  steve_msgs__msg__MotorData * data = NULL;

  if (size) {
    data = (steve_msgs__msg__MotorData *)allocator.zero_allocate(size, sizeof(steve_msgs__msg__MotorData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = steve_msgs__msg__MotorData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        steve_msgs__msg__MotorData__fini(&data[i - 1]);
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
steve_msgs__msg__MotorData__Sequence__fini(steve_msgs__msg__MotorData__Sequence * array)
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
      steve_msgs__msg__MotorData__fini(&array->data[i]);
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

steve_msgs__msg__MotorData__Sequence *
steve_msgs__msg__MotorData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  steve_msgs__msg__MotorData__Sequence * array = (steve_msgs__msg__MotorData__Sequence *)allocator.allocate(sizeof(steve_msgs__msg__MotorData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = steve_msgs__msg__MotorData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
steve_msgs__msg__MotorData__Sequence__destroy(steve_msgs__msg__MotorData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    steve_msgs__msg__MotorData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
steve_msgs__msg__MotorData__Sequence__are_equal(const steve_msgs__msg__MotorData__Sequence * lhs, const steve_msgs__msg__MotorData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!steve_msgs__msg__MotorData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
steve_msgs__msg__MotorData__Sequence__copy(
  const steve_msgs__msg__MotorData__Sequence * input,
  steve_msgs__msg__MotorData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(steve_msgs__msg__MotorData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    steve_msgs__msg__MotorData * data =
      (steve_msgs__msg__MotorData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!steve_msgs__msg__MotorData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          steve_msgs__msg__MotorData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!steve_msgs__msg__MotorData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
