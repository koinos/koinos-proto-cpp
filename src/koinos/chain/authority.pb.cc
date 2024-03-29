// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/chain/authority.proto

#include "koinos/chain/authority.pb.h"

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
constexpr call_data::call_data(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : contract_id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , caller_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , data_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , entry_point_(0u){}
struct call_dataDefaultTypeInternal {
  constexpr call_dataDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~call_dataDefaultTypeInternal() {}
  union {
    call_data _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT call_dataDefaultTypeInternal _call_data_default_instance_;
constexpr authorize_arguments::authorize_arguments(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : call_(nullptr)
  , type_(0)
{}
struct authorize_argumentsDefaultTypeInternal {
  constexpr authorize_argumentsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~authorize_argumentsDefaultTypeInternal() {}
  union {
    authorize_arguments _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT authorize_argumentsDefaultTypeInternal _authorize_arguments_default_instance_;
constexpr authorize_result::authorize_result(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : value_(false){}
struct authorize_resultDefaultTypeInternal {
  constexpr authorize_resultDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~authorize_resultDefaultTypeInternal() {}
  union {
    authorize_result _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT authorize_resultDefaultTypeInternal _authorize_result_default_instance_;
}  // namespace chain
}  // namespace koinos
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_koinos_2fchain_2fauthority_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_koinos_2fchain_2fauthority_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_koinos_2fchain_2fauthority_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_koinos_2fchain_2fauthority_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::koinos::chain::call_data, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::koinos::chain::call_data, contract_id_),
  PROTOBUF_FIELD_OFFSET(::koinos::chain::call_data, entry_point_),
  PROTOBUF_FIELD_OFFSET(::koinos::chain::call_data, caller_),
  PROTOBUF_FIELD_OFFSET(::koinos::chain::call_data, data_),
  PROTOBUF_FIELD_OFFSET(::koinos::chain::authorize_arguments, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::koinos::chain::authorize_arguments, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::koinos::chain::authorize_arguments, type_),
  PROTOBUF_FIELD_OFFSET(::koinos::chain::authorize_arguments, call_),
  ~0u,
  0,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::koinos::chain::authorize_result, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::koinos::chain::authorize_result, value_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::koinos::chain::call_data)},
  { 9, 16, sizeof(::koinos::chain::authorize_arguments)},
  { 18, -1, sizeof(::koinos::chain::authorize_result)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::koinos::chain::_call_data_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::koinos::chain::_authorize_arguments_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::koinos::chain::_authorize_result_default_instance_),
};

const char descriptor_table_protodef_koinos_2fchain_2fauthority_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034koinos/chain/authority.proto\022\014koinos.c"
  "hain\032\024koinos/options.proto\"Y\n\tcall_data\022"
  "\031\n\013contract_id\030\001 \001(\014B\004\200\265\030\006\022\023\n\013entry_poin"
  "t\030\002 \001(\r\022\016\n\006caller\030\003 \001(\014\022\014\n\004data\030\004 \001(\014\"z\n"
  "\023authorize_arguments\022.\n\004type\030\001 \001(\0162 .koi"
  "nos.chain.authorization_type\022*\n\004call\030\002 \001"
  "(\0132\027.koinos.chain.call_dataH\000\210\001\001B\007\n\005_cal"
  "l\"!\n\020authorize_result\022\r\n\005value\030\001 \001(\010*Y\n\022"
  "authorization_type\022\021\n\rcontract_call\020\000\022\033\n"
  "\027transaction_application\020\001\022\023\n\017contract_u"
  "pload\020\002B7Z5github.com/koinos/koinos-prot"
  "o-golang/v2/koinos/chainb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_koinos_2fchain_2fauthority_2eproto_deps[1] = {
  &::descriptor_table_koinos_2foptions_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_koinos_2fchain_2fauthority_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2fchain_2fauthority_2eproto = {
  false, false, 472, descriptor_table_protodef_koinos_2fchain_2fauthority_2eproto, "koinos/chain/authority.proto", 
  &descriptor_table_koinos_2fchain_2fauthority_2eproto_once, descriptor_table_koinos_2fchain_2fauthority_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_koinos_2fchain_2fauthority_2eproto::offsets,
  file_level_metadata_koinos_2fchain_2fauthority_2eproto, file_level_enum_descriptors_koinos_2fchain_2fauthority_2eproto, file_level_service_descriptors_koinos_2fchain_2fauthority_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_koinos_2fchain_2fauthority_2eproto_getter() {
  return &descriptor_table_koinos_2fchain_2fauthority_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_koinos_2fchain_2fauthority_2eproto(&descriptor_table_koinos_2fchain_2fauthority_2eproto);
namespace koinos {
namespace chain {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* authorization_type_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_koinos_2fchain_2fauthority_2eproto);
  return file_level_enum_descriptors_koinos_2fchain_2fauthority_2eproto[0];
}
bool authorization_type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class call_data::_Internal {
 public:
};

call_data::call_data(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:koinos.chain.call_data)
}
call_data::call_data(const call_data& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  contract_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_contract_id().empty()) {
    contract_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_contract_id(), 
      GetArenaForAllocation());
  }
  caller_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_caller().empty()) {
    caller_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_caller(), 
      GetArenaForAllocation());
  }
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_data().empty()) {
    data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_data(), 
      GetArenaForAllocation());
  }
  entry_point_ = from.entry_point_;
  // @@protoc_insertion_point(copy_constructor:koinos.chain.call_data)
}

