// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/chain/object_spaces.proto

#include "koinos/chain/object_spaces.pb.h"

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
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_koinos_2fchain_2fobject_5fspaces_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_koinos_2fchain_2fobject_5fspaces_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_koinos_2fchain_2fobject_5fspaces_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_koinos_2fchain_2fobject_5fspaces_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n koinos/chain/object_spaces.proto\022\014koin"
  "os.chain*~\n\017system_space_id\022\014\n\010metadata\020"
  "\000\022\030\n\024system_call_dispatch\020\001\022\025\n\021contract_"
  "bytecode\020\002\022\025\n\021contract_metadata\020\003\022\025\n\021tra"
  "nsaction_nonce\020\004B7Z5github.com/koinos/ko"
  "inos-proto-golang/v2/koinos/chainb\006proto"
  "3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_koinos_2fchain_2fobject_5fspaces_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2fchain_2fobject_5fspaces_2eproto = {
  false, false, 241, descriptor_table_protodef_koinos_2fchain_2fobject_5fspaces_2eproto, "koinos/chain/object_spaces.proto", 
  &descriptor_table_koinos_2fchain_2fobject_5fspaces_2eproto_once, nullptr, 0, 0,
  schemas, file_default_instances, TableStruct_koinos_2fchain_2fobject_5fspaces_2eproto::offsets,
  nullptr, file_level_enum_descriptors_koinos_2fchain_2fobject_5fspaces_2eproto, file_level_service_descriptors_koinos_2fchain_2fobject_5fspaces_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_koinos_2fchain_2fobject_5fspaces_2eproto_getter() {
  return &descriptor_table_koinos_2fchain_2fobject_5fspaces_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_koinos_2fchain_2fobject_5fspaces_2eproto(&descriptor_table_koinos_2fchain_2fobject_5fspaces_2eproto);
namespace koinos {
namespace chain {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* system_space_id_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_koinos_2fchain_2fobject_5fspaces_2eproto);
  return file_level_enum_descriptors_koinos_2fchain_2fobject_5fspaces_2eproto[0];
}
bool system_space_id_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
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
