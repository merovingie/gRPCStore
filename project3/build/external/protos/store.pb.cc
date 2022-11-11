// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/store.proto

#include "protos/store.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace store {
constexpr ProductQuery::ProductQuery(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : product_name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct ProductQueryDefaultTypeInternal {
  constexpr ProductQueryDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ProductQueryDefaultTypeInternal() {}
  union {
    ProductQuery _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ProductQueryDefaultTypeInternal _ProductQuery_default_instance_;
constexpr ProductReply::ProductReply(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : products_(){}
struct ProductReplyDefaultTypeInternal {
  constexpr ProductReplyDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ProductReplyDefaultTypeInternal() {}
  union {
    ProductReply _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ProductReplyDefaultTypeInternal _ProductReply_default_instance_;
constexpr ProductInfo::ProductInfo(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : vendor_id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , price_(0){}
struct ProductInfoDefaultTypeInternal {
  constexpr ProductInfoDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ProductInfoDefaultTypeInternal() {}
  union {
    ProductInfo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ProductInfoDefaultTypeInternal _ProductInfo_default_instance_;
}  // namespace store
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protos_2fstore_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_protos_2fstore_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protos_2fstore_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protos_2fstore_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::store::ProductQuery, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::store::ProductQuery, product_name_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::store::ProductReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::store::ProductReply, products_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::store::ProductInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::store::ProductInfo, price_),
  PROTOBUF_FIELD_OFFSET(::store::ProductInfo, vendor_id_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::store::ProductQuery)},
  { 6, -1, sizeof(::store::ProductReply)},
  { 12, -1, sizeof(::store::ProductInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::store::_ProductQuery_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::store::_ProductReply_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::store::_ProductInfo_default_instance_),
};

const char descriptor_table_protodef_protos_2fstore_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022protos/store.proto\022\005store\"$\n\014ProductQu"
  "ery\022\024\n\014product_name\030\001 \001(\t\"4\n\014ProductRepl"
  "y\022$\n\010products\030\001 \003(\0132\022.store.ProductInfo\""
  "/\n\013ProductInfo\022\r\n\005price\030\001 \001(\001\022\021\n\tvendor_"
  "id\030\002 \001(\t2B\n\005Store\0229\n\013getProducts\022\023.store"
  ".ProductQuery\032\023.store.ProductReply\"\000b\006pr"
  "oto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protos_2fstore_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protos_2fstore_2eproto = {
  false, false, 244, descriptor_table_protodef_protos_2fstore_2eproto, "protos/store.proto", 
  &descriptor_table_protos_2fstore_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_protos_2fstore_2eproto::offsets,
  file_level_metadata_protos_2fstore_2eproto, file_level_enum_descriptors_protos_2fstore_2eproto, file_level_service_descriptors_protos_2fstore_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_protos_2fstore_2eproto_getter() {
  return &descriptor_table_protos_2fstore_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_protos_2fstore_2eproto(&descriptor_table_protos_2fstore_2eproto);
namespace store {

// ===================================================================

class ProductQuery::_Internal {
 public:
};

ProductQuery::ProductQuery(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:store.ProductQuery)
}
ProductQuery::ProductQuery(const ProductQuery& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  product_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_product_name().empty()) {
    product_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_product_name(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:store.ProductQuery)
}

inline void ProductQuery::SharedCtor() {
product_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

ProductQuery::~ProductQuery() {
  // @@protoc_insertion_point(destructor:store.ProductQuery)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ProductQuery::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  product_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ProductQuery::ArenaDtor(void* object) {
  ProductQuery* _this = reinterpret_cast< ProductQuery* >(object);
  (void)_this;
}
void ProductQuery::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ProductQuery::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ProductQuery::Clear() {
// @@protoc_insertion_point(message_clear_start:store.ProductQuery)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  product_name_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ProductQuery::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string product_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_product_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "store.ProductQuery.product_name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ProductQuery::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:store.ProductQuery)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string product_name = 1;
  if (!this->_internal_product_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_product_name().data(), static_cast<int>(this->_internal_product_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "store.ProductQuery.product_name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_product_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:store.ProductQuery)
  return target;
}

size_t ProductQuery::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:store.ProductQuery)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string product_name = 1;
  if (!this->_internal_product_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_product_name());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ProductQuery::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ProductQuery::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ProductQuery::GetClassData() const { return &_class_data_; }

void ProductQuery::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<ProductQuery *>(to)->MergeFrom(
      static_cast<const ProductQuery &>(from));
}


void ProductQuery::MergeFrom(const ProductQuery& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:store.ProductQuery)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_product_name().empty()) {
    _internal_set_product_name(from._internal_product_name());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ProductQuery::CopyFrom(const ProductQuery& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:store.ProductQuery)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProductQuery::IsInitialized() const {
  return true;
}

void ProductQuery::InternalSwap(ProductQuery* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &product_name_, GetArenaForAllocation(),
      &other->product_name_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata ProductQuery::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_protos_2fstore_2eproto_getter, &descriptor_table_protos_2fstore_2eproto_once,
      file_level_metadata_protos_2fstore_2eproto[0]);
}

// ===================================================================

class ProductReply::_Internal {
 public:
};

ProductReply::ProductReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  products_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:store.ProductReply)
}
ProductReply::ProductReply(const ProductReply& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      products_(from.products_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:store.ProductReply)
}

inline void ProductReply::SharedCtor() {
}

ProductReply::~ProductReply() {
  // @@protoc_insertion_point(destructor:store.ProductReply)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ProductReply::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ProductReply::ArenaDtor(void* object) {
  ProductReply* _this = reinterpret_cast< ProductReply* >(object);
  (void)_this;
}
void ProductReply::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ProductReply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ProductReply::Clear() {
// @@protoc_insertion_point(message_clear_start:store.ProductReply)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  products_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ProductReply::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .store.ProductInfo products = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_products(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ProductReply::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:store.ProductReply)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .store.ProductInfo products = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_products_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_products(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:store.ProductReply)
  return target;
}

size_t ProductReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:store.ProductReply)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .store.ProductInfo products = 1;
  total_size += 1UL * this->_internal_products_size();
  for (const auto& msg : this->products_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ProductReply::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ProductReply::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ProductReply::GetClassData() const { return &_class_data_; }

void ProductReply::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<ProductReply *>(to)->MergeFrom(
      static_cast<const ProductReply &>(from));
}


void ProductReply::MergeFrom(const ProductReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:store.ProductReply)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  products_.MergeFrom(from.products_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ProductReply::CopyFrom(const ProductReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:store.ProductReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProductReply::IsInitialized() const {
  return true;
}

void ProductReply::InternalSwap(ProductReply* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  products_.InternalSwap(&other->products_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ProductReply::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_protos_2fstore_2eproto_getter, &descriptor_table_protos_2fstore_2eproto_once,
      file_level_metadata_protos_2fstore_2eproto[1]);
}

// ===================================================================

class ProductInfo::_Internal {
 public:
};

ProductInfo::ProductInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:store.ProductInfo)
}
ProductInfo::ProductInfo(const ProductInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  vendor_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_vendor_id().empty()) {
    vendor_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_vendor_id(), 
      GetArenaForAllocation());
  }
  price_ = from.price_;
  // @@protoc_insertion_point(copy_constructor:store.ProductInfo)
}

inline void ProductInfo::SharedCtor() {
vendor_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
price_ = 0;
}

ProductInfo::~ProductInfo() {
  // @@protoc_insertion_point(destructor:store.ProductInfo)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ProductInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  vendor_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ProductInfo::ArenaDtor(void* object) {
  ProductInfo* _this = reinterpret_cast< ProductInfo* >(object);
  (void)_this;
}
void ProductInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ProductInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ProductInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:store.ProductInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  vendor_id_.ClearToEmpty();
  price_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ProductInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // double price = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          price_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // string vendor_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_vendor_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "store.ProductInfo.vendor_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ProductInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:store.ProductInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double price = 1;
  if (!(this->_internal_price() <= 0 && this->_internal_price() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_price(), target);
  }

  // string vendor_id = 2;
  if (!this->_internal_vendor_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_vendor_id().data(), static_cast<int>(this->_internal_vendor_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "store.ProductInfo.vendor_id");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_vendor_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:store.ProductInfo)
  return target;
}

size_t ProductInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:store.ProductInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string vendor_id = 2;
  if (!this->_internal_vendor_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_vendor_id());
  }

  // double price = 1;
  if (!(this->_internal_price() <= 0 && this->_internal_price() >= 0)) {
    total_size += 1 + 8;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ProductInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ProductInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ProductInfo::GetClassData() const { return &_class_data_; }

void ProductInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<ProductInfo *>(to)->MergeFrom(
      static_cast<const ProductInfo &>(from));
}


