// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/test_map.proto

#include "koinos/test_map.pb.h"

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
constexpr test_map_ImTheMapEntry_DoNotUse::test_map_ImTheMapEntry_DoNotUse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct test_map_ImTheMapEntry_DoNotUseDefaultTypeInternal {
  constexpr test_map_ImTheMapEntry_DoNotUseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~test_map_ImTheMapEntry_DoNotUseDefaultTypeInternal() {}
  union {
    test_map_ImTheMapEntry_DoNotUse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT test_map_ImTheMapEntry_DoNotUseDefaultTypeInternal _test_map_ImTheMapEntry_DoNotUse_default_instance_;
constexpr test_map::test_map(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : im_the_map_(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}){}
struct test_mapDefaultTypeInternal {
  constexpr test_mapDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~test_mapDefaultTypeInternal() {}
  union {
    test_map _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT test_mapDefaultTypeInternal _test_map_default_instance_;
constexpr map_wrapper::map_wrapper(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : nested_map_(nullptr){}
struct map_wrapperDefaultTypeInternal {
  constexpr map_wrapperDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~map_wrapperDefaultTypeInternal() {}
  union {
    map_wrapper _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT map_wrapperDefaultTypeInternal _map_wrapper_default_instance_;
}  // namespace koinos
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_koinos_2ftest_5fmap_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_koinos_2ftest_5fmap_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_koinos_2ftest_5fmap_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_koinos_2ftest_5fmap_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::koinos::test_map_ImTheMapEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::koinos::test_map_ImTheMapEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::koinos::test_map_ImTheMapEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::koinos::test_map_ImTheMapEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::koinos::test_map, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::koinos::test_map, im_the_map_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::koinos::map_wrapper, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::koinos::map_wrapper, nested_map_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::koinos::test_map_ImTheMapEntry_DoNotUse)},
  { 9, -1, sizeof(::koinos::test_map)},
  { 15, -1, sizeof(::koinos::map_wrapper)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::koinos::_test_map_ImTheMapEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::koinos::_test_map_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::koinos::_map_wrapper_default_instance_),
};

const char descriptor_table_protodef_koinos_2ftest_5fmap_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025koinos/test_map.proto\022\006koinos\"o\n\010test_"
  "map\0222\n\nim_the_map\030\001 \003(\0132\036.koinos.test_ma"
  "p.ImTheMapEntry\032/\n\rImTheMapEntry\022\013\n\003key\030"
  "\001 \001(\004\022\r\n\005value\030\002 \001(\014:\0028\001\"3\n\013map_wrapper\022"
  "$\n\nnested_map\030\001 \001(\0132\020.koinos.test_mapB.Z"
  ",github.com/koinos/koinos-proto-golang/k"
  "oinosb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_koinos_2ftest_5fmap_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2ftest_5fmap_2eproto = {
  false, false, 253, descriptor_table_protodef_koinos_2ftest_5fmap_2eproto, "koinos/test_map.proto",
  &descriptor_table_koinos_2ftest_5fmap_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_koinos_2ftest_5fmap_2eproto::offsets,
  file_level_metadata_koinos_2ftest_5fmap_2eproto, file_level_enum_descriptors_koinos_2ftest_5fmap_2eproto, file_level_service_descriptors_koinos_2ftest_5fmap_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_koinos_2ftest_5fmap_2eproto_getter() {
  return &descriptor_table_koinos_2ftest_5fmap_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_koinos_2ftest_5fmap_2eproto(&descriptor_table_koinos_2ftest_5fmap_2eproto);
namespace koinos {

// ===================================================================

test_map_ImTheMapEntry_DoNotUse::test_map_ImTheMapEntry_DoNotUse() {}
test_map_ImTheMapEntry_DoNotUse::test_map_ImTheMapEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void test_map_ImTheMapEntry_DoNotUse::MergeFrom(const test_map_ImTheMapEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata test_map_ImTheMapEntry_DoNotUse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_koinos_2ftest_5fmap_2eproto_getter, &descriptor_table_koinos_2ftest_5fmap_2eproto_once,
      file_level_metadata_koinos_2ftest_5fmap_2eproto[0]);
}

// ===================================================================

class test_map::_Internal {
 public:
};

test_map::test_map(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  im_the_map_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:koinos.test_map)
}
test_map::test_map(const test_map& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  im_the_map_.MergeFrom(from.im_the_map_);
  // @@protoc_insertion_point(copy_constructor:koinos.test_map)
}

inline void test_map::SharedCtor() {
}

test_map::~test_map() {
  // @@protoc_insertion_point(destructor:koinos.test_map)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void test_map::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void test_map::ArenaDtor(void* object) {
  test_map* _this = reinterpret_cast< test_map* >(object);
  (void)_this;
  _this->im_the_map_. ~MapField();
}
inline void test_map::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena) {
  if (arena != nullptr) {
    arena->OwnCustomDestructor(this, &test_map::ArenaDtor);
  }
}
void test_map::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void test_map::Clear() {
// @@protoc_insertion_point(message_clear_start:koinos.test_map)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  im_the_map_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* test_map::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // map<uint64, bytes> im_the_map = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&im_the_map_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* test_map::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:koinos.test_map)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, bytes> im_the_map = 1;
  if (!this->_internal_im_the_map().empty()) {
    typedef ::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, std::string >::const_pointer
        ConstPtr;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::SortItem< ::PROTOBUF_NAMESPACE_ID::uint64, ConstPtr > SortItem;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::CompareByFirstField<SortItem> Less;

    if (stream->IsSerializationDeterministic() &&
        this->_internal_im_the_map().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->_internal_im_the_map().size()]);
      typedef ::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, std::string >::size_type size_type;
      size_type n = 0;
      for (::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, std::string >::const_iterator
          it = this->_internal_im_the_map().begin();
          it != this->_internal_im_the_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      for (size_type i = 0; i < n; i++) {
        target = test_map_ImTheMapEntry_DoNotUse::Funcs::InternalSerialize(1, items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second, target, stream);
      }
    } else {
      for (::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, std::string >::const_iterator
          it = this->_internal_im_the_map().begin();
          it != this->_internal_im_the_map().end(); ++it) {
        target = test_map_ImTheMapEntry_DoNotUse::Funcs::InternalSerialize(1, it->first, it->second, target, stream);
      }
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:koinos.test_map)
  return target;
}

size_t test_map::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:koinos.test_map)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<uint64, bytes> im_the_map = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_im_the_map_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, std::string >::const_iterator
      it = this->_internal_im_the_map().begin();
      it != this->_internal_im_the_map().end(); ++it) {
    total_size += test_map_ImTheMapEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData test_map::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    test_map::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*test_map::GetClassData() const { return &_class_data_; }

void test_map::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<test_map *>(to)->MergeFrom(
      static_cast<const test_map &>(from));
}


