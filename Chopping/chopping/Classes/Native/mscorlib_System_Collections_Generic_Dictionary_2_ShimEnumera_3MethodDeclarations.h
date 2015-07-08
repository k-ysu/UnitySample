#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t2093;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2081;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10669_gshared (ShimEnumerator_t2093 * __this, Dictionary_2_t2081 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10669(__this, ___host, method) (( void (*) (ShimEnumerator_t2093 *, Dictionary_2_t2081 *, const MethodInfo*))ShimEnumerator__ctor_m10669_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10670_gshared (ShimEnumerator_t2093 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10670(__this, method) (( bool (*) (ShimEnumerator_t2093 *, const MethodInfo*))ShimEnumerator_MoveNext_m10670_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t653  ShimEnumerator_get_Entry_m10671_gshared (ShimEnumerator_t2093 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10671(__this, method) (( DictionaryEntry_t653  (*) (ShimEnumerator_t2093 *, const MethodInfo*))ShimEnumerator_get_Entry_m10671_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10672_gshared (ShimEnumerator_t2093 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10672(__this, method) (( Object_t * (*) (ShimEnumerator_t2093 *, const MethodInfo*))ShimEnumerator_get_Key_m10672_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10673_gshared (ShimEnumerator_t2093 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10673(__this, method) (( Object_t * (*) (ShimEnumerator_t2093 *, const MethodInfo*))ShimEnumerator_get_Value_m10673_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10674_gshared (ShimEnumerator_t2093 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10674(__this, method) (( Object_t * (*) (ShimEnumerator_t2093 *, const MethodInfo*))ShimEnumerator_get_Current_m10674_gshared)(__this, method)
