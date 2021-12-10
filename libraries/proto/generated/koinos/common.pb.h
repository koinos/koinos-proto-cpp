// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/common.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_koinos_2fcommon_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_koinos_2fcommon_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "koinos/options.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_koinos_2fcommon_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_koinos_2fcommon_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2fcommon_2eproto;
namespace koinos {
class block_topology;
struct block_topologyDefaultTypeInternal;
extern block_topologyDefaultTypeInternal _block_topology_default_instance_;
}  // namespace koinos
PROTOBUF_NAMESPACE_OPEN
template<> ::koinos::block_topology* Arena::CreateMaybeMessage<::koinos::block_topology>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace koinos {

// ===================================================================

class block_topology final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:koinos.block_topology) */ {
 public:
  inline block_topology() : block_topology(nullptr) {}
  ~block_topology() override;
  explicit constexpr block_topology(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  block_topology(const block_topology& from);
  block_topology(block_topology&& from) noexcept
    : block_topology() {
    *this = ::std::move(from);
  }

  inline block_topology& operator=(const block_topology& from) {
    CopyFrom(from);
    return *this;
  }
  inline block_topology& operator=(block_topology&& from) noexcept {
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
  static const block_topology& default_instance() {
    return *internal_default_instance();
  }
  static inline const block_topology* internal_default_instance() {
    return reinterpret_cast<const block_topology*>(
               &_block_topology_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(block_topology& a, block_topology& b) {
    a.Swap(&b);
  }
  inline void Swap(block_topology* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(block_topology* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline block_topology* New() const final {
    return new block_topology();
  }

  block_topology* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<block_topology>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const block_topology& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const block_topology& from);
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
  void InternalSwap(block_topology* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "koinos.block_topology";
  }
  protected:
  explicit block_topology(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kIdFieldNumber = 1,
    kPreviousFieldNumber = 3,
    kHeightFieldNumber = 2,
  };
  // bytes id = 1 [(.koinos.btype) = BLOCK_ID];
  void clear_id();
  const std::string& id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_id();
  PROTOBUF_MUST_USE_RESULT std::string* release_id();
  void set_allocated_id(std::string* id);
  private:
  const std::string& _internal_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_id(const std::string& value);
  std::string* _internal_mutable_id();
  public:

  // bytes previous = 3 [(.koinos.btype) = BLOCK_ID];
  void clear_previous();
  const std::string& previous() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_previous(ArgT0&& arg0, ArgT... args);
  std::string* mutable_previous();
  PROTOBUF_MUST_USE_RESULT std::string* release_previous();
  void set_allocated_previous(std::string* previous);
  private:
  const std::string& _internal_previous() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_previous(const std::string& value);
  std::string* _internal_mutable_previous();
  public:

  // uint64 height = 2 [jstype = JS_STRING];
  void clear_height();
  ::PROTOBUF_NAMESPACE_ID::uint64 height() const;
  void set_height(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_height() const;
  void _internal_set_height(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:koinos.block_topology)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr previous_;
  ::PROTOBUF_NAMESPACE_ID::uint64 height_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_koinos_2fcommon_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// block_topology

// bytes id = 1 [(.koinos.btype) = BLOCK_ID];
inline void block_topology::clear_id() {
  id_.ClearToEmpty();
}
inline const std::string& block_topology::id() const {
  // @@protoc_insertion_point(field_get:koinos.block_topology.id)
  return _internal_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void block_topology::set_id(ArgT0&& arg0, ArgT... args) {
 
 id_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:koinos.block_topology.id)
}
inline std::string* block_topology::mutable_id() {
  std::string* _s = _internal_mutable_id();
  // @@protoc_insertion_point(field_mutable:koinos.block_topology.id)
  return _s;
}
inline const std::string& block_topology::_internal_id() const {
  return id_.Get();
}
inline void block_topology::_internal_set_id(const std::string& value) {
  
  id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* block_topology::_internal_mutable_id() {
  
  return id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* block_topology::release_id() {
  // @@protoc_insertion_point(field_release:koinos.block_topology.id)
  return id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void block_topology::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), id,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:koinos.block_topology.id)
}

// uint64 height = 2 [jstype = JS_STRING];
inline void block_topology::clear_height() {
  height_ = uint64_t{0u};
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 block_topology::_internal_height() const {
  return height_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 block_topology::height() const {
  // @@protoc_insertion_point(field_get:koinos.block_topology.height)
  return _internal_height();
}
inline void block_topology::_internal_set_height(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  height_ = value;
}
inline void block_topology::set_height(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:koinos.block_topology.height)
}

// bytes previous = 3 [(.koinos.btype) = BLOCK_ID];
inline void block_topology::clear_previous() {
  previous_.ClearToEmpty();
}
inline const std::string& block_topology::previous() const {
  // @@protoc_insertion_point(field_get:koinos.block_topology.previous)
  return _internal_previous();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void block_topology::set_previous(ArgT0&& arg0, ArgT... args) {
 
 previous_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:koinos.block_topology.previous)
}
inline std::string* block_topology::mutable_previous() {
  std::string* _s = _internal_mutable_previous();
  // @@protoc_insertion_point(field_mutable:koinos.block_topology.previous)
  return _s;
}
inline const std::string& block_topology::_internal_previous() const {
  return previous_.Get();
}
inline void block_topology::_internal_set_previous(const std::string& value) {
  
  previous_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* block_topology::_internal_mutable_previous() {
  
  return previous_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* block_topology::release_previous() {
  // @@protoc_insertion_point(field_release:koinos.block_topology.previous)
  return previous_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void block_topology::set_allocated_previous(std::string* previous) {
  if (previous != nullptr) {
    
  } else {
    
  }
  previous_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), previous,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:koinos.block_topology.previous)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace koinos

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_koinos_2fcommon_2eproto
