// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/test_map.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_koinos_2ftest_5fmap_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_koinos_2ftest_5fmap_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_koinos_2ftest_5fmap_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_koinos_2ftest_5fmap_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2ftest_5fmap_2eproto;
namespace koinos {
class map_wrapper;
struct map_wrapperDefaultTypeInternal;
extern map_wrapperDefaultTypeInternal _map_wrapper_default_instance_;
class test_map;
struct test_mapDefaultTypeInternal;
extern test_mapDefaultTypeInternal _test_map_default_instance_;
class test_map_ImTheMapEntry_DoNotUse;
struct test_map_ImTheMapEntry_DoNotUseDefaultTypeInternal;
extern test_map_ImTheMapEntry_DoNotUseDefaultTypeInternal _test_map_ImTheMapEntry_DoNotUse_default_instance_;
}  // namespace koinos
PROTOBUF_NAMESPACE_OPEN
template<> ::koinos::map_wrapper* Arena::CreateMaybeMessage<::koinos::map_wrapper>(Arena*);
template<> ::koinos::test_map* Arena::CreateMaybeMessage<::koinos::test_map>(Arena*);
template<> ::koinos::test_map_ImTheMapEntry_DoNotUse* Arena::CreateMaybeMessage<::koinos::test_map_ImTheMapEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace koinos {

// ===================================================================

class test_map_ImTheMapEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<test_map_ImTheMapEntry_DoNotUse,
    ::PROTOBUF_NAMESPACE_ID::uint64, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BYTES> {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<test_map_ImTheMapEntry_DoNotUse,
    ::PROTOBUF_NAMESPACE_ID::uint64, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BYTES> SuperType;
  test_map_ImTheMapEntry_DoNotUse();
  explicit constexpr test_map_ImTheMapEntry_DoNotUse(
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);
  explicit test_map_ImTheMapEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const test_map_ImTheMapEntry_DoNotUse& other);
  static const test_map_ImTheMapEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const test_map_ImTheMapEntry_DoNotUse*>(&_test_map_ImTheMapEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(void*) { return true; }
  static bool ValidateValue(void*) { return true; }
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
};

// -------------------------------------------------------------------

class test_map final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:koinos.test_map) */ {
 public:
  inline test_map() : test_map(nullptr) {}
  ~test_map() override;
  explicit constexpr test_map(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  test_map(const test_map& from);
  test_map(test_map&& from) noexcept
    : test_map() {
    *this = ::std::move(from);
  }

  inline test_map& operator=(const test_map& from) {
    CopyFrom(from);
    return *this;
  }
  inline test_map& operator=(test_map&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const test_map& default_instance() {
    return *internal_default_instance();
  }
  static inline const test_map* internal_default_instance() {
    return reinterpret_cast<const test_map*>(
               &_test_map_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(test_map& a, test_map& b) {
    a.Swap(&b);
  }
  inline void Swap(test_map* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(test_map* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline test_map* New() const final {
    return new test_map();
  }

  test_map* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<test_map>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const test_map& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const test_map& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(test_map* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "koinos.test_map";
  }
  protected:
  explicit test_map(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kImTheMapFieldNumber = 1,
  };
  // map<uint64, bytes> im_the_map = 1;
  int im_the_map_size() const;
  private:
  int _internal_im_the_map_size() const;
  public:
  void clear_im_the_map();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, std::string >&
      _internal_im_the_map() const;
  ::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, std::string >*
      _internal_mutable_im_the_map();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, std::string >&
      im_the_map() const;
  ::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, std::string >*
      mutable_im_the_map();

  // @@protoc_insertion_point(class_scope:koinos.test_map)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      test_map_ImTheMapEntry_DoNotUse,
      ::PROTOBUF_NAMESPACE_ID::uint64, std::string,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BYTES> im_the_map_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_koinos_2ftest_5fmap_2eproto;
};
// -------------------------------------------------------------------

class map_wrapper final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:koinos.map_wrapper) */ {
 public:
  inline map_wrapper() : map_wrapper(nullptr) {}
  ~map_wrapper() override;
  explicit constexpr map_wrapper(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  map_wrapper(const map_wrapper& from);
  map_wrapper(map_wrapper&& from) noexcept
    : map_wrapper() {
    *this = ::std::move(from);
  }

  inline map_wrapper& operator=(const map_wrapper& from) {
    CopyFrom(from);
    return *this;
  }
  inline map_wrapper& operator=(map_wrapper&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const map_wrapper& default_instance() {
    return *internal_default_instance();
  }
  static inline const map_wrapper* internal_default_instance() {
    return reinterpret_cast<const map_wrapper*>(
               &_map_wrapper_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(map_wrapper& a, map_wrapper& b) {
    a.Swap(&b);
  }
  inline void Swap(map_wrapper* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(map_wrapper* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline map_wrapper* New() const final {
    return new map_wrapper();
  }

  map_wrapper* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<map_wrapper>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const map_wrapper& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const map_wrapper& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(map_wrapper* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "koinos.map_wrapper";
  }
  protected:
  explicit map_wrapper(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNestedMapFieldNumber = 1,
  };
  // .koinos.test_map nested_map = 1;
  bool has_nested_map() const;
  private:
  bool _internal_has_nested_map() const;
  public:
  void clear_nested_map();
  const ::koinos::test_map& nested_map() const;
  PROTOBUF_MUST_USE_RESULT ::koinos::test_map* release_nested_map();
  ::koinos::test_map* mutable_nested_map();
  void set_allocated_nested_map(::koinos::test_map* nested_map);
  private:
  const ::koinos::test_map& _internal_nested_map() const;
  ::koinos::test_map* _internal_mutable_nested_map();
  public:
  void unsafe_arena_set_allocated_nested_map(
      ::koinos::test_map* nested_map);
  ::koinos::test_map* unsafe_arena_release_nested_map();

  // @@protoc_insertion_point(class_scope:koinos.map_wrapper)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::koinos::test_map* nested_map_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_koinos_2ftest_5fmap_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// test_map

// map<uint64, bytes> im_the_map = 1;
inline int test_map::_internal_im_the_map_size() const {
  return im_the_map_.size();
}
inline int test_map::im_the_map_size() const {
  return _internal_im_the_map_size();
}
inline void test_map::clear_im_the_map() {
  im_the_map_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, std::string >&
test_map::_internal_im_the_map() const {
  return im_the_map_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, std::string >&
test_map::im_the_map() const {
  // @@protoc_insertion_point(field_map:koinos.test_map.im_the_map)
  return _internal_im_the_map();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, std::string >*
test_map::_internal_mutable_im_the_map() {
  return im_the_map_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, std::string >*
test_map::mutable_im_the_map() {
  // @@protoc_insertion_point(field_mutable_map:koinos.test_map.im_the_map)
  return _internal_mutable_im_the_map();
}

// -------------------------------------------------------------------

// map_wrapper

// .koinos.test_map nested_map = 1;
inline bool map_wrapper::_internal_has_nested_map() const {
  return this != internal_default_instance() && nested_map_ != nullptr;
}
inline bool map_wrapper::has_nested_map() const {
  return _internal_has_nested_map();
}
inline void map_wrapper::clear_nested_map() {
  if (GetArenaForAllocation() == nullptr && nested_map_ != nullptr) {
    delete nested_map_;
  }
  nested_map_ = nullptr;
}
inline const ::koinos::test_map& map_wrapper::_internal_nested_map() const {
  const ::koinos::test_map* p = nested_map_;
  return p != nullptr ? *p : reinterpret_cast<const ::koinos::test_map&>(
      ::koinos::_test_map_default_instance_);
}
inline const ::koinos::test_map& map_wrapper::nested_map() const {
  // @@protoc_insertion_point(field_get:koinos.map_wrapper.nested_map)
  return _internal_nested_map();
}
inline void map_wrapper::unsafe_arena_set_allocated_nested_map(
    ::koinos::test_map* nested_map) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(nested_map_);
  }
  nested_map_ = nested_map;
  if (nested_map) {

  } else {

  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:koinos.map_wrapper.nested_map)
}
inline ::koinos::test_map* map_wrapper::release_nested_map() {

  ::koinos::test_map* temp = nested_map_;
  nested_map_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::koinos::test_map* map_wrapper::unsafe_arena_release_nested_map() {
  // @@protoc_insertion_point(field_release:koinos.map_wrapper.nested_map)

  ::koinos::test_map* temp = nested_map_;
  nested_map_ = nullptr;
  return temp;
}
inline ::koinos::test_map* map_wrapper::_internal_mutable_nested_map() {

  if (nested_map_ == nullptr) {
    auto* p = CreateMaybeMessage<::koinos::test_map>(GetArenaForAllocation());
    nested_map_ = p;
  }
  return nested_map_;
}
inline ::koinos::test_map* map_wrapper::mutable_nested_map() {
  ::koinos::test_map* _msg = _internal_mutable_nested_map();
  // @@protoc_insertion_point(field_mutable:koinos.map_wrapper.nested_map)
  return _msg;
}
inline void map_wrapper::set_allocated_nested_map(::koinos::test_map* nested_map) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete nested_map_;
  }
  if (nested_map) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<::koinos::test_map>::GetOwningArena(nested_map);
    if (message_arena != submessage_arena) {
      nested_map = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, nested_map, submessage_arena);
    }

  } else {

  }
  nested_map_ = nested_map;
  // @@protoc_insertion_point(field_set_allocated:koinos.map_wrapper.nested_map)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace koinos

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_koinos_2ftest_5fmap_2eproto
