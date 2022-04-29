// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from metsprite_msgs:msg/Sample.idl
// generated code does not contain a copyright notice

#ifndef METSPRITE_MSGS__MSG__DETAIL__SAMPLE__STRUCT_H_
#define METSPRITE_MSGS__MSG__DETAIL__SAMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Sample in the package metsprite_msgs.
typedef struct metsprite_msgs__msg__Sample
{
  bool data;
} metsprite_msgs__msg__Sample;

// Struct for a sequence of metsprite_msgs__msg__Sample.
typedef struct metsprite_msgs__msg__Sample__Sequence
{
  metsprite_msgs__msg__Sample * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} metsprite_msgs__msg__Sample__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // METSPRITE_MSGS__MSG__DETAIL__SAMPLE__STRUCT_H_
