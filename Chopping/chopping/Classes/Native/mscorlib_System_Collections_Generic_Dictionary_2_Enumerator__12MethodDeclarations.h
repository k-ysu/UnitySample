#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t2132;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2129;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11326_gshared (Enumerator_t2132 * __this, Dictionary_2_t2129 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11326(__this, ___dictionary, method) (( void (*) (Enumerator_t2132 *, Dictionary_2_t2129 *, const MethodInfo*))Enumerator__ctor_m11326_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11327_gshared (Enumerator_t2132 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11327(__this, method) (( Object_t * (*) (Enumerator_t2132 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11327_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t653  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11328_gshared (Enumerator_t2132 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11328(__this, method) (( DictionaryEntry_t653  (*) (Enumerator_t2132 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11328_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11329_gshared (Enumerator_t2132 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11329(__this, method) (( Object_t * (*) (Enumerator_t2132 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11329_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11330_gshared (Enumerator_t2132 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11330(__this, method) (( Object_t * (*) (Enumerator_t2132 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11330_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11331_gshared (Enumerator_t2132 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11331(__this, method) (( bool (*) (Enumerator_t2132 *, const MethodInfo*))Enumerator_MoveNext_m11331_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2103  Enumerator_get_Current_m11332_gshared (Enumerator_t2132 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11332(__this, method) (( KeyValuePair_2_t2103  (*) (Enumerator_t2132 *, const MethodInfo*))Enumerator_get_Current_m11332_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11333_gshared (Enumerator_t2132 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11333(__this, method) (( Object_t * (*) (Enumerator_t2132 *, const MethodInfo*))Enumerator_get_CurrentKey_m11333_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t1992  Enumerator_get_CurrentValue_m11334_gshared (Enumerator_t2132 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11334(__this, method) (( KeyValuePair_2_t1992  (*) (Enumerator_t2132 *, const MethodInfo*))Enumerator_get_CurrentValue_m11334_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m11335_gshared (Enumerator_t2132 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11335(__this, method) (( void (*) (Enumerator_t2132 *, const MethodInfo*))Enumerator_VerifyState_m11335_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11336_gshared (Enumerator_t2132 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11336(__this, method) (( void (*) (Enumerator_t2132 *, const MethodInfo*))Enumerator_VerifyCurrent_m11336_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m11337_gshared (Enumerator_t2132 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11337(__this, method) (( void (*) (Enumerator_t2132 *, const MethodInfo*))Enumerator_Dispose_m11337_gshared)(__this, method)
