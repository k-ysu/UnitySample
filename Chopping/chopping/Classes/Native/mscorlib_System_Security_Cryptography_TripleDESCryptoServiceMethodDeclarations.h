﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t1273;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t786;
// System.Byte[]
struct ByteU5BU5D_t102;

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
extern "C" void TripleDESCryptoServiceProvider__ctor_m6888 (TripleDESCryptoServiceProvider_t1273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
extern "C" void TripleDESCryptoServiceProvider_GenerateIV_m6889 (TripleDESCryptoServiceProvider_t1273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
extern "C" void TripleDESCryptoServiceProvider_GenerateKey_m6890 (TripleDESCryptoServiceProvider_t1273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m6891 (TripleDESCryptoServiceProvider_t1273 * __this, ByteU5BU5D_t102* ___rgbKey, ByteU5BU5D_t102* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m6892 (TripleDESCryptoServiceProvider_t1273 * __this, ByteU5BU5D_t102* ___rgbKey, ByteU5BU5D_t102* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
