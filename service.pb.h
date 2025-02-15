// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: service.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_service_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_service_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_service_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_service_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_service_2eproto;
namespace example {
class Reply;
class ReplyDefaultTypeInternal;
extern ReplyDefaultTypeInternal _Reply_default_instance_;
class Request;
class RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
}  // namespace example
PROTOBUF_NAMESPACE_OPEN
template<> ::example::Reply* Arena::CreateMaybeMessage<::example::Reply>(Arena*);
template<> ::example::Request* Arena::CreateMaybeMessage<::example::Request>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace example {

// ===================================================================

class Request PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:example.Request) */ {
 public:
  inline Request() : Request(nullptr) {};
  virtual ~Request();

  Request(const Request& from);
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request& operator=(Request&& from) noexcept {
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
  static const Request& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }
  inline void Swap(Request* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Request* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Request* New() const final {
    return CreateMaybeMessage<Request>(nullptr);
  }

  Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Request>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
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
  void InternalSwap(Request* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "example.Request";
  }
  protected:
  explicit Request(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_service_2eproto);
    return ::descriptor_table_service_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAFieldNumber = 1,
    kBFieldNumber = 2,
    kOpFieldNumber = 3,
  };
  // int32 a = 1;
  void clear_a();
  ::PROTOBUF_NAMESPACE_ID::int32 a() const;
  void set_a(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_a() const;
  void _internal_set_a(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 b = 2;
  void clear_b();
  ::PROTOBUF_NAMESPACE_ID::int32 b() const;
  void set_b(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_b() const;
  void _internal_set_b(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 op = 3;
  void clear_op();
  ::PROTOBUF_NAMESPACE_ID::int32 op() const;
  void set_op(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_op() const;
  void _internal_set_op(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:example.Request)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 a_;
  ::PROTOBUF_NAMESPACE_ID::int32 b_;
  ::PROTOBUF_NAMESPACE_ID::int32 op_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_service_2eproto;
};
// -------------------------------------------------------------------

class Reply PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:example.Reply) */ {
 public:
  inline Reply() : Reply(nullptr) {};
  virtual ~Reply();

  Reply(const Reply& from);
  Reply(Reply&& from) noexcept
    : Reply() {
    *this = ::std::move(from);
  }

  inline Reply& operator=(const Reply& from) {
    CopyFrom(from);
    return *this;
  }
  inline Reply& operator=(Reply&& from) noexcept {
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
  static const Reply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Reply* internal_default_instance() {
    return reinterpret_cast<const Reply*>(
               &_Reply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Reply& a, Reply& b) {
    a.Swap(&b);
  }
  inline void Swap(Reply* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Reply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Reply* New() const final {
    return CreateMaybeMessage<Reply>(nullptr);
  }

  Reply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Reply>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Reply& from);
  void MergeFrom(const Reply& from);
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
  void InternalSwap(Reply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "example.Reply";
  }
  protected:
  explicit Reply(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_service_2eproto);
    return ::descriptor_table_service_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultFieldNumber = 1,
  };
  // int32 result = 1;
  void clear_result();
  ::PROTOBUF_NAMESPACE_ID::int32 result() const;
  void set_result(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_result() const;
  void _internal_set_result(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:example.Reply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_service_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Request

// int32 a = 1;
inline void Request::clear_a() {
  a_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Request::_internal_a() const {
  return a_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Request::a() const {
  // @@protoc_insertion_point(field_get:example.Request.a)
  return _internal_a();
}
inline void Request::_internal_set_a(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  a_ = value;
}
inline void Request::set_a(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:example.Request.a)
}

// int32 b = 2;
inline void Request::clear_b() {
  b_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Request::_internal_b() const {
  return b_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Request::b() const {
  // @@protoc_insertion_point(field_get:example.Request.b)
  return _internal_b();
}
inline void Request::_internal_set_b(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  b_ = value;
}
inline void Request::set_b(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_b(value);
  // @@protoc_insertion_point(field_set:example.Request.b)
}

// int32 op = 3;
inline void Request::clear_op() {
  op_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Request::_internal_op() const {
  return op_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Request::op() const {
  // @@protoc_insertion_point(field_get:example.Request.op)
  return _internal_op();
}
inline void Request::_internal_set_op(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  op_ = value;
}
inline void Request::set_op(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_op(value);
  // @@protoc_insertion_point(field_set:example.Request.op)
}

// -------------------------------------------------------------------

// Reply

// int32 result = 1;
inline void Reply::clear_result() {
  result_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Reply::_internal_result() const {
  return result_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Reply::result() const {
  // @@protoc_insertion_point(field_get:example.Reply.result)
  return _internal_result();
}
inline void Reply::_internal_set_result(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  result_ = value;
}
inline void Reply::set_result(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:example.Reply.result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace example

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_service_2eproto
