// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from steve_msgs:msg/ControlUI.idl
// generated code does not contain a copyright notice
#include "steve_msgs/msg/detail/control_ui__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
steve_msgs__msg__ControlUI__init(steve_msgs__msg__ControlUI * msg)
{
  if (!msg) {
    return false;
  }
  // new_poi
  // e_stop
  return true;
}

void
steve_msgs__msg__ControlUI__fini(steve_msgs__msg__ControlUI * msg)
{
  if (!msg) {
    return;
  }
  // new_poi
  // e_stop
}

bool
steve_msgs__msg__ControlUI__are_equal(const steve_msgs__msg__ControlUI * lhs, const steve_msgs__msg__ControlUI * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // new_poi
  if (lhs->new_poi != rhs->new_poi) {
    return false;
  }
  // e_stop
  if (lhs->e_stop != rhs->e_stop) {
    return false;
  }
  return true;
}

bool
steve_msgs__msg__ControlUI__copy(
  const steve_msgs__msg__ControlUI * input,
  steve_msgs__msg__ControlUI * output)
{
  if (!input || !output) {
    return false;
  }
  // new_poi
  output->new_poi = input->new_poi;
  // e_stop
  output->e_stop = input->e_stop;
  return true;
}

steve_msgs__msg__ControlUI *
steve_msgs__msg__ControlUI__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  steve_msgs__msg__ControlUI * msg = (steve_msgs__msg__ControlUI *)allocator.allocate(sizeof(steve_msgs__msg__ControlUI), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(steve_msgs__msg__ControlUI));
  bool success = steve_msgs__msg__ControlUI__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
steve_msgs__msg__ControlUI__destroy(steve_msgs__msg__ControlUI * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    steve_msgs__msg__ControlUI__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
steve_msgs__msg__ControlUI__Sequence__init(steve_msgs__msg__ControlUI__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  steve_msgs__msg__ControlUI * data = NULL;

  if (size) {
    data = (steve_msgs__msg__ControlUI *)allocator.zero_allocate(size, sizeof(steve_msgs__msg__ControlUI), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = steve_msgs__msg__ControlUI__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        steve_msgs__msg__ControlUI__fini(&data[i - 1]);
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
steve_msgs__msg__ControlUI__Sequence__fini(steve_msgs__msg__ControlUI__Sequence * array)
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
      steve_msgs__msg__ControlUI__fini(&array->data[i]);
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

steve_msgs__msg__ControlUI__Sequence *
steve_msgs__msg__ControlUI__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  steve_msgs__msg__ControlUI__Sequence * array = (steve_msgs__msg__ControlUI__Sequence *)allocator.allocate(sizeof(steve_msgs__msg__ControlUI__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = steve_msgs__msg__ControlUI__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
steve_msgs__msg__ControlUI__Sequence__destroy(steve_msgs__msg__ControlUI__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    steve_msgs__msg__ControlUI__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
steve_msgs__msg__ControlUI__Sequence__are_equal(const steve_msgs__msg__ControlUI__Sequence * lhs, const steve_msgs__msg__ControlUI__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!steve_msgs__msg__ControlUI__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
steve_msgs__msg__ControlUI__Sequence__copy(
  const steve_msgs__msg__ControlUI__Sequence * input,
  steve_msgs__msg__ControlUI__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(steve_msgs__msg__ControlUI);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    steve_msgs__msg__ControlUI * data =
      (steve_msgs__msg__ControlUI *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!steve_msgs__msg__ControlUI__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          steve_msgs__msg__ControlUI__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!steve_msgs__msg__ControlUI__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
