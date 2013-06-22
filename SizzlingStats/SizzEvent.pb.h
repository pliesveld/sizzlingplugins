// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SizzEvent.proto

#ifndef PROTOBUF_SizzEvent_2eproto__INCLUDED
#define PROTOBUF_SizzEvent_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace SizzEvent {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_SizzEvent_2eproto();
void protobuf_AssignDesc_SizzEvent_2eproto();
void protobuf_ShutdownFile_SizzEvent_2eproto();

class SizzEvent;
class SizzEvent_EventData;

enum SizzEvent_EventData_DATA_TYPE {
  SizzEvent_EventData_DATA_TYPE_valueString = 1,
  SizzEvent_EventData_DATA_TYPE_valueFloat = 2,
  SizzEvent_EventData_DATA_TYPE_valueLong = 3,
  SizzEvent_EventData_DATA_TYPE_valueShort = 4,
  SizzEvent_EventData_DATA_TYPE_valueByte = 5,
  SizzEvent_EventData_DATA_TYPE_valueBool = 6
};
bool SizzEvent_EventData_DATA_TYPE_IsValid(int value);
const SizzEvent_EventData_DATA_TYPE SizzEvent_EventData_DATA_TYPE_DATA_TYPE_MIN = SizzEvent_EventData_DATA_TYPE_valueString;
const SizzEvent_EventData_DATA_TYPE SizzEvent_EventData_DATA_TYPE_DATA_TYPE_MAX = SizzEvent_EventData_DATA_TYPE_valueBool;
const int SizzEvent_EventData_DATA_TYPE_DATA_TYPE_ARRAYSIZE = SizzEvent_EventData_DATA_TYPE_DATA_TYPE_MAX + 1;

// ===================================================================

class SizzEvent_EventData : public ::google::protobuf::MessageLite {
 public:
  SizzEvent_EventData();
  virtual ~SizzEvent_EventData();

  SizzEvent_EventData(const SizzEvent_EventData& from);

  inline SizzEvent_EventData& operator=(const SizzEvent_EventData& from) {
    CopyFrom(from);
    return *this;
  }

  static const SizzEvent_EventData& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const SizzEvent_EventData* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(SizzEvent_EventData* other);

  // implements Message ----------------------------------------------

