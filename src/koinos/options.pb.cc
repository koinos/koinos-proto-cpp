// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/options.proto

#include "koinos/options.pb.h"

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
}  // namespace koinos
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_koinos_2foptions_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_koinos_2foptions_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_koinos_2foptions_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_koinos_2foptions_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024koinos/options.proto\022\006koinos\032 google/p"
  "rotobuf/descriptor.proto*m\n\nbytes_type\022\n"
  "\n\006BASE64\020\000\022\n\n\006BASE58\020\001\022\007\n\003HEX\020\002\022\014\n\010BLOCK"
  "_ID\020\003\022\022\n\016TRANSACTION_ID\020\004\022\017\n\013CONTRACT_ID"
  "\020\005\022\013\n\007ADDRESS\020\006:E\n\005btype\022\035.google.protob"
  "uf.FieldOptions\030\320\206\003 \001(\0162\022.koinos.bytes_t"
  "ype\210\001\001B1Z/github.com/koinos/koinos-proto"
  "-golang/v2/koinosb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_koinos_2foptions_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_koinos_2foptions_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2foptions_2eproto = {
  false, false, 305, descriptor_table_protodef_koinos_2foptions_2eproto, "koinos/options.proto", 
  &descriptor_table_koinos_2foptions_2eproto_once, descriptor_table_koinos_2foptions_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_koinos_2foptions_2eproto::offsets,
  nullptr, file_level_enum_descriptors_koinos_2foptions_2eproto, file_level_service_descriptors_koinos_2foptions_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_koinos_2foptions_2eproto_getter() {
  return &descriptor_table_koinos_2foptions_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_koinos_2foptions_2eproto(&descriptor_table_koinos_2foptions_2eproto);
namespace koinos {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* bytes_type_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_koinos_2foptions_2eproto);
  return file_level_enum_descriptors_koinos_2foptions_2eproto[0];
}
bool bytes_type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}

PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::EnumTypeTraits< ::koinos::bytes_type, ::koinos::bytes_type_IsValid>, 14, false >
  btype(kBtypeFieldNumber, static_cast< ::koinos::bytes_type >(0));

// @@protoc_insertion_point(namespace_scope)
}  // namespace koinos
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
