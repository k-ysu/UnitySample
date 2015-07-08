#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t943;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t762;
// System.Byte[]
struct ByteU5BU5D_t102;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C" void MACAlgorithm__ctor_m4689 (MACAlgorithm_t943 * __this, SymmetricAlgorithm_t762 * ___algorithm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C" void MACAlgorithm_Initialize_m4690 (MACAlgorithm_t943 * __this, ByteU5BU5D_t102* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void MACAlgorithm_Core_m4691 (MACAlgorithm_t943 * __this, ByteU5BU5D_t102* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C" ByteU5BU5D_t102* MACAlgorithm_Final_m4692 (MACAlgorithm_t943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
