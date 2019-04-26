// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zend_script.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "zend_script.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace gphp {
class ZendScriptDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ZendScript>
     _instance;
} _ZendScript_default_instance_;

namespace protobuf_zend_5fscript_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZendScript, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZendScript, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZendScript, script_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZendScript, main_op_array_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZendScript, function_table_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZendScript, class_table_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZendScript, constant_table_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZendScript, source_),
  0,
  2,
  3,
  4,
  5,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, sizeof(ZendScript)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ZendScript_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "zend_script.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::gphp::protobuf_zend_5fop_5farray_2eproto::InitDefaults();
  ::gphp::protobuf_zend_5ftypes_2eproto::InitDefaults();
  _ZendScript_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ZendScript_default_instance_);_ZendScript_default_instance_._instance.get_mutable()->main_op_array_ = const_cast< ::gphp::ZendOpArray*>(
      ::gphp::ZendOpArray::internal_default_instance());
  _ZendScript_default_instance_._instance.get_mutable()->function_table_ = const_cast< ::gphp::HashTable*>(
      ::gphp::HashTable::internal_default_instance());
  _ZendScript_default_instance_._instance.get_mutable()->class_table_ = const_cast< ::gphp::HashTable*>(
      ::gphp::HashTable::internal_default_instance());
  _ZendScript_default_instance_._instance.get_mutable()->constant_table_ = const_cast< ::gphp::HashTable*>(
      ::gphp::HashTable::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\021zend_script.proto\022\004gphp\032\023zend_op_array"
      ".proto\032\020zend_types.proto\"\323\001\n\nZendScript\022"
      "\023\n\013script_name\030\001 \002(\t\022(\n\rmain_op_array\030\002 "
      "\001(\0132\021.gphp.ZendOpArray\022\'\n\016function_table"
      "\030\003 \001(\0132\017.gphp.HashTable\022$\n\013class_table\030\004"
      " \001(\0132\017.gphp.HashTable\022\'\n\016constant_table\030"
      "\005 \001(\0132\017.gphp.HashTable\022\016\n\006source\030\006 \001(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 278);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "zend_script.proto", &protobuf_RegisterTypes);
  ::gphp::protobuf_zend_5fop_5farray_2eproto::AddDescriptors();
  ::gphp::protobuf_zend_5ftypes_2eproto::AddDescriptors();
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_zend_5fscript_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ZendScript::kScriptNameFieldNumber;
const int ZendScript::kMainOpArrayFieldNumber;
const int ZendScript::kFunctionTableFieldNumber;
const int ZendScript::kClassTableFieldNumber;
const int ZendScript::kConstantTableFieldNumber;
const int ZendScript::kSourceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ZendScript::ZendScript()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_zend_5fscript_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:gphp.ZendScript)
}
ZendScript::ZendScript(const ZendScript& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  script_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_script_name()) {
    script_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.script_name_);
  }
  source_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_source()) {
    source_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.source_);
  }
  if (from.has_main_op_array()) {
    main_op_array_ = new ::gphp::ZendOpArray(*from.main_op_array_);
  } else {
    main_op_array_ = NULL;
  }
  if (from.has_function_table()) {
    function_table_ = new ::gphp::HashTable(*from.function_table_);
  } else {
    function_table_ = NULL;
  }
  if (from.has_class_table()) {
    class_table_ = new ::gphp::HashTable(*from.class_table_);
  } else {
    class_table_ = NULL;
  }
  if (from.has_constant_table()) {
    constant_table_ = new ::gphp::HashTable(*from.constant_table_);
  } else {
    constant_table_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gphp.ZendScript)
}

void ZendScript::SharedCtor() {
  _cached_size_ = 0;
  script_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  source_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&main_op_array_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&constant_table_) -
      reinterpret_cast<char*>(&main_op_array_)) + sizeof(constant_table_));
}

ZendScript::~ZendScript() {
  // @@protoc_insertion_point(destructor:gphp.ZendScript)
  SharedDtor();
}

void ZendScript::SharedDtor() {
  script_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  source_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete main_op_array_;
  if (this != internal_default_instance()) delete function_table_;
  if (this != internal_default_instance()) delete class_table_;
  if (this != internal_default_instance()) delete constant_table_;
}

