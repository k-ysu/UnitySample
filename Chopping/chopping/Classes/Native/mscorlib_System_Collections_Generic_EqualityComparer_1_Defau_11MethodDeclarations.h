#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2280;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m12501_gshared (DefaultComparer_t2280 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12501(__this, method) (( void (*) (DefaultComparer_t2280 *, const MethodInfo*))DefaultComparer__ctor_m12501_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12502_gshared (DefaultComparer_t2280 * __this, TimeSpan_t557  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12502(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2280 *, TimeSpan_t557 , const MethodInfo*))DefaultComparer_GetHashCode_m12502_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12503_gshared (DefaultComparer_t2280 * __this, TimeSpan_t557  ___x, TimeSpan_t557  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12503(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2280 *, TimeSpan_t557 , TimeSpan_t557 , const MethodInfo*))DefaultComparer_Equals_m12503_gshared)(__this, ___x, ___y, method)
