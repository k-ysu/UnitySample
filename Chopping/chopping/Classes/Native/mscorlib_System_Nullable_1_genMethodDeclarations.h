#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1440;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m8100_gshared (Nullable_1_t1440 * __this, TimeSpan_t557  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m8100(__this, ___value, method) (( void (*) (Nullable_1_t1440 *, TimeSpan_t557 , const MethodInfo*))Nullable_1__ctor_m8100_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m8101_gshared (Nullable_1_t1440 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m8101(__this, method) (( bool (*) (Nullable_1_t1440 *, const MethodInfo*))Nullable_1_get_HasValue_m8101_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t557  Nullable_1_get_Value_m8102_gshared (Nullable_1_t1440 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m8102(__this, method) (( TimeSpan_t557  (*) (Nullable_1_t1440 *, const MethodInfo*))Nullable_1_get_Value_m8102_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m12466_gshared (Nullable_1_t1440 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m12466(__this, ___other, method) (( bool (*) (Nullable_1_t1440 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m12466_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m12467_gshared (Nullable_1_t1440 * __this, Nullable_1_t1440  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m12467(__this, ___other, method) (( bool (*) (Nullable_1_t1440 *, Nullable_1_t1440 , const MethodInfo*))Nullable_1_Equals_m12467_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m12468_gshared (Nullable_1_t1440 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m12468(__this, method) (( int32_t (*) (Nullable_1_t1440 *, const MethodInfo*))Nullable_1_GetHashCode_m12468_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m12469_gshared (Nullable_1_t1440 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m12469(__this, method) (( String_t* (*) (Nullable_1_t1440 *, const MethodInfo*))Nullable_1_ToString_m12469_gshared)(__this, method)
