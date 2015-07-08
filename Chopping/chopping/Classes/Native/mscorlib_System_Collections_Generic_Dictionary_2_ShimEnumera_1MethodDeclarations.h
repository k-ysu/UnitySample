#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2018;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2007;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9754_gshared (ShimEnumerator_t2018 * __this, Dictionary_2_t2007 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9754(__this, ___host, method) (( void (*) (ShimEnumerator_t2018 *, Dictionary_2_t2007 *, const MethodInfo*))ShimEnumerator__ctor_m9754_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9755_gshared (ShimEnumerator_t2018 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9755(__this, method) (( bool (*) (ShimEnumerator_t2018 *, const MethodInfo*))ShimEnumerator_MoveNext_m9755_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t653  ShimEnumerator_get_Entry_m9756_gshared (ShimEnumerator_t2018 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9756(__this, method) (( DictionaryEntry_t653  (*) (ShimEnumerator_t2018 *, const MethodInfo*))ShimEnumerator_get_Entry_m9756_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9757_gshared (ShimEnumerator_t2018 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9757(__this, method) (( Object_t * (*) (ShimEnumerator_t2018 *, const MethodInfo*))ShimEnumerator_get_Key_m9757_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9758_gshared (ShimEnumerator_t2018 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9758(__this, method) (( Object_t * (*) (ShimEnumerator_t2018 *, const MethodInfo*))ShimEnumerator_get_Value_m9758_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9759_gshared (ShimEnumerator_t2018 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9759(__this, method) (( Object_t * (*) (ShimEnumerator_t2018 *, const MethodInfo*))ShimEnumerator_get_Current_m9759_gshared)(__this, method)
