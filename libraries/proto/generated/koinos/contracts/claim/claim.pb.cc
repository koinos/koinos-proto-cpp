// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/contracts/claim/claim.proto

#include "koinos/contracts/claim/claim.pb.h"

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
namespace contracts {
namespace claim {
constexpr claim_status::claim_status(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : token_amount_(uint64_t{0u})
  , claimed_(false){}
struct claim_statusDefaultTypeInternal {
  constexpr claim_statusDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~claim_statusDefaultTypeInternal() {}
  union {
    claim_status _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT claim_statusDefaultTypeInternal _claim_status_default_instance_;
constexpr claim_arguments::claim_arguments(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : eth_address_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct claim_argumentsDefaultTypeInternal {
  constexpr claim_argumentsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~claim_argumentsDefaultTypeInternal() {}
  union {
    claim_arguments _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT claim_argumentsDefaultTypeInternal _claim_arguments_default_instance_;
constexpr claim_result::claim_result(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct claim_resultDefaultTypeInternal {
  constexpr claim_resultDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~claim_resultDefaultTypeInternal() {}
  union {
    claim_result _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT claim_resultDefaultTypeInternal _claim_result_default_instance_;
}  // namespace claim
}  // namespace contracts
}  // namespace koinos
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_koinos_2fcontracts_2fclaim_2fclaim_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_koinos_2fcontracts_2fclaim_2fclaim_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_koinos_2fcontracts_2fclaim_2fclaim_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_koinos_2fcontracts_2fclaim_2fclaim_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::koinos::contracts::claim::claim_status, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::koinos::contracts::claim::claim_status, token_amount_),
  PROTOBUF_FIELD_OFFSET(::koinos::contracts::claim::claim_status, claimed_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::koinos::contracts::claim::claim_arguments, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::koinos::contracts::claim::claim_arguments, eth_address_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::koinos::contracts::claim::claim_result, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::koinos::contracts::claim::claim_status)},
  { 7, -1, sizeof(::koinos::contracts::claim::claim_arguments)},
  { 13, -1, sizeof(::koinos::contracts::claim::claim_result)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::koinos::contracts::claim::_claim_status_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::koinos::contracts::claim::_claim_arguments_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::koinos::contracts::claim::_claim_result_default_instance_),
};

const char descriptor_table_protodef_koinos_2fcontracts_2fclaim_2fclaim_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\"koinos/contracts/claim/claim.proto\022\026ko"
  "inos.contracts.claim\032\024koinos/options.pro"
  "to\"9\n\014claim_status\022\030\n\014token_amount\030\001 \001(\004"
  "B\0020\001\022\017\n\007claimed\030\002 \001(\010\",\n\017claim_arguments"
  "\022\031\n\013eth_address\030\001 \001(\014B\004\200\265\030\002\"\016\n\014claim_res"
  "ultB>Z<github.com/koinos/koinos-proto-go"
  "lang/koinos/contracts/claimb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_koinos_2fcontracts_2fclaim_2fclaim_2eproto_deps[1] = {
  &::descriptor_table_koinos_2foptions_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_koinos_2fcontracts_2fclaim_2fclaim_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2fcontracts_2fclaim_2fclaim_2eproto = {
  false, false, 275, descriptor_table_protodef_koinos_2fcontracts_2fclaim_2fclaim_2eproto, "koinos/contracts/claim/claim.proto", 
  &descriptor_table_koinos_2fcontracts_2fclaim_2fclaim_2eproto_once, descriptor_table_koinos_2fcontracts_2fclaim_2fclaim_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_koinos_2fcontracts_2fclaim_2fclaim_2eproto::offsets,
  file_level_metadata_koinos_2fcontracts_2fclaim_2fclaim_2eproto, file_level_enum_descriptors_koinos_2fcontracts_2fclaim_2fclaim_2eproto, file_level_service_descriptors_koinos_2fcontracts_2fclaim_2fclaim_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_koinos_2fcontracts_2fclaim_2fclaim_2eproto_getter() {
  return &descriptor_table_koinos_2fcontracts_2fclaim_2fclaim_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_koinos_2fcontracts_2fclaim_2fclaim_2eproto(&descriptor_table_koinos_2fcontracts_2fclaim_2fclaim_2eproto);
namespace koinos {
namespace contracts {
namespace claim {

// ===================================================================

class claim_status::_Internal {
 public:
};

claim_status::claim_status(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:koinos.contracts.claim.claim_status)
}
claim_status::claim_status(const claim_status& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&token_amount_, &from.token_amount_,
    static_cast<size_t>(reinterpret_cast<char*>(&claimed_) -
    reinterpret_cast<char*>(&token_amount_)) + sizeof(claimed_));
  // @@protoc_insertion_point(copy_constructor:koinos.contracts.claim.claim_status)
}

inline void claim_status::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&token_amount_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&claimed_) -
    reinterpret_cast<char*>(&token_amount_)) + sizeof(claimed_));
}

claim_status::~claim_status() {
  // @@protoc_insertion_point(destructor:koinos.contracts.claim.claim_status)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void claim_status::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void claim_status::ArenaDtor(void* object) {
  claim_status* _this = reinterpret_cast< claim_status* >(object);
  (void)_this;
}
void claim_status::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void claim_status::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void claim_status::Clear() {
// @@protoc_insertion_point(message_clear_start:koinos.contracts.claim.claim_status)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&token_amount_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&claimed_) -
      reinterpret_cast<char*>(&token_amount_)) + sizeof(claimed_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* claim_status::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint64 token_amount = 1 [jstype = JS_STRING];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          token_amount_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool claimed = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          claimed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* claim_status::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:koinos.contracts.claim.claim_status)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 token_amount = 1 [jstype = JS_STRING];
  if (this->_internal_token_amount() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_token_amount(), target);
  }

  // bool claimed = 2;
  if (this->_internal_claimed() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_claimed(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:koinos.contracts.claim.claim_status)
  return target;
}

size_t claim_status::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:koinos.contracts.claim.claim_status)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint64 token_amount = 1 [jstype = JS_STRING];
  if (this->_internal_token_amount() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_token_amount());
  }

