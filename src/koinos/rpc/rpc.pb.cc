// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/rpc/rpc.proto

#include "koinos/rpc/rpc.pb.h"

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
namespace rpc {
constexpr reserved_rpc::reserved_rpc(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct reserved_rpcDefaultTypeInternal {
  constexpr reserved_rpcDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~reserved_rpcDefaultTypeInternal() {}
  union {
    reserved_rpc _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT reserved_rpcDefaultTypeInternal _reserved_rpc_default_instance_;
constexpr error_status::error_status(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : details_()
  , message_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , data_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct error_statusDefaultTypeInternal {
  constexpr error_statusDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~error_statusDefaultTypeInternal() {}
  union {
    error_status _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT error_statusDefaultTypeInternal _error_status_default_instance_;
}  // namespace rpc
}  // namespace koinos
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_koinos_2frpc_2frpc_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_koinos_2frpc_2frpc_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_koinos_2frpc_2frpc_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_koinos_2frpc_2frpc_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::koinos::rpc::reserved_rpc, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::koinos::rpc::error_status, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::koinos::rpc::error_status, message_),
  PROTOBUF_FIELD_OFFSET(::koinos::rpc::error_status, data_),
  PROTOBUF_FIELD_OFFSET(::koinos::rpc::error_status, details_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::koinos::rpc::reserved_rpc)},
  { 5, -1, sizeof(::koinos::rpc::error_status)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::koinos::rpc::_reserved_rpc_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::koinos::rpc::_error_status_default_instance_),
};

const char descriptor_table_protodef_koinos_2frpc_2frpc_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024koinos/rpc/rpc.proto\022\nkoinos.rpc\032\031goog"
  "le/protobuf/any.proto\"\016\n\014reserved_rpc\"X\n"
  "\014error_status\022\017\n\007message\030\001 \001(\t\022\020\n\004data\030\002"
  " \001(\tB\002\030\001\022%\n\007details\030\n \003(\0132\024.google.proto"
  "buf.AnyB5Z3github.com/koinos/koinos-prot"
  "o-golang/v2/koinos/rpcb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_koinos_2frpc_2frpc_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fany_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_koinos_2frpc_2frpc_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2frpc_2frpc_2eproto = {
  false, false, 230, descriptor_table_protodef_koinos_2frpc_2frpc_2eproto, "koinos/rpc/rpc.proto", 
  &descriptor_table_koinos_2frpc_2frpc_2eproto_once, descriptor_table_koinos_2frpc_2frpc_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_koinos_2frpc_2frpc_2eproto::offsets,
  file_level_metadata_koinos_2frpc_2frpc_2eproto, file_level_enum_descriptors_koinos_2frpc_2frpc_2eproto, file_level_service_descriptors_koinos_2frpc_2frpc_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_koinos_2frpc_2frpc_2eproto_getter() {
  return &descriptor_table_koinos_2frpc_2frpc_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_koinos_2frpc_2frpc_2eproto(&descriptor_table_koinos_2frpc_2frpc_2eproto);
namespace koinos {
namespace rpc {

// ===================================================================

class reserved_rpc::_Internal {
 public:
};

reserved_rpc::reserved_rpc(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:koinos.rpc.reserved_rpc)
}
reserved_rpc::reserved_rpc(const reserved_rpc& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:koinos.rpc.reserved_rpc)
}

inline void reserved_rpc::SharedCtor() {
}

reserved_rpc::~reserved_rpc() {
  // @@protoc_insertion_point(destructor:koinos.rpc.reserved_rpc)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void reserved_rpc::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void reserved_rpc::ArenaDtor(void* object) {
  reserved_rpc* _this = reinterpret_cast< reserved_rpc* >(object);
  (void)_this;
}
void reserved_rpc::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void reserved_rpc::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void reserved_rpc::Clear() {
// @@protoc_insertion_point(message_clear_start:koinos.rpc.reserved_rpc)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* reserved_rpc::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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

::PROTOBUF_NAMESPACE_ID::uint8* reserved_rpc::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:koinos.rpc.reserved_rpc)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:koinos.rpc.reserved_rpc)
  return target;
}

size_t reserved_rpc::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:koinos.rpc.reserved_rpc)
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

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData reserved_rpc::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    reserved_rpc::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*reserved_rpc::GetClassData() const { return &_class_data_; }

