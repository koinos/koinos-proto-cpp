// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/chain/system_call_ids.proto

#include "koinos/chain/system_call_ids.pb.h"

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
namespace chain {
}  // namespace chain
}  // namespace koinos
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_koinos_2fchain_2fsystem_5fcall_5fids_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_koinos_2fchain_2fsystem_5fcall_5fids_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_koinos_2fchain_2fsystem_5fcall_5fids_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_koinos_2fchain_2fsystem_5fcall_5fids_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\"koinos/chain/system_call_ids.proto\022\014ko"
  "inos.chain*\361\010\n\016system_call_id\022\007\n\003nop\020\000\022\021"
  "\n\rget_head_info\020\001\022\017\n\013apply_block\020\002\022\025\n\021ap"
  "ply_transaction\020\003\022#\n\037apply_upload_contra"
  "ct_operation\020\004\022!\n\035apply_call_contract_op"
  "eration\020\005\022#\n\037apply_set_system_call_opera"
  "tion\020\006\022\'\n#apply_set_system_contract_oper"
  "ation\020\007\022\026\n\022pre_block_callback\020\010\022\027\n\023post_"
  "block_callback\020\t\022\034\n\030pre_transaction_call"
  "back\020\n\022\035\n\031post_transaction_callback\020\013\022\020\n"
  "\014get_chain_id\020\014\022\033\n\027process_block_signatu"
  "re\020e\022\023\n\017get_transaction\020f\022\031\n\025get_transac"
  "tion_field\020g\022\r\n\tget_block\020h\022\023\n\017get_block"
  "_field\020i\022\037\n\033get_last_irreversible_block\020"
  "j\022\025\n\021get_account_nonce\020k\022\030\n\024verify_accou"
  "nt_nonce\020l\022\025\n\021set_account_nonce\020m\022\032\n\026che"
  "ck_system_authority\020n\022\021\n\rget_operation\020o"
  "\022\031\n\025get_contract_metadata\020p\022\023\n\016get_accou"
  "nt_rc\020\311\001\022\027\n\022consume_account_rc\020\312\001\022\030\n\023get"
  "_resource_limits\020\313\001\022\034\n\027consume_block_res"
  "ources\020\314\001\022\017\n\nput_object\020\255\002\022\022\n\rremove_obj"
  "ect\020\256\002\022\017\n\nget_object\020\257\002\022\024\n\017get_next_obje"
  "ct\020\260\002\022\024\n\017get_prev_object\020\261\002\022\010\n\003log\020\221\003\022\n\n"
  "\005event\020\222\003\022\t\n\004hash\020\365\003\022\027\n\022recover_public_k"
  "ey\020\366\003\022\027\n\022verify_merkle_root\020\367\003\022\025\n\020verify"
  "_signature\020\370\003\022\025\n\020verify_vrf_proof\020\371\003\022\t\n\004"
  "call\020\331\004\022\t\n\004exit\020\332\004\022\022\n\rget_arguments\020\333\004\022\024"
  "\n\017get_contract_id\020\334\004\022\017\n\nget_caller\020\335\004\022\024\n"
  "\017check_authority\020\336\004\022\026\n\021get_contract_name"
  "\020\220N\022\031\n\024get_contract_address\020\221NB7Z5github"
  ".com/koinos/koinos-proto-golang/v2/koino"
  "s/chainb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_koinos_2fchain_2fsystem_5fcall_5fids_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2fchain_2fsystem_5fcall_5fids_2eproto = {
  false, false, 1255, descriptor_table_protodef_koinos_2fchain_2fsystem_5fcall_5fids_2eproto, "koinos/chain/system_call_ids.proto", 
  &descriptor_table_koinos_2fchain_2fsystem_5fcall_5fids_2eproto_once, nullptr, 0, 0,
  schemas, file_default_instances, TableStruct_koinos_2fchain_2fsystem_5fcall_5fids_2eproto::offsets,
  nullptr, file_level_enum_descriptors_koinos_2fchain_2fsystem_5fcall_5fids_2eproto, file_level_service_descriptors_koinos_2fchain_2fsystem_5fcall_5fids_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_koinos_2fchain_2fsystem_5fcall_5fids_2eproto_getter() {
  return &descriptor_table_koinos_2fchain_2fsystem_5fcall_5fids_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_koinos_2fchain_2fsystem_5fcall_5fids_2eproto(&descriptor_table_koinos_2fchain_2fsystem_5fcall_5fids_2eproto);
namespace koinos {
namespace chain {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* system_call_id_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_koinos_2fchain_2fsystem_5fcall_5fids_2eproto);
  return file_level_enum_descriptors_koinos_2fchain_2fsystem_5fcall_5fids_2eproto[0];
}
bool system_call_id_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
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
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 201:
    case 202:
    case 203:
    case 204:
    case 301:
    case 302:
    case 303:
    case 304:
    case 305:
    case 401:
    case 402:
    case 501:
    case 502:
    case 503:
    case 504:
    case 505:
    case 601:
    case 602:
    case 603:
    case 604:
    case 605:
    case 606:
    case 10000:
    case 10001:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace chain
}  // namespace koinos
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
