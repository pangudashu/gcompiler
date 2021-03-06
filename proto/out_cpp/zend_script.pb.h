// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zend_script.proto

#ifndef PROTOBUF_zend_5fscript_2eproto__INCLUDED
#define PROTOBUF_zend_5fscript_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "zend_op_array.pb.h"
#include "zend_types.pb.h"
// @@protoc_insertion_point(includes)
namespace gphp {
class ZendScript;
class ZendScriptDefaultTypeInternal;
extern ZendScriptDefaultTypeInternal _ZendScript_default_instance_;
}  // namespace gphp

namespace gphp {

namespace protobuf_zend_5fscript_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_zend_5fscript_2eproto

// ===================================================================

class ZendScript : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gphp.ZendScript) */ {
 public:
  ZendScript();
  virtual ~ZendScript();

  ZendScript(const ZendScript& from);

  inline ZendScript& operator=(const ZendScript& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ZendScript(ZendScript&& from) noexcept
    : ZendScript() {
    *this = ::std::move(from);
  }

  inline ZendScript& operator=(ZendScript&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ZendScript& default_instance();

  static inline const ZendScript* internal_default_instance() {
    return reinterpret_cast<const ZendScript*>(
               &_ZendScript_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ZendScript* other);
  friend void swap(ZendScript& a, ZendScript& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ZendScript* New() const PROTOBUF_FINAL { return New(NULL); }

  ZendScript* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ZendScript& from);
  void MergeFrom(const ZendScript& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ZendScript* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string script_name = 1;
  bool has_script_name() const;
  void clear_script_name();
  static const int kScriptNameFieldNumber = 1;
  const ::std::string& script_name() const;
  void set_script_name(const ::std::string& value);
  #if LANG_CXX11
  void set_script_name(::std::string&& value);
  #endif
  void set_script_name(const char* value);
  void set_script_name(const char* value, size_t size);
  ::std::string* mutable_script_name();
  ::std::string* release_script_name();
  void set_allocated_script_name(::std::string* script_name);

  // optional string source = 6;
  bool has_source() const;
  void clear_source();
  static const int kSourceFieldNumber = 6;
  const ::std::string& source() const;
  void set_source(const ::std::string& value);
  #if LANG_CXX11
  void set_source(::std::string&& value);
  #endif
  void set_source(const char* value);
  void set_source(const char* value, size_t size);
  ::std::string* mutable_source();
  ::std::string* release_source();
  void set_allocated_source(::std::string* source);

  // optional .gphp.ZendOpArray main_op_array = 2;
  bool has_main_op_array() const;
  void clear_main_op_array();
  static const int kMainOpArrayFieldNumber = 2;
  const ::gphp::ZendOpArray& main_op_array() const;
  ::gphp::ZendOpArray* mutable_main_op_array();
  ::gphp::ZendOpArray* release_main_op_array();
  void set_allocated_main_op_array(::gphp::ZendOpArray* main_op_array);

  // optional .gphp.HashTable function_table = 3;
  bool has_function_table() const;
  void clear_function_table();
  static const int kFunctionTableFieldNumber = 3;
  const ::gphp::HashTable& function_table() const;
  ::gphp::HashTable* mutable_function_table();
  ::gphp::HashTable* release_function_table();
  void set_allocated_function_table(::gphp::HashTable* function_table);

  // optional .gphp.HashTable class_table = 4;
  bool has_class_table() const;
  void clear_class_table();
  static const int kClassTableFieldNumber = 4;
  const ::gphp::HashTable& class_table() const;
  ::gphp::HashTable* mutable_class_table();
  ::gphp::HashTable* release_class_table();
  void set_allocated_class_table(::gphp::HashTable* class_table);

  // optional .gphp.HashTable constant_table = 5;
  bool has_constant_table() const;
  void clear_constant_table();
  static const int kConstantTableFieldNumber = 5;
  const ::gphp::HashTable& constant_table() const;
  ::gphp::HashTable* mutable_constant_table();
  ::gphp::HashTable* release_constant_table();
  void set_allocated_constant_table(::gphp::HashTable* constant_table);

  // @@protoc_insertion_point(class_scope:gphp.ZendScript)
 private:
  void set_has_script_name();
  void clear_has_script_name();
  void set_has_main_op_array();
  void clear_has_main_op_array();
  void set_has_function_table();
  void clear_has_function_table();
  void set_has_class_table();
  void clear_has_class_table();
  void set_has_constant_table();
  void clear_has_constant_table();
  void set_has_source();
  void clear_has_source();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr script_name_;
  ::google::protobuf::internal::ArenaStringPtr source_;
  ::gphp::ZendOpArray* main_op_array_;
  ::gphp::HashTable* function_table_;
  ::gphp::HashTable* class_table_;
  ::gphp::HashTable* constant_table_;
  friend struct protobuf_zend_5fscript_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ZendScript

// required string script_name = 1;
inline bool ZendScript::has_script_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ZendScript::set_has_script_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ZendScript::clear_has_script_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ZendScript::clear_script_name() {
  script_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_script_name();
}
inline const ::std::string& ZendScript::script_name() const {
  // @@protoc_insertion_point(field_get:gphp.ZendScript.script_name)
  return script_name_.GetNoArena();
}
inline void ZendScript::set_script_name(const ::std::string& value) {
  set_has_script_name();
  script_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gphp.ZendScript.script_name)
}
#if LANG_CXX11
inline void ZendScript::set_script_name(::std::string&& value) {
  set_has_script_name();
  script_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gphp.ZendScript.script_name)
}
#endif
inline void ZendScript::set_script_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_script_name();
  script_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gphp.ZendScript.script_name)
}
inline void ZendScript::set_script_name(const char* value, size_t size) {
  set_has_script_name();
  script_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gphp.ZendScript.script_name)
}
inline ::std::string* ZendScript::mutable_script_name() {
  set_has_script_name();
  // @@protoc_insertion_point(field_mutable:gphp.ZendScript.script_name)
  return script_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ZendScript::release_script_name() {
  // @@protoc_insertion_point(field_release:gphp.ZendScript.script_name)
  clear_has_script_name();
  return script_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ZendScript::set_allocated_script_name(::std::string* script_name) {
  if (script_name != NULL) {
    set_has_script_name();
  } else {
    clear_has_script_name();
  }
  script_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), script_name);
  // @@protoc_insertion_point(field_set_allocated:gphp.ZendScript.script_name)
}

