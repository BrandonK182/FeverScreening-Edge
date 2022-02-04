// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: interfaces/image.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_interfaces_2fimage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_interfaces_2fimage_2eproto

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
#include "interfaces/common.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_interfaces_2fimage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_interfaces_2fimage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_interfaces_2fimage_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_interfaces_2fimage_2eproto_metadata_getter(int index);
namespace image {
class CompressedImage;
struct CompressedImageDefaultTypeInternal;
extern CompressedImageDefaultTypeInternal _CompressedImage_default_instance_;
class Image;
struct ImageDefaultTypeInternal;
extern ImageDefaultTypeInternal _Image_default_instance_;
}  // namespace image
PROTOBUF_NAMESPACE_OPEN
template<> ::image::CompressedImage* Arena::CreateMaybeMessage<::image::CompressedImage>(Arena*);
template<> ::image::Image* Arena::CreateMaybeMessage<::image::Image>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace image {

enum Image_ImageColorEnum : int {
  Image_ImageColorEnum_UNKNOWN_IMAGE_COLOR = 0,
  Image_ImageColorEnum_RGB = 1,
  Image_ImageColorEnum_BGR = 2,
  Image_ImageColorEnum_RBG = 3,
  Image_ImageColorEnum_HSV = 4,
  Image_ImageColorEnum_GRAY = 5,
  Image_ImageColorEnum_RGBA = 6,
  Image_ImageColorEnum_OTHER = 7,
  Image_ImageColorEnum_Image_ImageColorEnum_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Image_ImageColorEnum_Image_ImageColorEnum_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Image_ImageColorEnum_IsValid(int value);
constexpr Image_ImageColorEnum Image_ImageColorEnum_ImageColorEnum_MIN = Image_ImageColorEnum_UNKNOWN_IMAGE_COLOR;
constexpr Image_ImageColorEnum Image_ImageColorEnum_ImageColorEnum_MAX = Image_ImageColorEnum_OTHER;
constexpr int Image_ImageColorEnum_ImageColorEnum_ARRAYSIZE = Image_ImageColorEnum_ImageColorEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Image_ImageColorEnum_descriptor();
template<typename T>
inline const std::string& Image_ImageColorEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Image_ImageColorEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Image_ImageColorEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Image_ImageColorEnum_descriptor(), enum_t_value);
}
inline bool Image_ImageColorEnum_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Image_ImageColorEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Image_ImageColorEnum>(
    Image_ImageColorEnum_descriptor(), name, value);
}
enum CompressedImage_CompressedImageTypeEnum : int {
  CompressedImage_CompressedImageTypeEnum_UNKNOWN_IMAGE_TYPE = 0,
  CompressedImage_CompressedImageTypeEnum_JPG = 1,
  CompressedImage_CompressedImageTypeEnum_PNG = 2,
  CompressedImage_CompressedImageTypeEnum_TIF = 3,
  CompressedImage_CompressedImageTypeEnum_GIF = 4,
  CompressedImage_CompressedImageTypeEnum_CompressedImage_CompressedImageTypeEnum_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  CompressedImage_CompressedImageTypeEnum_CompressedImage_CompressedImageTypeEnum_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool CompressedImage_CompressedImageTypeEnum_IsValid(int value);
constexpr CompressedImage_CompressedImageTypeEnum CompressedImage_CompressedImageTypeEnum_CompressedImageTypeEnum_MIN = CompressedImage_CompressedImageTypeEnum_UNKNOWN_IMAGE_TYPE;
constexpr CompressedImage_CompressedImageTypeEnum CompressedImage_CompressedImageTypeEnum_CompressedImageTypeEnum_MAX = CompressedImage_CompressedImageTypeEnum_GIF;
constexpr int CompressedImage_CompressedImageTypeEnum_CompressedImageTypeEnum_ARRAYSIZE = CompressedImage_CompressedImageTypeEnum_CompressedImageTypeEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CompressedImage_CompressedImageTypeEnum_descriptor();
template<typename T>
inline const std::string& CompressedImage_CompressedImageTypeEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CompressedImage_CompressedImageTypeEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CompressedImage_CompressedImageTypeEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CompressedImage_CompressedImageTypeEnum_descriptor(), enum_t_value);
}
inline bool CompressedImage_CompressedImageTypeEnum_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, CompressedImage_CompressedImageTypeEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CompressedImage_CompressedImageTypeEnum>(
    CompressedImage_CompressedImageTypeEnum_descriptor(), name, value);
}
// ===================================================================

