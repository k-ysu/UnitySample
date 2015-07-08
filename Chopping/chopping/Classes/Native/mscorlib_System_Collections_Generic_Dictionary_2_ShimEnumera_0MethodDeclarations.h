#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2001;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1991;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9524_gshared (ShimEnumerator_t2001 * __this, Dictionary_2_t1991 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9524(__this, ___host, method) (( void (*) (ShimEnumerator_t2001 *, Dictionary_2_t1991 *, const MethodInfo*))ShimEnumerator__ctor_m9524_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9525_gshared (ShimEnumerator_t2001 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9525(__this, method) (( bool (*) (ShimEnumerator_t2001 *, const MethodInfo*))ShimEnumerator_MoveNext_m9525_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t653  ShimEnumerator_get_Entry_m9526_gshared (ShimEnumerator_t2001 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9526(__this, method) (( DictionaryEntry_t653  (*) (ShimEnumerator_t2001 *, const MethodInfo*))ShimEnumerator_get_Entry_m9526_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9527_gshared (ShimEnumerator_t2001 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9527(__this, method) (( Object_t * (*) (ShimEnumerator_t2001 *, const MethodInfo*))ShimEnumerator_get_Key_m9527_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9528_gshared (ShimEnumerator_t2001 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9528(__this, method) (( Object_t * (*) (ShimEnumerator_t2001 *, const MethodInfo*))ShimEnumerator_get_Value_m9528_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9529_gshared (ShimEnumerator_t2001 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9529(__this, method) (( Object_t * (*) (ShimEnumerator_t2001 *, const MethodInfo*))ShimEnumerator_get_Current_m9529_gshared)(__this, method)