  SizzEvent_EventData* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const SizzEvent_EventData& from);
  void MergeFrom(const SizzEvent_EventData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef SizzEvent_EventData_DATA_TYPE DATA_TYPE;
  static const DATA_TYPE valueString = SizzEvent_EventData_DATA_TYPE_valueString;
  static const DATA_TYPE valueFloat = SizzEvent_EventData_DATA_TYPE_valueFloat;
  static const DATA_TYPE valueLong = SizzEvent_EventData_DATA_TYPE_valueLong;
  static const DATA_TYPE valueShort = SizzEvent_EventData_DATA_TYPE_valueShort;
  static const DATA_TYPE valueByte = SizzEvent_EventData_DATA_TYPE_valueByte;
  static const DATA_TYPE valueBool = SizzEvent_EventData_DATA_TYPE_valueBool;
  static inline bool DATA_TYPE_IsValid(int value) {
    return SizzEvent_EventData_DATA_TYPE_IsValid(value);
  }
  static const DATA_TYPE DATA_TYPE_MIN =
    SizzEvent_EventData_DATA_TYPE_DATA_TYPE_MIN;
  static const DATA_TYPE DATA_TYPE_MAX =
    SizzEvent_EventData_DATA_TYPE_DATA_TYPE_MAX;
  static const int DATA_TYPE_ARRAYSIZE =
    SizzEvent_EventData_DATA_TYPE_DATA_TYPE_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional string key_name = 1;
  inline bool has_key_name() const;
  inline void clear_key_name();
  static const int kKeyNameFieldNumber = 1;
  inline const ::std::string& key_name() const;
  inline void set_key_name(const ::std::string& value);
  inline void set_key_name(const char* value);
  inline void set_key_name(const char* value, size_t size);
  inline ::std::string* mutable_key_name();
  inline ::std::string* release_key_name();
  inline void set_allocated_key_name(::std::string* key_name);

  // optional .SizzEvent.SizzEvent.EventData.DATA_TYPE value_type = 2;
  inline bool has_value_type() const;
  inline void clear_value_type();
  static const int kValueTypeFieldNumber = 2;
  inline ::SizzEvent::SizzEvent_EventData_DATA_TYPE value_type() const;
  inline void set_value_type(::SizzEvent::SizzEvent_EventData_DATA_TYPE value);

  // optional string value_string = 3;
  inline bool has_value_string() const;
  inline void clear_value_string();
  static const int kValueStringFieldNumber = 3;
  inline const ::std::string& value_string() const;
  inline void set_value_string(const ::std::string& value);
  inline void set_value_string(const char* value);
  inline void set_value_string(const char* value, size_t size);
  inline ::std::string* mutable_value_string();
  inline ::std::string* release_value_string();
  inline void set_allocated_value_string(::std::string* value_string);

  // optional float value_float = 4;
  inline bool has_value_float() const;
  inline void clear_value_float();
  static const int kValueFloatFieldNumber = 4;
  inline float value_float() const;
  inline void set_value_float(float value);

  // optional int32 value_long = 5;
  inline bool has_value_long() const;
  inline void clear_value_long();
  static const int kValueLongFieldNumber = 5;
  inline ::google::protobuf::int32 value_long() const;
  inline void set_value_long(::google::protobuf::int32 value);

  // optional int32 value_short = 6;
  inline bool has_value_short() const;
  inline void clear_value_short();
  static const int kValueShortFieldNumber = 6;
  inline ::google::protobuf::int32 value_short() const;
  inline void set_value_short(::google::protobuf::int32 value);

  // optional int32 value_byte = 7;
  inline bool has_value_byte() const;
  inline void clear_value_byte();
  static const int kValueByteFieldNumber = 7;
  inline ::google::protobuf::int32 value_byte() const;
  inline void set_value_byte(::google::protobuf::int32 value);

  // optional bool value_bool = 8;
  inline bool has_value_bool() const;
  inline void clear_value_bool();
  static const int kValueBoolFieldNumber = 8;
  inline bool value_bool() const;
  inline void set_value_bool(bool value);

  // @@protoc_insertion_point(class_scope:SizzEvent.SizzEvent.EventData)
 private:
  inline void set_has_key_name();
  inline void clear_has_key_name();
  inline void set_has_value_type();
  inline void clear_has_value_type();
  inline void set_has_value_string();
  inline void clear_has_value_string();
  inline void set_has_value_float();
  inline void clear_has_value_float();
  inline void set_has_value_long();
  inline void clear_has_value_long();
  inline void set_has_value_short();
  inline void clear_has_value_short();
  inline void set_has_value_byte();
  inline void clear_has_value_byte();
  inline void set_has_value_bool();
  inline void clear_has_value_bool();

  ::std::string* key_name_;
  ::std::string* value_string_;
  int value_type_;
  float value_float_;
  ::google::protobuf::int32 value_long_;
  ::google::protobuf::int32 value_short_;
  ::google::protobuf::int32 value_byte_;
  bool value_bool_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_SizzEvent_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_SizzEvent_2eproto();
  #endif
  friend void protobuf_AssignDesc_SizzEvent_2eproto();
  friend void protobuf_ShutdownFile_SizzEvent_2eproto();

  void InitAsDefaultInstance();
  static SizzEvent_EventData* default_instance_;
};
// -------------------------------------------------------------------

class SizzEvent : public ::google::protobuf::MessageLite {
 public:
  SizzEvent();
  virtual ~SizzEvent();

  SizzEvent(const SizzEvent& from);

  inline SizzEvent& operator=(const SizzEvent& from) {
    CopyFrom(from);
    return *this;
  }

  static const SizzEvent& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const SizzEvent* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(SizzEvent* other);

  // implements Message ----------------------------------------------

