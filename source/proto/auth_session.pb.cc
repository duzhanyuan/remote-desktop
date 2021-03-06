// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: auth_session.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "auth_session.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace aspia {
namespace proto {
namespace auth {
class HostToClientDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<HostToClient> {
} _HostToClient_default_instance_;
class ClientToHostDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ClientToHost> {
} _ClientToHost_default_instance_;

namespace protobuf_auth_5fsession_2eproto {

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};


void TableStruct::Shutdown() {
  _HostToClient_default_instance_.Shutdown();
  _ClientToHost_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::aspia::proto::protobuf_auth_5fsession_5fmessage_2eproto::InitDefaults();
  ::aspia::proto::protobuf_status_2eproto::InitDefaults();
  _HostToClient_default_instance_.DefaultConstruct();
  _ClientToHost_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::aspia::proto::protobuf_auth_5fsession_5fmessage_2eproto::AddDescriptors();
  ::aspia::proto::protobuf_status_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER

}  // namespace protobuf_auth_5fsession_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HostToClient::kSessionTypeFieldNumber;
const int HostToClient::kStatusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HostToClient::HostToClient()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_auth_5fsession_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.auth.HostToClient)
}
HostToClient::HostToClient(const HostToClient& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&session_type_, &from.session_type_,
    reinterpret_cast<char*>(&status_) -
    reinterpret_cast<char*>(&session_type_) + sizeof(status_));
  // @@protoc_insertion_point(copy_constructor:aspia.proto.auth.HostToClient)
}

void HostToClient::SharedCtor() {
  ::memset(&session_type_, 0, reinterpret_cast<char*>(&status_) -
    reinterpret_cast<char*>(&session_type_) + sizeof(status_));
  _cached_size_ = 0;
}

HostToClient::~HostToClient() {
  // @@protoc_insertion_point(destructor:aspia.proto.auth.HostToClient)
  SharedDtor();
}

void HostToClient::SharedDtor() {
}

void HostToClient::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const HostToClient& HostToClient::default_instance() {
  protobuf_auth_5fsession_2eproto::InitDefaults();
  return *internal_default_instance();
}

HostToClient* HostToClient::New(::google::protobuf::Arena* arena) const {
  HostToClient* n = new HostToClient;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HostToClient::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.auth.HostToClient)
  ::memset(&session_type_, 0, reinterpret_cast<char*>(&status_) -
    reinterpret_cast<char*>(&session_type_) + sizeof(status_));
}

bool HostToClient::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:aspia.proto.auth.HostToClient)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .aspia.proto.SessionType session_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_session_type(static_cast< ::aspia::proto::SessionType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .aspia.proto.Status status = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_status(static_cast< ::aspia::proto::Status >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.auth.HostToClient)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.auth.HostToClient)
  return false;
#undef DO_
}

void HostToClient::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.auth.HostToClient)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .aspia.proto.SessionType session_type = 1;
  if (this->session_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->session_type(), output);
  }

  // .aspia.proto.Status status = 2;
  if (this->status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->status(), output);
  }

  // @@protoc_insertion_point(serialize_end:aspia.proto.auth.HostToClient)
}

size_t HostToClient::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.auth.HostToClient)
  size_t total_size = 0;

  // .aspia.proto.SessionType session_type = 1;
  if (this->session_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->session_type());
  }

  // .aspia.proto.Status status = 2;
  if (this->status() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HostToClient::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const HostToClient*>(&from));
}

void HostToClient::MergeFrom(const HostToClient& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.auth.HostToClient)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.session_type() != 0) {
    set_session_type(from.session_type());
  }
  if (from.status() != 0) {
    set_status(from.status());
  }
}

void HostToClient::CopyFrom(const HostToClient& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.auth.HostToClient)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HostToClient::IsInitialized() const {
  return true;
}

void HostToClient::Swap(HostToClient* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HostToClient::InternalSwap(HostToClient* other) {
  std::swap(session_type_, other->session_type_);
  std::swap(status_, other->status_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string HostToClient::GetTypeName() const {
  return "aspia.proto.auth.HostToClient";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HostToClient

// .aspia.proto.SessionType session_type = 1;
void HostToClient::clear_session_type() {
  session_type_ = 0;
}
::aspia::proto::SessionType HostToClient::session_type() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.HostToClient.session_type)
  return static_cast< ::aspia::proto::SessionType >(session_type_);
}
void HostToClient::set_session_type(::aspia::proto::SessionType value) {
  
  session_type_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.auth.HostToClient.session_type)
}

// .aspia.proto.Status status = 2;
void HostToClient::clear_status() {
  status_ = 0;
}
::aspia::proto::Status HostToClient::status() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.HostToClient.status)
  return static_cast< ::aspia::proto::Status >(status_);
}
void HostToClient::set_status(::aspia::proto::Status value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.auth.HostToClient.status)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClientToHost::kSessionTypeFieldNumber;
const int ClientToHost::kMethodFieldNumber;
const int ClientToHost::kUsernameFieldNumber;
const int ClientToHost::kPasswordFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ClientToHost::ClientToHost()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_auth_5fsession_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.auth.ClientToHost)
}
ClientToHost::ClientToHost(const ClientToHost& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  username_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.username().size() > 0) {
    username_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  password_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.password().size() > 0) {
    password_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.password_);
  }
  ::memcpy(&session_type_, &from.session_type_,
    reinterpret_cast<char*>(&method_) -
    reinterpret_cast<char*>(&session_type_) + sizeof(method_));
  // @@protoc_insertion_point(copy_constructor:aspia.proto.auth.ClientToHost)
}

void ClientToHost::SharedCtor() {
  username_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&session_type_, 0, reinterpret_cast<char*>(&method_) -
    reinterpret_cast<char*>(&session_type_) + sizeof(method_));
  _cached_size_ = 0;
}

