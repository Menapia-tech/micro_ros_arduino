// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from metsprite_msgs:msg/Calibration.idl
// generated code does not contain a copyright notice

#ifndef METSPRITE_MSGS__MSG__DETAIL__CALIBRATION__STRUCT_H_
#define METSPRITE_MSGS__MSG__DETAIL__CALIBRATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parameter'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Calibration in the package metsprite_msgs.
typedef struct metsprite_msgs__msg__Calibration
{
  rosidl_runtime_c__String parameter;
  int32_t order;
  float value;
} metsprite_msgs__msg__Calibration;

// Struct for a sequence of metsprite_msgs__msg__Calibration.
typedef struct metsprite_msgs__msg__Calibration__Sequence
{
  metsprite_msgs__msg__Calibration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} metsprite_msgs__msg__Calibration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // METSPRITE_MSGS__MSG__DETAIL__CALIBRATION__STRUCT_H_
