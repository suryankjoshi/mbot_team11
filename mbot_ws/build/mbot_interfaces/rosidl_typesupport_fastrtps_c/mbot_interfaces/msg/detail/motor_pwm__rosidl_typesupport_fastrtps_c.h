// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from mbot_interfaces:msg/MotorPWM.idl
// generated code does not contain a copyright notice
#ifndef MBOT_INTERFACES__MSG__DETAIL__MOTOR_PWM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MBOT_INTERFACES__MSG__DETAIL__MOTOR_PWM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mbot_interfaces/msg/detail/motor_pwm__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
bool cdr_serialize_mbot_interfaces__msg__MotorPWM(
  const mbot_interfaces__msg__MotorPWM * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
bool cdr_deserialize_mbot_interfaces__msg__MotorPWM(
  eprosima::fastcdr::Cdr &,
  mbot_interfaces__msg__MotorPWM * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
size_t get_serialized_size_mbot_interfaces__msg__MotorPWM(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
size_t max_serialized_size_mbot_interfaces__msg__MotorPWM(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
bool cdr_serialize_key_mbot_interfaces__msg__MotorPWM(
  const mbot_interfaces__msg__MotorPWM * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
size_t get_serialized_size_key_mbot_interfaces__msg__MotorPWM(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
size_t max_serialized_size_key_mbot_interfaces__msg__MotorPWM(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mbot_interfaces, msg, MotorPWM)();

#ifdef __cplusplus
}
#endif

#endif  // MBOT_INTERFACES__MSG__DETAIL__MOTOR_PWM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