  // bool claimed = 2;
  if (this->_internal_claimed() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData claim_status::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    claim_status::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*claim_status::GetClassData() const { return &_class_data_; }

void claim_status::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<claim_status *>(to)->MergeFrom(
      static_cast<const claim_status &>(from));
}


void claim_status::MergeFrom(const claim_status& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:koinos.contracts.claim.claim_status)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_token_amount() != 0) {
    _internal_set_token_amount(from._internal_token_amount());
  }
  if (from._internal_claimed() != 0) {
    _internal_set_claimed(from._internal_claimed());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void claim_status::CopyFrom(const claim_status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:koinos.contracts.claim.claim_status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool claim_status::IsInitialized() const {
  return true;
}

void claim_status::InternalSwap(claim_status* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(claim_status, claimed_)
      + sizeof(claim_status::claimed_)
      - PROTOBUF_FIELD_OFFSET(claim_status, token_amount_)>(
          reinterpret_cast<char*>(&token_amount_),
          reinterpret_cast<char*>(&other->token_amount_));
}

::PROTOBUF_NAMESPACE_ID::Metadata claim_status::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_koinos_2fcontracts_2fclaim_2fclaim_2eproto_getter, &descriptor_table_koinos_2fcontracts_2fclaim_2fclaim_2eproto_once,
      file_level_metadata_koinos_2fcontracts_2fclaim_2fclaim_2eproto[0]);
}

// ===================================================================

class claim_arguments::_Internal {
 public:
};

claim_arguments::claim_arguments(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:koinos.contracts.claim.claim_arguments)
}
claim_arguments::claim_arguments(const claim_arguments& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  eth_address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_eth_address().empty()) {
    eth_address_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_eth_address(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:koinos.contracts.claim.claim_arguments)
}

