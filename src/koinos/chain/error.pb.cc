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
constexpr error_details::error_details(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : logs_()
  , code_(0){}
struct error_detailsDefaultTypeInternal {
  constexpr error_detailsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~error_detailsDefaultTypeInternal() {}
  union {
    error_details _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT error_detailsDefaultTypeInternal _error_details_default_instance_;
}  // namespace chain
}  // namespace koinos
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_koinos_2fchain_2ferror_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_koinos_2fchain_2ferror_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_koinos_2fchain_2ferror_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_koinos_2fchain_2ferror_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::koinos::chain::error_details, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::koinos::chain::error_details, code_),
  PROTOBUF_FIELD_OFFSET(::koinos::chain::error_details, logs_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::koinos::chain::error_details)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::koinos::chain::_error_details_default_instance_),
};

const char descriptor_table_protodef_koinos_2fchain_2ferror_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030koinos/chain/error.proto\022\014koinos.chain"
  "\"+\n\rerror_details\022\014\n\004code\030\001 \001(\005\022\014\n\004logs\030"
  "\002 \003(\t*\300\t\n\nerror_code\022\013\n\007success\020\000\022\r\n\trev"
  "ersion\020\001\022\022\n\016internal_error\020d\022 \n\034system_a"
  "uthorization_failure\020e\022\024\n\020invalid_contra"
  "ct\020f\022\033\n\027insufficient_privileges\020g\022\023\n\017ins"
  "ufficient_rc\020h\022\036\n\032insufficient_return_bu"
  "ffer\020i\022\021\n\runknown_thunk\020j\022\025\n\021unknown_ope"
  "ration\020k\022\025\n\021read_only_context\020l\022\024\n\007failu"
  "re\020\377\377\377\377\377\377\377\377\377\001\022\034\n\017field_not_found\020\234\377\377\377\377\377\377"
  "\377\377\001\022\036\n\021unknown_hash_code\020\233\377\377\377\377\377\377\377\377\001\022\030\n\013u"
  "nknown_dsa\020\232\377\377\377\377\377\377\377\377\001\022 \n\023unknown_system_"
  "call\020\231\377\377\377\377\377\377\377\377\001\022 \n\023operation_not_found\020\230"
  "\377\377\377\377\377\377\377\377\001\022\"\n\025authorization_failure\020\270\376\377\377\377"
  "\377\377\377\377\001\022\032\n\rinvalid_nonce\020\267\376\377\377\377\377\377\377\377\001\022\036\n\021inv"
  "alid_signature\020\266\376\377\377\377\377\377\377\377\001\022\034\n\017malformed_b"
  "lock\020\265\376\377\377\377\377\377\377\377\001\022\"\n\025malformed_transaction"
  "\020\264\376\377\377\377\377\377\377\377\001\022#\n\026block_resource_failure\020\263\376"
  "\377\377\377\377\377\377\377\001\022\034\n\017unknown_backend\020\230\370\377\377\377\377\377\377\377\001\022\035"
  "\n\020unexpected_state\020\227\370\377\377\377\377\377\377\377\001\022\'\n\032missing"
  "_required_arguments\020\226\370\377\377\377\377\377\377\377\001\022#\n\026unknow"
  "n_previous_block\020\225\370\377\377\377\377\377\377\377\001\022\036\n\021unexpecte"
  "d_height\020\224\370\377\377\377\377\377\377\377\001\022\036\n\021block_state_error"
  "\020\223\370\377\377\377\377\377\377\377\001\022\"\n\025state_merkle_mismatch\020\222\370\377"
  "\377\377\377\377\377\377\001\022\037\n\022unexpected_receipt\020\221\370\377\377\377\377\377\377\377\001"
  "\022\030\n\013rpc_failure\020\220\370\377\377\377\377\377\377\377\001\022 \n\023pending_st"
  "ate_error\020\217\370\377\377\377\377\377\377\377\001\022$\n\027timestamp_out_of"
  "_bounds\020\216\370\377\377\377\377\377\377\377\001\022\034\n\017indexer_failure\020\215\370"
  "\377\377\377\377\377\377\377\001\022-\n network_bandwidth_limit_exce"
  "eded\020\214\370\377\377\377\377\377\377\377\001\022-\n compute_bandwidth_lim"
  "it_exceeded\020\213\370\377\377\377\377\377\377\377\001\022(\n\033disk_storage_l"
  "imit_exceeded\020\212\370\377\377\377\377\377\377\377\001\022&\n\031pre_irrevers"
  "ibility_block\020\211\370\377\377\377\377\377\377\377\001B4Z2github.com/k"
  "oinos/koinos-proto-golang/koinos/chainb\006"
  "proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_koinos_2fchain_2ferror_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2fchain_2ferror_2eproto = {
  false, false, 1366, descriptor_table_protodef_koinos_2fchain_2ferror_2eproto, "koinos/chain/error.proto", 
  &descriptor_table_koinos_2fchain_2ferror_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_koinos_2fchain_2ferror_2eproto::offsets,
  file_level_metadata_koinos_2fchain_2ferror_2eproto, file_level_enum_descriptors_koinos_2fchain_2ferror_2eproto, file_level_service_descriptors_koinos_2fchain_2ferror_2eproto,
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
    case -1015:
    case -1014:
    case -1013:
    case -1012:
    case -1011:
    case -1010:
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


