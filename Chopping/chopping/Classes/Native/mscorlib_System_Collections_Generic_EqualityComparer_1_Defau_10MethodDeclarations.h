#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2276;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12484_gshared (DefaultComparer_t2276 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12484(__this, method) (( void (*) (DefaultComparer_t2276 *, const MethodInfo*))DefaultComparer__ctor_m12484_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12485_gshared (DefaultComparer_t2276 * __this, Guid_t364  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12485(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2276 *, Guid_t364 , const MethodInfo*))DefaultComparer_GetHashCode_m12485_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12486_gshared (DefaultComparer_t2276 * __this, Guid_t364  ___x, Guid_t364  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12486(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2276 *, Guid_t364 , Guid_t364 , const MethodInfo*))DefaultComparer_Equals_m12486_gshared)(__this, ___x, ___y, method)
