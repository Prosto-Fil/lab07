// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: suggest.proto

#include "suggest.pb.h"
#include "suggest.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace suggest {

static const char* Suggest_method_names[] = {
  "/suggest.Suggest/Answer",
};

std::unique_ptr< Suggest::Stub> Suggest::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Suggest::Stub> stub(new Suggest::Stub(channel));
  return stub;
}

Suggest::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Answer_(Suggest_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Suggest::Stub::Answer(::grpc::ClientContext* context, const ::suggest::SuggestRequest& request, ::suggest::SuggestResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Answer_, context, request, response);
}

void Suggest::Stub::experimental_async::Answer(::grpc::ClientContext* context, const ::suggest::SuggestRequest* request, ::suggest::SuggestResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Answer_, context, request, response, std::move(f));
}

void Suggest::Stub::experimental_async::Answer(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::suggest::SuggestResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Answer_, context, request, response, std::move(f));
}

void Suggest::Stub::experimental_async::Answer(::grpc::ClientContext* context, const ::suggest::SuggestRequest* request, ::suggest::SuggestResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Answer_, context, request, response, reactor);
}

void Suggest::Stub::experimental_async::Answer(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::suggest::SuggestResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Answer_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::suggest::SuggestResponse>* Suggest::Stub::AsyncAnswerRaw(::grpc::ClientContext* context, const ::suggest::SuggestRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::suggest::SuggestResponse>::Create(channel_.get(), cq, rpcmethod_Answer_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::suggest::SuggestResponse>* Suggest::Stub::PrepareAsyncAnswerRaw(::grpc::ClientContext* context, const ::suggest::SuggestRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::suggest::SuggestResponse>::Create(channel_.get(), cq, rpcmethod_Answer_, context, request, false);
}

Suggest::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Suggest_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Suggest::Service, ::suggest::SuggestRequest, ::suggest::SuggestResponse>(
          [](Suggest::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::suggest::SuggestRequest* req,
             ::suggest::SuggestResponse* resp) {
               return service->Answer(ctx, req, resp);
             }, this)));
}

Suggest::Service::~Service() {
}

::grpc::Status Suggest::Service::Answer(::grpc::ServerContext* context, const ::suggest::SuggestRequest* request, ::suggest::SuggestResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace suggest

