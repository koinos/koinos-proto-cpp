// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/chain/error.proto

#include "koinos/chain/error.pb.h"

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
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_koinos_2fchain_2ferror_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_koinos_2fchain_2ferror_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_koinos_2fchain_2ferror_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_koinos_2fchain_2ferror_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030koinos/chain/error.proto\022\014koinos.chain"
  "*\326\007\n\nerror_code\022\013\n\007success\020\000\022\r\n\treversio"
  "n\020\001\022\022\n\016internal_error\020d\022 \n\034system_author"
  "ization_failure\020e\022\024\n\020invalid_contract\020f\022"
  "\033\n\027insufficient_privileges\020g\022\023\n\017insuffic"
  "ient_rc\020h\022\036\n\032insufficient_return_buffer\020"
  "i\022\021\n\runknown_thunk\020j\022\025\n\021unknown_operatio"
  "n\020k\022\025\n\021read_only_context\020l\022\024\n\007failure\020\377\377"
  "\377\377\377\377\377\377\377\001\022\034\n\017field_not_found\020\234\377\377\377\377\377\377\377\377\001\022\036"
  "\n\021unknown_hash_code\020\233\377\377\377\377\377\377\377\377\001\022\030\n\013unknow"
  "n_dsa\020\232\377\377\377\377\377\377\377\377\001\022 \n\023unknown_system_call\020"
  "\231\377\377\377\377\377\377\377\377\001\022 \n\023operation_not_found\020\230\377\377\377\377\377"
  "\377\377\377\001\022\"\n\025authorization_failure\020\270\376\377\377\377\377\377\377\377\001"
  "\022\032\n\rinvalid_nonce\020\267\376\377\377\377\377\377\377\377\001\022\036\n\021invalid_"
  "signature\020\266\376\377\377\377\377\377\377\377\001\022\034\n\017malformed_block\020"
  "\265\376\377\377\377\377\377\377\377\001\022\"\n\025malformed_transaction\020\264\376\377\377"
  "\377\377\377\377\377\001\022#\n\026block_resource_failure\020\263\376\377\377\377\377\377"
  "\377\377\001\022&\n\031unknown_backend_exception\020\230\370\377\377\377\377\377"
  "\377\377\001\022\035\n\020unexpected_state\020\227\370\377\377\377\377\377\377\377\001\022\'\n\032mi"
  "ssing_required_arguments\020\226\370\377\377\377\377\377\377\377\001\022#\n\026u"
  "nknown_previous_block\020\225\370\377\377\377\377\377\377\377\001\022\036\n\021unex"
  "pected_height\020\224\370\377\377\377\377\377\377\377\001\022\036\n\021block_state_"
  "error\020\223\370\377\377\377\377\377\377\377\001\022\"\n\025state_merkle_mismatc"
  "h\020\222\370\377\377\377\377\377\377\377\001\022\037\n\022unexpected_receipt\020\221\370\377\377\377"
  "\377\377\377\377\001\022\030\n\013rpc_failure\020\220\370\377\377\377\377\377\377\377\001\022 \n\023pendi"
  "ng_state_error\020\217\370\377\377\377\377\377\377\377\001B4Z2github.com/"
  "koinos/koinos-proto-golang/koinos/chainb"
  "\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_koinos_2fchain_2ferror_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2fchain_2ferror_2eproto = {
  false, false, 1087, descriptor_table_protodef_koinos_2fchain_2ferror_2eproto, "koinos/chain/error.proto", 
  &descriptor_table_koinos_2fchain_2ferror_2eproto_once, nullptr, 0, 0,
  schemas, file_default_instances, TableStruct_koinos_2fchain_2ferror_2eproto::offsets,
  nullptr, file_level_enum_descriptors_koinos_2fchain_2ferror_2eproto, file_level_service_descriptors_koinos_2fchain_2ferror_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_koinos_2fchain_2ferror_2eproto_getter() {
  return &descriptor_table_koinos_2fchain_2ferror_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_koinos_2fchain_2ferror_2eproto(&descriptor_table_koinos_2fchain_2ferror_2eproto);
namespace koinos {
namespace chain {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* error_code_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_koinos_2fchain_2ferror_2eproto);
  return file_level_enum_descriptors_koinos_2fchain_2ferror_2eproto[0];
}
bool error_code_IsValid(int value) {
  switch (value) {
    case -1009:
    case -1008:
    case -1007:
    case -1006:
    case -1005:
    case -1004:
    case -1003:
    case -1002:
    case -1001:
    case -1000:
    case -205:
    case -204:
    case -203:
    case -202:
    case -201:
    case -200:
    case -104:
    case -103:
    case -102:
    case -101:
    case -100:
    case -1:
    case 0:
    case 1:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
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
