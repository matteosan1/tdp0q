// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: players.proto

#include "players.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace tdpalio {
class PlayerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Player>
      _instance;
} _Player_default_instance_;
class PlayersDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Players>
      _instance;
} _Players_default_instance_;
}  // namespace tdpalio
namespace protobuf_players_2eproto {
void InitDefaultsPlayerImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::tdpalio::_Player_default_instance_;
    new (ptr) ::tdpalio::Player();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tdpalio::Player::InitAsDefaultInstance();
}

void InitDefaultsPlayer() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsPlayerImpl);
}

void InitDefaultsPlayersImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_players_2eproto::InitDefaultsPlayer();
  {
    void* ptr = &::tdpalio::_Players_default_instance_;
    new (ptr) ::tdpalio::Players();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tdpalio::Players::InitAsDefaultInstance();
}

void InitDefaultsPlayers() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsPlayersImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tdpalio::Player, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tdpalio::Player, nome_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tdpalio::Player, cognome_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tdpalio::Player, username_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tdpalio::Player, contrada_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tdpalio::Player, tempo_in_carica_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tdpalio::Player, score_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tdpalio::Player, sta_giocando_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tdpalio::Players, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tdpalio::Players, giocatori_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tdpalio::Player)},
  { 12, -1, sizeof(::tdpalio::Players)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tdpalio::_Player_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::tdpalio::_Players_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "players.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\rplayers.proto\022\007tdpalio\"\211\001\n\006Player\022\014\n\004n"
      "ome\030\001 \001(\t\022\017\n\007cognome\030\002 \001(\t\022\020\n\010username\030\003"
      " \001(\t\022\020\n\010contrada\030\004 \001(\005\022\027\n\017tempo_in_caric"
      "a\030\005 \001(\005\022\r\n\005score\030\006 \003(\r\022\024\n\014sta_giocando\030\007"
      " \001(\010\"-\n\007Players\022\"\n\tgiocatori\030\001 \003(\0132\017.tdp"
      "alio.Playerb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 219);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "players.proto", &protobuf_RegisterTypes);
}

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
}  // namespace protobuf_players_2eproto
namespace tdpalio {

// ===================================================================

void Player::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Player::kNomeFieldNumber;
const int Player::kCognomeFieldNumber;
const int Player::kUsernameFieldNumber;
const int Player::kContradaFieldNumber;
const int Player::kTempoInCaricaFieldNumber;
const int Player::kScoreFieldNumber;
const int Player::kStaGiocandoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Player::Player()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_players_2eproto::InitDefaultsPlayer();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tdpalio.Player)
}
Player::Player(const Player& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      score_(from.score_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  nome_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.nome().size() > 0) {
    nome_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.nome_);
  }
  cognome_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.cognome().size() > 0) {
    cognome_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.cognome_);
  }
  username_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.username().size() > 0) {
    username_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  ::memcpy(&contrada_, &from.contrada_,
    static_cast<size_t>(reinterpret_cast<char*>(&sta_giocando_) -
    reinterpret_cast<char*>(&contrada_)) + sizeof(sta_giocando_));
  // @@protoc_insertion_point(copy_constructor:tdpalio.Player)
}

void Player::SharedCtor() {
  nome_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  cognome_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  username_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&contrada_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sta_giocando_) -
      reinterpret_cast<char*>(&contrada_)) + sizeof(sta_giocando_));
  _cached_size_ = 0;
}

Player::~Player() {
  // @@protoc_insertion_point(destructor:tdpalio.Player)
  SharedDtor();
}

void Player::SharedDtor() {
  nome_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  cognome_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  username_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Player::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Player::descriptor() {
  ::protobuf_players_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_players_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Player& Player::default_instance() {
  ::protobuf_players_2eproto::InitDefaultsPlayer();
  return *internal_default_instance();
}

Player* Player::New(::google::protobuf::Arena* arena) const {
  Player* n = new Player;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Player::Clear() {
// @@protoc_insertion_point(message_clear_start:tdpalio.Player)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  score_.Clear();
  nome_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  cognome_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&contrada_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sta_giocando_) -
      reinterpret_cast<char*>(&contrada_)) + sizeof(sta_giocando_));
  _internal_metadata_.Clear();
}

bool Player::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tdpalio.Player)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string nome = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_nome()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->nome().data(), static_cast<int>(this->nome().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tdpalio.Player.nome"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string cognome = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_cognome()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->cognome().data(), static_cast<int>(this->cognome().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tdpalio.Player.cognome"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string username = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->username().data(), static_cast<int>(this->username().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tdpalio.Player.username"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 contrada = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &contrada_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 tempo_in_carica = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &tempo_in_carica_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 score = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_score())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 50u, input, this->mutable_score())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool sta_giocando = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &sta_giocando_)));
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
  // @@protoc_insertion_point(parse_success:tdpalio.Player)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tdpalio.Player)
  return false;
#undef DO_
}

void Player::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tdpalio.Player)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string nome = 1;
  if (this->nome().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->nome().data(), static_cast<int>(this->nome().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tdpalio.Player.nome");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->nome(), output);
  }

  // string cognome = 2;
  if (this->cognome().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->cognome().data(), static_cast<int>(this->cognome().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tdpalio.Player.cognome");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->cognome(), output);
  }

  // string username = 3;
  if (this->username().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->username().data(), static_cast<int>(this->username().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tdpalio.Player.username");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->username(), output);
  }

  // int32 contrada = 4;
  if (this->contrada() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->contrada(), output);
  }

  // int32 tempo_in_carica = 5;
  if (this->tempo_in_carica() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->tempo_in_carica(), output);
  }

  // repeated uint32 score = 6;
  if (this->score_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(6, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _score_cached_byte_size_));
  }
  for (int i = 0, n = this->score_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->score(i), output);
  }

  // bool sta_giocando = 7;
  if (this->sta_giocando() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->sta_giocando(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tdpalio.Player)
}

