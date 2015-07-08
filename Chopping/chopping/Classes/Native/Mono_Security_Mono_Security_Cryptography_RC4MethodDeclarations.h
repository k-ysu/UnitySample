#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.RC4
struct RC4_t751;
// System.Byte[]
struct ByteU5BU5D_t102;

// System.Void Mono.Security.Cryptography.RC4::.ctor()
extern "C" void RC4__ctor_m2826 (RC4_t751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RC4::.cctor()
extern "C" void RC4__cctor_m2827 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RC4::get_IV()
extern "C" ByteU5BU5D_t102* RC4_get_IV_m2828 (RC4_t751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RC4::set_IV(System.Byte[])
extern "C" void RC4_set_IV_m2829 (RC4_t751 * __this, ByteU5BU5D_t102* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
