#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2063;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2051;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10349_gshared (ShimEnumerator_t2063 * __this, Dictionary_2_t2051 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10349(__this, ___host, method) (( void (*) (ShimEnumerator_t2063 *, Dictionary_2_t2051 *, const MethodInfo*))ShimEnumerator__ctor_m10349_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10350_gshared (ShimEnumerator_t2063 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10350(__this, method) (( bool (*) (ShimEnumerator_t2063 *, const MethodInfo*))ShimEnumerator_MoveNext_m10350_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t653  ShimEnumerator_get_Entry_m10351_gshared (ShimEnumerator_t2063 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10351(__this, method) (( DictionaryEntry_t653  (*) (ShimEnumerator_t2063 *, const MethodInfo*))ShimEnumerator_get_Entry_m10351_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10352_gshared (ShimEnumerator_t2063 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10352(__this, method) (( Object_t * (*) (ShimEnumerator_t2063 *, const MethodInfo*))ShimEnumerator_get_Key_m10352_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10353_gshared (ShimEnumerator_t2063 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10353(__this, method) (( Object_t * (*) (ShimEnumerator_t2063 *, const MethodInfo*))ShimEnumerator_get_Value_m10353_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10354_gshared (ShimEnumerator_t2063 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10354(__this, method) (( Object_t * (*) (ShimEnumerator_t2063 *, const MethodInfo*))ShimEnumerator_get_Current_m10354_gshared)(__this, method)
