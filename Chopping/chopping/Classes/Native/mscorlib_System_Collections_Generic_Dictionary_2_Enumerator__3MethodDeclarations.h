#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t1996;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1991;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9482_gshared (Enumerator_t1996 * __this, Dictionary_2_t1991 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9482(__this, ___dictionary, method) (( void (*) (Enumerator_t1996 *, Dictionary_2_t1991 *, const MethodInfo*))Enumerator__ctor_m9482_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9483_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9483(__this, method) (( Object_t * (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9483_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t653  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9484_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9484(__this, method) (( DictionaryEntry_t653  (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9484_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9485_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9485(__this, method) (( Object_t * (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9485_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9486_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9486(__this, method) (( Object_t * (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9486_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9487_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9487(__this, method) (( bool (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_MoveNext_m9487_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1992  Enumerator_get_Current_m9488_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9488(__this, method) (( KeyValuePair_2_t1992  (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_get_Current_m9488_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m9489_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9489(__this, method) (( Object_t * (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_get_CurrentKey_m9489_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m9490_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9490(__this, method) (( Object_t * (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_get_CurrentValue_m9490_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m9491_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9491(__this, method) (( void (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_VerifyState_m9491_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9492_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9492(__this, method) (( void (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_VerifyCurrent_m9492_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m9493_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9493(__this, method) (( void (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_Dispose_m9493_gshared)(__this, method)
