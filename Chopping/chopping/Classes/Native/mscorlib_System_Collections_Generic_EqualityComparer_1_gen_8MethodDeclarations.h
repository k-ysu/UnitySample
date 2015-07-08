#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1<System.DateTime>
struct EqualityComparer_1_t2267;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.ctor()
extern "C" void EqualityComparer_1__ctor_m12441_gshared (EqualityComparer_1_t2267 * __this, const MethodInfo* method);
#define EqualityComparer_1__ctor_m12441(__this, method) (( void (*) (EqualityComparer_1_t2267 *, const MethodInfo*))EqualityComparer_1__ctor_m12441_gshared)(__this, method)
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.cctor()
extern "C" void EqualityComparer_1__cctor_m12442_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1__cctor_m12442(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1__cctor_m12442_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12443_gshared (EqualityComparer_1_t2267 * __this, Object_t * ___obj, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12443(__this, ___obj, method) (( int32_t (*) (EqualityComparer_1_t2267 *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12443_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12444_gshared (EqualityComparer_1_t2267 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12444(__this, ___x, ___y, method) (( bool (*) (EqualityComparer_1_t2267 *, Object_t *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12444_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTime>::get_Default()
extern "C" EqualityComparer_1_t2267 * EqualityComparer_1_get_Default_m12445_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1_get_Default_m12445(__this /* static, unused */, method) (( EqualityComparer_1_t2267 * (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1_get_Default_m12445_gshared)(__this /* static, unused */, method)
