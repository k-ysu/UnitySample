﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t1951;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.EqualityComparer`1<System.Object>::.ctor()
extern "C" void EqualityComparer_1__ctor_m9023_gshared (EqualityComparer_1_t1951 * __this, const MethodInfo* method);
#define EqualityComparer_1__ctor_m9023(__this, method) (( void (*) (EqualityComparer_1_t1951 *, const MethodInfo*))EqualityComparer_1__ctor_m9023_gshared)(__this, method)
// System.Void System.Collections.Generic.EqualityComparer`1<System.Object>::.cctor()
extern "C" void EqualityComparer_1__cctor_m9024_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1__cctor_m9024(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1__cctor_m9024_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m9025_gshared (EqualityComparer_1_t1951 * __this, Object_t * ___obj, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m9025(__this, ___obj, method) (( int32_t (*) (EqualityComparer_1_t1951 *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m9025_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m9026_gshared (EqualityComparer_1_t1951 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m9026(__this, ___x, ___y, method) (( bool (*) (EqualityComparer_1_t1951 *, Object_t *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m9026_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Object>::get_Default()
extern "C" EqualityComparer_1_t1951 * EqualityComparer_1_get_Default_m9027_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1_get_Default_m9027(__this /* static, unused */, method) (( EqualityComparer_1_t1951 * (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1_get_Default_m9027_gshared)(__this /* static, unused */, method)