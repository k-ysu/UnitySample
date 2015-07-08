﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_t1274;
// System.Security.Cryptography.TripleDES
struct TripleDES_t869;
// System.Byte[]
struct ByteU5BU5D_t102;

// System.Void System.Security.Cryptography.TripleDESTransform::.ctor(System.Security.Cryptography.TripleDES,System.Boolean,System.Byte[],System.Byte[])
extern "C" void TripleDESTransform__ctor_m6893 (TripleDESTransform_t1274 * __this, TripleDES_t869 * ___algo, bool ___encryption, ByteU5BU5D_t102* ___key, ByteU5BU5D_t102* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void TripleDESTransform_ECB_m6894 (TripleDESTransform_t1274 * __this, ByteU5BU5D_t102* ___input, ByteU5BU5D_t102* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t102* TripleDESTransform_GetStrongKey_m6895 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