class Image PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:image.Image) */ {
 public:
  inline Image() : Image(nullptr) {}
  virtual ~Image();
  explicit constexpr Image(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Image(const Image& from);
  Image(Image&& from) noexcept
    : Image() {
    *this = ::std::move(from);
  }

  inline Image& operator=(const Image& from) {
    CopyFrom(from);
    return *this;
  }
  inline Image& operator=(Image&& from) noexcept {
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
  static const Image& default_instance() {
    return *internal_default_instance();
  }
  static inline const Image* internal_default_instance() {
    return reinterpret_cast<const Image*>(
               &_Image_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Image& a, Image& b) {
    a.Swap(&b);
  }
  inline void Swap(Image* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Image* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Image* New() const final {
    return CreateMaybeMessage<Image>(nullptr);
  }

  Image* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Image>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Image& from);
  void MergeFrom(const Image& from);
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
  void InternalSwap(Image* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "image.Image";
  }
  protected:
  explicit Image(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_interfaces_2fimage_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  typedef Image_ImageColorEnum ImageColorEnum;
  static constexpr ImageColorEnum UNKNOWN_IMAGE_COLOR =
    Image_ImageColorEnum_UNKNOWN_IMAGE_COLOR;
  static constexpr ImageColorEnum RGB =
    Image_ImageColorEnum_RGB;
  static constexpr ImageColorEnum BGR =
    Image_ImageColorEnum_BGR;
  static constexpr ImageColorEnum RBG =
    Image_ImageColorEnum_RBG;
  static constexpr ImageColorEnum HSV =
    Image_ImageColorEnum_HSV;
  static constexpr ImageColorEnum GRAY =
    Image_ImageColorEnum_GRAY;
  static constexpr ImageColorEnum RGBA =
    Image_ImageColorEnum_RGBA;
  static constexpr ImageColorEnum OTHER =
    Image_ImageColorEnum_OTHER;
  static inline bool ImageColorEnum_IsValid(int value) {
    return Image_ImageColorEnum_IsValid(value);
  }
  static constexpr ImageColorEnum ImageColorEnum_MIN =
    Image_ImageColorEnum_ImageColorEnum_MIN;
  static constexpr ImageColorEnum ImageColorEnum_MAX =
    Image_ImageColorEnum_ImageColorEnum_MAX;
  static constexpr int ImageColorEnum_ARRAYSIZE =
    Image_ImageColorEnum_ImageColorEnum_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  ImageColorEnum_descriptor() {
    return Image_ImageColorEnum_descriptor();
  }
  template<typename T>
  static inline const std::string& ImageColorEnum_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ImageColorEnum>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ImageColorEnum_Name.");
    return Image_ImageColorEnum_Name(enum_t_value);
  }
  static inline bool ImageColorEnum_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      ImageColorEnum* value) {
    return Image_ImageColorEnum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 4,
    kWidthFieldNumber = 1,
    kHeightFieldNumber = 2,
    kChannelFieldNumber = 3,
    kColorFieldNumber = 5,
    kDataTypeFieldNumber = 6,
  };
  // bytes data = 4 [json_name = "data"];
  void clear_data();
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // int32 width = 1 [json_name = "width"];
  void clear_width();
  ::PROTOBUF_NAMESPACE_ID::int32 width() const;
  void set_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_width() const;
  void _internal_set_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 height = 2 [json_name = "height"];
  void clear_height();
  ::PROTOBUF_NAMESPACE_ID::int32 height() const;
  void set_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_height() const;
  void _internal_set_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 channel = 3 [json_name = "channel"];
  void clear_channel();
  ::PROTOBUF_NAMESPACE_ID::int32 channel() const;
  void set_channel(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_channel() const;
  void _internal_set_channel(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // .image.Image.ImageColorEnum color = 5 [json_name = "color"];
  void clear_color();
  ::image::Image_ImageColorEnum color() const;
  void set_color(::image::Image_ImageColorEnum value);
  private:
  ::image::Image_ImageColorEnum _internal_color() const;
  void _internal_set_color(::image::Image_ImageColorEnum value);
  public:

  // .common.DataTypeEnum data_type = 6 [json_name = "dataType"];
  void clear_data_type();
  ::common::DataTypeEnum data_type() const;
  void set_data_type(::common::DataTypeEnum value);
  private:
  ::common::DataTypeEnum _internal_data_type() const;
  void _internal_set_data_type(::common::DataTypeEnum value);
  public:

  // @@protoc_insertion_point(class_scope:image.Image)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  ::PROTOBUF_NAMESPACE_ID::int32 width_;
  ::PROTOBUF_NAMESPACE_ID::int32 height_;
  ::PROTOBUF_NAMESPACE_ID::int32 channel_;
  int color_;
  int data_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_interfaces_2fimage_2eproto;
};
// -------------------------------------------------------------------

class CompressedImage PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:image.CompressedImage) */ {
 public:
  inline CompressedImage() : CompressedImage(nullptr) {}
  virtual ~CompressedImage();
  explicit constexpr CompressedImage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CompressedImage(const CompressedImage& from);
  CompressedImage(CompressedImage&& from) noexcept
    : CompressedImage() {
    *this = ::std::move(from);
  }

  inline CompressedImage& operator=(const CompressedImage& from) {
    CopyFrom(from);
    return *this;
  }
  inline CompressedImage& operator=(CompressedImage&& from) noexcept {
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
  static const CompressedImage& default_instance() {
    return *internal_default_instance();
  }
  static inline const CompressedImage* internal_default_instance() {
    return reinterpret_cast<const CompressedImage*>(
               &_CompressedImage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CompressedImage& a, CompressedImage& b) {
    a.Swap(&b);
  }
  inline void Swap(CompressedImage* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CompressedImage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CompressedImage* New() const final {
    return CreateMaybeMessage<CompressedImage>(nullptr);
  }

  CompressedImage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CompressedImage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CompressedImage& from);
  void MergeFrom(const CompressedImage& from);
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
  void InternalSwap(CompressedImage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "image.CompressedImage";
  }
  protected:
  explicit CompressedImage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_interfaces_2fimage_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  typedef CompressedImage_CompressedImageTypeEnum CompressedImageTypeEnum;
  static constexpr CompressedImageTypeEnum UNKNOWN_IMAGE_TYPE =
    CompressedImage_CompressedImageTypeEnum_UNKNOWN_IMAGE_TYPE;
  static constexpr CompressedImageTypeEnum JPG =
    CompressedImage_CompressedImageTypeEnum_JPG;
  static constexpr CompressedImageTypeEnum PNG =
    CompressedImage_CompressedImageTypeEnum_PNG;
  static constexpr CompressedImageTypeEnum TIF =
    CompressedImage_CompressedImageTypeEnum_TIF;
  static constexpr CompressedImageTypeEnum GIF =
    CompressedImage_CompressedImageTypeEnum_GIF;
  static inline bool CompressedImageTypeEnum_IsValid(int value) {
    return CompressedImage_CompressedImageTypeEnum_IsValid(value);
  }
  static constexpr CompressedImageTypeEnum CompressedImageTypeEnum_MIN =
    CompressedImage_CompressedImageTypeEnum_CompressedImageTypeEnum_MIN;
  static constexpr CompressedImageTypeEnum CompressedImageTypeEnum_MAX =
    CompressedImage_CompressedImageTypeEnum_CompressedImageTypeEnum_MAX;
  static constexpr int CompressedImageTypeEnum_ARRAYSIZE =
    CompressedImage_CompressedImageTypeEnum_CompressedImageTypeEnum_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  CompressedImageTypeEnum_descriptor() {
    return CompressedImage_CompressedImageTypeEnum_descriptor();
  }
  template<typename T>
  static inline const std::string& CompressedImageTypeEnum_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CompressedImageTypeEnum>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CompressedImageTypeEnum_Name.");
    return CompressedImage_CompressedImageTypeEnum_Name(enum_t_value);
  }
  static inline bool CompressedImageTypeEnum_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      CompressedImageTypeEnum* value) {
    return CompressedImage_CompressedImageTypeEnum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 3,
    kWidthFieldNumber = 1,
    kHeightFieldNumber = 2,
    kTypeFieldNumber = 4,
  };
  // bytes data = 3 [json_name = "data"];
  void clear_data();
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // int32 width = 1 [json_name = "width"];
  void clear_width();
  ::PROTOBUF_NAMESPACE_ID::int32 width() const;
  void set_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_width() const;
  void _internal_set_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 height = 2 [json_name = "height"];
  void clear_height();
  ::PROTOBUF_NAMESPACE_ID::int32 height() const;
  void set_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_height() const;
  void _internal_set_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // .image.CompressedImage.CompressedImageTypeEnum type = 4 [json_name = "type"];
  void clear_type();
  ::image::CompressedImage_CompressedImageTypeEnum type() const;
  void set_type(::image::CompressedImage_CompressedImageTypeEnum value);
  private:
  ::image::CompressedImage_CompressedImageTypeEnum _internal_type() const;
  void _internal_set_type(::image::CompressedImage_CompressedImageTypeEnum value);
  public:

  // @@protoc_insertion_point(class_scope:image.CompressedImage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  ::PROTOBUF_NAMESPACE_ID::int32 width_;
  ::PROTOBUF_NAMESPACE_ID::int32 height_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_interfaces_2fimage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Image

// int32 width = 1 [json_name = "width"];
inline void Image::clear_width() {
  width_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Image::_internal_width() const {
  return width_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Image::width() const {
  // @@protoc_insertion_point(field_get:image.Image.width)
  return _internal_width();
}
inline void Image::_internal_set_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  width_ = value;
}
inline void Image::set_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:image.Image.width)
}

// int32 height = 2 [json_name = "height"];
inline void Image::clear_height() {
  height_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Image::_internal_height() const {
  return height_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Image::height() const {
  // @@protoc_insertion_point(field_get:image.Image.height)
  return _internal_height();
}
inline void Image::_internal_set_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  height_ = value;
}
inline void Image::set_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:image.Image.height)
}

// int32 channel = 3 [json_name = "channel"];
inline void Image::clear_channel() {
  channel_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Image::_internal_channel() const {
  return channel_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Image::channel() const {
  // @@protoc_insertion_point(field_get:image.Image.channel)
  return _internal_channel();
}
inline void Image::_internal_set_channel(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  channel_ = value;
}
inline void Image::set_channel(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_channel(value);
  // @@protoc_insertion_point(field_set:image.Image.channel)
}

// bytes data = 4 [json_name = "data"];
inline void Image::clear_data() {
  data_.ClearToEmpty();
}
inline const std::string& Image::data() const {
  // @@protoc_insertion_point(field_get:image.Image.data)
  return _internal_data();
}
inline void Image::set_data(const std::string& value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:image.Image.data)
}
inline std::string* Image::mutable_data() {
  // @@protoc_insertion_point(field_mutable:image.Image.data)
  return _internal_mutable_data();
}
inline const std::string& Image::_internal_data() const {
  return data_.Get();
}
inline void Image::_internal_set_data(const std::string& value) {
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Image::set_data(std::string&& value) {
  
  data_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:image.Image.data)
}
inline void Image::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:image.Image.data)
}
inline void Image::set_data(const void* value,
    size_t size) {
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:image.Image.data)
}
inline std::string* Image::_internal_mutable_data() {
  
  return data_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Image::release_data() {
  // @@protoc_insertion_point(field_release:image.Image.data)
  return data_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Image::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    
  } else {
    
  }
  data_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:image.Image.data)
}

