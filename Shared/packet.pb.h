// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packet.proto

#ifndef PROTOBUF_packet_2eproto__INCLUDED
#define PROTOBUF_packet_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace tutorial {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_packet_2eproto();
void protobuf_AssignDesc_packet_2eproto();
void protobuf_ShutdownFile_packet_2eproto();

class Packet;
class Packet_Packet_NO_1;

enum Packet_TEST_TYPE {
  Packet_TEST_TYPE_TT_NONE = 0,
  Packet_TEST_TYPE_TT_ONE = 1
};
bool Packet_TEST_TYPE_IsValid(int value);
const Packet_TEST_TYPE Packet_TEST_TYPE_TEST_TYPE_MIN = Packet_TEST_TYPE_TT_NONE;
const Packet_TEST_TYPE Packet_TEST_TYPE_TEST_TYPE_MAX = Packet_TEST_TYPE_TT_ONE;
const int Packet_TEST_TYPE_TEST_TYPE_ARRAYSIZE = Packet_TEST_TYPE_TEST_TYPE_MAX + 1;

const ::google::protobuf::EnumDescriptor* Packet_TEST_TYPE_descriptor();
inline const ::std::string& Packet_TEST_TYPE_Name(Packet_TEST_TYPE value) {
  return ::google::protobuf::internal::NameOfEnum(
    Packet_TEST_TYPE_descriptor(), value);
}
inline bool Packet_TEST_TYPE_Parse(
    const ::std::string& name, Packet_TEST_TYPE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Packet_TEST_TYPE>(
    Packet_TEST_TYPE_descriptor(), name, value);
}
// ===================================================================

class Packet_Packet_NO_1 : public ::google::protobuf::Message {
 public:
  Packet_Packet_NO_1();
  virtual ~Packet_Packet_NO_1();

  Packet_Packet_NO_1(const Packet_Packet_NO_1& from);

  inline Packet_Packet_NO_1& operator=(const Packet_Packet_NO_1& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Packet_Packet_NO_1& default_instance();

  void Swap(Packet_Packet_NO_1* other);

  // implements Message ----------------------------------------------

  Packet_Packet_NO_1* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Packet_Packet_NO_1& from);
  void MergeFrom(const Packet_Packet_NO_1& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string number = 1;
  inline bool has_number() const;
  inline void clear_number();
  static const int kNumberFieldNumber = 1;
  inline const ::std::string& number() const;
  inline void set_number(const ::std::string& value);
  inline void set_number(const char* value);
  inline void set_number(const char* value, size_t size);
  inline ::std::string* mutable_number();
  inline ::std::string* release_number();
  inline void set_allocated_number(::std::string* number);

  // optional .tutorial.Packet.TEST_TYPE type = 2 [default = TT_NONE];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::tutorial::Packet_TEST_TYPE type() const;
  inline void set_type(::tutorial::Packet_TEST_TYPE value);

  // @@protoc_insertion_point(class_scope:tutorial.Packet.Packet_NO_1)
 private:
  inline void set_has_number();
  inline void clear_has_number();
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* number_;
  int type_;
  friend void  protobuf_AddDesc_packet_2eproto();
  friend void protobuf_AssignDesc_packet_2eproto();
  friend void protobuf_ShutdownFile_packet_2eproto();

  void InitAsDefaultInstance();
  static Packet_Packet_NO_1* default_instance_;
};
// -------------------------------------------------------------------

class Packet : public ::google::protobuf::Message {
 public:
  Packet();
  virtual ~Packet();

  Packet(const Packet& from);

