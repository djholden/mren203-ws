// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from steve_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice
#include "steve_msgs/msg/detail/sensor_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
steve_msgs__msg__SensorData__init(steve_msgs__msg__SensorData * msg)
{
  if (!msg) {
    return false;
  }
  // temp
  // h2
  // co2
  // tvok
  // ir_left
  // ir_right
  // ir_center
  // left_vel
  // right_vel
  // avg_vel
  // fwd_vel
  // ang_vel
  return true;
}

void
steve_msgs__msg__SensorData__fini(steve_msgs__msg__SensorData * msg)
{
  if (!msg) {
    return;
  }
  // temp
  // h2
  // co2
  // tvok
  // ir_left
  // ir_right
  // ir_center
  // left_vel
  // right_vel
  // avg_vel
  // fwd_vel
  // ang_vel
}

bool
steve_msgs__msg__SensorData__are_equal(const steve_msgs__msg__SensorData * lhs, const steve_msgs__msg__SensorData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temp
  if (lhs->temp != rhs->temp) {
    return false;
  }
  // h2
  if (lhs->h2 != rhs->h2) {
    return false;
  }
  // co2
  if (lhs->co2 != rhs->co2) {
    return false;
  }
  // tvok
  if (lhs->tvok != rhs->tvok) {
    return false;
  }
  // ir_left
  if (lhs->ir_left != rhs->ir_left) {
    return false;
  }
  // ir_right
  if (lhs->ir_right != rhs->ir_right) {
    return false;
  }
  // ir_center
  if (lhs->ir_center != rhs->ir_center) {
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
  // avg_vel
  if (lhs->avg_vel != rhs->avg_vel) {
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
steve_msgs__msg__SensorData__copy(
  const steve_msgs__msg__SensorData * input,
  steve_msgs__msg__SensorData * output)
{
  if (!input || !output) {
    return false;
  }
  // temp
  output->temp = input->temp;
  // h2
  output->h2 = input->h2;
  // co2
  output->co2 = input->co2;
  // tvok
  output->tvok = input->tvok;
  // ir_left
  output->ir_left = input->ir_left;
  // ir_right
  output->ir_right = input->ir_right;
  // ir_center
  output->ir_center = input->ir_center;
  // left_vel
  output->left_vel = input->left_vel;
  // right_vel
  output->right_vel = input->right_vel;
  // avg_vel
  output->avg_vel = input->avg_vel;
  // fwd_vel
  output->fwd_vel = input->fwd_vel;
  // ang_vel
  output->ang_vel = input->ang_vel;
  return true;
}

steve_msgs__msg__SensorData *
steve_msgs__msg__SensorData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  steve_msgs__msg__SensorData * msg = (steve_msgs__msg__SensorData *)allocator.allocate(sizeof(steve_msgs__msg__SensorData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(steve_msgs__msg__SensorData));
  bool success = steve_msgs__msg__SensorData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
steve_msgs__msg__SensorData__destroy(steve_msgs__msg__SensorData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    steve_msgs__msg__SensorData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
steve_msgs__msg__SensorData__Sequence__init(steve_msgs__msg__SensorData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  steve_msgs__msg__SensorData * data = NULL;

  if (size) {
    data = (steve_msgs__msg__SensorData *)allocator.zero_allocate(size, sizeof(steve_msgs__msg__SensorData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = steve_msgs__msg__SensorData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        steve_msgs__msg__SensorData__fini(&data[i - 1]);
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
steve_msgs__msg__SensorData__Sequence__fini(steve_msgs__msg__SensorData__Sequence * array)
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
      steve_msgs__msg__SensorData__fini(&array->data[i]);
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

steve_msgs__msg__SensorData__Sequence *
steve_msgs__msg__SensorData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  steve_msgs__msg__SensorData__Sequence * array = (steve_msgs__msg__SensorData__Sequence *)allocator.allocate(sizeof(steve_msgs__msg__SensorData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = steve_msgs__msg__SensorData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
steve_msgs__msg__SensorData__Sequence__destroy(steve_msgs__msg__SensorData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    steve_msgs__msg__SensorData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
steve_msgs__msg__SensorData__Sequence__are_equal(const steve_msgs__msg__SensorData__Sequence * lhs, const steve_msgs__msg__SensorData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!steve_msgs__msg__SensorData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
steve_msgs__msg__SensorData__Sequence__copy(
  const steve_msgs__msg__SensorData__Sequence * input,
  steve_msgs__msg__SensorData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(steve_msgs__msg__SensorData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    steve_msgs__msg__SensorData * data =
      (steve_msgs__msg__SensorData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!steve_msgs__msg__SensorData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          steve_msgs__msg__SensorData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!steve_msgs__msg__SensorData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
