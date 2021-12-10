// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: koinos/transaction_store/transaction_store.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_koinos_2ftransaction_5fstore_2ftransaction_5fstore_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_koinos_2ftransaction_5fstore_2ftransaction_5fstore_2eproto

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
#include "koinos/protocol/protocol.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_koinos_2ftransaction_5fstore_2ftransaction_5fstore_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_koinos_2ftransaction_5fstore_2ftransaction_5fstore_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_koinos_2ftransaction_5fstore_2ftransaction_5fstore_2eproto;
namespace koinos {
namespace transaction_store {
class transaction_item;
struct transaction_itemDefaultTypeInternal;
extern transaction_itemDefaultTypeInternal _transaction_item_default_instance_;
}  // namespace transaction_store
}  // namespace koinos
PROTOBUF_NAMESPACE_OPEN
template<> ::koinos::transaction_store::transaction_item* Arena::CreateMaybeMessage<::koinos::transaction_store::transaction_item>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace koinos {
namespace transaction_store {

// ===================================================================

class transaction_item final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:koinos.transaction_store.transaction_item) */ {
 public:
  inline transaction_item() : transaction_item(nullptr) {}
  ~transaction_item() override;
  explicit constexpr transaction_item(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  transaction_item(const transaction_item& from);
  transaction_item(transaction_item&& from) noexcept
    : transaction_item() {
    *this = ::std::move(from);
  }

  inline transaction_item& operator=(const transaction_item& from) {
    CopyFrom(from);
    return *this;
  }
  inline transaction_item& operator=(transaction_item&& from) noexcept {
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
  static const transaction_item& default_instance() {
    return *internal_default_instance();
  }
  static inline const transaction_item* internal_default_instance() {
    return reinterpret_cast<const transaction_item*>(
               &_transaction_item_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(transaction_item& a, transaction_item& b) {
    a.Swap(&b);
  }
  inline void Swap(transaction_item* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(transaction_item* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline transaction_item* New() const final {
    return new transaction_item();
  }

  transaction_item* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<transaction_item>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const transaction_item& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const transaction_item& from);
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
  void InternalSwap(transaction_item* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "koinos.transaction_store.transaction_item";
  }
  protected:
  explicit transaction_item(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kContainingBlocksFieldNumber = 2,
    kTransactionFieldNumber = 1,
  };
  // repeated bytes containing_blocks = 2 [(.koinos.btype) = BLOCK_ID];
  int containing_blocks_size() const;
  private:
  int _internal_containing_blocks_size() const;
  public:
  void clear_containing_blocks();
  const std::string& containing_blocks(int index) const;
  std::string* mutable_containing_blocks(int index);
  void set_containing_blocks(int index, const std::string& value);
  void set_containing_blocks(int index, std::string&& value);
  void set_containing_blocks(int index, const char* value);
  void set_containing_blocks(int index, const void* value, size_t size);
  std::string* add_containing_blocks();
  void add_containing_blocks(const std::string& value);
  void add_containing_blocks(std::string&& value);
  void add_containing_blocks(const char* value);
  void add_containing_blocks(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& containing_blocks() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_containing_blocks();
  private:
  const std::string& _internal_containing_blocks(int index) const;
  std::string* _internal_add_containing_blocks();
  public:

  // .koinos.protocol.transaction transaction = 1;
  bool has_transaction() const;
  private:
  bool _internal_has_transaction() const;
  public:
  void clear_transaction();
  const ::koinos::protocol::transaction& transaction() const;
  PROTOBUF_MUST_USE_RESULT ::koinos::protocol::transaction* release_transaction();
  ::koinos::protocol::transaction* mutable_transaction();
  void set_allocated_transaction(::koinos::protocol::transaction* transaction);
  private:
  const ::koinos::protocol::transaction& _internal_transaction() const;
  ::koinos::protocol::transaction* _internal_mutable_transaction();
  public:
  void unsafe_arena_set_allocated_transaction(
      ::koinos::protocol::transaction* transaction);
  ::koinos::protocol::transaction* unsafe_arena_release_transaction();

  // @@protoc_insertion_point(class_scope:koinos.transaction_store.transaction_item)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> containing_blocks_;
  ::koinos::protocol::transaction* transaction_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_koinos_2ftransaction_5fstore_2ftransaction_5fstore_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// transaction_item

// .koinos.protocol.transaction transaction = 1;
inline bool transaction_item::_internal_has_transaction() const {
  return this != internal_default_instance() && transaction_ != nullptr;
}
inline bool transaction_item::has_transaction() const {
  return _internal_has_transaction();
}
inline const ::koinos::protocol::transaction& transaction_item::_internal_transaction() const {
  const ::koinos::protocol::transaction* p = transaction_;
  return p != nullptr ? *p : reinterpret_cast<const ::koinos::protocol::transaction&>(
      ::koinos::protocol::_transaction_default_instance_);
}
inline const ::koinos::protocol::transaction& transaction_item::transaction() const {
  // @@protoc_insertion_point(field_get:koinos.transaction_store.transaction_item.transaction)
  return _internal_transaction();
}
inline void transaction_item::unsafe_arena_set_allocated_transaction(
    ::koinos::protocol::transaction* transaction) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(transaction_);
  }
  transaction_ = transaction;
  if (transaction) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:koinos.transaction_store.transaction_item.transaction)
}
inline ::koinos::protocol::transaction* transaction_item::release_transaction() {
  
  ::koinos::protocol::transaction* temp = transaction_;
  transaction_ = nullptr;
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
inline ::koinos::protocol::transaction* transaction_item::unsafe_arena_release_transaction() {
  // @@protoc_insertion_point(field_release:koinos.transaction_store.transaction_item.transaction)
  
  ::koinos::protocol::transaction* temp = transaction_;
  transaction_ = nullptr;
  return temp;
}
inline ::koinos::protocol::transaction* transaction_item::_internal_mutable_transaction() {
  
  if (transaction_ == nullptr) {
    auto* p = CreateMaybeMessage<::koinos::protocol::transaction>(GetArenaForAllocation());
    transaction_ = p;
  }
  return transaction_;
}
inline ::koinos::protocol::transaction* transaction_item::mutable_transaction() {
  ::koinos::protocol::transaction* _msg = _internal_mutable_transaction();
  // @@protoc_insertion_point(field_mutable:koinos.transaction_store.transaction_item.transaction)
  return _msg;
}
inline void transaction_item::set_allocated_transaction(::koinos::protocol::transaction* transaction) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(transaction_);
  }
  if (transaction) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(transaction));
    if (message_arena != submessage_arena) {
      transaction = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, transaction, submessage_arena);
    }
    
  } else {
    
  }
  transaction_ = transaction;
  // @@protoc_insertion_point(field_set_allocated:koinos.transaction_store.transaction_item.transaction)
}

// repeated bytes containing_blocks = 2 [(.koinos.btype) = BLOCK_ID];
inline int transaction_item::_internal_containing_blocks_size() const {
  return containing_blocks_.size();
}
inline int transaction_item::containing_blocks_size() const {
  return _internal_containing_blocks_size();
}
inline void transaction_item::clear_containing_blocks() {
  containing_blocks_.Clear();
}
inline std::string* transaction_item::add_containing_blocks() {
  std::string* _s = _internal_add_containing_blocks();
  // @@protoc_insertion_point(field_add_mutable:koinos.transaction_store.transaction_item.containing_blocks)
  return _s;
}
inline const std::string& transaction_item::_internal_containing_blocks(int index) const {
  return containing_blocks_.Get(index);
}
inline const std::string& transaction_item::containing_blocks(int index) const {
  // @@protoc_insertion_point(field_get:koinos.transaction_store.transaction_item.containing_blocks)
  return _internal_containing_blocks(index);
}
inline std::string* transaction_item::mutable_containing_blocks(int index) {
  // @@protoc_insertion_point(field_mutable:koinos.transaction_store.transaction_item.containing_blocks)
  return containing_blocks_.Mutable(index);
}
inline void transaction_item::set_containing_blocks(int index, const std::string& value) {
  containing_blocks_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:koinos.transaction_store.transaction_item.containing_blocks)
}
inline void transaction_item::set_containing_blocks(int index, std::string&& value) {
  containing_blocks_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:koinos.transaction_store.transaction_item.containing_blocks)
}
inline void transaction_item::set_containing_blocks(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  containing_blocks_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:koinos.transaction_store.transaction_item.containing_blocks)
}
inline void transaction_item::set_containing_blocks(int index, const void* value, size_t size) {
  containing_blocks_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:koinos.transaction_store.transaction_item.containing_blocks)
}
inline std::string* transaction_item::_internal_add_containing_blocks() {
  return containing_blocks_.Add();
}
inline void transaction_item::add_containing_blocks(const std::string& value) {
  containing_blocks_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:koinos.transaction_store.transaction_item.containing_blocks)
}
inline void transaction_item::add_containing_blocks(std::string&& value) {
  containing_blocks_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:koinos.transaction_store.transaction_item.containing_blocks)
}
inline void transaction_item::add_containing_blocks(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  containing_blocks_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:koinos.transaction_store.transaction_item.containing_blocks)
}
inline void transaction_item::add_containing_blocks(const void* value, size_t size) {
  containing_blocks_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:koinos.transaction_store.transaction_item.containing_blocks)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
transaction_item::containing_blocks() const {
  // @@protoc_insertion_point(field_list:koinos.transaction_store.transaction_item.containing_blocks)
  return containing_blocks_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
transaction_item::mutable_containing_blocks() {
  // @@protoc_insertion_point(field_mutable_list:koinos.transaction_store.transaction_item.containing_blocks)
  return &containing_blocks_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace transaction_store
}  // namespace koinos

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_koinos_2ftransaction_5fstore_2ftransaction_5fstore_2eproto