void reserved_rpc::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<reserved_rpc *>(to)->MergeFrom(
      static_cast<const reserved_rpc &>(from));
}


void reserved_rpc::MergeFrom(const reserved_rpc& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:koinos.rpc.reserved_rpc)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void reserved_rpc::CopyFrom(const reserved_rpc& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:koinos.rpc.reserved_rpc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool reserved_rpc::IsInitialized() const {
  return true;
}

void reserved_rpc::InternalSwap(reserved_rpc* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata reserved_rpc::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_koinos_2frpc_2frpc_2eproto_getter, &descriptor_table_koinos_2frpc_2frpc_2eproto_once,
      file_level_metadata_koinos_2frpc_2frpc_2eproto[0]);
}

// ===================================================================

class error_status::_Internal {
 public:
};

void error_status::clear_details() {
  details_.Clear();
}
error_status::error_status(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  details_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:koinos.rpc.error_status)
}
error_status::error_status(const error_status& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      details_(from.details_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_message().empty()) {
    message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_message(), 
      GetArenaForAllocation());
  }
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_data().empty()) {
    data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_data(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:koinos.rpc.error_status)
}

inline void error_status::SharedCtor() {
message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

error_status::~error_status() {
  // @@protoc_insertion_point(destructor:koinos.rpc.error_status)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void error_status::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void error_status::ArenaDtor(void* object) {
  error_status* _this = reinterpret_cast< error_status* >(object);
  (void)_this;
}
void error_status::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void error_status::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void error_status::Clear() {
// @@protoc_insertion_point(message_clear_start:koinos.rpc.error_status)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  details_.Clear();
  message_.ClearToEmpty();
  data_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* error_status::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string message = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_message();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "koinos.rpc.error_status.message"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string data = 2 [deprecated = true];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "koinos.rpc.error_status.data"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .google.protobuf.Any details = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_details(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<82>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* error_status::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:koinos.rpc.error_status)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "koinos.rpc.error_status.message");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_message(), target);
  }

  // string data = 2 [deprecated = true];
  if (!this->_internal_data().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_data().data(), static_cast<int>(this->_internal_data().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "koinos.rpc.error_status.data");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_data(), target);
  }

  // repeated .google.protobuf.Any details = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_details_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(10, this->_internal_details(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:koinos.rpc.error_status)
  return target;
}

size_t error_status::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:koinos.rpc.error_status)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.protobuf.Any details = 10;
  total_size += 1UL * this->_internal_details_size();
  for (const auto& msg : this->details_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string message = 1;
  if (!this->_internal_message().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_message());
  }

  // string data = 2 [deprecated = true];
  if (!this->_internal_data().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_data());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData error_status::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    error_status::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*error_status::GetClassData() const { return &_class_data_; }

void error_status::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<error_status *>(to)->MergeFrom(
      static_cast<const error_status &>(from));
}


void error_status::MergeFrom(const error_status& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:koinos.rpc.error_status)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  details_.MergeFrom(from.details_);
  if (!from._internal_message().empty()) {
    _internal_set_message(from._internal_message());
  }
  if (!from._internal_data().empty()) {
    _internal_set_data(from._internal_data());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void error_status::CopyFrom(const error_status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:koinos.rpc.error_status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool error_status::IsInitialized() const {
  return true;
}

void error_status::InternalSwap(error_status* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  details_.InternalSwap(&other->details_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &message_, GetArenaForAllocation(),
      &other->message_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &data_, GetArenaForAllocation(),
      &other->data_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata error_status::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_koinos_2frpc_2frpc_2eproto_getter, &descriptor_table_koinos_2frpc_2frpc_2eproto_once,
      file_level_metadata_koinos_2frpc_2frpc_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace rpc
}  // namespace koinos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::koinos::rpc::reserved_rpc* Arena::CreateMaybeMessage< ::koinos::rpc::reserved_rpc >(Arena* arena) {
  return Arena::CreateMessageInternal< ::koinos::rpc::reserved_rpc >(arena);
}
template<> PROTOBUF_NOINLINE ::koinos::rpc::error_status* Arena::CreateMaybeMessage< ::koinos::rpc::error_status >(Arena* arena) {
  return Arena::CreateMessageInternal< ::koinos::rpc::error_status >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
