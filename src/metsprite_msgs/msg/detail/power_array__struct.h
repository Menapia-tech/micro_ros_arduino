// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from metsprite_msgs:msg/PowerArray.idl
// generated code does not contain a copyright notice

#ifndef METSPRITE_MSGS__MSG__DETAIL__POWER_ARRAY__STRUCT_H_
#define METSPRITE_MSGS__MSG__DETAIL__POWER_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "metsprite_msgs/msg/detail/power__struct.h"

// Struct defined in msg/PowerArray in the package metsprite_msgs.
typedef struct metsprite_msgs__msg__PowerArray
{
  metsprite_msgs__msg__Power data[10];
} metsprite_msgs__msg__PowerArray;

// Struct for a sequence of metsprite_msgs__msg__PowerArray.
typedef struct metsprite_msgs__msg__PowerArray__Sequence
{
  metsprite_msgs__msg__PowerArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} metsprite_msgs__msg__PowerArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // METSPRITE_MSGS__MSG__DETAIL__POWER_ARRAY__STRUCT_H_
