#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t2270;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12454_gshared (DefaultComparer_t2270 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12454(__this, method) (( void (*) (DefaultComparer_t2270 *, const MethodInfo*))DefaultComparer__ctor_m12454_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12455_gshared (DefaultComparer_t2270 * __this, DateTimeOffset_t363  ___x, DateTimeOffset_t363  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12455(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2270 *, DateTimeOffset_t363 , DateTimeOffset_t363 , const MethodInfo*))DefaultComparer_Compare_m12455_gshared)(__this, ___x, ___y, method)
