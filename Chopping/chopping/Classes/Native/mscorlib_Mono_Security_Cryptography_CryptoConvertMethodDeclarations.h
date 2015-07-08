﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.CryptoConvert
struct CryptoConvert_t937;
// System.Byte[]
struct ByteU5BU5D_t102;
// System.Security.Cryptography.RSA
struct RSA_t655;

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C" int32_t CryptoConvert_ToInt32LE_m4623 (Object_t * __this /* static, unused */, ByteU5BU5D_t102* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C" uint32_t CryptoConvert_ToUInt32LE_m4624 (Object_t * __this /* static, unused */, ByteU5BU5D_t102* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C" ByteU5BU5D_t102* CryptoConvert_GetBytesLE_m4625 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t102* CryptoConvert_ToCapiPrivateKeyBlob_m4626 (Object_t * __this /* static, unused */, RSA_t655 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C" RSA_t655 * CryptoConvert_FromCapiPublicKeyBlob_m4627 (Object_t * __this /* static, unused */, ByteU5BU5D_t102* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t655 * CryptoConvert_FromCapiPublicKeyBlob_m4628 (Object_t * __this /* static, unused */, ByteU5BU5D_t102* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t102* CryptoConvert_ToCapiPublicKeyBlob_m4629 (Object_t * __this /* static, unused */, RSA_t655 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C" ByteU5BU5D_t102* CryptoConvert_ToCapiKeyBlob_m4630 (Object_t * __this /* static, unused */, RSA_t655 * ___rsa, bool ___includePrivateKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
