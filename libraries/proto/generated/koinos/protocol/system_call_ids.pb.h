// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/protocol/system_call_ids.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace koinos {
namespace protocol {

enum system_call_id : int {
  reserved_id = 0,
  prints = 1,
  verify_block_header = 2,
  apply_block = 3,
  apply_transaction = 4,
  apply_upload_contract_operation = 5,
  apply_execute_contract_operation = 6,
  apply_set_system_call_operation = 7,
  db_put_object = 8,
  db_get_object = 9,
  db_get_next_object = 10,
  db_get_prev_object = 11,
  execute_contract = 12,
  get_entry_point = 13,
  get_contract_args_size = 14,
  get_contract_args = 15,
  set_contract_return = 16,
  exit_contract = 17,
  get_head_info = 18,
  hash = 19,
  recover_public_key = 20,
  verify_block_signature = 21,
  verify_merkle_root = 22,
  get_transaction_payer = 23,
  get_max_account_resources = 24,
  get_transaction_resource_limit = 25,
  get_last_irreversible_block = 26,
  get_caller = 27,
  require_authority = 28,
  get_transaction_signature = 29,
  get_contract_id = 30,
  get_head_block_time = 31,
  get_account_nonce = 32,
  system_call_id_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  system_call_id_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool system_call_id_IsValid(int value);
constexpr system_call_id system_call_id_MIN = reserved_id;
constexpr system_call_id system_call_id_MAX = get_account_nonce;
constexpr int system_call_id_ARRAYSIZE = system_call_id_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* system_call_id_descriptor();
template<typename T>
inline const std::string& system_call_id_Name(T enum_t_value) {
  static_assert(::std::is_same<T, system_call_id>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function system_call_id_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    system_call_id_descriptor(), enum_t_value);
}
inline bool system_call_id_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, system_call_id* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<system_call_id>(
    system_call_id_descriptor(), name, value);
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

}  // namespace protocol
}  // namespace koinos

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::koinos::protocol::system_call_id> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::koinos::protocol::system_call_id>() {
  return ::koinos::protocol::system_call_id_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto
