#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t1461;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m8097_gshared (GenericEqualityComparer_1_t1461 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m8097(__this, method) (( void (*) (GenericEqualityComparer_1_t1461 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m8097_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12439_gshared (GenericEqualityComparer_1_t1461 * __this, DateTime_t51  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m12439(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1461 *, DateTime_t51 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m12439_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m12440_gshared (GenericEqualityComparer_1_t1461 * __this, DateTime_t51  ___x, DateTime_t51  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m12440(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1461 *, DateTime_t51 , DateTime_t51 , const MethodInfo*))GenericEqualityComparer_1_Equals_m12440_gshared)(__this, ___x, ___y, method)