  SizzEvent* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const SizzEvent& from);
  void MergeFrom(const SizzEvent& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef SizzEvent_EventData EventData;

  // accessors -------------------------------------------------------

  // optional uint32 event_timestamp = 1;
  inline bool has_event_timestamp() const;
  inline void clear_event_timestamp();
  static const int kEventTimestampFieldNumber = 1;
  inline ::google::protobuf::uint32 event_timestamp() const;
  inline void set_event_timestamp(::google::protobuf::uint32 value);

  // optional string event_name = 2;
  inline bool has_event_name() const;
  inline void clear_event_name();
  static const int kEventNameFieldNumber = 2;
  inline const ::std::string& event_name() const;
  inline void set_event_name(const ::std::string& value);
  inline void set_event_name(const char* value);
  inline void set_event_name(const char* value, size_t size);
  inline ::std::string* mutable_event_name();
  inline ::std::string* release_event_name();
  inline void set_allocated_event_name(::std::string* event_name);

  // repeated .SizzEvent.SizzEvent.EventData event_data = 3;
  inline int event_data_size() const;
  inline void clear_event_data();
  static const int kEventDataFieldNumber = 3;
  inline const ::SizzEvent::SizzEvent_EventData& event_data(int index) const;
  inline ::SizzEvent::SizzEvent_EventData* mutable_event_data(int index);
  inline ::SizzEvent::SizzEvent_EventData* add_event_data();
  inline const ::google::protobuf::RepeatedPtrField< ::SizzEvent::SizzEvent_EventData >&
      event_data() const;
  inline ::google::protobuf::RepeatedPtrField< ::SizzEvent::SizzEvent_EventData >*
      mutable_event_data();

  // @@protoc_insertion_point(class_scope:SizzEvent.SizzEvent)
 private:
  inline void set_has_event_timestamp();
  inline void clear_has_event_timestamp();
  inline void set_has_event_name();
  inline void clear_has_event_name();

  ::std::string* event_name_;
  ::google::protobuf::RepeatedPtrField< ::SizzEvent::SizzEvent_EventData > event_data_;
  ::google::protobuf::uint32 event_timestamp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_SizzEvent_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_SizzEvent_2eproto();
  #endif
  friend void protobuf_AssignDesc_SizzEvent_2eproto();
  friend void protobuf_ShutdownFile_SizzEvent_2eproto();

  void InitAsDefaultInstance();
  static SizzEvent* default_instance_;
};
// ===================================================================


// ===================================================================

// SizzEvent_EventData

