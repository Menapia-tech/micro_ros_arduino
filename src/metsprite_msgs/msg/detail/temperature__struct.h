// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from metsprite_msgs:msg/Temperature.idl
// generated code does not contain a copyright notice

#ifndef METSPRITE_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_
#define METSPRITE_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Temperature in the package metsprite_msgs.
typedef struct metsprite_msgs__msg__Temperature
{
  rosidl_runtime_c__String name;
  float data;
} metsprite_msgs__msg__Temperature;

// Struct for a sequence of metsprite_msgs__msg__Temperature.
typedef struct metsprite_msgs__msg__Temperature__Sequence
{
  metsprite_msgs__msg__Temperature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} metsprite_msgs__msg__Temperature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // METSPRITE_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_
