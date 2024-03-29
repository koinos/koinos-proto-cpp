// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/contracts/vhp/vhp.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_koinos_2fcontracts_2fvhp_2fvhp_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_koinos_2fcontracts_2fvhp_2fvhp_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_koinos_2fcontracts_2fvhp_2fvhp_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_koinos_2fcontracts_2fvhp_2fvhp_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2fcontracts_2fvhp_2fvhp_2eproto;
namespace koinos {
namespace contracts {
namespace vhp {
class balance_entry;
struct balance_entryDefaultTypeInternal;
extern balance_entryDefaultTypeInternal _balance_entry_default_instance_;
class effective_balance_object;
struct effective_balance_objectDefaultTypeInternal;
extern effective_balance_objectDefaultTypeInternal _effective_balance_object_default_instance_;
class effective_balance_of_arguments;
struct effective_balance_of_argumentsDefaultTypeInternal;
extern effective_balance_of_argumentsDefaultTypeInternal _effective_balance_of_arguments_default_instance_;
class effective_balance_of_result;
struct effective_balance_of_resultDefaultTypeInternal;
extern effective_balance_of_resultDefaultTypeInternal _effective_balance_of_result_default_instance_;
}  // namespace vhp
}  // namespace contracts
}  // namespace koinos
PROTOBUF_NAMESPACE_OPEN
template<> ::koinos::contracts::vhp::balance_entry* Arena::CreateMaybeMessage<::koinos::contracts::vhp::balance_entry>(Arena*);
template<> ::koinos::contracts::vhp::effective_balance_object* Arena::CreateMaybeMessage<::koinos::contracts::vhp::effective_balance_object>(Arena*);
template<> ::koinos::contracts::vhp::effective_balance_of_arguments* Arena::CreateMaybeMessage<::koinos::contracts::vhp::effective_balance_of_arguments>(Arena*);
template<> ::koinos::contracts::vhp::effective_balance_of_result* Arena::CreateMaybeMessage<::koinos::contracts::vhp::effective_balance_of_result>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace koinos {
namespace contracts {
namespace vhp {

// ===================================================================

class effective_balance_of_arguments final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:koinos.contracts.vhp.effective_balance_of_arguments) */ {
 public:
  inline effective_balance_of_arguments() : effective_balance_of_arguments(nullptr) {}
  ~effective_balance_of_arguments() override;
  explicit constexpr effective_balance_of_arguments(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  effective_balance_of_arguments(const effective_balance_of_arguments& from);
  effective_balance_of_arguments(effective_balance_of_arguments&& from) noexcept
    : effective_balance_of_arguments() {
    *this = ::std::move(from);
  }

  inline effective_balance_of_arguments& operator=(const effective_balance_of_arguments& from) {
    CopyFrom(from);
    return *this;
  }
  inline effective_balance_of_arguments& operator=(effective_balance_of_arguments&& from) noexcept {
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
  static const effective_balance_of_arguments& default_instance() {
    return *internal_default_instance();
  }
  static inline const effective_balance_of_arguments* internal_default_instance() {
    return reinterpret_cast<const effective_balance_of_arguments*>(
               &_effective_balance_of_arguments_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(effective_balance_of_arguments& a, effective_balance_of_arguments& b) {
    a.Swap(&b);
  }
  inline void Swap(effective_balance_of_arguments* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(effective_balance_of_arguments* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline effective_balance_of_arguments* New() const final {
    return new effective_balance_of_arguments();
  }

  effective_balance_of_arguments* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<effective_balance_of_arguments>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const effective_balance_of_arguments& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const effective_balance_of_arguments& from);
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
  void InternalSwap(effective_balance_of_arguments* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "koinos.contracts.vhp.effective_balance_of_arguments";
  }
  protected:
  explicit effective_balance_of_arguments(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kOwnerFieldNumber = 1,
  };
  // bytes owner = 1 [(.koinos.btype) = ADDRESS];
  void clear_owner();
  const std::string& owner() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_owner(ArgT0&& arg0, ArgT... args);
  std::string* mutable_owner();
  PROTOBUF_MUST_USE_RESULT std::string* release_owner();
  void set_allocated_owner(std::string* owner);
  private:
  const std::string& _internal_owner() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_owner(const std::string& value);
  std::string* _internal_mutable_owner();
  public:

  // @@protoc_insertion_point(class_scope:koinos.contracts.vhp.effective_balance_of_arguments)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr owner_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_koinos_2fcontracts_2fvhp_2fvhp_2eproto;
};
// -------------------------------------------------------------------

class effective_balance_of_result final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:koinos.contracts.vhp.effective_balance_of_result) */ {
 public:
  inline effective_balance_of_result() : effective_balance_of_result(nullptr) {}
  ~effective_balance_of_result() override;
  explicit constexpr effective_balance_of_result(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  effective_balance_of_result(const effective_balance_of_result& from);
  effective_balance_of_result(effective_balance_of_result&& from) noexcept
    : effective_balance_of_result() {
    *this = ::std::move(from);
  }

  inline effective_balance_of_result& operator=(const effective_balance_of_result& from) {
    CopyFrom(from);
    return *this;
  }
  inline effective_balance_of_result& operator=(effective_balance_of_result&& from) noexcept {
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
  static const effective_balance_of_result& default_instance() {
    return *internal_default_instance();
  }
  static inline const effective_balance_of_result* internal_default_instance() {
    return reinterpret_cast<const effective_balance_of_result*>(
               &_effective_balance_of_result_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(effective_balance_of_result& a, effective_balance_of_result& b) {
    a.Swap(&b);
  }
  inline void Swap(effective_balance_of_result* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(effective_balance_of_result* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline effective_balance_of_result* New() const final {
    return new effective_balance_of_result();
  }

  effective_balance_of_result* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<effective_balance_of_result>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const effective_balance_of_result& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const effective_balance_of_result& from);
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
  void InternalSwap(effective_balance_of_result* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "koinos.contracts.vhp.effective_balance_of_result";
  }
  protected:
  explicit effective_balance_of_result(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kValueFieldNumber = 1,
  };
  // uint64 value = 1 [jstype = JS_STRING];
  void clear_value();
  ::PROTOBUF_NAMESPACE_ID::uint64 value() const;
  void set_value(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_value() const;
  void _internal_set_value(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:koinos.contracts.vhp.effective_balance_of_result)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint64 value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_koinos_2fcontracts_2fvhp_2fvhp_2eproto;
};
// -------------------------------------------------------------------

class balance_entry final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:koinos.contracts.vhp.balance_entry) */ {
 public:
  inline balance_entry() : balance_entry(nullptr) {}
  ~balance_entry() override;
  explicit constexpr balance_entry(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  balance_entry(const balance_entry& from);
  balance_entry(balance_entry&& from) noexcept
    : balance_entry() {
    *this = ::std::move(from);
  }

  inline balance_entry& operator=(const balance_entry& from) {
    CopyFrom(from);
    return *this;
  }
  inline balance_entry& operator=(balance_entry&& from) noexcept {
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
  static const balance_entry& default_instance() {
    return *internal_default_instance();
  }
  static inline const balance_entry* internal_default_instance() {
    return reinterpret_cast<const balance_entry*>(
               &_balance_entry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(balance_entry& a, balance_entry& b) {
    a.Swap(&b);
  }
  inline void Swap(balance_entry* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(balance_entry* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline balance_entry* New() const final {
    return new balance_entry();
  }

  balance_entry* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<balance_entry>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const balance_entry& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const balance_entry& from);
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
  void InternalSwap(balance_entry* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "koinos.contracts.vhp.balance_entry";
  }
  protected:
  explicit balance_entry(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kBlockHeightFieldNumber = 1,
    kBalanceFieldNumber = 2,
  };
  // uint64 block_height = 1 [jstype = JS_STRING];
  void clear_block_height();
  ::PROTOBUF_NAMESPACE_ID::uint64 block_height() const;
  void set_block_height(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_block_height() const;
  void _internal_set_block_height(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 balance = 2 [jstype = JS_STRING];
  void clear_balance();
  ::PROTOBUF_NAMESPACE_ID::uint64 balance() const;
  void set_balance(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_balance() const;
  void _internal_set_balance(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:koinos.contracts.vhp.balance_entry)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint64 block_height_;
  ::PROTOBUF_NAMESPACE_ID::uint64 balance_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_koinos_2fcontracts_2fvhp_2fvhp_2eproto;
};
// -------------------------------------------------------------------

class effective_balance_object final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:koinos.contracts.vhp.effective_balance_object) */ {
 public:
  inline effective_balance_object() : effective_balance_object(nullptr) {}
  ~effective_balance_object() override;
  explicit constexpr effective_balance_object(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  effective_balance_object(const effective_balance_object& from);
  effective_balance_object(effective_balance_object&& from) noexcept
    : effective_balance_object() {
    *this = ::std::move(from);
  }

  inline effective_balance_object& operator=(const effective_balance_object& from) {
    CopyFrom(from);
    return *this;
  }
  inline effective_balance_object& operator=(effective_balance_object&& from) noexcept {
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
  static const effective_balance_object& default_instance() {
    return *internal_default_instance();
  }
  static inline const effective_balance_object* internal_default_instance() {
    return reinterpret_cast<const effective_balance_object*>(
               &_effective_balance_object_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(effective_balance_object& a, effective_balance_object& b) {
    a.Swap(&b);
  }
  inline void Swap(effective_balance_object* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(effective_balance_object* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline effective_balance_object* New() const final {
    return new effective_balance_object();
  }

  effective_balance_object* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<effective_balance_object>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const effective_balance_object& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const effective_balance_object& from);
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
  void InternalSwap(effective_balance_object* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "koinos.contracts.vhp.effective_balance_object";
  }
  protected:
  explicit effective_balance_object(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kPastBalancesFieldNumber = 2,
    kCurrentBalanceFieldNumber = 1,
  };
  // repeated .koinos.contracts.vhp.balance_entry past_balances = 2;
  int past_balances_size() const;
  private:
  int _internal_past_balances_size() const;
  public:
  void clear_past_balances();
  ::koinos::contracts::vhp::balance_entry* mutable_past_balances(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::koinos::contracts::vhp::balance_entry >*
      mutable_past_balances();
  private:
  const ::koinos::contracts::vhp::balance_entry& _internal_past_balances(int index) const;
  ::koinos::contracts::vhp::balance_entry* _internal_add_past_balances();
  public:
  const ::koinos::contracts::vhp::balance_entry& past_balances(int index) const;
  ::koinos::contracts::vhp::balance_entry* add_past_balances();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::koinos::contracts::vhp::balance_entry >&
      past_balances() const;

  // uint64 current_balance = 1 [jstype = JS_STRING];
  void clear_current_balance();
  ::PROTOBUF_NAMESPACE_ID::uint64 current_balance() const;
  void set_current_balance(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_current_balance() const;
  void _internal_set_current_balance(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:koinos.contracts.vhp.effective_balance_object)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::koinos::contracts::vhp::balance_entry > past_balances_;
  ::PROTOBUF_NAMESPACE_ID::uint64 current_balance_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_koinos_2fcontracts_2fvhp_2fvhp_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// effective_balance_of_arguments

// bytes owner = 1 [(.koinos.btype) = ADDRESS];
inline void effective_balance_of_arguments::clear_owner() {
  owner_.ClearToEmpty();
}
inline const std::string& effective_balance_of_arguments::owner() const {
  // @@protoc_insertion_point(field_get:koinos.contracts.vhp.effective_balance_of_arguments.owner)
  return _internal_owner();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void effective_balance_of_arguments::set_owner(ArgT0&& arg0, ArgT... args) {
 
 owner_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:koinos.contracts.vhp.effective_balance_of_arguments.owner)
}
inline std::string* effective_balance_of_arguments::mutable_owner() {
  std::string* _s = _internal_mutable_owner();
  // @@protoc_insertion_point(field_mutable:koinos.contracts.vhp.effective_balance_of_arguments.owner)
  return _s;
}
inline const std::string& effective_balance_of_arguments::_internal_owner() const {
  return owner_.Get();
}
inline void effective_balance_of_arguments::_internal_set_owner(const std::string& value) {
  
  owner_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* effective_balance_of_arguments::_internal_mutable_owner() {
  
  return owner_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* effective_balance_of_arguments::release_owner() {
  // @@protoc_insertion_point(field_release:koinos.contracts.vhp.effective_balance_of_arguments.owner)
  return owner_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void effective_balance_of_arguments::set_allocated_owner(std::string* owner) {
  if (owner != nullptr) {
    
  } else {
    
  }
  owner_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), owner,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:koinos.contracts.vhp.effective_balance_of_arguments.owner)
}

// -------------------------------------------------------------------

// effective_balance_of_result

// uint64 value = 1 [jstype = JS_STRING];
inline void effective_balance_of_result::clear_value() {
  value_ = uint64_t{0u};
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 effective_balance_of_result::_internal_value() const {
  return value_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 effective_balance_of_result::value() const {
  // @@protoc_insertion_point(field_get:koinos.contracts.vhp.effective_balance_of_result.value)
  return _internal_value();
}
inline void effective_balance_of_result::_internal_set_value(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  value_ = value;
}
inline void effective_balance_of_result::set_value(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:koinos.contracts.vhp.effective_balance_of_result.value)
}

// -------------------------------------------------------------------

// balance_entry

// uint64 block_height = 1 [jstype = JS_STRING];
inline void balance_entry::clear_block_height() {
  block_height_ = uint64_t{0u};
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 balance_entry::_internal_block_height() const {
  return block_height_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 balance_entry::block_height() const {
  // @@protoc_insertion_point(field_get:koinos.contracts.vhp.balance_entry.block_height)
  return _internal_block_height();
}
inline void balance_entry::_internal_set_block_height(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  block_height_ = value;
}
inline void balance_entry::set_block_height(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_block_height(value);
  // @@protoc_insertion_point(field_set:koinos.contracts.vhp.balance_entry.block_height)
}

// uint64 balance = 2 [jstype = JS_STRING];
inline void balance_entry::clear_balance() {
  balance_ = uint64_t{0u};
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 balance_entry::_internal_balance() const {
  return balance_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 balance_entry::balance() const {
  // @@protoc_insertion_point(field_get:koinos.contracts.vhp.balance_entry.balance)
  return _internal_balance();
}
inline void balance_entry::_internal_set_balance(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  balance_ = value;
}
inline void balance_entry::set_balance(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_balance(value);
  // @@protoc_insertion_point(field_set:koinos.contracts.vhp.balance_entry.balance)
}

// -------------------------------------------------------------------

// effective_balance_object

// uint64 current_balance = 1 [jstype = JS_STRING];
inline void effective_balance_object::clear_current_balance() {
  current_balance_ = uint64_t{0u};
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 effective_balance_object::_internal_current_balance() const {
  return current_balance_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 effective_balance_object::current_balance() const {
  // @@protoc_insertion_point(field_get:koinos.contracts.vhp.effective_balance_object.current_balance)
  return _internal_current_balance();
}
inline void effective_balance_object::_internal_set_current_balance(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  current_balance_ = value;
}
inline void effective_balance_object::set_current_balance(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_current_balance(value);
  // @@protoc_insertion_point(field_set:koinos.contracts.vhp.effective_balance_object.current_balance)
}

// repeated .koinos.contracts.vhp.balance_entry past_balances = 2;
inline int effective_balance_object::_internal_past_balances_size() const {
  return past_balances_.size();
}
inline int effective_balance_object::past_balances_size() const {
  return _internal_past_balances_size();
}
inline void effective_balance_object::clear_past_balances() {
  past_balances_.Clear();
}
inline ::koinos::contracts::vhp::balance_entry* effective_balance_object::mutable_past_balances(int index) {
  // @@protoc_insertion_point(field_mutable:koinos.contracts.vhp.effective_balance_object.past_balances)
  return past_balances_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::koinos::contracts::vhp::balance_entry >*
effective_balance_object::mutable_past_balances() {
  // @@protoc_insertion_point(field_mutable_list:koinos.contracts.vhp.effective_balance_object.past_balances)
  return &past_balances_;
}
inline const ::koinos::contracts::vhp::balance_entry& effective_balance_object::_internal_past_balances(int index) const {
  return past_balances_.Get(index);
}
inline const ::koinos::contracts::vhp::balance_entry& effective_balance_object::past_balances(int index) const {
  // @@protoc_insertion_point(field_get:koinos.contracts.vhp.effective_balance_object.past_balances)
  return _internal_past_balances(index);
}
inline ::koinos::contracts::vhp::balance_entry* effective_balance_object::_internal_add_past_balances() {
  return past_balances_.Add();
}
inline ::koinos::contracts::vhp::balance_entry* effective_balance_object::add_past_balances() {
  ::koinos::contracts::vhp::balance_entry* _add = _internal_add_past_balances();
  // @@protoc_insertion_point(field_add:koinos.contracts.vhp.effective_balance_object.past_balances)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::koinos::contracts::vhp::balance_entry >&
effective_balance_object::past_balances() const {
  // @@protoc_insertion_point(field_list:koinos.contracts.vhp.effective_balance_object.past_balances)
  return past_balances_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace vhp
}  // namespace contracts
}  // namespace koinos

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_koinos_2fcontracts_2fvhp_2fvhp_2eproto
