// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from metsprite_msgs:msg/Temperature.idl
// generated code does not contain a copyright notice

#ifndef METSPRITE_MSGS__MSG__DETAIL__TEMPERATURE__FUNCTIONS_H_
#define METSPRITE_MSGS__MSG__DETAIL__TEMPERATURE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "metsprite_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "metsprite_msgs/msg/detail/temperature__struct.h"

/// Initialize msg/Temperature message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * metsprite_msgs__msg__Temperature
 * )) before or use
 * metsprite_msgs__msg__Temperature__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_metsprite_msgs
bool
metsprite_msgs__msg__Temperature__init(metsprite_msgs__msg__Temperature * msg);

/// Finalize msg/Temperature message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_metsprite_msgs
void
metsprite_msgs__msg__Temperature__fini(metsprite_msgs__msg__Temperature * msg);

/// Create msg/Temperature message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * metsprite_msgs__msg__Temperature__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_metsprite_msgs
metsprite_msgs__msg__Temperature *
metsprite_msgs__msg__Temperature__create();

/// Destroy msg/Temperature message.
/**
 * It calls
 * metsprite_msgs__msg__Temperature__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_metsprite_msgs
void
metsprite_msgs__msg__Temperature__destroy(metsprite_msgs__msg__Temperature * msg);

/// Check for msg/Temperature message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_metsprite_msgs
bool
metsprite_msgs__msg__Temperature__are_equal(const metsprite_msgs__msg__Temperature * lhs, const metsprite_msgs__msg__Temperature * rhs);

/// Copy a msg/Temperature message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_metsprite_msgs
bool
metsprite_msgs__msg__Temperature__copy(
  const metsprite_msgs__msg__Temperature * input,
  metsprite_msgs__msg__Temperature * output);

/// Initialize array of msg/Temperature messages.
/**
 * It allocates the memory for the number of elements and calls
 * metsprite_msgs__msg__Temperature__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_metsprite_msgs
bool
metsprite_msgs__msg__Temperature__Sequence__init(metsprite_msgs__msg__Temperature__Sequence * array, size_t size);

/// Finalize array of msg/Temperature messages.
/**
 * It calls
 * metsprite_msgs__msg__Temperature__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_metsprite_msgs
void
metsprite_msgs__msg__Temperature__Sequence__fini(metsprite_msgs__msg__Temperature__Sequence * array);

/// Create array of msg/Temperature messages.
/**
 * It allocates the memory for the array and calls
 * metsprite_msgs__msg__Temperature__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_metsprite_msgs
metsprite_msgs__msg__Temperature__Sequence *
metsprite_msgs__msg__Temperature__Sequence__create(size_t size);

/// Destroy array of msg/Temperature messages.
/**
 * It calls
 * metsprite_msgs__msg__Temperature__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_metsprite_msgs
void
metsprite_msgs__msg__Temperature__Sequence__destroy(metsprite_msgs__msg__Temperature__Sequence * array);

/// Check for msg/Temperature message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_metsprite_msgs
bool
metsprite_msgs__msg__Temperature__Sequence__are_equal(const metsprite_msgs__msg__Temperature__Sequence * lhs, const metsprite_msgs__msg__Temperature__Sequence * rhs);

/// Copy an array of msg/Temperature messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_metsprite_msgs
bool
metsprite_msgs__msg__Temperature__Sequence__copy(
  const metsprite_msgs__msg__Temperature__Sequence * input,
  metsprite_msgs__msg__Temperature__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // METSPRITE_MSGS__MSG__DETAIL__TEMPERATURE__FUNCTIONS_H_