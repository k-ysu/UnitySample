#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t1287;
// System.Char[]
struct CharU5BU5D_t300;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t102;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1298;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1289;
// System.Text.Decoder
struct Decoder_t1020;

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C" void ASCIIEncoding__ctor_m6958 (ASCIIEncoding_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m6959 (ASCIIEncoding_t1287 * __this, CharU5BU5D_t300* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C" int32_t ASCIIEncoding_GetByteCount_m6960 (ASCIIEncoding_t1287 * __this, String_t* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m6961 (ASCIIEncoding_t1287 * __this, CharU5BU5D_t300* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t102* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m6962 (ASCIIEncoding_t1287 * __this, CharU5BU5D_t300* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t102* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1298 ** ___buffer, CharU5BU5D_t300** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m6963 (ASCIIEncoding_t1287 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t102* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m6964 (ASCIIEncoding_t1287 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t102* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1298 ** ___buffer, CharU5BU5D_t300** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetCharCount_m6965 (ASCIIEncoding_t1287 * __this, ByteU5BU5D_t102* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetChars_m6966 (ASCIIEncoding_t1287 * __this, ByteU5BU5D_t102* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t300* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C" int32_t ASCIIEncoding_GetChars_m6967 (ASCIIEncoding_t1287 * __this, ByteU5BU5D_t102* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t300* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t1289 ** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxByteCount_m6968 (ASCIIEncoding_t1287 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxCharCount_m6969 (ASCIIEncoding_t1287 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ASCIIEncoding_GetString_m6970 (ASCIIEncoding_t1287 * __this, ByteU5BU5D_t102* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m6971 (ASCIIEncoding_t1287 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m6972 (ASCIIEncoding_t1287 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C" Decoder_t1020 * ASCIIEncoding_GetDecoder_m6973 (ASCIIEncoding_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
