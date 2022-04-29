// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from metsprite_msgs:srv/SetCalibration.idl
// generated code does not contain a copyright notice

#ifndef METSPRITE_MSGS__SRV__DETAIL__SET_CALIBRATION__STRUCT_H_
#define METSPRITE_MSGS__SRV__DETAIL__SET_CALIBRATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "metsprite_msgs/msg/detail/calibration__struct.h"

// Struct defined in srv/SetCalibration in the package metsprite_msgs.
typedef struct metsprite_msgs__srv__SetCalibration_Request
{
  metsprite_msgs__msg__Calibration request;
} metsprite_msgs__srv__SetCalibration_Request;

// Struct for a sequence of metsprite_msgs__srv__SetCalibration_Request.
typedef struct metsprite_msgs__srv__SetCalibration_Request__Sequence
{
  metsprite_msgs__srv__SetCalibration_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} metsprite_msgs__srv__SetCalibration_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SetCalibration in the package metsprite_msgs.
typedef struct metsprite_msgs__srv__SetCalibration_Response
{
  bool success;
  rosidl_runtime_c__String response;
} metsprite_msgs__srv__SetCalibration_Response;

// Struct for a sequence of metsprite_msgs__srv__SetCalibration_Response.
typedef struct metsprite_msgs__srv__SetCalibration_Response__Sequence
{
  metsprite_msgs__srv__SetCalibration_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} metsprite_msgs__srv__SetCalibration_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // METSPRITE_MSGS__SRV__DETAIL__SET_CALIBRATION__STRUCT_H_
