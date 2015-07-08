#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t2138;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2129;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11372_gshared (ShimEnumerator_t2138 * __this, Dictionary_2_t2129 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11372(__this, ___host, method) (( void (*) (ShimEnumerator_t2138 *, Dictionary_2_t2129 *, const MethodInfo*))ShimEnumerator__ctor_m11372_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11373_gshared (ShimEnumerator_t2138 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11373(__this, method) (( bool (*) (ShimEnumerator_t2138 *, const MethodInfo*))ShimEnumerator_MoveNext_m11373_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t653  ShimEnumerator_get_Entry_m11374_gshared (ShimEnumerator_t2138 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11374(__this, method) (( DictionaryEntry_t653  (*) (ShimEnumerator_t2138 *, const MethodInfo*))ShimEnumerator_get_Entry_m11374_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11375_gshared (ShimEnumerator_t2138 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11375(__this, method) (( Object_t * (*) (ShimEnumerator_t2138 *, const MethodInfo*))ShimEnumerator_get_Key_m11375_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11376_gshared (ShimEnumerator_t2138 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11376(__this, method) (( Object_t * (*) (ShimEnumerator_t2138 *, const MethodInfo*))ShimEnumerator_get_Value_m11376_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11377_gshared (ShimEnumerator_t2138 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11377(__this, method) (( Object_t * (*) (ShimEnumerator_t2138 *, const MethodInfo*))ShimEnumerator_get_Current_m11377_gshared)(__this, method)
