#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Quaternion
struct Quaternion_t83;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m360 (Quaternion_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m361 (Quaternion_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m362 (Quaternion_t83 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