void test_map::MergeFrom(const test_map& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:koinos.test_map)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  im_the_map_.MergeFrom(from.im_the_map_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void test_map::CopyFrom(const test_map& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:koinos.test_map)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool test_map::IsInitialized() const {
  return true;
}

void test_map::InternalSwap(test_map* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  im_the_map_.InternalSwap(&other->im_the_map_);
}

::PROTOBUF_NAMESPACE_ID::Metadata test_map::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_koinos_2ftest_5fmap_2eproto_getter, &descriptor_table_koinos_2ftest_5fmap_2eproto_once,
      file_level_metadata_koinos_2ftest_5fmap_2eproto[1]);
}

// ===================================================================

class map_wrapper::_Internal {
 public:
  static const ::koinos::test_map& nested_map(const map_wrapper* msg);
};

const ::koinos::test_map&
map_wrapper::_Internal::nested_map(const map_wrapper* msg) {
  return *msg->nested_map_;
}
map_wrapper::map_wrapper(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:koinos.map_wrapper)
}
map_wrapper::map_wrapper(const map_wrapper& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_nested_map()) {
    nested_map_ = new ::koinos::test_map(*from.nested_map_);
  } else {
    nested_map_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:koinos.map_wrapper)
}

inline void map_wrapper::SharedCtor() {
nested_map_ = nullptr;
}

map_wrapper::~map_wrapper() {
  // @@protoc_insertion_point(destructor:koinos.map_wrapper)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void map_wrapper::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete nested_map_;
}

void map_wrapper::ArenaDtor(void* object) {
  map_wrapper* _this = reinterpret_cast< map_wrapper* >(object);
  (void)_this;
}
void map_wrapper::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void map_wrapper::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void map_wrapper::Clear() {
// @@protoc_insertion_point(message_clear_start:koinos.map_wrapper)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && nested_map_ != nullptr) {
    delete nested_map_;
  }
  nested_map_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* map_wrapper::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .koinos.test_map nested_map = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_nested_map(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* map_wrapper::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:koinos.map_wrapper)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .koinos.test_map nested_map = 1;
  if (this->_internal_has_nested_map()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::nested_map(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:koinos.map_wrapper)
  return target;
}

size_t map_wrapper::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:koinos.map_wrapper)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .koinos.test_map nested_map = 1;
  if (this->_internal_has_nested_map()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *nested_map_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData map_wrapper::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    map_wrapper::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*map_wrapper::GetClassData() const { return &_class_data_; }

void map_wrapper::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<map_wrapper *>(to)->MergeFrom(
      static_cast<const map_wrapper &>(from));
}


void map_wrapper::MergeFrom(const map_wrapper& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:koinos.map_wrapper)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_nested_map()) {
    _internal_mutable_nested_map()->::koinos::test_map::MergeFrom(from._internal_nested_map());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void map_wrapper::CopyFrom(const map_wrapper& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:koinos.map_wrapper)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool map_wrapper::IsInitialized() const {
  return true;
}

void map_wrapper::InternalSwap(map_wrapper* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(nested_map_, other->nested_map_);
}

::PROTOBUF_NAMESPACE_ID::Metadata map_wrapper::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_koinos_2ftest_5fmap_2eproto_getter, &descriptor_table_koinos_2ftest_5fmap_2eproto_once,
      file_level_metadata_koinos_2ftest_5fmap_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace koinos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::koinos::test_map_ImTheMapEntry_DoNotUse* Arena::CreateMaybeMessage< ::koinos::test_map_ImTheMapEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::koinos::test_map_ImTheMapEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::koinos::test_map* Arena::CreateMaybeMessage< ::koinos::test_map >(Arena* arena) {
  return Arena::CreateMessageInternal< ::koinos::test_map >(arena);
}
template<> PROTOBUF_NOINLINE ::koinos::map_wrapper* Arena::CreateMaybeMessage< ::koinos::map_wrapper >(Arena* arena) {
  return Arena::CreateMessageInternal< ::koinos::map_wrapper >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
