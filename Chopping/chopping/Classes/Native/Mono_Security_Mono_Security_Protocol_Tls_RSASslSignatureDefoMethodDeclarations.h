#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t812;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t530;
// System.Byte[]
struct ByteU5BU5D_t102;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureDeformatter__ctor_m3214 (RSASslSignatureDeformatter_t812 * __this, AsymmetricAlgorithm_t530 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSASslSignatureDeformatter_VerifySignature_m3215 (RSASslSignatureDeformatter_t812 * __this, ByteU5BU5D_t102* ___rgbHash, ByteU5BU5D_t102* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSASslSignatureDeformatter_SetHashAlgorithm_m3216 (RSASslSignatureDeformatter_t812 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureDeformatter_SetKey_m3217 (RSASslSignatureDeformatter_t812 * __this, AsymmetricAlgorithm_t530 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
