#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF7Encoding
struct UTF7Encoding_t1308;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t300;
// System.Byte[]
struct ByteU5BU5D_t102;
// System.Text.Decoder
struct Decoder_t1020;
// System.String
struct String_t;

// System.Void System.Text.UTF7Encoding::.ctor()
extern "C" void UTF7Encoding__ctor_m7132 (UTF7Encoding_t1308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.ctor(System.Boolean)
extern "C" void UTF7Encoding__ctor_m7133 (UTF7Encoding_t1308 * __this, bool ___allowOptionals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.cctor()
extern "C" void UTF7Encoding__cctor_m7134 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetHashCode()
extern "C" int32_t UTF7Encoding_GetHashCode_m7135 (UTF7Encoding_t1308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF7Encoding::Equals(System.Object)
extern "C" bool UTF7Encoding_Equals_m7136 (UTF7Encoding_t1308 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean,System.Boolean)
extern "C" int32_t UTF7Encoding_InternalGetByteCount_m7137 (Object_t * __this /* static, unused */, CharU5BU5D_t300* ___chars, int32_t ___index, int32_t ___count, bool ___flush, int32_t ___leftOver, bool ___isInShifted, bool ___allowOptionals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UTF7Encoding_GetByteCount_m7138 (UTF7Encoding_t1308 * __this, CharU5BU5D_t300* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean,System.Int32&,System.Boolean&,System.Boolean)
extern "C" int32_t UTF7Encoding_InternalGetBytes_m7139 (Object_t * __this /* static, unused */, CharU5BU5D_t300* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t102* ___bytes, int32_t ___byteIndex, bool ___flush, int32_t* ___leftOver, bool* ___isInShifted, bool ___allowOptionals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF7Encoding_GetBytes_m7140 (UTF7Encoding_t1308 * __this, CharU5BU5D_t300* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t102* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C" int32_t UTF7Encoding_InternalGetCharCount_m7141 (Object_t * __this /* static, unused */, ByteU5BU5D_t102* ___bytes, int32_t ___index, int32_t ___count, int32_t ___leftOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UTF7Encoding_GetCharCount_m7142 (UTF7Encoding_t1308 * __this, ByteU5BU5D_t102* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Int32&)
extern "C" int32_t UTF7Encoding_InternalGetChars_m7143 (Object_t * __this /* static, unused */, ByteU5BU5D_t102* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t300* ___chars, int32_t ___charIndex, int32_t* ___leftOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF7Encoding_GetChars_m7144 (UTF7Encoding_t1308 * __this, ByteU5BU5D_t102* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t300* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxByteCount(System.Int32)
extern "C" int32_t UTF7Encoding_GetMaxByteCount_m7145 (UTF7Encoding_t1308 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxCharCount(System.Int32)
extern "C" int32_t UTF7Encoding_GetMaxCharCount_m7146 (UTF7Encoding_t1308 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF7Encoding::GetDecoder()
extern "C" Decoder_t1020 * UTF7Encoding_GetDecoder_m7147 (UTF7Encoding_t1308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t UTF7Encoding_GetByteCount_m7148 (UTF7Encoding_t1308 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.String)
extern "C" int32_t UTF7Encoding_GetByteCount_m7149 (UTF7Encoding_t1308 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UTF7Encoding_GetBytes_m7150 (UTF7Encoding_t1308 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF7Encoding_GetBytes_m7151 (UTF7Encoding_t1308 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t102* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF7Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* UTF7Encoding_GetString_m7152 (UTF7Encoding_t1308 * __this, ByteU5BU5D_t102* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
