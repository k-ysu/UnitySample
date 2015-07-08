#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct EncryptedPrivateKeyInfo_t759;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t102;

// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor()
extern "C" void EncryptedPrivateKeyInfo__ctor_m2819 (EncryptedPrivateKeyInfo_t759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor(System.Byte[])
extern "C" void EncryptedPrivateKeyInfo__ctor_m2820 (EncryptedPrivateKeyInfo_t759 * __this, ByteU5BU5D_t102* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Algorithm()
extern "C" String_t* EncryptedPrivateKeyInfo_get_Algorithm_m2821 (EncryptedPrivateKeyInfo_t759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_EncryptedData()
extern "C" ByteU5BU5D_t102* EncryptedPrivateKeyInfo_get_EncryptedData_m2822 (EncryptedPrivateKeyInfo_t759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Salt()
extern "C" ByteU5BU5D_t102* EncryptedPrivateKeyInfo_get_Salt_m2823 (EncryptedPrivateKeyInfo_t759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_IterationCount()
extern "C" int32_t EncryptedPrivateKeyInfo_get_IterationCount_m2824 (EncryptedPrivateKeyInfo_t759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::Decode(System.Byte[])
extern "C" void EncryptedPrivateKeyInfo_Decode_m2825 (EncryptedPrivateKeyInfo_t759 * __this, ByteU5BU5D_t102* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