void ZendScript::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ZendScript::descriptor() {
  protobuf_zend_5fscript_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_zend_5fscript_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ZendScript& ZendScript::default_instance() {
  protobuf_zend_5fscript_2eproto::InitDefaults();
  return *internal_default_instance();
}

ZendScript* ZendScript::New(::google::protobuf::Arena* arena) const {
  ZendScript* n = new ZendScript;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ZendScript::Clear() {
// @@protoc_insertion_point(message_clear_start:gphp.ZendScript)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 63u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!script_name_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*script_name_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!source_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*source_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(main_op_array_ != NULL);
      main_op_array_->::gphp::ZendOpArray::Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(function_table_ != NULL);
      function_table_->::gphp::HashTable::Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(class_table_ != NULL);
      class_table_->::gphp::HashTable::Clear();
    }
    if (cached_has_bits & 0x00000020u) {
      GOOGLE_DCHECK(constant_table_ != NULL);
      constant_table_->::gphp::HashTable::Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ZendScript::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gphp.ZendScript)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string script_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_script_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->script_name().data(), static_cast<int>(this->script_name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "gphp.ZendScript.script_name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .gphp.ZendOpArray main_op_array = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_main_op_array()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .gphp.HashTable function_table = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_function_table()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .gphp.HashTable class_table = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_class_table()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .gphp.HashTable constant_table = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_constant_table()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string source = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_source()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->source().data(), static_cast<int>(this->source().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "gphp.ZendScript.source");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gphp.ZendScript)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gphp.ZendScript)
  return false;
#undef DO_
}

void ZendScript::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gphp.ZendScript)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string script_name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->script_name().data(), static_cast<int>(this->script_name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "gphp.ZendScript.script_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->script_name(), output);
  }

  // optional .gphp.ZendOpArray main_op_array = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->main_op_array_, output);
  }

  // optional .gphp.HashTable function_table = 3;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->function_table_, output);
  }

  // optional .gphp.HashTable class_table = 4;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->class_table_, output);
  }

  // optional .gphp.HashTable constant_table = 5;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->constant_table_, output);
  }

  // optional string source = 6;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->source().data(), static_cast<int>(this->source().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "gphp.ZendScript.source");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->source(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gphp.ZendScript)
}

::google::protobuf::uint8* ZendScript::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gphp.ZendScript)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string script_name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->script_name().data(), static_cast<int>(this->script_name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "gphp.ZendScript.script_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->script_name(), target);
  }

  // optional .gphp.ZendOpArray main_op_array = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->main_op_array_, deterministic, target);
  }

  // optional .gphp.HashTable function_table = 3;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->function_table_, deterministic, target);
  }

  // optional .gphp.HashTable class_table = 4;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->class_table_, deterministic, target);
  }

  // optional .gphp.HashTable constant_table = 5;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->constant_table_, deterministic, target);
  }

  // optional string source = 6;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->source().data(), static_cast<int>(this->source().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "gphp.ZendScript.source");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->source(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gphp.ZendScript)
  return target;
}

size_t ZendScript::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gphp.ZendScript)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required string script_name = 1;
  if (has_script_name()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->script_name());
  }
  if (_has_bits_[0 / 32] & 62u) {
    // optional string source = 6;
    if (has_source()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->source());
    }

    // optional .gphp.ZendOpArray main_op_array = 2;
    if (has_main_op_array()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->main_op_array_);
    }

    // optional .gphp.HashTable function_table = 3;
    if (has_function_table()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->function_table_);
    }

    // optional .gphp.HashTable class_table = 4;
    if (has_class_table()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->class_table_);
    }

    // optional .gphp.HashTable constant_table = 5;
    if (has_constant_table()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->constant_table_);
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ZendScript::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gphp.ZendScript)
  GOOGLE_DCHECK_NE(&from, this);
  const ZendScript* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ZendScript>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gphp.ZendScript)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gphp.ZendScript)
    MergeFrom(*source);
  }
}

void ZendScript::MergeFrom(const ZendScript& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gphp.ZendScript)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 63u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_script_name();
      script_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.script_name_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_source();
      source_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.source_);
    }
    if (cached_has_bits & 0x00000004u) {
      mutable_main_op_array()->::gphp::ZendOpArray::MergeFrom(from.main_op_array());
    }
    if (cached_has_bits & 0x00000008u) {
      mutable_function_table()->::gphp::HashTable::MergeFrom(from.function_table());
    }
    if (cached_has_bits & 0x00000010u) {
      mutable_class_table()->::gphp::HashTable::MergeFrom(from.class_table());
    }
    if (cached_has_bits & 0x00000020u) {
      mutable_constant_table()->::gphp::HashTable::MergeFrom(from.constant_table());
    }
  }
}

void ZendScript::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gphp.ZendScript)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ZendScript::CopyFrom(const ZendScript& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gphp.ZendScript)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZendScript::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (has_main_op_array()) {
    if (!this->main_op_array_->IsInitialized()) return false;
  }
  if (has_function_table()) {
    if (!this->function_table_->IsInitialized()) return false;
  }
  if (has_class_table()) {
    if (!this->class_table_->IsInitialized()) return false;
  }
  if (has_constant_table()) {
    if (!this->constant_table_->IsInitialized()) return false;
  }
  return true;
}

