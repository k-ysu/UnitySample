#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct InternalEnumerator_1_t2053;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10269_gshared (InternalEnumerator_1_t2053 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10269(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2053 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10269_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10270_gshared (InternalEnumerator_1_t2053 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10270(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2053 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10270_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10271_gshared (InternalEnumerator_1_t2053 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10271(__this, method) (( void (*) (InternalEnumerator_1_t2053 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10271_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10272_gshared (InternalEnumerator_1_t2053 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10272(__this, method) (( bool (*) (InternalEnumerator_1_t2053 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10272_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current()
extern "C" KeyValuePair_2_t2052  InternalEnumerator_1_get_Current_m10273_gshared (InternalEnumerator_1_t2053 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10273(__this, method) (( KeyValuePair_2_t2052  (*) (InternalEnumerator_1_t2053 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10273_gshared)(__this, method)
