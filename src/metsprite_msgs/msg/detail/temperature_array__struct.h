// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from metsprite_msgs:msg/TemperatureArray.idl
// generated code does not contain a copyright notice

#ifndef METSPRITE_MSGS__MSG__DETAIL__TEMPERATURE_ARRAY__STRUCT_H_
#define METSPRITE_MSGS__MSG__DETAIL__TEMPERATURE_ARRAY__STRUCT_H_

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
#include "metsprite_msgs/msg/detail/temperature__struct.h"

// Struct defined in msg/TemperatureArray in the package metsprite_msgs.
typedef struct metsprite_msgs__msg__TemperatureArray
{
  metsprite_msgs__msg__Temperature data[10];
} metsprite_msgs__msg__TemperatureArray;

// Struct for a sequence of metsprite_msgs__msg__TemperatureArray.
typedef struct metsprite_msgs__msg__TemperatureArray__Sequence
{
  metsprite_msgs__msg__TemperatureArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} metsprite_msgs__msg__TemperatureArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // METSPRITE_MSGS__MSG__DETAIL__TEMPERATURE_ARRAY__STRUCT_H_
