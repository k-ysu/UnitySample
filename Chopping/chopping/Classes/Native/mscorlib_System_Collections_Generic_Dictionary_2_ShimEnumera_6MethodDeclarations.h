#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2209;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t589;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12095_gshared (ShimEnumerator_t2209 * __this, Dictionary_2_t589 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12095(__this, ___host, method) (( void (*) (ShimEnumerator_t2209 *, Dictionary_2_t589 *, const MethodInfo*))ShimEnumerator__ctor_m12095_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12096_gshared (ShimEnumerator_t2209 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12096(__this, method) (( bool (*) (ShimEnumerator_t2209 *, const MethodInfo*))ShimEnumerator_MoveNext_m12096_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t653  ShimEnumerator_get_Entry_m12097_gshared (ShimEnumerator_t2209 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12097(__this, method) (( DictionaryEntry_t653  (*) (ShimEnumerator_t2209 *, const MethodInfo*))ShimEnumerator_get_Entry_m12097_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12098_gshared (ShimEnumerator_t2209 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12098(__this, method) (( Object_t * (*) (ShimEnumerator_t2209 *, const MethodInfo*))ShimEnumerator_get_Key_m12098_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12099_gshared (ShimEnumerator_t2209 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12099(__this, method) (( Object_t * (*) (ShimEnumerator_t2209 *, const MethodInfo*))ShimEnumerator_get_Value_m12099_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12100_gshared (ShimEnumerator_t2209 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12100(__this, method) (( Object_t * (*) (ShimEnumerator_t2209 *, const MethodInfo*))ShimEnumerator_get_Current_m12100_gshared)(__this, method)
