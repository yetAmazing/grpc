/*
 *
 * Copyright 2015, Google Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */


// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: reflection.proto
// Original file comments:
// Copyright 2016, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Service exported by server reflection
//
#ifndef GRPC_reflection_2eproto__INCLUDED
#define GRPC_reflection_2eproto__INCLUDED

#include <grpc++/ext/reflection.pb.h>

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace grpc {
namespace reflection {
namespace v1alpha {

class ServerReflection GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // The reflection service is structured as a bidirectional stream, ensuring
    // all related requests go to a single server.
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::grpc::reflection::v1alpha::ServerReflectionRequest, ::grpc::reflection::v1alpha::ServerReflectionResponse>> ServerReflectionInfo(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::grpc::reflection::v1alpha::ServerReflectionRequest, ::grpc::reflection::v1alpha::ServerReflectionResponse>>(ServerReflectionInfoRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::grpc::reflection::v1alpha::ServerReflectionRequest, ::grpc::reflection::v1alpha::ServerReflectionResponse>> AsyncServerReflectionInfo(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::grpc::reflection::v1alpha::ServerReflectionRequest, ::grpc::reflection::v1alpha::ServerReflectionResponse>>(AsyncServerReflectionInfoRaw(context, cq, tag));
    }
  private:
    virtual ::grpc::ClientReaderWriterInterface< ::grpc::reflection::v1alpha::ServerReflectionRequest, ::grpc::reflection::v1alpha::ServerReflectionResponse>* ServerReflectionInfoRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::grpc::reflection::v1alpha::ServerReflectionRequest, ::grpc::reflection::v1alpha::ServerReflectionResponse>* AsyncServerReflectionInfoRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReaderWriter< ::grpc::reflection::v1alpha::ServerReflectionRequest, ::grpc::reflection::v1alpha::ServerReflectionResponse>> ServerReflectionInfo(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::grpc::reflection::v1alpha::ServerReflectionRequest, ::grpc::reflection::v1alpha::ServerReflectionResponse>>(ServerReflectionInfoRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::grpc::reflection::v1alpha::ServerReflectionRequest, ::grpc::reflection::v1alpha::ServerReflectionResponse>> AsyncServerReflectionInfo(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::grpc::reflection::v1alpha::ServerReflectionRequest, ::grpc::reflection::v1alpha::ServerReflectionResponse>>(AsyncServerReflectionInfoRaw(context, cq, tag));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientReaderWriter< ::grpc::reflection::v1alpha::ServerReflectionRequest, ::grpc::reflection::v1alpha::ServerReflectionResponse>* ServerReflectionInfoRaw(::grpc::ClientContext* context) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReaderWriter< ::grpc::reflection::v1alpha::ServerReflectionRequest, ::grpc::reflection::v1alpha::ServerReflectionResponse>* AsyncServerReflectionInfoRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_ServerReflectionInfo_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // The reflection service is structured as a bidirectional stream, ensuring
    // all related requests go to a single server.
    virtual ::grpc::Status ServerReflectionInfo(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::grpc::reflection::v1alpha::ServerReflectionResponse, ::grpc::reflection::v1alpha::ServerReflectionRequest>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_ServerReflectionInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ServerReflectionInfo() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ServerReflectionInfo() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ServerReflectionInfo(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::grpc::reflection::v1alpha::ServerReflectionResponse, ::grpc::reflection::v1alpha::ServerReflectionRequest>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestServerReflectionInfo(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::reflection::v1alpha::ServerReflectionResponse, ::grpc::reflection::v1alpha::ServerReflectionRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ServerReflectionInfo<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_ServerReflectionInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ServerReflectionInfo() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ServerReflectionInfo() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ServerReflectionInfo(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::grpc::reflection::v1alpha::ServerReflectionResponse, ::grpc::reflection::v1alpha::ServerReflectionRequest>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  typedef Service StreamedUnaryService;
};

}  // namespace v1alpha
}  // namespace reflection
}  // namespace grpc


#endif  // GRPC_reflection_2eproto__INCLUDED
