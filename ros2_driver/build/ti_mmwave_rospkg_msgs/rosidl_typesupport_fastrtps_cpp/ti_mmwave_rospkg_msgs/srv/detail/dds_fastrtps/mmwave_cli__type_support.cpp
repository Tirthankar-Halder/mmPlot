// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ti_mmwave_rospkg_msgs:srv/MmwaveCli.idl
// generated code does not contain a copyright notice
#include "ti_mmwave_rospkg_msgs/srv/detail/mmwave_cli__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ti_mmwave_rospkg_msgs/srv/detail/mmwave_cli__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ti_mmwave_rospkg_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ti_mmwave_rospkg_msgs
cdr_serialize(
  const ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: comm
  cdr << ros_message.comm;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ti_mmwave_rospkg_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request & ros_message)
{
  // Member: comm
  cdr >> ros_message.comm;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ti_mmwave_rospkg_msgs
get_serialized_size(
  const ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: comm
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.comm.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ti_mmwave_rospkg_msgs
max_serialized_size_MmwaveCli_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: comm
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request;
    is_plain =
      (
      offsetof(DataType, comm) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MmwaveCli_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MmwaveCli_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MmwaveCli_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MmwaveCli_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MmwaveCli_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MmwaveCli_Request__callbacks = {
  "ti_mmwave_rospkg_msgs::srv",
  "MmwaveCli_Request",
  _MmwaveCli_Request__cdr_serialize,
  _MmwaveCli_Request__cdr_deserialize,
  _MmwaveCli_Request__get_serialized_size,
  _MmwaveCli_Request__max_serialized_size
};

static rosidl_message_type_support_t _MmwaveCli_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MmwaveCli_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ti_mmwave_rospkg_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ti_mmwave_rospkg_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request>()
{
  return &ti_mmwave_rospkg_msgs::srv::typesupport_fastrtps_cpp::_MmwaveCli_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ti_mmwave_rospkg_msgs, srv, MmwaveCli_Request)() {
  return &ti_mmwave_rospkg_msgs::srv::typesupport_fastrtps_cpp::_MmwaveCli_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ti_mmwave_rospkg_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ti_mmwave_rospkg_msgs
cdr_serialize(
  const ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: resp
  cdr << ros_message.resp;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ti_mmwave_rospkg_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response & ros_message)
{
  // Member: resp
  cdr >> ros_message.resp;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ti_mmwave_rospkg_msgs
get_serialized_size(
  const ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: resp
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.resp.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ti_mmwave_rospkg_msgs
max_serialized_size_MmwaveCli_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: resp
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response;
    is_plain =
      (
      offsetof(DataType, resp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MmwaveCli_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MmwaveCli_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MmwaveCli_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MmwaveCli_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MmwaveCli_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MmwaveCli_Response__callbacks = {
  "ti_mmwave_rospkg_msgs::srv",
  "MmwaveCli_Response",
  _MmwaveCli_Response__cdr_serialize,
  _MmwaveCli_Response__cdr_deserialize,
  _MmwaveCli_Response__get_serialized_size,
  _MmwaveCli_Response__max_serialized_size
};

static rosidl_message_type_support_t _MmwaveCli_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MmwaveCli_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ti_mmwave_rospkg_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ti_mmwave_rospkg_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response>()
{
  return &ti_mmwave_rospkg_msgs::srv::typesupport_fastrtps_cpp::_MmwaveCli_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ti_mmwave_rospkg_msgs, srv, MmwaveCli_Response)() {
  return &ti_mmwave_rospkg_msgs::srv::typesupport_fastrtps_cpp::_MmwaveCli_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace ti_mmwave_rospkg_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _MmwaveCli__callbacks = {
  "ti_mmwave_rospkg_msgs::srv",
  "MmwaveCli",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ti_mmwave_rospkg_msgs, srv, MmwaveCli_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ti_mmwave_rospkg_msgs, srv, MmwaveCli_Response)(),
};

static rosidl_service_type_support_t _MmwaveCli__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MmwaveCli__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ti_mmwave_rospkg_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ti_mmwave_rospkg_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<ti_mmwave_rospkg_msgs::srv::MmwaveCli>()
{
  return &ti_mmwave_rospkg_msgs::srv::typesupport_fastrtps_cpp::_MmwaveCli__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ti_mmwave_rospkg_msgs, srv, MmwaveCli)() {
  return &ti_mmwave_rospkg_msgs::srv::typesupport_fastrtps_cpp::_MmwaveCli__handle;
}

#ifdef __cplusplus
}
#endif