inline void claim_arguments::SharedCtor() {
eth_address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

claim_arguments::~claim_arguments() {
  // @@protoc_insertion_point(destructor:koinos.contracts.claim.claim_arguments)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void claim_arguments::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  eth_address_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void claim_arguments::ArenaDtor(void* object) {
  claim_arguments* _this = reinterpret_cast< claim_arguments* >(object);
  (void)_this;
}
void claim_arguments::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void claim_arguments::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void claim_arguments::Clear() {
// @@protoc_insertion_point(message_clear_start:koinos.contracts.claim.claim_arguments)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  eth_address_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* claim_arguments::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes eth_address = 1 [(.koinos.btype) = HEX];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_eth_address();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* claim_arguments::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:koinos.contracts.claim.claim_arguments)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes eth_address = 1 [(.koinos.btype) = HEX];
  if (!this->_internal_eth_address().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_eth_address(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:koinos.contracts.claim.claim_arguments)
  return target;
}

size_t claim_arguments::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:koinos.contracts.claim.claim_arguments)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes eth_address = 1 [(.koinos.btype) = HEX];
  if (!this->_internal_eth_address().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_eth_address());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData claim_arguments::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    claim_arguments::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*claim_arguments::GetClassData() const { return &_class_data_; }

void claim_arguments::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<claim_arguments *>(to)->MergeFrom(
      static_cast<const claim_arguments &>(from));
}


void claim_arguments::MergeFrom(const claim_arguments& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:koinos.contracts.claim.claim_arguments)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_eth_address().empty()) {
    _internal_set_eth_address(from._internal_eth_address());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void claim_arguments::CopyFrom(const claim_arguments& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:koinos.contracts.claim.claim_arguments)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool claim_arguments::IsInitialized() const {
  return true;
}

void claim_arguments::InternalSwap(claim_arguments* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &eth_address_, GetArenaForAllocation(),
      &other->eth_address_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata claim_arguments::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_koinos_2fcontracts_2fclaim_2fclaim_2eproto_getter, &descriptor_table_koinos_2fcontracts_2fclaim_2fclaim_2eproto_once,
      file_level_metadata_koinos_2fcontracts_2fclaim_2fclaim_2eproto[1]);
}

// ===================================================================

class claim_result::_Internal {
 public:
};

claim_result::claim_result(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:koinos.contracts.claim.claim_result)
}
claim_result::claim_result(const claim_result& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:koinos.contracts.claim.claim_result)
}

inline void claim_result::SharedCtor() {
}

claim_result::~claim_result() {
  // @@protoc_insertion_point(destructor:koinos.contracts.claim.claim_result)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void claim_result::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void claim_result::ArenaDtor(void* object) {
  claim_result* _this = reinterpret_cast< claim_result* >(object);
  (void)_this;
}
void claim_result::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void claim_result::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void claim_result::Clear() {
// @@protoc_insertion_point(message_clear_start:koinos.contracts.claim.claim_result)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* claim_result::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
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
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* claim_result::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:koinos.contracts.claim.claim_result)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:koinos.contracts.claim.claim_result)
  return target;
}

size_t claim_result::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:koinos.contracts.claim.claim_result)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData claim_result::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    claim_result::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*claim_result::GetClassData() const { return &_class_data_; }

void claim_result::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<claim_result *>(to)->MergeFrom(
      static_cast<const claim_result &>(from));
}


void claim_result::MergeFrom(const claim_result& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:koinos.contracts.claim.claim_result)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void claim_result::CopyFrom(const claim_result& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:koinos.contracts.claim.claim_result)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool claim_result::IsInitialized() const {
  return true;
}

void claim_result::InternalSwap(claim_result* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata claim_result::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_koinos_2fcontracts_2fclaim_2fclaim_2eproto_getter, &descriptor_table_koinos_2fcontracts_2fclaim_2fclaim_2eproto_once,
      file_level_metadata_koinos_2fcontracts_2fclaim_2fclaim_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace claim
}  // namespace contracts
}  // namespace koinos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::koinos::contracts::claim::claim_status* Arena::CreateMaybeMessage< ::koinos::contracts::claim::claim_status >(Arena* arena) {
  return Arena::CreateMessageInternal< ::koinos::contracts::claim::claim_status >(arena);
}
template<> PROTOBUF_NOINLINE ::koinos::contracts::claim::claim_arguments* Arena::CreateMaybeMessage< ::koinos::contracts::claim::claim_arguments >(Arena* arena) {
  return Arena::CreateMessageInternal< ::koinos::contracts::claim::claim_arguments >(arena);
}
template<> PROTOBUF_NOINLINE ::koinos::contracts::claim::claim_result* Arena::CreateMaybeMessage< ::koinos::contracts::claim::claim_result >(Arena* arena) {
  return Arena::CreateMessageInternal< ::koinos::contracts::claim::claim_result >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
