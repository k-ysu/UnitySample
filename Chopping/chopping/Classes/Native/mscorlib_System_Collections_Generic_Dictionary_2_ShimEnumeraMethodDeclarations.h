#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1978;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1964;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9252_gshared (ShimEnumerator_t1978 * __this, Dictionary_2_t1964 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9252(__this, ___host, method) (( void (*) (ShimEnumerator_t1978 *, Dictionary_2_t1964 *, const MethodInfo*))ShimEnumerator__ctor_m9252_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9253_gshared (ShimEnumerator_t1978 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9253(__this, method) (( bool (*) (ShimEnumerator_t1978 *, const MethodInfo*))ShimEnumerator_MoveNext_m9253_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t653  ShimEnumerator_get_Entry_m9254_gshared (ShimEnumerator_t1978 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9254(__this, method) (( DictionaryEntry_t653  (*) (ShimEnumerator_t1978 *, const MethodInfo*))ShimEnumerator_get_Entry_m9254_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9255_gshared (ShimEnumerator_t1978 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9255(__this, method) (( Object_t * (*) (ShimEnumerator_t1978 *, const MethodInfo*))ShimEnumerator_get_Key_m9255_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9256_gshared (ShimEnumerator_t1978 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9256(__this, method) (( Object_t * (*) (ShimEnumerator_t1978 *, const MethodInfo*))ShimEnumerator_get_Value_m9256_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9257_gshared (ShimEnumerator_t1978 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9257(__this, method) (( Object_t * (*) (ShimEnumerator_t1978 *, const MethodInfo*))ShimEnumerator_get_Current_m9257_gshared)(__this, method)
