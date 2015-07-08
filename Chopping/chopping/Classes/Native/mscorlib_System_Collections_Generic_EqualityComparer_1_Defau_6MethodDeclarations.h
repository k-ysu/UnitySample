﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct DefaultComparer_t2140;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void DefaultComparer__ctor_m11383_gshared (DefaultComparer_t2140 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11383(__this, method) (( void (*) (DefaultComparer_t2140 *, const MethodInfo*))DefaultComparer__ctor_m11383_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11384_gshared (DefaultComparer_t2140 * __this, KeyValuePair_2_t1992  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11384(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2140 *, KeyValuePair_2_t1992 , const MethodInfo*))DefaultComparer_GetHashCode_m11384_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11385_gshared (DefaultComparer_t2140 * __this, KeyValuePair_2_t1992  ___x, KeyValuePair_2_t1992  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11385(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2140 *, KeyValuePair_2_t1992 , KeyValuePair_2_t1992 , const MethodInfo*))DefaultComparer_Equals_m11385_gshared)(__this, ___x, ___y, method)