inline void call_data::SharedCtor() {
contract_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
caller_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
entry_point_ = 0u;
}

call_data::~call_data() {
  // @@protoc_insertion_point(destructor:koinos.chain.call_data)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void call_data::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  contract_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  caller_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void call_data::ArenaDtor(void* object) {
  call_data* _this = reinterpret_cast< call_data* >(object);
  (void)_this;
}
void call_data::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void call_data::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void call_data::Clear() {
// @@protoc_insertion_point(message_clear_start:koinos.chain.call_data)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  contract_id_.ClearToEmpty();
  caller_.ClearToEmpty();
  data_.ClearToEmpty();
  entry_point_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* call_data::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes contract_id = 1 [(.koinos.btype) = ADDRESS];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_contract_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 entry_point = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          entry_point_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes caller = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_caller();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes data = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_data();
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

::PROTOBUF_NAMESPACE_ID::uint8* call_data::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:koinos.chain.call_data)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes contract_id = 1 [(.koinos.btype) = ADDRESS];
  if (!this->_internal_contract_id().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_contract_id(), target);
  }

  // uint32 entry_point = 2;
  if (this->_internal_entry_point() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_entry_point(), target);
  }

  // bytes caller = 3;
  if (!this->_internal_caller().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_caller(), target);
  }

  // bytes data = 4;
  if (!this->_internal_data().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:koinos.chain.call_data)
  return target;
}

size_t call_data::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:koinos.chain.call_data)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes contract_id = 1 [(.koinos.btype) = ADDRESS];
  if (!this->_internal_contract_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_contract_id());
  }

  // bytes caller = 3;
  if (!this->_internal_caller().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_caller());
  }

  // bytes data = 4;
  if (!this->_internal_data().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  // uint32 entry_point = 2;
  if (this->_internal_entry_point() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_entry_point());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData call_data::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    call_data::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*call_data::GetClassData() const { return &_class_data_; }

void call_data::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<call_data *>(to)->MergeFrom(
      static_cast<const call_data &>(from));
}


void call_data::MergeFrom(const call_data& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:koinos.chain.call_data)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_contract_id().empty()) {
    _internal_set_contract_id(from._internal_contract_id());
  }
  if (!from._internal_caller().empty()) {
    _internal_set_caller(from._internal_caller());
  }
  if (!from._internal_data().empty()) {
    _internal_set_data(from._internal_data());
  }
  if (from._internal_entry_point() != 0) {
    _internal_set_entry_point(from._internal_entry_point());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void call_data::CopyFrom(const call_data& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:koinos.chain.call_data)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool call_data::IsInitialized() const {
  return true;
}

void call_data::InternalSwap(call_data* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &contract_id_, GetArenaForAllocation(),
      &other->contract_id_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &caller_, GetArenaForAllocation(),
      &other->caller_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &data_, GetArenaForAllocation(),
      &other->data_, other->GetArenaForAllocation()
  );
  swap(entry_point_, other->entry_point_);
}

::PROTOBUF_NAMESPACE_ID::Metadata call_data::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_koinos_2fchain_2fauthority_2eproto_getter, &descriptor_table_koinos_2fchain_2fauthority_2eproto_once,
      file_level_metadata_koinos_2fchain_2fauthority_2eproto[0]);
}

// ===================================================================

class authorize_arguments::_Internal {
 public:
  using HasBits = decltype(std::declval<authorize_arguments>()._has_bits_);
  static const ::koinos::chain::call_data& call(const authorize_arguments* msg);
  static void set_has_call(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::koinos::chain::call_data&
authorize_arguments::_Internal::call(const authorize_arguments* msg) {
  return *msg->call_;
}
authorize_arguments::authorize_arguments(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:koinos.chain.authorize_arguments)
}
authorize_arguments::authorize_arguments(const authorize_arguments& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_call()) {
    call_ = new ::koinos::chain::call_data(*from.call_);
  } else {
    call_ = nullptr;
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:koinos.chain.authorize_arguments)
}

inline void authorize_arguments::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&call_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&call_)) + sizeof(type_));
}

authorize_arguments::~authorize_arguments() {
  // @@protoc_insertion_point(destructor:koinos.chain.authorize_arguments)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void authorize_arguments::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete call_;
}