void ZendScript::Swap(ZendScript* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ZendScript::InternalSwap(ZendScript* other) {
  using std::swap;
  script_name_.Swap(&other->script_name_);
  source_.Swap(&other->source_);
  swap(main_op_array_, other->main_op_array_);
  swap(function_table_, other->function_table_);
  swap(class_table_, other->class_table_);
  swap(constant_table_, other->constant_table_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ZendScript::GetMetadata() const {
  protobuf_zend_5fscript_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_zend_5fscript_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ZendScript

// required string script_name = 1;
bool ZendScript::has_script_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ZendScript::set_has_script_name() {
  _has_bits_[0] |= 0x00000001u;
}
void ZendScript::clear_has_script_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void ZendScript::clear_script_name() {
  script_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_script_name();
}
const ::std::string& ZendScript::script_name() const {
  // @@protoc_insertion_point(field_get:gphp.ZendScript.script_name)
  return script_name_.GetNoArena();
}
void ZendScript::set_script_name(const ::std::string& value) {
  set_has_script_name();
  script_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gphp.ZendScript.script_name)
}
#if LANG_CXX11
void ZendScript::set_script_name(::std::string&& value) {
  set_has_script_name();
  script_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gphp.ZendScript.script_name)
}
#endif
void ZendScript::set_script_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_script_name();
  script_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gphp.ZendScript.script_name)
}
void ZendScript::set_script_name(const char* value, size_t size) {
  set_has_script_name();
  script_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gphp.ZendScript.script_name)
}
::std::string* ZendScript::mutable_script_name() {
  set_has_script_name();
  // @@protoc_insertion_point(field_mutable:gphp.ZendScript.script_name)
  return script_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ZendScript::release_script_name() {
  // @@protoc_insertion_point(field_release:gphp.ZendScript.script_name)
  clear_has_script_name();
  return script_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ZendScript::set_allocated_script_name(::std::string* script_name) {
  if (script_name != NULL) {
    set_has_script_name();
  } else {
    clear_has_script_name();
  }
  script_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), script_name);
  // @@protoc_insertion_point(field_set_allocated:gphp.ZendScript.script_name)
}

