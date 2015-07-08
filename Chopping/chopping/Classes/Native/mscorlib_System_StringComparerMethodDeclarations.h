#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.StringComparer
struct StringComparer_t323;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.StringComparer::.ctor()
extern "C" void StringComparer__ctor_m7938 (StringComparer_t323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.StringComparer::.cctor()
extern "C" void StringComparer__cctor_m7939 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.StringComparer System.StringComparer::get_InvariantCultureIgnoreCase()
extern "C" StringComparer_t323 * StringComparer_get_InvariantCultureIgnoreCase_m2419 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
extern "C" StringComparer_t323 * StringComparer_get_OrdinalIgnoreCase_m1180 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.StringComparer::Compare(System.Object,System.Object)
extern "C" int32_t StringComparer_Compare_m7940 (StringComparer_t323 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.StringComparer::Equals(System.Object,System.Object)
extern "C" bool StringComparer_Equals_m7941 (StringComparer_t323 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.StringComparer::GetHashCode(System.Object)
extern "C" int32_t StringComparer_GetHashCode_m7942 (StringComparer_t323 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.StringComparer::Compare(System.String,System.String)
// System.Boolean System.StringComparer::Equals(System.String,System.String)
// System.Int32 System.StringComparer::GetHashCode(System.String)