void authorize_arguments::ArenaDtor(void* object) {
  authorize_arguments* _this = reinterpret_cast< authorize_arguments* >(object);
  (void)_this;
}
void authorize_arguments::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void authorize_arguments::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void authorize_arguments::Clear() {
// @@protoc_insertion_point(message_clear_start:koinos.chain.authorize_arguments)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(call_ != nullptr);
    call_->Clear();
  }
  type_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* authorize_arguments::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .koinos.chain.authorization_type type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::koinos::chain::authorization_type>(val));
        } else goto handle_unusual;
        continue;
      // optional .koinos.chain.call_data call = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_call(), ptr);
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* authorize_arguments::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:koinos.chain.authorize_arguments)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .koinos.chain.authorization_type type = 1;
  if (this->_internal_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // optional .koinos.chain.call_data call = 2;
  if (_internal_has_call()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::call(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:koinos.chain.authorize_arguments)
  return target;
}

size_t authorize_arguments::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:koinos.chain.authorize_arguments)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional .koinos.chain.call_data call = 2;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *call_);
  }

  // .koinos.chain.authorization_type type = 1;
  if (this->_internal_type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData authorize_arguments::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    authorize_arguments::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*authorize_arguments::GetClassData() const { return &_class_data_; }

void authorize_arguments::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<authorize_arguments *>(to)->MergeFrom(
      static_cast<const authorize_arguments &>(from));
}


void authorize_arguments::MergeFrom(const authorize_arguments& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:koinos.chain.authorize_arguments)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_call()) {
    _internal_mutable_call()->::koinos::chain::call_data::MergeFrom(from._internal_call());
  }
  if (from._internal_type() != 0) {
    _internal_set_type(from._internal_type());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void authorize_arguments::CopyFrom(const authorize_arguments& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:koinos.chain.authorize_arguments)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool authorize_arguments::IsInitialized() const {
  return true;
}

void authorize_arguments::InternalSwap(authorize_arguments* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(authorize_arguments, type_)
      + sizeof(authorize_arguments::type_)
      - PROTOBUF_FIELD_OFFSET(authorize_arguments, call_)>(
          reinterpret_cast<char*>(&call_),
          reinterpret_cast<char*>(&other->call_));
}

::PROTOBUF_NAMESPACE_ID::Metadata authorize_arguments::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_koinos_2fchain_2fauthority_2eproto_getter, &descriptor_table_koinos_2fchain_2fauthority_2eproto_once,
      file_level_metadata_koinos_2fchain_2fauthority_2eproto[1]);
}

// ===================================================================

class authorize_result::_Internal {
 public:
};

authorize_result::authorize_result(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:koinos.chain.authorize_result)
}
authorize_result::authorize_result(const authorize_result& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  value_ = from.value_;
  // @@protoc_insertion_point(copy_constructor:koinos.chain.authorize_result)
}

inline void authorize_result::SharedCtor() {
value_ = false;
}

authorize_result::~authorize_result() {
  // @@protoc_insertion_point(destructor:koinos.chain.authorize_result)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void authorize_result::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void authorize_result::ArenaDtor(void* object) {
  authorize_result* _this = reinterpret_cast< authorize_result* >(object);
  (void)_this;
}
void authorize_result::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void authorize_result::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void authorize_result::Clear() {
// @@protoc_insertion_point(message_clear_start:koinos.chain.authorize_result)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  value_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* authorize_result::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool value = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* authorize_result::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:koinos.chain.authorize_result)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool value = 1;
  if (this->_internal_value() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:koinos.chain.authorize_result)
  return target;
}

size_t authorize_result::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:koinos.chain.authorize_result)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool value = 1;
  if (this->_internal_value() != 0) {
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

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData authorize_result::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    authorize_result::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*authorize_result::GetClassData() const { return &_class_data_; }

void authorize_result::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<authorize_result *>(to)->MergeFrom(
      static_cast<const authorize_result &>(from));
}


void authorize_result::MergeFrom(const authorize_result& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:koinos.chain.authorize_result)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_value() != 0) {
    _internal_set_value(from._internal_value());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void authorize_result::CopyFrom(const authorize_result& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:koinos.chain.authorize_result)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool authorize_result::IsInitialized() const {
  return true;
}

void authorize_result::InternalSwap(authorize_result* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(value_, other->value_);
}

::PROTOBUF_NAMESPACE_ID::Metadata authorize_result::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_koinos_2fchain_2fauthority_2eproto_getter, &descriptor_table_koinos_2fchain_2fauthority_2eproto_once,
      file_level_metadata_koinos_2fchain_2fauthority_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace chain
}  // namespace koinos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::koinos::chain::call_data* Arena::CreateMaybeMessage< ::koinos::chain::call_data >(Arena* arena) {
  return Arena::CreateMessageInternal< ::koinos::chain::call_data >(arena);
}
template<> PROTOBUF_NOINLINE ::koinos::chain::authorize_arguments* Arena::CreateMaybeMessage< ::koinos::chain::authorize_arguments >(Arena* arena) {
  return Arena::CreateMessageInternal< ::koinos::chain::authorize_arguments >(arena);
}
template<> PROTOBUF_NOINLINE ::koinos::chain::authorize_result* Arena::CreateMaybeMessage< ::koinos::chain::authorize_result >(Arena* arena) {
  return Arena::CreateMessageInternal< ::koinos::chain::authorize_result >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
