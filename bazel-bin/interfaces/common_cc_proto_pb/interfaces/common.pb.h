// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: interfaces/common.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_interfaces_2fcommon_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_interfaces_2fcommon_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_interfaces_2fcommon_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_interfaces_2fcommon_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_interfaces_2fcommon_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_interfaces_2fcommon_2eproto_metadata_getter(int index);
namespace common {
class Void;
struct VoidDefaultTypeInternal;
extern VoidDefaultTypeInternal _Void_default_instance_;
}  // namespace common
PROTOBUF_NAMESPACE_OPEN
template<> ::common::Void* Arena::CreateMaybeMessage<::common::Void>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace common {

enum DataTypeEnum : int {
  UNKNOWN = 0,
  UINT8 = 1,
  INT8 = 2,
  UINT16 = 3,
  INT16 = 4,
  UINT32 = 5,
  INT32 = 6,
  UINT64 = 7,
  INT64 = 8,
  UINT128 = 9,
  INT128 = 10,
  FLOAT = 11,
  DOUBLE = 12,
  BIT = 13,
  DataTypeEnum_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  DataTypeEnum_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool DataTypeEnum_IsValid(int value);
constexpr DataTypeEnum DataTypeEnum_MIN = UNKNOWN;
constexpr DataTypeEnum DataTypeEnum_MAX = BIT;
constexpr int DataTypeEnum_ARRAYSIZE = DataTypeEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DataTypeEnum_descriptor();
template<typename T>
inline const std::string& DataTypeEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DataTypeEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DataTypeEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    DataTypeEnum_descriptor(), enum_t_value);
}
inline bool DataTypeEnum_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, DataTypeEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<DataTypeEnum>(
    DataTypeEnum_descriptor(), name, value);
}
// ===================================================================

class Void PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:common.Void) */ {
 public:
  inline Void() : Void(nullptr) {}
  virtual ~Void();
  explicit constexpr Void(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Void(const Void& from);
  Void(Void&& from) noexcept
    : Void() {
    *this = ::std::move(from);
  }

  inline Void& operator=(const Void& from) {
    CopyFrom(from);
    return *this;
  }
  inline Void& operator=(Void&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Void& default_instance() {
    return *internal_default_instance();
  }
  static inline const Void* internal_default_instance() {
    return reinterpret_cast<const Void*>(
               &_Void_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Void& a, Void& b) {
    a.Swap(&b);
  }
  inline void Swap(Void* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Void* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Void* New() const final {
    return CreateMaybeMessage<Void>(nullptr);
  }

  Void* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Void>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Void& from);
  void MergeFrom(const Void& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Void* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "common.Void";
  }
  protected:
  explicit Void(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_interfaces_2fcommon_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:common.Void)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_interfaces_2fcommon_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Void

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace common

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::common::DataTypeEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::common::DataTypeEnum>() {
  return ::common::DataTypeEnum_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_interfaces_2fcommon_2eproto
