#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct InternalEnumerator_1_t2009;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m9679_gshared (InternalEnumerator_1_t2009 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m9679(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2009 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m9679_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9680_gshared (InternalEnumerator_1_t2009 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9680(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2009 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9680_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m9681_gshared (InternalEnumerator_1_t2009 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m9681(__this, method) (( void (*) (InternalEnumerator_1_t2009 *, const MethodInfo*))InternalEnumerator_1_Dispose_m9681_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m9682_gshared (InternalEnumerator_1_t2009 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m9682(__this, method) (( bool (*) (InternalEnumerator_1_t2009 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m9682_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t2008  InternalEnumerator_1_get_Current_m9683_gshared (InternalEnumerator_1_t2009 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m9683(__this, method) (( KeyValuePair_2_t2008  (*) (InternalEnumerator_1_t2009 *, const MethodInfo*))InternalEnumerator_1_get_Current_m9683_gshared)(__this, method)
