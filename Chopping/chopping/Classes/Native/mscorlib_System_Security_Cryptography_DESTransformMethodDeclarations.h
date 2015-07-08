#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESTransform
struct DESTransform_t1239;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t762;
// System.Byte[]
struct ByteU5BU5D_t102;
// System.UInt32[]
struct UInt32U5BU5D_t739;

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
extern "C" void DESTransform__ctor_m6610 (DESTransform_t1239 * __this, SymmetricAlgorithm_t762 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t102* ___key, ByteU5BU5D_t102* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
extern "C" void DESTransform__cctor_m6611 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
extern "C" uint32_t DESTransform_CipherFunct_m6612 (DESTransform_t1239 * __this, uint32_t ___r, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
extern "C" void DESTransform_Permutation_m6613 (Object_t * __this /* static, unused */, ByteU5BU5D_t102* ___input, ByteU5BU5D_t102* ___output, UInt32U5BU5D_t739* ___permTab, bool ___preSwap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
extern "C" void DESTransform_BSwap_m6614 (Object_t * __this /* static, unused */, ByteU5BU5D_t102* ___byteBuff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
extern "C" void DESTransform_SetKey_m6615 (DESTransform_t1239 * __this, ByteU5BU5D_t102* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
extern "C" void DESTransform_ProcessBlock_m6616 (DESTransform_t1239 * __this, ByteU5BU5D_t102* ___input, ByteU5BU5D_t102* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void DESTransform_ECB_m6617 (DESTransform_t1239 * __this, ByteU5BU5D_t102* ___input, ByteU5BU5D_t102* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t102* DESTransform_GetStrongKey_m6618 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