// .image.Image.ImageColorEnum color = 5 [json_name = "color"];
inline void Image::clear_color() {
  color_ = 0;
}
inline ::image::Image_ImageColorEnum Image::_internal_color() const {
  return static_cast< ::image::Image_ImageColorEnum >(color_);
}
inline ::image::Image_ImageColorEnum Image::color() const {
  // @@protoc_insertion_point(field_get:image.Image.color)
  return _internal_color();
}
inline void Image::_internal_set_color(::image::Image_ImageColorEnum value) {
  
  color_ = value;
}
inline void Image::set_color(::image::Image_ImageColorEnum value) {
  _internal_set_color(value);
  // @@protoc_insertion_point(field_set:image.Image.color)
}

// .common.DataTypeEnum data_type = 6 [json_name = "dataType"];
inline void Image::clear_data_type() {
  data_type_ = 0;
}
inline ::common::DataTypeEnum Image::_internal_data_type() const {
  return static_cast< ::common::DataTypeEnum >(data_type_);
}
inline ::common::DataTypeEnum Image::data_type() const {
  // @@protoc_insertion_point(field_get:image.Image.data_type)
  return _internal_data_type();
}
inline void Image::_internal_set_data_type(::common::DataTypeEnum value) {
  
  data_type_ = value;
}
inline void Image::set_data_type(::common::DataTypeEnum value) {
  _internal_set_data_type(value);
  // @@protoc_insertion_point(field_set:image.Image.data_type)
}