// optional string key_name = 1;
inline bool SizzEvent_EventData::has_key_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SizzEvent_EventData::set_has_key_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SizzEvent_EventData::clear_has_key_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SizzEvent_EventData::clear_key_name() {
  if (key_name_ != &::google::protobuf::internal::kEmptyString) {
    key_name_->clear();
  }
  clear_has_key_name();
}
inline const ::std::string& SizzEvent_EventData::key_name() const {
  return *key_name_;
}
inline void SizzEvent_EventData::set_key_name(const ::std::string& value) {
  set_has_key_name();
  if (key_name_ == &::google::protobuf::internal::kEmptyString) {
    key_name_ = new ::std::string;
  }
  key_name_->assign(value);
}
inline void SizzEvent_EventData::set_key_name(const char* value) {
  set_has_key_name();
  if (key_name_ == &::google::protobuf::internal::kEmptyString) {
    key_name_ = new ::std::string;
  }
  key_name_->assign(value);
}
inline void SizzEvent_EventData::set_key_name(const char* value, size_t size) {
  set_has_key_name();
  if (key_name_ == &::google::protobuf::internal::kEmptyString) {
    key_name_ = new ::std::string;
  }
  key_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SizzEvent_EventData::mutable_key_name() {
  set_has_key_name();
  if (key_name_ == &::google::protobuf::internal::kEmptyString) {
    key_name_ = new ::std::string;
  }
  return key_name_;
}
inline ::std::string* SizzEvent_EventData::release_key_name() {
  clear_has_key_name();
  if (key_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = key_name_;
    key_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SizzEvent_EventData::set_allocated_key_name(::std::string* key_name) {
  if (key_name_ != &::google::protobuf::internal::kEmptyString) {
    delete key_name_;
  }
  if (key_name) {
    set_has_key_name();
    key_name_ = key_name;
  } else {
    clear_has_key_name();
    key_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional .SizzEvent.SizzEvent.EventData.DATA_TYPE value_type = 2;
inline bool SizzEvent_EventData::has_value_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SizzEvent_EventData::set_has_value_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SizzEvent_EventData::clear_has_value_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SizzEvent_EventData::clear_value_type() {
  value_type_ = 1;
  clear_has_value_type();
}
inline ::SizzEvent::SizzEvent_EventData_DATA_TYPE SizzEvent_EventData::value_type() const {
  return static_cast< ::SizzEvent::SizzEvent_EventData_DATA_TYPE >(value_type_);
}
inline void SizzEvent_EventData::set_value_type(::SizzEvent::SizzEvent_EventData_DATA_TYPE value) {
  assert(::SizzEvent::SizzEvent_EventData_DATA_TYPE_IsValid(value));
  set_has_value_type();
  value_type_ = value;
}

// optional string value_string = 3;
inline bool SizzEvent_EventData::has_value_string() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SizzEvent_EventData::set_has_value_string() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SizzEvent_EventData::clear_has_value_string() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SizzEvent_EventData::clear_value_string() {
  if (value_string_ != &::google::protobuf::internal::kEmptyString) {
    value_string_->clear();
  }
  clear_has_value_string();
}
inline const ::std::string& SizzEvent_EventData::value_string() const {
  return *value_string_;
}
inline void SizzEvent_EventData::set_value_string(const ::std::string& value) {
  set_has_value_string();
  if (value_string_ == &::google::protobuf::internal::kEmptyString) {
    value_string_ = new ::std::string;
  }
  value_string_->assign(value);
}
inline void SizzEvent_EventData::set_value_string(const char* value) {
  set_has_value_string();
  if (value_string_ == &::google::protobuf::internal::kEmptyString) {
    value_string_ = new ::std::string;
  }
  value_string_->assign(value);
}
inline void SizzEvent_EventData::set_value_string(const char* value, size_t size) {
  set_has_value_string();
  if (value_string_ == &::google::protobuf::internal::kEmptyString) {
    value_string_ = new ::std::string;
  }
  value_string_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SizzEvent_EventData::mutable_value_string() {
  set_has_value_string();
  if (value_string_ == &::google::protobuf::internal::kEmptyString) {
    value_string_ = new ::std::string;
  }
  return value_string_;
}
inline ::std::string* SizzEvent_EventData::release_value_string() {
  clear_has_value_string();
  if (value_string_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = value_string_;
    value_string_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SizzEvent_EventData::set_allocated_value_string(::std::string* value_string) {
  if (value_string_ != &::google::protobuf::internal::kEmptyString) {
    delete value_string_;
  }
  if (value_string) {
    set_has_value_string();
    value_string_ = value_string;
  } else {
    clear_has_value_string();
    value_string_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional float value_float = 4;
inline bool SizzEvent_EventData::has_value_float() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SizzEvent_EventData::set_has_value_float() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SizzEvent_EventData::clear_has_value_float() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SizzEvent_EventData::clear_value_float() {
  value_float_ = 0;
  clear_has_value_float();
}
inline float SizzEvent_EventData::value_float() const {
  return value_float_;
}
inline void SizzEvent_EventData::set_value_float(float value) {
  set_has_value_float();
  value_float_ = value;
}

// optional int32 value_long = 5;
inline bool SizzEvent_EventData::has_value_long() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SizzEvent_EventData::set_has_value_long() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SizzEvent_EventData::clear_has_value_long() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SizzEvent_EventData::clear_value_long() {
  value_long_ = 0;
  clear_has_value_long();
}
inline ::google::protobuf::int32 SizzEvent_EventData::value_long() const {
  return value_long_;
}
inline void SizzEvent_EventData::set_value_long(::google::protobuf::int32 value) {
  set_has_value_long();
  value_long_ = value;
}

// optional int32 value_short = 6;
inline bool SizzEvent_EventData::has_value_short() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SizzEvent_EventData::set_has_value_short() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SizzEvent_EventData::clear_has_value_short() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SizzEvent_EventData::clear_value_short() {
  value_short_ = 0;
  clear_has_value_short();
}
inline ::google::protobuf::int32 SizzEvent_EventData::value_short() const {
  return value_short_;
}
inline void SizzEvent_EventData::set_value_short(::google::protobuf::int32 value) {
  set_has_value_short();
  value_short_ = value;
}

// optional int32 value_byte = 7;
inline bool SizzEvent_EventData::has_value_byte() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SizzEvent_EventData::set_has_value_byte() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SizzEvent_EventData::clear_has_value_byte() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SizzEvent_EventData::clear_value_byte() {
  value_byte_ = 0;
  clear_has_value_byte();
}
inline ::google::protobuf::int32 SizzEvent_EventData::value_byte() const {
  return value_byte_;
}
inline void SizzEvent_EventData::set_value_byte(::google::protobuf::int32 value) {
  set_has_value_byte();
  value_byte_ = value;
}

// optional bool value_bool = 8;
inline bool SizzEvent_EventData::has_value_bool() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SizzEvent_EventData::set_has_value_bool() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SizzEvent_EventData::clear_has_value_bool() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SizzEvent_EventData::clear_value_bool() {
  value_bool_ = false;
  clear_has_value_bool();
}
inline bool SizzEvent_EventData::value_bool() const {
  return value_bool_;
}
inline void SizzEvent_EventData::set_value_bool(bool value) {
  set_has_value_bool();
  value_bool_ = value;
}

// -------------------------------------------------------------------

// SizzEvent

// optional uint32 event_timestamp = 1;
inline bool SizzEvent::has_event_timestamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SizzEvent::set_has_event_timestamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SizzEvent::clear_has_event_timestamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SizzEvent::clear_event_timestamp() {
  event_timestamp_ = 0u;
  clear_has_event_timestamp();
}
inline ::google::protobuf::uint32 SizzEvent::event_timestamp() const {
  return event_timestamp_;
}
inline void SizzEvent::set_event_timestamp(::google::protobuf::uint32 value) {
  set_has_event_timestamp();
  event_timestamp_ = value;
}

// optional string event_name = 2;
inline bool SizzEvent::has_event_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SizzEvent::set_has_event_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SizzEvent::clear_has_event_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SizzEvent::clear_event_name() {
  if (event_name_ != &::google::protobuf::internal::kEmptyString) {
    event_name_->clear();
  }
  clear_has_event_name();
}
inline const ::std::string& SizzEvent::event_name() const {
  return *event_name_;
}
inline void SizzEvent::set_event_name(const ::std::string& value) {
  set_has_event_name();
  if (event_name_ == &::google::protobuf::internal::kEmptyString) {
    event_name_ = new ::std::string;
  }
  event_name_->assign(value);
}
inline void SizzEvent::set_event_name(const char* value) {
  set_has_event_name();
  if (event_name_ == &::google::protobuf::internal::kEmptyString) {
    event_name_ = new ::std::string;
  }
  event_name_->assign(value);
}
inline void SizzEvent::set_event_name(const char* value, size_t size) {
  set_has_event_name();
  if (event_name_ == &::google::protobuf::internal::kEmptyString) {
    event_name_ = new ::std::string;
  }
  event_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SizzEvent::mutable_event_name() {
  set_has_event_name();
  if (event_name_ == &::google::protobuf::internal::kEmptyString) {
    event_name_ = new ::std::string;
  }
  return event_name_;
}
inline ::std::string* SizzEvent::release_event_name() {
  clear_has_event_name();
  if (event_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = event_name_;
    event_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SizzEvent::set_allocated_event_name(::std::string* event_name) {
  if (event_name_ != &::google::protobuf::internal::kEmptyString) {
    delete event_name_;
  }
  if (event_name) {
    set_has_event_name();
    event_name_ = event_name;
  } else {
    clear_has_event_name();
    event_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .SizzEvent.SizzEvent.EventData event_data = 3;
inline int SizzEvent::event_data_size() const {
  return event_data_.size();
}
inline void SizzEvent::clear_event_data() {
  event_data_.Clear();
}
inline const ::SizzEvent::SizzEvent_EventData& SizzEvent::event_data(int index) const {
  return event_data_.Get(index);
}
inline ::SizzEvent::SizzEvent_EventData* SizzEvent::mutable_event_data(int index) {
  return event_data_.Mutable(index);
}
inline ::SizzEvent::SizzEvent_EventData* SizzEvent::add_event_data() {
  return event_data_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::SizzEvent::SizzEvent_EventData >&
SizzEvent::event_data() const {
  return event_data_;
}
inline ::google::protobuf::RepeatedPtrField< ::SizzEvent::SizzEvent_EventData >*
SizzEvent::mutable_event_data() {
  return &event_data_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace SizzEvent

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SizzEvent_2eproto__INCLUDED
