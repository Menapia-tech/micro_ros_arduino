// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from metsprite_msgs:msg/TemperatureX4.idl
// generated code does not contain a copyright notice

#ifndef METSPRITE_MSGS__MSG__DETAIL__TEMPERATURE_X4__STRUCT_H_
#define METSPRITE_MSGS__MSG__DETAIL__TEMPERATURE_X4__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data0'
// Member 'data1'
// Member 'data2'
// Member 'data3'
#include "metsprite_msgs/msg/detail/temperature__struct.h"

// Struct defined in msg/TemperatureX4 in the package metsprite_msgs.
typedef struct metsprite_msgs__msg__TemperatureX4
{
  metsprite_msgs__msg__Temperature data0;
  metsprite_msgs__msg__Temperature data1;
  metsprite_msgs__msg__Temperature data2;
  metsprite_msgs__msg__Temperature data3;
} metsprite_msgs__msg__TemperatureX4;

// Struct for a sequence of metsprite_msgs__msg__TemperatureX4.
typedef struct metsprite_msgs__msg__TemperatureX4__Sequence
{
  metsprite_msgs__msg__TemperatureX4 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} metsprite_msgs__msg__TemperatureX4__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // METSPRITE_MSGS__MSG__DETAIL__TEMPERATURE_X4__STRUCT_H_
