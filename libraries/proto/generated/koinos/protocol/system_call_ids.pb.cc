// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/protocol/system_call_ids.proto

#include "koinos/protocol/system_call_ids.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace koinos {
namespace protocol {
}  // namespace protocol
}  // namespace koinos
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n%koinos/protocol/system_call_ids.proto\022"
  "\017koinos.protocol*\300\006\n\016system_call_id\022\017\n\013r"
  "eserved_id\020\000\022\n\n\006prints\020\001\022\017\n\013apply_block\020"
  "\003\022\025\n\021apply_transaction\020\004\022#\n\037apply_upload"
  "_contract_operation\020\005\022!\n\035apply_call_cont"
  "ract_operation\020\006\022#\n\037apply_set_system_cal"
  "l_operation\020\007\022\016\n\nput_object\020\010\022\016\n\nget_obj"
  "ect\020\t\022\023\n\017get_next_object\020\n\022\023\n\017get_prev_o"
  "bject\020\013\022\021\n\rcall_contract\020\014\022\023\n\017get_entry_"
  "point\020\r\022\037\n\033get_contract_arguments_size\020\016"
  "\022\032\n\026get_contract_arguments\020\017\022\027\n\023set_cont"
  "ract_result\020\020\022\021\n\rexit_contract\020\021\022\021\n\rget_"
  "head_info\020\022\022\010\n\004hash\020\023\022\026\n\022recover_public_"
  "key\020\024\022\033\n\027process_block_signature\020\025\022\026\n\022ve"
  "rify_merkle_root\020\026\022\031\n\025get_transaction_pa"
  "yer\020\027\022\034\n\030get_transaction_rc_limit\020\031\022\037\n\033g"
  "et_last_irreversible_block\020\032\022\016\n\nget_call"
  "er\020\033\022\025\n\021require_authority\020\034\022\035\n\031get_trans"
  "action_signature\020\035\022\023\n\017get_contract_id\020\036\022"
  "\025\n\021get_account_nonce\020\037\022\022\n\016get_account_rc"
  "\020 \022\026\n\022consume_account_rc\020!\022\027\n\023get_resour"
  "ce_limits\020\"\022\033\n\027consume_block_resources\020#"
  "\022\t\n\005event\020$B7Z5github.com/koinos/koinos-"
  "proto-golang/koinos/protocolb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto = {
  false, false, 956, descriptor_table_protodef_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto, "koinos/protocol/system_call_ids.proto", 
  &descriptor_table_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto_once, nullptr, 0, 0,
  schemas, file_default_instances, TableStruct_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto::offsets,
  nullptr, file_level_enum_descriptors_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto, file_level_service_descriptors_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto_getter() {
  return &descriptor_table_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto(&descriptor_table_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto);
namespace koinos {
namespace protocol {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* system_call_id_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto);
  return file_level_enum_descriptors_koinos_2fprotocol_2fsystem_5fcall_5fids_2eproto[0];
}
bool system_call_id_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protocol
}  // namespace koinos
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
