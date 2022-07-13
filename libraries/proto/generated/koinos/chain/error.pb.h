// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/chain/error.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_koinos_2fchain_2ferror_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_koinos_2fchain_2ferror_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_koinos_2fchain_2ferror_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_koinos_2fchain_2ferror_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2fchain_2ferror_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace koinos {
namespace chain {

enum error_code : int {
  success = 0,
  reversion = 1,
  internal_error = 100,
  system_authorization_failure = 101,
  invalid_contract = 102,
  insufficient_privileges = 103,
  insufficient_rc = 104,
  insufficient_return_buffer = 105,
  unknown_thunk = 106,
  unknown_operation = 107,
  read_only_context = 108,
  failure = -1,
  field_not_found = -100,
  unknown_hash_code = -101,
  unknown_dsa = -102,
  unknown_system_call = -103,
  operation_not_found = -104,
  authorization_failure = -200,
  invalid_nonce = -201,
  invalid_signature = -202,
  malformed_block = -203,
  malformed_transaction = -204,
  block_resource_failure = -205,
  unknown_backend = -1000,
  unexpected_state = -1001,
  missing_required_arguments = -1002,
  unknown_previous_block = -1003,
  unexpected_height = -1004,
  block_state_error = -1005,
  state_merkle_mismatch = -1006,
  unexpected_receipt = -1007,
  rpc_failure = -1008,
  pending_state_error = -1009,
  timestamp_out_of_bounds = -1010,
  indexer_failure = -1011,
  network_bandwidth_limit_exceeded = -1012,
  compute_bandwidth_limit_exceeded = -1013,
  disk_storage_limit_exceeded = -1014,
  error_code_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  error_code_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool error_code_IsValid(int value);
constexpr error_code error_code_MIN = disk_storage_limit_exceeded;
constexpr error_code error_code_MAX = read_only_context;
constexpr int error_code_ARRAYSIZE = error_code_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* error_code_descriptor();
template<typename T>
inline const std::string& error_code_Name(T enum_t_value) {
  static_assert(::std::is_same<T, error_code>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function error_code_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    error_code_descriptor(), enum_t_value);
}
inline bool error_code_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, error_code* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<error_code>(
    error_code_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace chain
}  // namespace koinos

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::koinos::chain::error_code> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::koinos::chain::error_code>() {
  return ::koinos::chain::error_code_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_koinos_2fchain_2ferror_2eproto
