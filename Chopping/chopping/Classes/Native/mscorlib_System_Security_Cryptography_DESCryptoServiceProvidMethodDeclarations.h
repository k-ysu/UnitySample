#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t1240;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t786;
// System.Byte[]
struct ByteU5BU5D_t102;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
extern "C" void DESCryptoServiceProvider__ctor_m6619 (DESCryptoServiceProvider_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateDecryptor_m6620 (DESCryptoServiceProvider_t1240 * __this, ByteU5BU5D_t102* ___rgbKey, ByteU5BU5D_t102* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateEncryptor_m6621 (DESCryptoServiceProvider_t1240 * __this, ByteU5BU5D_t102* ___rgbKey, ByteU5BU5D_t102* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
extern "C" void DESCryptoServiceProvider_GenerateIV_m6622 (DESCryptoServiceProvider_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
extern "C" void DESCryptoServiceProvider_GenerateKey_m6623 (DESCryptoServiceProvider_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
