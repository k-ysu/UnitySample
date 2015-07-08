#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
struct TlsServerHello_t839;
// Mono.Security.Protocol.Tls.Context
struct Context_t785;
// System.Byte[]
struct ByteU5BU5D_t102;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerHello__ctor_m3459 (TlsServerHello_t839 * __this, Context_t785 * ___context, ByteU5BU5D_t102* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
extern "C" void TlsServerHello_Update_m3460 (TlsServerHello_t839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
extern "C" void TlsServerHello_ProcessAsSsl3_m3461 (TlsServerHello_t839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
extern "C" void TlsServerHello_ProcessAsTls1_m3462 (TlsServerHello_t839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
extern "C" void TlsServerHello_processProtocol_m3463 (TlsServerHello_t839 * __this, int16_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
