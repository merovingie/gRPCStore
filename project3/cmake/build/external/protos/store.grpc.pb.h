// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: protos/store.proto
#ifndef GRPC_protos_2fstore_2eproto__INCLUDED
#define GRPC_protos_2fstore_2eproto__INCLUDED

#include "protos/store.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace store {

// The store service definition.
class Store final {
 public:
  static constexpr char const* service_full_name() {
    return "store.Store";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Requests list of prices for a product from store, for different vendors registered at the store
    virtual ::grpc::Status getProducts(::grpc::ClientContext* context, const ::store::ProductQuery& request, ::store::ProductReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::store::ProductReply>> AsyncgetProducts(::grpc::ClientContext* context, const ::store::ProductQuery& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::store::ProductReply>>(AsyncgetProductsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::store::ProductReply>> PrepareAsyncgetProducts(::grpc::ClientContext* context, const ::store::ProductQuery& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::store::ProductReply>>(PrepareAsyncgetProductsRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Requests list of prices for a product from store, for different vendors registered at the store
      virtual void getProducts(::grpc::ClientContext* context, const ::store::ProductQuery* request, ::store::ProductReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void getProducts(::grpc::ClientContext* context, const ::store::ProductQuery* request, ::store::ProductReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::store::ProductReply>* AsyncgetProductsRaw(::grpc::ClientContext* context, const ::store::ProductQuery& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::store::ProductReply>* PrepareAsyncgetProductsRaw(::grpc::ClientContext* context, const ::store::ProductQuery& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status getProducts(::grpc::ClientContext* context, const ::store::ProductQuery& request, ::store::ProductReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::store::ProductReply>> AsyncgetProducts(::grpc::ClientContext* context, const ::store::ProductQuery& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::store::ProductReply>>(AsyncgetProductsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::store::ProductReply>> PrepareAsyncgetProducts(::grpc::ClientContext* context, const ::store::ProductQuery& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::store::ProductReply>>(PrepareAsyncgetProductsRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void getProducts(::grpc::ClientContext* context, const ::store::ProductQuery* request, ::store::ProductReply* response, std::function<void(::grpc::Status)>) override;
      void getProducts(::grpc::ClientContext* context, const ::store::ProductQuery* request, ::store::ProductReply* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::store::ProductReply>* AsyncgetProductsRaw(::grpc::ClientContext* context, const ::store::ProductQuery& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::store::ProductReply>* PrepareAsyncgetProductsRaw(::grpc::ClientContext* context, const ::store::ProductQuery& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_getProducts_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Requests list of prices for a product from store, for different vendors registered at the store
    virtual ::grpc::Status getProducts(::grpc::ServerContext* context, const ::store::ProductQuery* request, ::store::ProductReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_getProducts : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_getProducts() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_getProducts() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getProducts(::grpc::ServerContext* /*context*/, const ::store::ProductQuery* /*request*/, ::store::ProductReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestgetProducts(::grpc::ServerContext* context, ::store::ProductQuery* request, ::grpc::ServerAsyncResponseWriter< ::store::ProductReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_getProducts<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_getProducts : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_getProducts() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::store::ProductQuery, ::store::ProductReply>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::store::ProductQuery* request, ::store::ProductReply* response) { return this->getProducts(context, request, response); }));}
    void SetMessageAllocatorFor_getProducts(
        ::grpc::MessageAllocator< ::store::ProductQuery, ::store::ProductReply>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::store::ProductQuery, ::store::ProductReply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_getProducts() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getProducts(::grpc::ServerContext* /*context*/, const ::store::ProductQuery* /*request*/, ::store::ProductReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* getProducts(
      ::grpc::CallbackServerContext* /*context*/, const ::store::ProductQuery* /*request*/, ::store::ProductReply* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_getProducts<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_getProducts : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_getProducts() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_getProducts() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getProducts(::grpc::ServerContext* /*context*/, const ::store::ProductQuery* /*request*/, ::store::ProductReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_getProducts : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_getProducts() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_getProducts() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getProducts(::grpc::ServerContext* /*context*/, const ::store::ProductQuery* /*request*/, ::store::ProductReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestgetProducts(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_getProducts : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_getProducts() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->getProducts(context, request, response); }));
    }
    ~WithRawCallbackMethod_getProducts() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getProducts(::grpc::ServerContext* /*context*/, const ::store::ProductQuery* /*request*/, ::store::ProductReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* getProducts(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_getProducts : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_getProducts() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::store::ProductQuery, ::store::ProductReply>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::store::ProductQuery, ::store::ProductReply>* streamer) {
                       return this->StreamedgetProducts(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_getProducts() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status getProducts(::grpc::ServerContext* /*context*/, const ::store::ProductQuery* /*request*/, ::store::ProductReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedgetProducts(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::store::ProductQuery,::store::ProductReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_getProducts<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_getProducts<Service > StreamedService;
};

}  // namespace store


#endif  // GRPC_protos_2fstore_2eproto__INCLUDED