  inline Packet& operator=(const Packet& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Packet& default_instance();

  void Swap(Packet* other);

  // implements Message ----------------------------------------------

  Packet* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Packet& from);
  void MergeFrom(const Packet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Packet_Packet_NO_1 Packet_NO_1;

  typedef Packet_TEST_TYPE TEST_TYPE;
  static const TEST_TYPE TT_NONE = Packet_TEST_TYPE_TT_NONE;
  static const TEST_TYPE TT_ONE = Packet_TEST_TYPE_TT_ONE;
  static inline bool TEST_TYPE_IsValid(int value) {
    return Packet_TEST_TYPE_IsValid(value);
  }
  static const TEST_TYPE TEST_TYPE_MIN =
    Packet_TEST_TYPE_TEST_TYPE_MIN;
  static const TEST_TYPE TEST_TYPE_MAX =
    Packet_TEST_TYPE_TEST_TYPE_MAX;
  static const int TEST_TYPE_ARRAYSIZE =
    Packet_TEST_TYPE_TEST_TYPE_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  TEST_TYPE_descriptor() {
    return Packet_TEST_TYPE_descriptor();
  }
  static inline const ::std::string& TEST_TYPE_Name(TEST_TYPE value) {
    return Packet_TEST_TYPE_Name(value);
  }
  static inline bool TEST_TYPE_Parse(const ::std::string& name,
      TEST_TYPE* value) {
    return Packet_TEST_TYPE_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required int32 id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional string email = 3;
  inline bool has_email() const;
  inline void clear_email();
  static const int kEmailFieldNumber = 3;
  inline const ::std::string& email() const;
  inline void set_email(const ::std::string& value);
  inline void set_email(const char* value);
  inline void set_email(const char* value, size_t size);
  inline ::std::string* mutable_email();
  inline ::std::string* release_email();
  inline void set_allocated_email(::std::string* email);

  // repeated .tutorial.Packet.Packet_NO_1 one = 4;
  inline int one_size() const;
  inline void clear_one();
  static const int kOneFieldNumber = 4;
  inline const ::tutorial::Packet_Packet_NO_1& one(int index) const;
  inline ::tutorial::Packet_Packet_NO_1* mutable_one(int index);
  inline ::tutorial::Packet_Packet_NO_1* add_one();
  inline const ::google::protobuf::RepeatedPtrField< ::tutorial::Packet_Packet_NO_1 >&
      one() const;
  inline ::google::protobuf::RepeatedPtrField< ::tutorial::Packet_Packet_NO_1 >*
      mutable_one();

  // @@protoc_insertion_point(class_scope:tutorial.Packet)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_email();
  inline void clear_has_email();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::std::string* email_;
  ::google::protobuf::RepeatedPtrField< ::tutorial::Packet_Packet_NO_1 > one_;
  ::google::protobuf::int32 id_;
  friend void  protobuf_AddDesc_packet_2eproto();
  friend void protobuf_AssignDesc_packet_2eproto();
  friend void protobuf_ShutdownFile_packet_2eproto();

  void InitAsDefaultInstance();
  static Packet* default_instance_;
};
// ===================================================================


// ===================================================================

// Packet_Packet_NO_1

// required string number = 1;
inline bool Packet_Packet_NO_1::has_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Packet_Packet_NO_1::set_has_number() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Packet_Packet_NO_1::clear_has_number() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Packet_Packet_NO_1::clear_number() {
  if (number_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    number_->clear();
  }
  clear_has_number();
}
inline const ::std::string& Packet_Packet_NO_1::number() const {
  // @@protoc_insertion_point(field_get:tutorial.Packet.Packet_NO_1.number)
  return *number_;
}
inline void Packet_Packet_NO_1::set_number(const ::std::string& value) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    number_ = new ::std::string;
  }
  number_->assign(value);
  // @@protoc_insertion_point(field_set:tutorial.Packet.Packet_NO_1.number)
}
inline void Packet_Packet_NO_1::set_number(const char* value) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    number_ = new ::std::string;
  }
  number_->assign(value);
  // @@protoc_insertion_point(field_set_char:tutorial.Packet.Packet_NO_1.number)
}
inline void Packet_Packet_NO_1::set_number(const char* value, size_t size) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    number_ = new ::std::string;
  }
  number_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tutorial.Packet.Packet_NO_1.number)
}
inline ::std::string* Packet_Packet_NO_1::mutable_number() {
  set_has_number();
  if (number_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    number_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:tutorial.Packet.Packet_NO_1.number)
  return number_;
}
inline ::std::string* Packet_Packet_NO_1::release_number() {
  clear_has_number();
  if (number_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = number_;
    number_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Packet_Packet_NO_1::set_allocated_number(::std::string* number) {
  if (number_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete number_;
  }
  if (number) {
    set_has_number();
    number_ = number;
  } else {
    clear_has_number();
    number_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:tutorial.Packet.Packet_NO_1.number)
}

// optional .tutorial.Packet.TEST_TYPE type = 2 [default = TT_NONE];
inline bool Packet_Packet_NO_1::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Packet_Packet_NO_1::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Packet_Packet_NO_1::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Packet_Packet_NO_1::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::tutorial::Packet_TEST_TYPE Packet_Packet_NO_1::type() const {
  // @@protoc_insertion_point(field_get:tutorial.Packet.Packet_NO_1.type)
  return static_cast< ::tutorial::Packet_TEST_TYPE >(type_);
}
inline void Packet_Packet_NO_1::set_type(::tutorial::Packet_TEST_TYPE value) {
  assert(::tutorial::Packet_TEST_TYPE_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:tutorial.Packet.Packet_NO_1.type)
}

// -------------------------------------------------------------------

// Packet

// required string name = 1;
inline bool Packet::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Packet::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Packet::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Packet::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Packet::name() const {
  // @@protoc_insertion_point(field_get:tutorial.Packet.name)
  return *name_;
}
inline void Packet::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:tutorial.Packet.name)
}
inline void Packet::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:tutorial.Packet.name)
}
inline void Packet::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tutorial.Packet.name)
}
inline ::std::string* Packet::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:tutorial.Packet.name)
  return name_;
}
inline ::std::string* Packet::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Packet::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:tutorial.Packet.name)
}