// optional .gphp.ZendOpArray main_op_array = 2;
inline bool ZendScript::has_main_op_array() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ZendScript::set_has_main_op_array() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ZendScript::clear_has_main_op_array() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ZendScript::clear_main_op_array() {
  if (main_op_array_ != NULL) main_op_array_->::gphp::ZendOpArray::Clear();
  clear_has_main_op_array();
}
inline const ::gphp::ZendOpArray& ZendScript::main_op_array() const {
  const ::gphp::ZendOpArray* p = main_op_array_;
  // @@protoc_insertion_point(field_get:gphp.ZendScript.main_op_array)
  return p != NULL ? *p : *reinterpret_cast<const ::gphp::ZendOpArray*>(
      &::gphp::_ZendOpArray_default_instance_);
}
inline ::gphp::ZendOpArray* ZendScript::mutable_main_op_array() {
  set_has_main_op_array();
  if (main_op_array_ == NULL) {
    main_op_array_ = new ::gphp::ZendOpArray;
  }
  // @@protoc_insertion_point(field_mutable:gphp.ZendScript.main_op_array)
  return main_op_array_;
}
inline ::gphp::ZendOpArray* ZendScript::release_main_op_array() {
  // @@protoc_insertion_point(field_release:gphp.ZendScript.main_op_array)
  clear_has_main_op_array();
  ::gphp::ZendOpArray* temp = main_op_array_;
  main_op_array_ = NULL;
  return temp;
}
inline void ZendScript::set_allocated_main_op_array(::gphp::ZendOpArray* main_op_array) {
  delete main_op_array_;
  main_op_array_ = main_op_array;
  if (main_op_array) {
    set_has_main_op_array();
  } else {
    clear_has_main_op_array();
  }
  // @@protoc_insertion_point(field_set_allocated:gphp.ZendScript.main_op_array)
}

// optional .gphp.HashTable function_table = 3;
inline bool ZendScript::has_function_table() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ZendScript::set_has_function_table() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ZendScript::clear_has_function_table() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ZendScript::clear_function_table() {
  if (function_table_ != NULL) function_table_->::gphp::HashTable::Clear();
  clear_has_function_table();
}
inline const ::gphp::HashTable& ZendScript::function_table() const {
  const ::gphp::HashTable* p = function_table_;
  // @@protoc_insertion_point(field_get:gphp.ZendScript.function_table)
  return p != NULL ? *p : *reinterpret_cast<const ::gphp::HashTable*>(
      &::gphp::_HashTable_default_instance_);
}
inline ::gphp::HashTable* ZendScript::mutable_function_table() {
  set_has_function_table();
  if (function_table_ == NULL) {
    function_table_ = new ::gphp::HashTable;
  }
  // @@protoc_insertion_point(field_mutable:gphp.ZendScript.function_table)
  return function_table_;
}
inline ::gphp::HashTable* ZendScript::release_function_table() {
  // @@protoc_insertion_point(field_release:gphp.ZendScript.function_table)
  clear_has_function_table();
  ::gphp::HashTable* temp = function_table_;
  function_table_ = NULL;
  return temp;
}
inline void ZendScript::set_allocated_function_table(::gphp::HashTable* function_table) {
  delete function_table_;
  function_table_ = function_table;
  if (function_table) {
    set_has_function_table();
  } else {
    clear_has_function_table();
  }
  // @@protoc_insertion_point(field_set_allocated:gphp.ZendScript.function_table)
}

