// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: interfaces/value_vector.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_interfaces_2fvalue_5fvector_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_interfaces_2fvalue_5fvector_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_interfaces_2fvalue_5fvector_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_interfaces_2fvalue_5fvector_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_interfaces_2fvalue_5fvector_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_interfaces_2fvalue_5fvector_2eproto_metadata_getter(int index);
namespace common {
class ValueVector;
struct ValueVectorDefaultTypeInternal;
extern ValueVectorDefaultTypeInternal _ValueVector_default_instance_;
}  // namespace common
PROTOBUF_NAMESPACE_OPEN
template<> ::common::ValueVector* Arena::CreateMaybeMessage<::common::ValueVector>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace common {

// ===================================================================

class ValueVector PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:common.ValueVector) */ {
 public:
  inline ValueVector() : ValueVector(nullptr) {}
  virtual ~ValueVector();
  explicit constexpr ValueVector(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ValueVector(const ValueVector& from);
  ValueVector(ValueVector&& from) noexcept
    : ValueVector() {
    *this = ::std::move(from);
  }

  inline ValueVector& operator=(const ValueVector& from) {
    CopyFrom(from);
    return *this;
  }
  inline ValueVector& operator=(ValueVector&& from) noexcept {
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
  static const ValueVector& default_instance() {
    return *internal_default_instance();
  }
  static inline const ValueVector* internal_default_instance() {
    return reinterpret_cast<const ValueVector*>(
               &_ValueVector_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ValueVector& a, ValueVector& b) {
    a.Swap(&b);
  }
  inline void Swap(ValueVector* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ValueVector* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ValueVector* New() const final {
    return CreateMaybeMessage<ValueVector>(nullptr);
  }

  ValueVector* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ValueVector>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ValueVector& from);
  void MergeFrom(const ValueVector& from);
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
  void InternalSwap(ValueVector* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "common.ValueVector";
  }
  protected:
  explicit ValueVector(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_interfaces_2fvalue_5fvector_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInt32VectorFieldNumber = 3,
    kInt64VectorFieldNumber = 4,
    kFloatVectorFieldNumber = 5,
    kDoubleVectorFieldNumber = 6,
    kSequenceFieldNumber = 1,
    kSentTimestampNsFieldNumber = 2,
  };
  // repeated int32 int32_vector = 3 [json_name = "int32Vector"];
  int int32_vector_size() const;
  private:
  int _internal_int32_vector_size() const;
  public:
  void clear_int32_vector();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_int32_vector(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_int32_vector() const;
  void _internal_add_int32_vector(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_int32_vector();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 int32_vector(int index) const;
  void set_int32_vector(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_int32_vector(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      int32_vector() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_int32_vector();

  // repeated int64 int64_vector = 4 [json_name = "int64Vector"];
  int int64_vector_size() const;
  private:
  int _internal_int64_vector_size() const;
  public:
  void clear_int64_vector();
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_int64_vector(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      _internal_int64_vector() const;
  void _internal_add_int64_vector(::PROTOBUF_NAMESPACE_ID::int64 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      _internal_mutable_int64_vector();
  public:
  ::PROTOBUF_NAMESPACE_ID::int64 int64_vector(int index) const;
  void set_int64_vector(int index, ::PROTOBUF_NAMESPACE_ID::int64 value);
  void add_int64_vector(::PROTOBUF_NAMESPACE_ID::int64 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      int64_vector() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      mutable_int64_vector();

  // repeated float float_vector = 5 [json_name = "floatVector"];
  int float_vector_size() const;
  private:
  int _internal_float_vector_size() const;
  public:
  void clear_float_vector();
  private:
  float _internal_float_vector(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_float_vector() const;
  void _internal_add_float_vector(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_float_vector();
  public:
  float float_vector(int index) const;
  void set_float_vector(int index, float value);
  void add_float_vector(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      float_vector() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_float_vector();

  // repeated double double_vector = 6 [json_name = "doubleVector"];
  int double_vector_size() const;
  private:
  int _internal_double_vector_size() const;
  public:
  void clear_double_vector();
  private:
  double _internal_double_vector(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_double_vector() const;
  void _internal_add_double_vector(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_double_vector();
  public:
  double double_vector(int index) const;
  void set_double_vector(int index, double value);
  void add_double_vector(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      double_vector() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_double_vector();

  // int64 sequence = 1 [json_name = "sequence"];
  void clear_sequence();
  ::PROTOBUF_NAMESPACE_ID::int64 sequence() const;
  void set_sequence(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_sequence() const;
  void _internal_set_sequence(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 sent_timestamp_ns = 2 [json_name = "sentTimestampNs"];
  void clear_sent_timestamp_ns();
  ::PROTOBUF_NAMESPACE_ID::int64 sent_timestamp_ns() const;
  void set_sent_timestamp_ns(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_sent_timestamp_ns() const;
  void _internal_set_sent_timestamp_ns(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:common.ValueVector)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > int32_vector_;
  mutable std::atomic<int> _int32_vector_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 > int64_vector_;
  mutable std::atomic<int> _int64_vector_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > float_vector_;
  mutable std::atomic<int> _float_vector_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > double_vector_;
  mutable std::atomic<int> _double_vector_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::int64 sequence_;
  ::PROTOBUF_NAMESPACE_ID::int64 sent_timestamp_ns_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_interfaces_2fvalue_5fvector_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ValueVector

// int64 sequence = 1 [json_name = "sequence"];
inline void ValueVector::clear_sequence() {
  sequence_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ValueVector::_internal_sequence() const {
  return sequence_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ValueVector::sequence() const {
  // @@protoc_insertion_point(field_get:common.ValueVector.sequence)
  return _internal_sequence();
}
inline void ValueVector::_internal_set_sequence(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  sequence_ = value;
}
inline void ValueVector::set_sequence(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_sequence(value);
  // @@protoc_insertion_point(field_set:common.ValueVector.sequence)
}

// int64 sent_timestamp_ns = 2 [json_name = "sentTimestampNs"];
inline void ValueVector::clear_sent_timestamp_ns() {
  sent_timestamp_ns_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ValueVector::_internal_sent_timestamp_ns() const {
  return sent_timestamp_ns_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ValueVector::sent_timestamp_ns() const {
  // @@protoc_insertion_point(field_get:common.ValueVector.sent_timestamp_ns)
  return _internal_sent_timestamp_ns();
}
inline void ValueVector::_internal_set_sent_timestamp_ns(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  sent_timestamp_ns_ = value;
}
inline void ValueVector::set_sent_timestamp_ns(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_sent_timestamp_ns(value);
  // @@protoc_insertion_point(field_set:common.ValueVector.sent_timestamp_ns)
}

// repeated int32 int32_vector = 3 [json_name = "int32Vector"];
inline int ValueVector::_internal_int32_vector_size() const {
  return int32_vector_.size();
}
inline int ValueVector::int32_vector_size() const {
  return _internal_int32_vector_size();
}
inline void ValueVector::clear_int32_vector() {
  int32_vector_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ValueVector::_internal_int32_vector(int index) const {
  return int32_vector_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ValueVector::int32_vector(int index) const {
  // @@protoc_insertion_point(field_get:common.ValueVector.int32_vector)
  return _internal_int32_vector(index);
}
inline void ValueVector::set_int32_vector(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  int32_vector_.Set(index, value);
  // @@protoc_insertion_point(field_set:common.ValueVector.int32_vector)
}
inline void ValueVector::_internal_add_int32_vector(::PROTOBUF_NAMESPACE_ID::int32 value) {
  int32_vector_.Add(value);
}
inline void ValueVector::add_int32_vector(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_int32_vector(value);
  // @@protoc_insertion_point(field_add:common.ValueVector.int32_vector)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
ValueVector::_internal_int32_vector() const {
  return int32_vector_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
ValueVector::int32_vector() const {
  // @@protoc_insertion_point(field_list:common.ValueVector.int32_vector)
  return _internal_int32_vector();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
ValueVector::_internal_mutable_int32_vector() {
  return &int32_vector_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
ValueVector::mutable_int32_vector() {
  // @@protoc_insertion_point(field_mutable_list:common.ValueVector.int32_vector)
  return _internal_mutable_int32_vector();
}

// repeated int64 int64_vector = 4 [json_name = "int64Vector"];
inline int ValueVector::_internal_int64_vector_size() const {
  return int64_vector_.size();
}
inline int ValueVector::int64_vector_size() const {
  return _internal_int64_vector_size();
}
inline void ValueVector::clear_int64_vector() {
  int64_vector_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ValueVector::_internal_int64_vector(int index) const {
  return int64_vector_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ValueVector::int64_vector(int index) const {
  // @@protoc_insertion_point(field_get:common.ValueVector.int64_vector)
  return _internal_int64_vector(index);
}
inline void ValueVector::set_int64_vector(int index, ::PROTOBUF_NAMESPACE_ID::int64 value) {
  int64_vector_.Set(index, value);
  // @@protoc_insertion_point(field_set:common.ValueVector.int64_vector)
}
inline void ValueVector::_internal_add_int64_vector(::PROTOBUF_NAMESPACE_ID::int64 value) {
  int64_vector_.Add(value);
}
inline void ValueVector::add_int64_vector(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_add_int64_vector(value);
  // @@protoc_insertion_point(field_add:common.ValueVector.int64_vector)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
ValueVector::_internal_int64_vector() const {
  return int64_vector_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
ValueVector::int64_vector() const {
  // @@protoc_insertion_point(field_list:common.ValueVector.int64_vector)
  return _internal_int64_vector();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
ValueVector::_internal_mutable_int64_vector() {
  return &int64_vector_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
ValueVector::mutable_int64_vector() {
  // @@protoc_insertion_point(field_mutable_list:common.ValueVector.int64_vector)
  return _internal_mutable_int64_vector();
}

// repeated float float_vector = 5 [json_name = "floatVector"];
inline int ValueVector::_internal_float_vector_size() const {
  return float_vector_.size();
}
inline int ValueVector::float_vector_size() const {
  return _internal_float_vector_size();
}
inline void ValueVector::clear_float_vector() {
  float_vector_.Clear();
}
inline float ValueVector::_internal_float_vector(int index) const {
  return float_vector_.Get(index);
}
inline float ValueVector::float_vector(int index) const {
  // @@protoc_insertion_point(field_get:common.ValueVector.float_vector)
  return _internal_float_vector(index);
}
inline void ValueVector::set_float_vector(int index, float value) {
  float_vector_.Set(index, value);
  // @@protoc_insertion_point(field_set:common.ValueVector.float_vector)
}
inline void ValueVector::_internal_add_float_vector(float value) {
  float_vector_.Add(value);
}
inline void ValueVector::add_float_vector(float value) {
  _internal_add_float_vector(value);
  // @@protoc_insertion_point(field_add:common.ValueVector.float_vector)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
ValueVector::_internal_float_vector() const {
  return float_vector_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
ValueVector::float_vector() const {
  // @@protoc_insertion_point(field_list:common.ValueVector.float_vector)
  return _internal_float_vector();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
ValueVector::_internal_mutable_float_vector() {
  return &float_vector_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
ValueVector::mutable_float_vector() {
  // @@protoc_insertion_point(field_mutable_list:common.ValueVector.float_vector)
  return _internal_mutable_float_vector();
}

// repeated double double_vector = 6 [json_name = "doubleVector"];
inline int ValueVector::_internal_double_vector_size() const {
  return double_vector_.size();
}
inline int ValueVector::double_vector_size() const {
  return _internal_double_vector_size();
}
inline void ValueVector::clear_double_vector() {
  double_vector_.Clear();
}
inline double ValueVector::_internal_double_vector(int index) const {
  return double_vector_.Get(index);
}
inline double ValueVector::double_vector(int index) const {
  // @@protoc_insertion_point(field_get:common.ValueVector.double_vector)
  return _internal_double_vector(index);
}
inline void ValueVector::set_double_vector(int index, double value) {
  double_vector_.Set(index, value);
  // @@protoc_insertion_point(field_set:common.ValueVector.double_vector)
}
inline void ValueVector::_internal_add_double_vector(double value) {
  double_vector_.Add(value);
}
inline void ValueVector::add_double_vector(double value) {
  _internal_add_double_vector(value);
  // @@protoc_insertion_point(field_add:common.ValueVector.double_vector)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
ValueVector::_internal_double_vector() const {
  return double_vector_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
ValueVector::double_vector() const {
  // @@protoc_insertion_point(field_list:common.ValueVector.double_vector)
  return _internal_double_vector();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
ValueVector::_internal_mutable_double_vector() {
  return &double_vector_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
ValueVector::mutable_double_vector() {
  // @@protoc_insertion_point(field_mutable_list:common.ValueVector.double_vector)
  return _internal_mutable_double_vector();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace common

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_interfaces_2fvalue_5fvector_2eproto