::google::protobuf::uint8* Player::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tdpalio.Player)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string nome = 1;
  if (this->nome().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->nome().data(), static_cast<int>(this->nome().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tdpalio.Player.nome");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->nome(), target);
  }

  // string cognome = 2;
  if (this->cognome().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->cognome().data(), static_cast<int>(this->cognome().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tdpalio.Player.cognome");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->cognome(), target);
  }

  // string username = 3;
  if (this->username().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->username().data(), static_cast<int>(this->username().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tdpalio.Player.username");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->username(), target);
  }

  // int32 contrada = 4;
  if (this->contrada() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->contrada(), target);
  }

  // int32 tempo_in_carica = 5;
  if (this->tempo_in_carica() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->tempo_in_carica(), target);
  }

  // repeated uint32 score = 6;
  if (this->score_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      6,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _score_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->score_, target);
  }

  // bool sta_giocando = 7;
  if (this->sta_giocando() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->sta_giocando(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tdpalio.Player)
  return target;
}

size_t Player::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tdpalio.Player)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 score = 6;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->score_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _score_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // string nome = 1;
  if (this->nome().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->nome());
  }

  // string cognome = 2;
  if (this->cognome().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->cognome());
  }

  // string username = 3;
  if (this->username().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->username());
  }

  // int32 contrada = 4;
  if (this->contrada() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->contrada());
  }

  // int32 tempo_in_carica = 5;
  if (this->tempo_in_carica() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->tempo_in_carica());
  }

  // bool sta_giocando = 7;
  if (this->sta_giocando() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Player::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tdpalio.Player)
  GOOGLE_DCHECK_NE(&from, this);
  const Player* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Player>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tdpalio.Player)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tdpalio.Player)
    MergeFrom(*source);
  }
}

void Player::MergeFrom(const Player& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tdpalio.Player)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  score_.MergeFrom(from.score_);
  if (from.nome().size() > 0) {

    nome_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.nome_);
  }
  if (from.cognome().size() > 0) {

    cognome_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.cognome_);
  }
  if (from.username().size() > 0) {

    username_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  if (from.contrada() != 0) {
    set_contrada(from.contrada());
  }
  if (from.tempo_in_carica() != 0) {
    set_tempo_in_carica(from.tempo_in_carica());
  }
  if (from.sta_giocando() != 0) {
    set_sta_giocando(from.sta_giocando());
  }
}

void Player::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tdpalio.Player)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Player::CopyFrom(const Player& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tdpalio.Player)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Player::IsInitialized() const {
  return true;
}

void Player::Swap(Player* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Player::InternalSwap(Player* other) {
  using std::swap;
  score_.InternalSwap(&other->score_);
  nome_.Swap(&other->nome_);
  cognome_.Swap(&other->cognome_);
  username_.Swap(&other->username_);
  swap(contrada_, other->contrada_);
  swap(tempo_in_carica_, other->tempo_in_carica_);
  swap(sta_giocando_, other->sta_giocando_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Player::GetMetadata() const {
  protobuf_players_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_players_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Players::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Players::kGiocatoriFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Players::Players()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_players_2eproto::InitDefaultsPlayers();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tdpalio.Players)
}
Players::Players(const Players& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      giocatori_(from.giocatori_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:tdpalio.Players)
}

void Players::SharedCtor() {
  _cached_size_ = 0;
}

Players::~Players() {
  // @@protoc_insertion_point(destructor:tdpalio.Players)
  SharedDtor();
}

void Players::SharedDtor() {
}

void Players::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Players::descriptor() {
  ::protobuf_players_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_players_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Players& Players::default_instance() {
  ::protobuf_players_2eproto::InitDefaultsPlayers();
  return *internal_default_instance();
}

Players* Players::New(::google::protobuf::Arena* arena) const {
  Players* n = new Players;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Players::Clear() {
// @@protoc_insertion_point(message_clear_start:tdpalio.Players)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  giocatori_.Clear();
  _internal_metadata_.Clear();
}

bool Players::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tdpalio.Players)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .tdpalio.Player giocatori = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_giocatori()));
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
  // @@protoc_insertion_point(parse_success:tdpalio.Players)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tdpalio.Players)
  return false;
#undef DO_
}

void Players::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tdpalio.Players)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .tdpalio.Player giocatori = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->giocatori_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->giocatori(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tdpalio.Players)
}

::google::protobuf::uint8* Players::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tdpalio.Players)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .tdpalio.Player giocatori = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->giocatori_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->giocatori(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tdpalio.Players)
  return target;
}

size_t Players::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tdpalio.Players)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .tdpalio.Player giocatori = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->giocatori_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->giocatori(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Players::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tdpalio.Players)
  GOOGLE_DCHECK_NE(&from, this);
  const Players* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Players>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tdpalio.Players)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tdpalio.Players)
    MergeFrom(*source);
  }
}

void Players::MergeFrom(const Players& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tdpalio.Players)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  giocatori_.MergeFrom(from.giocatori_);
}

void Players::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tdpalio.Players)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Players::CopyFrom(const Players& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tdpalio.Players)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Players::IsInitialized() const {
  return true;
}

void Players::Swap(Players* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Players::InternalSwap(Players* other) {
  using std::swap;
  giocatori_.InternalSwap(&other->giocatori_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Players::GetMetadata() const {
  protobuf_players_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_players_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tdpalio

// @@protoc_insertion_point(global_scope)
