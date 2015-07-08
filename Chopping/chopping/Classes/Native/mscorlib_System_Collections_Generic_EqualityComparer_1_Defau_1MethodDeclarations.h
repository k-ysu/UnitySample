#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2040;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m10066_gshared (DefaultComparer_t2040 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10066(__this, method) (( void (*) (DefaultComparer_t2040 *, const MethodInfo*))DefaultComparer__ctor_m10066_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10067_gshared (DefaultComparer_t2040 * __this, UIVertex_t158  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10067(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2040 *, UIVertex_t158 , const MethodInfo*))DefaultComparer_GetHashCode_m10067_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10068_gshared (DefaultComparer_t2040 * __this, UIVertex_t158  ___x, UIVertex_t158  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10068(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2040 *, UIVertex_t158 , UIVertex_t158 , const MethodInfo*))DefaultComparer_Equals_m10068_gshared)(__this, ___x, ___y, method)
