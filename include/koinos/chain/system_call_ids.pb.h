// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/chain/system_call_ids.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_koinos_2fchain_2fsystem_5fcall_5fids_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_koinos_2fchain_2fsystem_5fcall_5fids_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_koinos_2fchain_2fsystem_5fcall_5fids_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_koinos_2fchain_2fsystem_5fcall_5fids_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2fchain_2fsystem_5fcall_5fids_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace koinos {
namespace chain {

enum system_call_id : int {
  nop = 0,
  get_head_info = 1,
  apply_block = 2,
  apply_transaction = 3,
  apply_upload_contract_operation = 4,
  apply_call_contract_operation = 5,
  apply_set_system_call_operation = 6,
  apply_set_system_contract_operation = 7,
  pre_block_callback = 8,
  post_block_callback = 9,
  pre_transaction_callback = 10,
  post_transaction_callback = 11,
  get_chain_id = 12,
  process_block_signature = 101,
  get_transaction = 102,
  get_transaction_field = 103,
  get_block = 104,
  get_block_field = 105,
  get_last_irreversible_block = 106,
  get_account_nonce = 107,
  verify_account_nonce = 108,
  set_account_nonce = 109,
  check_system_authority = 110,
  get_operation = 111,
  get_contract_metadata = 112,
  get_account_rc = 201,
  consume_account_rc = 202,
  get_resource_limits = 203,
  consume_block_resources = 204,
  put_object = 301,
  remove_object = 302,
  get_object = 303,
  get_next_object = 304,
  get_prev_object = 305,
  log = 401,
  event = 402,
  hash = 501,
  recover_public_key = 502,
  verify_merkle_root = 503,
  verify_signature = 504,
  verify_vrf_proof = 505,
  call = 601,
  exit = 602,
  get_arguments = 603,
  get_contract_id = 604,
  get_caller = 605,
  check_authority = 606,
  get_contract_name = 10000,
  get_contract_address = 10001,
  system_call_id_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  system_call_id_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool system_call_id_IsValid(int value);
constexpr system_call_id system_call_id_MIN = nop;
constexpr system_call_id system_call_id_MAX = get_contract_address;
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

}  // namespace chain
}  // namespace koinos

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::koinos::chain::system_call_id> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::koinos::chain::system_call_id>() {
  return ::koinos::chain::system_call_id_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_koinos_2fchain_2fsystem_5fcall_5fids_2eproto