// ===================================================================

class error_details::_Internal {
 public:
};

error_details::error_details(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  logs_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:koinos.chain.error_details)
}
error_details::error_details(const error_details& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      logs_(from.logs_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  code_ = from.code_;
  // @@protoc_insertion_point(copy_constructor:koinos.chain.error_details)
}

inline void error_details::SharedCtor() {
code_ = 0;
}

error_details::~error_details() {
  // @@protoc_insertion_point(destructor:koinos.chain.error_details)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void error_details::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void error_details::ArenaDtor(void* object) {
  error_details* _this = reinterpret_cast< error_details* >(object);
  (void)_this;
}
void error_details::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void error_details::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void error_details::Clear() {
// @@protoc_insertion_point(message_clear_start:koinos.chain.error_details)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  logs_.Clear();
  code_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* error_details::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string logs = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_logs();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "koinos.chain.error_details.logs"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* error_details::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:koinos.chain.error_details)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 code = 1;
  if (this->_internal_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_code(), target);
  }

  // repeated string logs = 2;
  for (int i = 0, n = this->_internal_logs_size(); i < n; i++) {
    const auto& s = this->_internal_logs(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "koinos.chain.error_details.logs");
    target = stream->WriteString(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:koinos.chain.error_details)
  return target;
}

size_t error_details::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:koinos.chain.error_details)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string logs = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(logs_.size());
  for (int i = 0, n = logs_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      logs_.Get(i));
  }

  // int32 code = 1;
  if (this->_internal_code() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_code());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData error_details::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    error_details::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*error_details::GetClassData() const { return &_class_data_; }

void error_details::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<error_details *>(to)->MergeFrom(
      static_cast<const error_details &>(from));
}


void error_details::MergeFrom(const error_details& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:koinos.chain.error_details)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  logs_.MergeFrom(from.logs_);
  if (from._internal_code() != 0) {
    _internal_set_code(from._internal_code());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void error_details::CopyFrom(const error_details& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:koinos.chain.error_details)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool error_details::IsInitialized() const {
  return true;
}

void error_details::InternalSwap(error_details* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  logs_.InternalSwap(&other->logs_);
  swap(code_, other->code_);
}

::PROTOBUF_NAMESPACE_ID::Metadata error_details::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_koinos_2fchain_2ferror_2eproto_getter, &descriptor_table_koinos_2fchain_2ferror_2eproto_once,
      file_level_metadata_koinos_2fchain_2ferror_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace chain
}  // namespace koinos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::koinos::chain::error_details* Arena::CreateMaybeMessage< ::koinos::chain::error_details >(Arena* arena) {
  return Arena::CreateMessageInternal< ::koinos::chain::error_details >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
