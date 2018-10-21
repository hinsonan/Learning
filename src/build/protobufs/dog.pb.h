// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dog.proto

#ifndef PROTOBUF_INCLUDED_dog_2eproto
#define PROTOBUF_INCLUDED_dog_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_dog_2eproto 

namespace protobuf_dog_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_dog_2eproto
class Dog;
class DogDefaultTypeInternal;
extern DogDefaultTypeInternal _Dog_default_instance_;
namespace google {
namespace protobuf {
template<> ::Dog* Arena::CreateMaybeMessage<::Dog>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class Dog : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Dog) */ {
 public:
  Dog();
  virtual ~Dog();

  Dog(const Dog& from);

  inline Dog& operator=(const Dog& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Dog(Dog&& from) noexcept
    : Dog() {
    *this = ::std::move(from);
  }

  inline Dog& operator=(Dog&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Dog& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Dog* internal_default_instance() {
    return reinterpret_cast<const Dog*>(
               &_Dog_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Dog* other);
  friend void swap(Dog& a, Dog& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Dog* New() const final {
    return CreateMaybeMessage<Dog>(NULL);
  }

  Dog* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Dog>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Dog& from);
  void MergeFrom(const Dog& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Dog* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string breed = 3;
  void clear_breed();
  static const int kBreedFieldNumber = 3;
  const ::std::string& breed() const;
  void set_breed(const ::std::string& value);
  #if LANG_CXX11
  void set_breed(::std::string&& value);
  #endif
  void set_breed(const char* value);
  void set_breed(const char* value, size_t size);
  ::std::string* mutable_breed();
  ::std::string* release_breed();
  void set_allocated_breed(::std::string* breed);

  // @@protoc_insertion_point(class_scope:Dog)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr breed_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_dog_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Dog

// string name = 1;
inline void Dog::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Dog::name() const {
  // @@protoc_insertion_point(field_get:Dog.name)
  return name_.GetNoArena();
}
inline void Dog::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Dog.name)
}
#if LANG_CXX11
inline void Dog::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Dog.name)
}
#endif
inline void Dog::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Dog.name)
}
inline void Dog::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Dog.name)
}
inline ::std::string* Dog::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:Dog.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Dog::release_name() {
  // @@protoc_insertion_point(field_release:Dog.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Dog::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Dog.name)
}

// string breed = 3;
inline void Dog::clear_breed() {
  breed_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Dog::breed() const {
  // @@protoc_insertion_point(field_get:Dog.breed)
  return breed_.GetNoArena();
}
inline void Dog::set_breed(const ::std::string& value) {
  
  breed_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Dog.breed)
}
#if LANG_CXX11
inline void Dog::set_breed(::std::string&& value) {
  
  breed_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Dog.breed)
}
#endif
inline void Dog::set_breed(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  breed_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Dog.breed)
}
inline void Dog::set_breed(const char* value, size_t size) {
  
  breed_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Dog.breed)
}
inline ::std::string* Dog::mutable_breed() {
  
  // @@protoc_insertion_point(field_mutable:Dog.breed)
  return breed_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Dog::release_breed() {
  // @@protoc_insertion_point(field_release:Dog.breed)
  
  return breed_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Dog::set_allocated_breed(::std::string* breed) {
  if (breed != NULL) {
    
  } else {
    
  }
  breed_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), breed);
  // @@protoc_insertion_point(field_set_allocated:Dog.breed)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_dog_2eproto
