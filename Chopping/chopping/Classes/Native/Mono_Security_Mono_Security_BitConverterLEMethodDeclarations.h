#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.BitConverterLE
struct BitConverterLE_t746;
// System.Byte[]
struct ByteU5BU5D_t102;

// System.Byte[] Mono.Security.BitConverterLE::GetUIntBytes(System.Byte*)
extern "C" ByteU5BU5D_t102* BitConverterLE_GetUIntBytes_m2761 (Object_t * __this /* static, unused */, uint8_t* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int32)
extern "C" ByteU5BU5D_t102* BitConverterLE_GetBytes_m2762 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