// optional .gphp.ZendOpArray main_op_array = 2;
bool ZendScript::has_main_op_array() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ZendScript::set_has_main_op_array() {
  _has_bits_[0] |= 0x00000004u;
}
void ZendScript::clear_has_main_op_array() {
  _has_bits_[0] &= ~0x00000004u;
}
void ZendScript::clear_main_op_array() {
  if (main_op_array_ != NULL) main_op_array_->::gphp::ZendOpArray::Clear();
  clear_has_main_op_array();
}
const ::gphp::ZendOpArray& ZendScript::main_op_array() const {
  const ::gphp::ZendOpArray* p = main_op_array_;
  // @@protoc_insertion_point(field_get:gphp.ZendScript.main_op_array)
  return p != NULL ? *p : *reinterpret_cast<const ::gphp::ZendOpArray*>(
      &::gphp::_ZendOpArray_default_instance_);
}
::gphp::ZendOpArray* ZendScript::mutable_main_op_array() {
  set_has_main_op_array();
  if (main_op_array_ == NULL) {
    main_op_array_ = new ::gphp::ZendOpArray;
  }
  // @@protoc_insertion_point(field_mutable:gphp.ZendScript.main_op_array)
  return main_op_array_;
}
::gphp::ZendOpArray* ZendScript::release_main_op_array() {
  // @@protoc_insertion_point(field_release:gphp.ZendScript.main_op_array)
  clear_has_main_op_array();
  ::gphp::ZendOpArray* temp = main_op_array_;
  main_op_array_ = NULL;
  return temp;
}
void ZendScript::set_allocated_main_op_array(::gphp::ZendOpArray* main_op_array) {
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
bool ZendScript::has_function_table() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void ZendScript::set_has_function_table() {
  _has_bits_[0] |= 0x00000008u;
}
void ZendScript::clear_has_function_table() {
  _has_bits_[0] &= ~0x00000008u;
}
void ZendScript::clear_function_table() {
  if (function_table_ != NULL) function_table_->::gphp::HashTable::Clear();
  clear_has_function_table();
}
const ::gphp::HashTable& ZendScript::function_table() const {
  const ::gphp::HashTable* p = function_table_;
  // @@protoc_insertion_point(field_get:gphp.ZendScript.function_table)
  return p != NULL ? *p : *reinterpret_cast<const ::gphp::HashTable*>(
      &::gphp::_HashTable_default_instance_);
}
::gphp::HashTable* ZendScript::mutable_function_table() {
  set_has_function_table();
  if (function_table_ == NULL) {
    function_table_ = new ::gphp::HashTable;
  }
  // @@protoc_insertion_point(field_mutable:gphp.ZendScript.function_table)
  return function_table_;
}
::gphp::HashTable* ZendScript::release_function_table() {
  // @@protoc_insertion_point(field_release:gphp.ZendScript.function_table)
  clear_has_function_table();
  ::gphp::HashTable* temp = function_table_;
  function_table_ = NULL;
  return temp;
}
void ZendScript::set_allocated_function_table(::gphp::HashTable* function_table) {
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
bool ZendScript::has_class_table() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void ZendScript::set_has_class_table() {
  _has_bits_[0] |= 0x00000010u;
}
void ZendScript::clear_has_class_table() {
  _has_bits_[0] &= ~0x00000010u;
}
void ZendScript::clear_class_table() {
  if (class_table_ != NULL) class_table_->::gphp::HashTable::Clear();
  clear_has_class_table();
}
const ::gphp::HashTable& ZendScript::class_table() const {
  const ::gphp::HashTable* p = class_table_;
  // @@protoc_insertion_point(field_get:gphp.ZendScript.class_table)
  return p != NULL ? *p : *reinterpret_cast<const ::gphp::HashTable*>(
      &::gphp::_HashTable_default_instance_);
}
::gphp::HashTable* ZendScript::mutable_class_table() {
  set_has_class_table();
  if (class_table_ == NULL) {
    class_table_ = new ::gphp::HashTable;
  }
  // @@protoc_insertion_point(field_mutable:gphp.ZendScript.class_table)
  return class_table_;
}
::gphp::HashTable* ZendScript::release_class_table() {
  // @@protoc_insertion_point(field_release:gphp.ZendScript.class_table)
  clear_has_class_table();
  ::gphp::HashTable* temp = class_table_;
  class_table_ = NULL;
  return temp;
}
void ZendScript::set_allocated_class_table(::gphp::HashTable* class_table) {
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
bool ZendScript::has_constant_table() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void ZendScript::set_has_constant_table() {
  _has_bits_[0] |= 0x00000020u;
}
void ZendScript::clear_has_constant_table() {
  _has_bits_[0] &= ~0x00000020u;
}
void ZendScript::clear_constant_table() {
  if (constant_table_ != NULL) constant_table_->::gphp::HashTable::Clear();
  clear_has_constant_table();
}
const ::gphp::HashTable& ZendScript::constant_table() const {
  const ::gphp::HashTable* p = constant_table_;
  // @@protoc_insertion_point(field_get:gphp.ZendScript.constant_table)
  return p != NULL ? *p : *reinterpret_cast<const ::gphp::HashTable*>(
      &::gphp::_HashTable_default_instance_);
}
::gphp::HashTable* ZendScript::mutable_constant_table() {
  set_has_constant_table();
  if (constant_table_ == NULL) {
    constant_table_ = new ::gphp::HashTable;
  }
  // @@protoc_insertion_point(field_mutable:gphp.ZendScript.constant_table)
  return constant_table_;
}
::gphp::HashTable* ZendScript::release_constant_table() {
  // @@protoc_insertion_point(field_release:gphp.ZendScript.constant_table)
  clear_has_constant_table();
  ::gphp::HashTable* temp = constant_table_;
  constant_table_ = NULL;
  return temp;
}
void ZendScript::set_allocated_constant_table(::gphp::HashTable* constant_table) {
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
bool ZendScript::has_source() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ZendScript::set_has_source() {
  _has_bits_[0] |= 0x00000002u;
}
void ZendScript::clear_has_source() {
  _has_bits_[0] &= ~0x00000002u;
}
void ZendScript::clear_source() {
  source_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_source();
}
const ::std::string& ZendScript::source() const {
  // @@protoc_insertion_point(field_get:gphp.ZendScript.source)
  return source_.GetNoArena();
}
void ZendScript::set_source(const ::std::string& value) {
  set_has_source();
  source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gphp.ZendScript.source)
}
#if LANG_CXX11
void ZendScript::set_source(::std::string&& value) {
  set_has_source();
  source_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gphp.ZendScript.source)
}
#endif
void ZendScript::set_source(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_source();
  source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gphp.ZendScript.source)
}
void ZendScript::set_source(const char* value, size_t size) {
  set_has_source();
  source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gphp.ZendScript.source)
}
::std::string* ZendScript::mutable_source() {
  set_has_source();
  // @@protoc_insertion_point(field_mutable:gphp.ZendScript.source)
  return source_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ZendScript::release_source() {
  // @@protoc_insertion_point(field_release:gphp.ZendScript.source)
  clear_has_source();
  return source_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ZendScript::set_allocated_source(::std::string* source) {
  if (source != NULL) {
    set_has_source();
  } else {
    clear_has_source();
  }
  source_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), source);
  // @@protoc_insertion_point(field_set_allocated:gphp.ZendScript.source)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace gphp

// @@protoc_insertion_point(global_scope)
