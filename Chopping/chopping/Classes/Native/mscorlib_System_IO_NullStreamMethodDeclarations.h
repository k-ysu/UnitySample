﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.NullStream
struct NullStream_t1042;
// System.Byte[]
struct ByteU5BU5D_t102;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.NullStream::.ctor()
extern "C" void NullStream__ctor_m5525 (NullStream_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.NullStream::get_CanRead()
extern "C" bool NullStream_get_CanRead_m5526 (NullStream_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.NullStream::get_CanSeek()
extern "C" bool NullStream_get_CanSeek_m5527 (NullStream_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.NullStream::get_CanWrite()
extern "C" bool NullStream_get_CanWrite_m5528 (NullStream_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.NullStream::get_Length()
extern "C" int64_t NullStream_get_Length_m5529 (NullStream_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.NullStream::get_Position()
extern "C" int64_t NullStream_get_Position_m5530 (NullStream_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::set_Position(System.Int64)
extern "C" void NullStream_set_Position_m5531 (NullStream_t1042 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::Flush()
extern "C" void NullStream_Flush_m5532 (NullStream_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.NullStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t NullStream_Read_m5533 (NullStream_t1042 * __this, ByteU5BU5D_t102* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.NullStream::ReadByte()
extern "C" int32_t NullStream_ReadByte_m5534 (NullStream_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.NullStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t NullStream_Seek_m5535 (NullStream_t1042 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::SetLength(System.Int64)
extern "C" void NullStream_SetLength_m5536 (NullStream_t1042 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void NullStream_Write_m5537 (NullStream_t1042 * __this, ByteU5BU5D_t102* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::WriteByte(System.Byte)
extern "C" void NullStream_WriteByte_m5538 (NullStream_t1042 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