// -------------------------------------------------------------------

// CompressedImage

// int32 width = 1 [json_name = "width"];
inline void CompressedImage::clear_width() {
  width_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CompressedImage::_internal_width() const {
  return width_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CompressedImage::width() const {
  // @@protoc_insertion_point(field_get:image.CompressedImage.width)
  return _internal_width();
}
inline void CompressedImage::_internal_set_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  width_ = value;
}
inline void CompressedImage::set_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:image.CompressedImage.width)
}

// int32 height = 2 [json_name = "height"];
inline void CompressedImage::clear_height() {
  height_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CompressedImage::_internal_height() const {
  return height_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CompressedImage::height() const {
  // @@protoc_insertion_point(field_get:image.CompressedImage.height)
  return _internal_height();
}
inline void CompressedImage::_internal_set_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  height_ = value;
}
inline void CompressedImage::set_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:image.CompressedImage.height)
}

// bytes data = 3 [json_name = "data"];
inline void CompressedImage::clear_data() {
  data_.ClearToEmpty();
}
inline const std::string& CompressedImage::data() const {
  // @@protoc_insertion_point(field_get:image.CompressedImage.data)
  return _internal_data();
}
inline void CompressedImage::set_data(const std::string& value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:image.CompressedImage.data)
}
inline std::string* CompressedImage::mutable_data() {
  // @@protoc_insertion_point(field_mutable:image.CompressedImage.data)
  return _internal_mutable_data();
}
inline const std::string& CompressedImage::_internal_data() const {
  return data_.Get();
}
inline void CompressedImage::_internal_set_data(const std::string& value) {
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void CompressedImage::set_data(std::string&& value) {
  
  data_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:image.CompressedImage.data)
}
inline void CompressedImage::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:image.CompressedImage.data)
}
inline void CompressedImage::set_data(const void* value,
    size_t size) {
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:image.CompressedImage.data)
}
inline std::string* CompressedImage::_internal_mutable_data() {
  
  return data_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* CompressedImage::release_data() {
  // @@protoc_insertion_point(field_release:image.CompressedImage.data)
  return data_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CompressedImage::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    
  } else {
    
  }
  data_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:image.CompressedImage.data)
}

// .image.CompressedImage.CompressedImageTypeEnum type = 4 [json_name = "type"];
inline void CompressedImage::clear_type() {
  type_ = 0;
}
inline ::image::CompressedImage_CompressedImageTypeEnum CompressedImage::_internal_type() const {
  return static_cast< ::image::CompressedImage_CompressedImageTypeEnum >(type_);
}
inline ::image::CompressedImage_CompressedImageTypeEnum CompressedImage::type() const {
  // @@protoc_insertion_point(field_get:image.CompressedImage.type)
  return _internal_type();
}
inline void CompressedImage::_internal_set_type(::image::CompressedImage_CompressedImageTypeEnum value) {
  
  type_ = value;
}
inline void CompressedImage::set_type(::image::CompressedImage_CompressedImageTypeEnum value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:image.CompressedImage.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace image

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::image::Image_ImageColorEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::image::Image_ImageColorEnum>() {
  return ::image::Image_ImageColorEnum_descriptor();
}
template <> struct is_proto_enum< ::image::CompressedImage_CompressedImageTypeEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::image::CompressedImage_CompressedImageTypeEnum>() {
  return ::image::CompressedImage_CompressedImageTypeEnum_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_interfaces_2fimage_2eproto
