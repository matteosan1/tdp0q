// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: players.proto

#ifndef PROTOBUF_players_2eproto__INCLUDED
#define PROTOBUF_players_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
// @@protoc_insertion_point(includes)

namespace protobuf_players_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsPlayerImpl();
void InitDefaultsPlayer();
void InitDefaultsPlayersImpl();
void InitDefaultsPlayers();
inline void InitDefaults() {
  InitDefaultsPlayer();
  InitDefaultsPlayers();
}
}  // namespace protobuf_players_2eproto
namespace tdpalio {
class Player;
class PlayerDefaultTypeInternal;
extern PlayerDefaultTypeInternal _Player_default_instance_;
class Players;
class PlayersDefaultTypeInternal;
extern PlayersDefaultTypeInternal _Players_default_instance_;
}  // namespace tdpalio
namespace tdpalio {

// ===================================================================

class Player : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tdpalio.Player) */ {
 public:
  Player();
  virtual ~Player();

  Player(const Player& from);

  inline Player& operator=(const Player& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Player(Player&& from) noexcept
    : Player() {
    *this = ::std::move(from);
  }

  inline Player& operator=(Player&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Player& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Player* internal_default_instance() {
    return reinterpret_cast<const Player*>(
               &_Player_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Player* other);
  friend void swap(Player& a, Player& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Player* New() const PROTOBUF_FINAL { return New(NULL); }

  Player* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Player& from);
  void MergeFrom(const Player& from);
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
  void InternalSwap(Player* other);
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

  // repeated uint32 score = 6;
  int score_size() const;
  void clear_score();
  static const int kScoreFieldNumber = 6;
  ::google::protobuf::uint32 score(int index) const;
  void set_score(int index, ::google::protobuf::uint32 value);
  void add_score(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      score() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_score();

  // string nome = 1;
  void clear_nome();
  static const int kNomeFieldNumber = 1;
  const ::std::string& nome() const;
  void set_nome(const ::std::string& value);
  #if LANG_CXX11
  void set_nome(::std::string&& value);
  #endif
  void set_nome(const char* value);
  void set_nome(const char* value, size_t size);
  ::std::string* mutable_nome();
  ::std::string* release_nome();
  void set_allocated_nome(::std::string* nome);

  // string cognome = 2;
  void clear_cognome();
  static const int kCognomeFieldNumber = 2;
  const ::std::string& cognome() const;
  void set_cognome(const ::std::string& value);
  #if LANG_CXX11
  void set_cognome(::std::string&& value);
  #endif
  void set_cognome(const char* value);
  void set_cognome(const char* value, size_t size);
  ::std::string* mutable_cognome();
  ::std::string* release_cognome();
  void set_allocated_cognome(::std::string* cognome);

  // string username = 3;
  void clear_username();
  static const int kUsernameFieldNumber = 3;
  const ::std::string& username() const;
  void set_username(const ::std::string& value);
  #if LANG_CXX11
  void set_username(::std::string&& value);
  #endif
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  ::std::string* mutable_username();
  ::std::string* release_username();
  void set_allocated_username(::std::string* username);

  // int32 contrada = 4;
  void clear_contrada();
  static const int kContradaFieldNumber = 4;
  ::google::protobuf::int32 contrada() const;
  void set_contrada(::google::protobuf::int32 value);

  // int32 tempo_in_carica = 5;
  void clear_tempo_in_carica();
  static const int kTempoInCaricaFieldNumber = 5;
  ::google::protobuf::int32 tempo_in_carica() const;
  void set_tempo_in_carica(::google::protobuf::int32 value);

  // bool sta_giocando = 7;
  void clear_sta_giocando();
  static const int kStaGiocandoFieldNumber = 7;
  bool sta_giocando() const;
  void set_sta_giocando(bool value);

  // @@protoc_insertion_point(class_scope:tdpalio.Player)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > score_;
  mutable int _score_cached_byte_size_;
  ::google::protobuf::internal::ArenaStringPtr nome_;
  ::google::protobuf::internal::ArenaStringPtr cognome_;
  ::google::protobuf::internal::ArenaStringPtr username_;
  ::google::protobuf::int32 contrada_;
  ::google::protobuf::int32 tempo_in_carica_;
  bool sta_giocando_;
  mutable int _cached_size_;
  friend struct ::protobuf_players_2eproto::TableStruct;
  friend void ::protobuf_players_2eproto::InitDefaultsPlayerImpl();
};
// -------------------------------------------------------------------

class Players : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tdpalio.Players) */ {
 public:
  Players();
  virtual ~Players();

  Players(const Players& from);

  inline Players& operator=(const Players& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Players(Players&& from) noexcept
    : Players() {
    *this = ::std::move(from);
  }

  inline Players& operator=(Players&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Players& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Players* internal_default_instance() {
    return reinterpret_cast<const Players*>(
               &_Players_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Players* other);
  friend void swap(Players& a, Players& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Players* New() const PROTOBUF_FINAL { return New(NULL); }

  Players* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Players& from);
  void MergeFrom(const Players& from);
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
  void InternalSwap(Players* other);
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

  // repeated .tdpalio.Player giocatori = 1;
  int giocatori_size() const;
  void clear_giocatori();
  static const int kGiocatoriFieldNumber = 1;
  const ::tdpalio::Player& giocatori(int index) const;
  ::tdpalio::Player* mutable_giocatori(int index);
  ::tdpalio::Player* add_giocatori();
  ::google::protobuf::RepeatedPtrField< ::tdpalio::Player >*
      mutable_giocatori();
  const ::google::protobuf::RepeatedPtrField< ::tdpalio::Player >&
      giocatori() const;

  // @@protoc_insertion_point(class_scope:tdpalio.Players)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::tdpalio::Player > giocatori_;
  mutable int _cached_size_;
  friend struct ::protobuf_players_2eproto::TableStruct;
  friend void ::protobuf_players_2eproto::InitDefaultsPlayersImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Player

// string nome = 1;
inline void Player::clear_nome() {
  nome_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Player::nome() const {
  // @@protoc_insertion_point(field_get:tdpalio.Player.nome)
  return nome_.GetNoArena();
}
inline void Player::set_nome(const ::std::string& value) {
  
  nome_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tdpalio.Player.nome)
}
#if LANG_CXX11
inline void Player::set_nome(::std::string&& value) {
  
  nome_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tdpalio.Player.nome)
}
#endif
inline void Player::set_nome(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  nome_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tdpalio.Player.nome)
}
inline void Player::set_nome(const char* value, size_t size) {
  
  nome_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tdpalio.Player.nome)
}
inline ::std::string* Player::mutable_nome() {
  
  // @@protoc_insertion_point(field_mutable:tdpalio.Player.nome)
  return nome_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Player::release_nome() {
  // @@protoc_insertion_point(field_release:tdpalio.Player.nome)
  
  return nome_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Player::set_allocated_nome(::std::string* nome) {
  if (nome != NULL) {
    
  } else {
    
  }
  nome_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), nome);
  // @@protoc_insertion_point(field_set_allocated:tdpalio.Player.nome)
}

// string cognome = 2;
inline void Player::clear_cognome() {
  cognome_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Player::cognome() const {
  // @@protoc_insertion_point(field_get:tdpalio.Player.cognome)
  return cognome_.GetNoArena();
}
inline void Player::set_cognome(const ::std::string& value) {
  
  cognome_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tdpalio.Player.cognome)
}
#if LANG_CXX11
inline void Player::set_cognome(::std::string&& value) {
  
  cognome_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tdpalio.Player.cognome)
}
#endif
inline void Player::set_cognome(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  cognome_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tdpalio.Player.cognome)
}
inline void Player::set_cognome(const char* value, size_t size) {
  
  cognome_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tdpalio.Player.cognome)
}
inline ::std::string* Player::mutable_cognome() {
  
  // @@protoc_insertion_point(field_mutable:tdpalio.Player.cognome)
  return cognome_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Player::release_cognome() {
  // @@protoc_insertion_point(field_release:tdpalio.Player.cognome)
  
  return cognome_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Player::set_allocated_cognome(::std::string* cognome) {
  if (cognome != NULL) {
    
  } else {
    
  }
  cognome_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cognome);
  // @@protoc_insertion_point(field_set_allocated:tdpalio.Player.cognome)
}

// string username = 3;
inline void Player::clear_username() {
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Player::username() const {
  // @@protoc_insertion_point(field_get:tdpalio.Player.username)
  return username_.GetNoArena();
}
inline void Player::set_username(const ::std::string& value) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tdpalio.Player.username)
}
#if LANG_CXX11
inline void Player::set_username(::std::string&& value) {
  
  username_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tdpalio.Player.username)
}
#endif
inline void Player::set_username(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tdpalio.Player.username)
}
inline void Player::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tdpalio.Player.username)
}
inline ::std::string* Player::mutable_username() {
  
  // @@protoc_insertion_point(field_mutable:tdpalio.Player.username)
  return username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Player::release_username() {
  // @@protoc_insertion_point(field_release:tdpalio.Player.username)
  
  return username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Player::set_allocated_username(::std::string* username) {
  if (username != NULL) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:tdpalio.Player.username)
}

// int32 contrada = 4;
inline void Player::clear_contrada() {
  contrada_ = 0;
}
inline ::google::protobuf::int32 Player::contrada() const {
  // @@protoc_insertion_point(field_get:tdpalio.Player.contrada)
  return contrada_;
}
inline void Player::set_contrada(::google::protobuf::int32 value) {
  
  contrada_ = value;
  // @@protoc_insertion_point(field_set:tdpalio.Player.contrada)
}

// int32 tempo_in_carica = 5;
inline void Player::clear_tempo_in_carica() {
  tempo_in_carica_ = 0;
}
inline ::google::protobuf::int32 Player::tempo_in_carica() const {
  // @@protoc_insertion_point(field_get:tdpalio.Player.tempo_in_carica)
  return tempo_in_carica_;
}
inline void Player::set_tempo_in_carica(::google::protobuf::int32 value) {
  
  tempo_in_carica_ = value;
  // @@protoc_insertion_point(field_set:tdpalio.Player.tempo_in_carica)
}

// repeated uint32 score = 6;
inline int Player::score_size() const {
  return score_.size();
}
inline void Player::clear_score() {
  score_.Clear();
}
inline ::google::protobuf::uint32 Player::score(int index) const {
  // @@protoc_insertion_point(field_get:tdpalio.Player.score)
  return score_.Get(index);
}
inline void Player::set_score(int index, ::google::protobuf::uint32 value) {
  score_.Set(index, value);
  // @@protoc_insertion_point(field_set:tdpalio.Player.score)
}
inline void Player::add_score(::google::protobuf::uint32 value) {
  score_.Add(value);
  // @@protoc_insertion_point(field_add:tdpalio.Player.score)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
Player::score() const {
  // @@protoc_insertion_point(field_list:tdpalio.Player.score)
  return score_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
Player::mutable_score() {
  // @@protoc_insertion_point(field_mutable_list:tdpalio.Player.score)
  return &score_;
}

// bool sta_giocando = 7;
inline void Player::clear_sta_giocando() {
  sta_giocando_ = false;
}
inline bool Player::sta_giocando() const {
  // @@protoc_insertion_point(field_get:tdpalio.Player.sta_giocando)
  return sta_giocando_;
}
inline void Player::set_sta_giocando(bool value) {
  
  sta_giocando_ = value;
  // @@protoc_insertion_point(field_set:tdpalio.Player.sta_giocando)
}

// -------------------------------------------------------------------

// Players

// repeated .tdpalio.Player giocatori = 1;
inline int Players::giocatori_size() const {
  return giocatori_.size();
}
inline void Players::clear_giocatori() {
  giocatori_.Clear();
}
inline const ::tdpalio::Player& Players::giocatori(int index) const {
  // @@protoc_insertion_point(field_get:tdpalio.Players.giocatori)
  return giocatori_.Get(index);
}
inline ::tdpalio::Player* Players::mutable_giocatori(int index) {
  // @@protoc_insertion_point(field_mutable:tdpalio.Players.giocatori)
  return giocatori_.Mutable(index);
}
inline ::tdpalio::Player* Players::add_giocatori() {
  // @@protoc_insertion_point(field_add:tdpalio.Players.giocatori)
  return giocatori_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tdpalio::Player >*
Players::mutable_giocatori() {
  // @@protoc_insertion_point(field_mutable_list:tdpalio.Players.giocatori)
  return &giocatori_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tdpalio::Player >&
Players::giocatori() const {
  // @@protoc_insertion_point(field_list:tdpalio.Players.giocatori)
  return giocatori_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tdpalio

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_players_2eproto__INCLUDED
