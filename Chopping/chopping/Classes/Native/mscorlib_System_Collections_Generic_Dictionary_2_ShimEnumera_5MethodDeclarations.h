#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t2187;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2176;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11890_gshared (ShimEnumerator_t2187 * __this, Dictionary_2_t2176 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11890(__this, ___host, method) (( void (*) (ShimEnumerator_t2187 *, Dictionary_2_t2176 *, const MethodInfo*))ShimEnumerator__ctor_m11890_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11891_gshared (ShimEnumerator_t2187 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11891(__this, method) (( bool (*) (ShimEnumerator_t2187 *, const MethodInfo*))ShimEnumerator_MoveNext_m11891_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t653  ShimEnumerator_get_Entry_m11892_gshared (ShimEnumerator_t2187 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11892(__this, method) (( DictionaryEntry_t653  (*) (ShimEnumerator_t2187 *, const MethodInfo*))ShimEnumerator_get_Entry_m11892_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11893_gshared (ShimEnumerator_t2187 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11893(__this, method) (( Object_t * (*) (ShimEnumerator_t2187 *, const MethodInfo*))ShimEnumerator_get_Key_m11893_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11894_gshared (ShimEnumerator_t2187 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11894(__this, method) (( Object_t * (*) (ShimEnumerator_t2187 *, const MethodInfo*))ShimEnumerator_get_Value_m11894_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11895_gshared (ShimEnumerator_t2187 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11895(__this, method) (( Object_t * (*) (ShimEnumerator_t2187 *, const MethodInfo*))ShimEnumerator_get_Current_m11895_gshared)(__this, method)
