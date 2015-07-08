#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t809;
// System.IO.Stream
struct Stream_t808;
// System.Byte[]
struct ByteU5BU5D_t102;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t65;
// System.Threading.WaitHandle
struct WaitHandle_t854;
// System.AsyncCallback
struct AsyncCallback_t45;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3163 (ReceiveRecordAsyncResult_t809 * __this, AsyncCallback_t45 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t102* ___initialBuffer, Stream_t808 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t808 * ReceiveRecordAsyncResult_get_Record_m3164 (ReceiveRecordAsyncResult_t809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t102* ReceiveRecordAsyncResult_get_ResultingBuffer_m3165 (ReceiveRecordAsyncResult_t809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t102* ReceiveRecordAsyncResult_get_InitialBuffer_m3166 (ReceiveRecordAsyncResult_t809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3167 (ReceiveRecordAsyncResult_t809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t65 * ReceiveRecordAsyncResult_get_AsyncException_m3168 (ReceiveRecordAsyncResult_t809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3169 (ReceiveRecordAsyncResult_t809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t854 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3170 (ReceiveRecordAsyncResult_t809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3171 (ReceiveRecordAsyncResult_t809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3172 (ReceiveRecordAsyncResult_t809 * __this, Exception_t65 * ___ex, ByteU5BU5D_t102* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3173 (ReceiveRecordAsyncResult_t809 * __this, Exception_t65 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3174 (ReceiveRecordAsyncResult_t809 * __this, ByteU5BU5D_t102* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