// optional .gphp.HashTable class_table = 4;
inline bool ZendScript::has_class_table() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ZendScript::set_has_class_table() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ZendScript::clear_has_class_table() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ZendScript::clear_class_table() {
  if (class_table_ != NULL) class_table_->::gphp::HashTable::Clear();
  clear_has_class_table();
}
inline const ::gphp::HashTable& ZendScript::class_table() const {
  const ::gphp::HashTable* p = class_table_;
  // @@protoc_insertion_point(field_get:gphp.ZendScript.class_table)
  return p != NULL ? *p : *reinterpret_cast<const ::gphp::HashTable*>(
      &::gphp::_HashTable_default_instance_);
}
inline ::gphp::HashTable* ZendScript::mutable_class_table() {
  set_has_class_table();
  if (class_table_ == NULL) {
    class_table_ = new ::gphp::HashTable;
  }
  // @@protoc_insertion_point(field_mutable:gphp.ZendScript.class_table)
  return class_table_;
}
inline ::gphp::HashTable* ZendScript::release_class_table() {
  // @@protoc_insertion_point(field_release:gphp.ZendScript.class_table)
  clear_has_class_table();
  ::gphp::HashTable* temp = class_table_;
  class_table_ = NULL;
  return temp;
}
inline void ZendScript::set_allocated_class_table(::gphp::HashTable* class_table) {
  delete class_table_;
  class_table_ = class_table;
  if (class_table) {
    set_has_class_table();
  } else {
    clear_has_class_table();
  }
  // @@protoc_insertion_point(field_set_allocated:gphp.ZendScript.class_table)
}

// optional .gphp.HashTable constant_table = 5;
inline bool ZendScript::has_constant_table() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ZendScript::set_has_constant_table() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ZendScript::clear_has_constant_table() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ZendScript::clear_constant_table() {
  if (constant_table_ != NULL) constant_table_->::gphp::HashTable::Clear();
  clear_has_constant_table();
}
inline const ::gphp::HashTable& ZendScript::constant_table() const {
  const ::gphp::HashTable* p = constant_table_;
  // @@protoc_insertion_point(field_get:gphp.ZendScript.constant_table)
  return p != NULL ? *p : *reinterpret_cast<const ::gphp::HashTable*>(
      &::gphp::_HashTable_default_instance_);
}
inline ::gphp::HashTable* ZendScript::mutable_constant_table() {
  set_has_constant_table();
  if (constant_table_ == NULL) {
    constant_table_ = new ::gphp::HashTable;
  }
  // @@protoc_insertion_point(field_mutable:gphp.ZendScript.constant_table)
  return constant_table_;
}
inline ::gphp::HashTable* ZendScript::release_constant_table() {
  // @@protoc_insertion_point(field_release:gphp.ZendScript.constant_table)
  clear_has_constant_table();
  ::gphp::HashTable* temp = constant_table_;
  constant_table_ = NULL;
  return temp;
}
inline void ZendScript::set_allocated_constant_table(::gphp::HashTable* constant_table) {
  delete constant_table_;
  constant_table_ = constant_table;
  if (constant_table) {
    set_has_constant_table();
  } else {
    clear_has_constant_table();
  }
  // @@protoc_insertion_point(field_set_allocated:gphp.ZendScript.constant_table)
}

// optional string source = 6;
inline bool ZendScript::has_source() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ZendScript::set_has_source() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ZendScript::clear_has_source() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ZendScript::clear_source() {
  source_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_source();
}
inline const ::std::string& ZendScript::source() const {
  // @@protoc_insertion_point(field_get:gphp.ZendScript.source)
  return source_.GetNoArena();
}
inline void ZendScript::set_source(const ::std::string& value) {
  set_has_source();
  source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gphp.ZendScript.source)
}
#if LANG_CXX11
inline void ZendScript::set_source(::std::string&& value) {
  set_has_source();
  source_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gphp.ZendScript.source)
}
#endif
inline void ZendScript::set_source(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_source();
  source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gphp.ZendScript.source)
}
inline void ZendScript::set_source(const char* value, size_t size) {
  set_has_source();
  source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gphp.ZendScript.source)
}
inline ::std::string* ZendScript::mutable_source() {
  set_has_source();
  // @@protoc_insertion_point(field_mutable:gphp.ZendScript.source)
  return source_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ZendScript::release_source() {
  // @@protoc_insertion_point(field_release:gphp.ZendScript.source)
  clear_has_source();
  return source_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ZendScript::set_allocated_source(::std::string* source) {
  if (source != NULL) {
    set_has_source();
  } else {
    clear_has_source();
  }
  source_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), source);
  // @@protoc_insertion_point(field_set_allocated:gphp.ZendScript.source)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace gphp

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_zend_5fscript_2eproto__INCLUDED
