#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2274;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12475_gshared (DefaultComparer_t2274 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12475(__this, method) (( void (*) (DefaultComparer_t2274 *, const MethodInfo*))DefaultComparer__ctor_m12475_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12476_gshared (DefaultComparer_t2274 * __this, Guid_t364  ___x, Guid_t364  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12476(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2274 *, Guid_t364 , Guid_t364 , const MethodInfo*))DefaultComparer_Compare_m12476_gshared)(__this, ___x, ___y, method)
