#pragma once
#include <stdint.h>
// System.IO.MemoryStream
struct MemoryStream_t331;
// System.Byte[]
struct ByteU5BU5D_t102;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// Mono.Security.Protocol.Tls.TlsStream
struct  TlsStream_t800  : public Stream_t808
{
	// System.Boolean Mono.Security.Protocol.Tls.TlsStream::canRead
	bool ___canRead_1;
	// System.Boolean Mono.Security.Protocol.Tls.TlsStream::canWrite
	bool ___canWrite_2;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.TlsStream::buffer
	MemoryStream_t331 * ___buffer_3;
	// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::temp
	ByteU5BU5D_t102* ___temp_4;
};