void ProductInfo::MergeFrom(const ProductInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:store.ProductInfo)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_vendor_id().empty()) {
    _internal_set_vendor_id(from._internal_vendor_id());
  }
  if (!(from._internal_price() <= 0 && from._internal_price() >= 0)) {
    _internal_set_price(from._internal_price());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ProductInfo::CopyFrom(const ProductInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:store.ProductInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProductInfo::IsInitialized() const {
  return true;
}

void ProductInfo::InternalSwap(ProductInfo* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &vendor_id_, GetArenaForAllocation(),
      &other->vendor_id_, other->GetArenaForAllocation()
  );
  swap(price_, other->price_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ProductInfo::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_protos_2fstore_2eproto_getter, &descriptor_table_protos_2fstore_2eproto_once,
      file_level_metadata_protos_2fstore_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace store
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::store::ProductQuery* Arena::CreateMaybeMessage< ::store::ProductQuery >(Arena* arena) {
  return Arena::CreateMessageInternal< ::store::ProductQuery >(arena);
}
template<> PROTOBUF_NOINLINE ::store::ProductReply* Arena::CreateMaybeMessage< ::store::ProductReply >(Arena* arena) {
  return Arena::CreateMessageInternal< ::store::ProductReply >(arena);
}
template<> PROTOBUF_NOINLINE ::store::ProductInfo* Arena::CreateMaybeMessage< ::store::ProductInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::store::ProductInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