ClientToHost::~ClientToHost() {
  // @@protoc_insertion_point(destructor:aspia.proto.auth.ClientToHost)
  SharedDtor();
}

void ClientToHost::SharedDtor() {
  username_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ClientToHost::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ClientToHost& ClientToHost::default_instance() {
  protobuf_auth_5fsession_2eproto::InitDefaults();
  return *internal_default_instance();
}

ClientToHost* ClientToHost::New(::google::protobuf::Arena* arena) const {
  ClientToHost* n = new ClientToHost;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ClientToHost::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.auth.ClientToHost)
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&session_type_, 0, reinterpret_cast<char*>(&method_) -
    reinterpret_cast<char*>(&session_type_) + sizeof(method_));
}

bool ClientToHost::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:aspia.proto.auth.ClientToHost)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .aspia.proto.SessionType session_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_session_type(static_cast< ::aspia::proto::SessionType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .aspia.proto.AuthMethod method = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_method(static_cast< ::aspia::proto::AuthMethod >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string username = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->username().data(), this->username().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.auth.ClientToHost.username"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes password = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_password()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.auth.ClientToHost)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.auth.ClientToHost)
  return false;
#undef DO_
}

void ClientToHost::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.auth.ClientToHost)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .aspia.proto.SessionType session_type = 1;
  if (this->session_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->session_type(), output);
  }

  // .aspia.proto.AuthMethod method = 2;
  if (this->method() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->method(), output);
  }

  // string username = 3;
  if (this->username().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.auth.ClientToHost.username");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->username(), output);
  }

  // bytes password = 4;
  if (this->password().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->password(), output);
  }

  // @@protoc_insertion_point(serialize_end:aspia.proto.auth.ClientToHost)
}

size_t ClientToHost::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.auth.ClientToHost)
  size_t total_size = 0;

  // string username = 3;
  if (this->username().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->username());
  }

  // bytes password = 4;
  if (this->password().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->password());
  }

  // .aspia.proto.SessionType session_type = 1;
  if (this->session_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->session_type());
  }

  // .aspia.proto.AuthMethod method = 2;
  if (this->method() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->method());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientToHost::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ClientToHost*>(&from));
}

void ClientToHost::MergeFrom(const ClientToHost& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.auth.ClientToHost)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.username().size() > 0) {

    username_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  if (from.password().size() > 0) {

    password_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.password_);
  }
  if (from.session_type() != 0) {
    set_session_type(from.session_type());
  }
  if (from.method() != 0) {
    set_method(from.method());
  }
}

void ClientToHost::CopyFrom(const ClientToHost& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.auth.ClientToHost)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientToHost::IsInitialized() const {
  return true;
}

void ClientToHost::Swap(ClientToHost* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ClientToHost::InternalSwap(ClientToHost* other) {
  username_.Swap(&other->username_);
  password_.Swap(&other->password_);
  std::swap(session_type_, other->session_type_);
  std::swap(method_, other->method_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ClientToHost::GetTypeName() const {
  return "aspia.proto.auth.ClientToHost";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ClientToHost

// .aspia.proto.SessionType session_type = 1;
void ClientToHost::clear_session_type() {
  session_type_ = 0;
}
::aspia::proto::SessionType ClientToHost::session_type() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.ClientToHost.session_type)
  return static_cast< ::aspia::proto::SessionType >(session_type_);
}
void ClientToHost::set_session_type(::aspia::proto::SessionType value) {
  
  session_type_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.auth.ClientToHost.session_type)
}

// .aspia.proto.AuthMethod method = 2;
void ClientToHost::clear_method() {
  method_ = 0;
}
::aspia::proto::AuthMethod ClientToHost::method() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.ClientToHost.method)
  return static_cast< ::aspia::proto::AuthMethod >(method_);
}
void ClientToHost::set_method(::aspia::proto::AuthMethod value) {
  
  method_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.auth.ClientToHost.method)
}

// string username = 3;
void ClientToHost::clear_username() {
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& ClientToHost::username() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.ClientToHost.username)
  return username_.GetNoArena();
}
void ClientToHost::set_username(const ::std::string& value) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.auth.ClientToHost.username)
}
#if LANG_CXX11
void ClientToHost::set_username(::std::string&& value) {
  
  username_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.auth.ClientToHost.username)
}
#endif
void ClientToHost::set_username(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.auth.ClientToHost.username)
}
void ClientToHost::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.auth.ClientToHost.username)
}
::std::string* ClientToHost::mutable_username() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.auth.ClientToHost.username)
  return username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ClientToHost::release_username() {
  // @@protoc_insertion_point(field_release:aspia.proto.auth.ClientToHost.username)
  
  return username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ClientToHost::set_allocated_username(::std::string* username) {
  if (username != NULL) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.auth.ClientToHost.username)
}

// bytes password = 4;
void ClientToHost::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& ClientToHost::password() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.ClientToHost.password)
  return password_.GetNoArena();
}
void ClientToHost::set_password(const ::std::string& value) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.auth.ClientToHost.password)
}
#if LANG_CXX11
void ClientToHost::set_password(::std::string&& value) {
  
  password_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.auth.ClientToHost.password)
}
#endif
void ClientToHost::set_password(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.auth.ClientToHost.password)
}
void ClientToHost::set_password(const void* value, size_t size) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.auth.ClientToHost.password)
}
::std::string* ClientToHost::mutable_password() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.auth.ClientToHost.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ClientToHost::release_password() {
  // @@protoc_insertion_point(field_release:aspia.proto.auth.ClientToHost.password)
  
  return password_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ClientToHost::set_allocated_password(::std::string* password) {
  if (password != NULL) {
    
  } else {
    
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.auth.ClientToHost.password)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace auth
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)