// required int32 id = 2;
inline bool Packet::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Packet::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Packet::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Packet::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Packet::id() const {
  // @@protoc_insertion_point(field_get:tutorial.Packet.id)
  return id_;
}
inline void Packet::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:tutorial.Packet.id)
}

// optional string email = 3;
inline bool Packet::has_email() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Packet::set_has_email() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Packet::clear_has_email() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Packet::clear_email() {
  if (email_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_->clear();
  }
  clear_has_email();
}
inline const ::std::string& Packet::email() const {
  // @@protoc_insertion_point(field_get:tutorial.Packet.email)
  return *email_;
}
inline void Packet::set_email(const ::std::string& value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  email_->assign(value);
  // @@protoc_insertion_point(field_set:tutorial.Packet.email)
}
inline void Packet::set_email(const char* value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  email_->assign(value);
  // @@protoc_insertion_point(field_set_char:tutorial.Packet.email)
}
inline void Packet::set_email(const char* value, size_t size) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  email_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tutorial.Packet.email)
}
inline ::std::string* Packet::mutable_email() {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:tutorial.Packet.email)
  return email_;
}
inline ::std::string* Packet::release_email() {
  clear_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = email_;
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Packet::set_allocated_email(::std::string* email) {
  if (email_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete email_;
  }
  if (email) {
    set_has_email();
    email_ = email;
  } else {
    clear_has_email();
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:tutorial.Packet.email)
}

// repeated .tutorial.Packet.Packet_NO_1 one = 4;
inline int Packet::one_size() const {
  return one_.size();
}
inline void Packet::clear_one() {
  one_.Clear();
}
inline const ::tutorial::Packet_Packet_NO_1& Packet::one(int index) const {
  // @@protoc_insertion_point(field_get:tutorial.Packet.one)
  return one_.Get(index);
}
inline ::tutorial::Packet_Packet_NO_1* Packet::mutable_one(int index) {
  // @@protoc_insertion_point(field_mutable:tutorial.Packet.one)
  return one_.Mutable(index);
}
inline ::tutorial::Packet_Packet_NO_1* Packet::add_one() {
  // @@protoc_insertion_point(field_add:tutorial.Packet.one)
  return one_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tutorial::Packet_Packet_NO_1 >&
Packet::one() const {
  // @@protoc_insertion_point(field_list:tutorial.Packet.one)
  return one_;
}
inline ::google::protobuf::RepeatedPtrField< ::tutorial::Packet_Packet_NO_1 >*
Packet::mutable_one() {
  // @@protoc_insertion_point(field_mutable_list:tutorial.Packet.one)
  return &one_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::tutorial::Packet_TEST_TYPE> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tutorial::Packet_TEST_TYPE>() {
  return ::tutorial::Packet_TEST_TYPE_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_packet_2eproto__INCLUDED
