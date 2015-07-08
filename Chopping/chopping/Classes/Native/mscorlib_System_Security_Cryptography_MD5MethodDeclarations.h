#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.MD5
struct MD5_t861;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.MD5::.ctor()
extern "C" void MD5__ctor_m6692 (MD5_t861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.MD5 System.Security.Cryptography.MD5::Create()
extern "C" MD5_t861 * MD5_Create_m3526 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.MD5 System.Security.Cryptography.MD5::Create(System.String)
extern "C" MD5_t861 * MD5_Create_m6693 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
