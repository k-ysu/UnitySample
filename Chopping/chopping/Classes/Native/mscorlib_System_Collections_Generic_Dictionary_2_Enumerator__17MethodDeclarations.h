#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t2204;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t589;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12053_gshared (Enumerator_t2204 * __this, Dictionary_2_t589 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12053(__this, ___dictionary, method) (( void (*) (Enumerator_t2204 *, Dictionary_2_t589 *, const MethodInfo*))Enumerator__ctor_m12053_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12054_gshared (Enumerator_t2204 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12054(__this, method) (( Object_t * (*) (Enumerator_t2204 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12054_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t653  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12055_gshared (Enumerator_t2204 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12055(__this, method) (( DictionaryEntry_t653  (*) (Enumerator_t2204 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12055_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12056_gshared (Enumerator_t2204 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12056(__this, method) (( Object_t * (*) (Enumerator_t2204 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12056_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12057_gshared (Enumerator_t2204 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12057(__this, method) (( Object_t * (*) (Enumerator_t2204 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12057_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12058_gshared (Enumerator_t2204 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12058(__this, method) (( bool (*) (Enumerator_t2204 *, const MethodInfo*))Enumerator_MoveNext_m12058_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2200  Enumerator_get_Current_m12059_gshared (Enumerator_t2204 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12059(__this, method) (( KeyValuePair_2_t2200  (*) (Enumerator_t2204 *, const MethodInfo*))Enumerator_get_Current_m12059_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12060_gshared (Enumerator_t2204 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12060(__this, method) (( int32_t (*) (Enumerator_t2204 *, const MethodInfo*))Enumerator_get_CurrentKey_m12060_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12061_gshared (Enumerator_t2204 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12061(__this, method) (( int32_t (*) (Enumerator_t2204 *, const MethodInfo*))Enumerator_get_CurrentValue_m12061_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m12062_gshared (Enumerator_t2204 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12062(__this, method) (( void (*) (Enumerator_t2204 *, const MethodInfo*))Enumerator_VerifyState_m12062_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12063_gshared (Enumerator_t2204 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12063(__this, method) (( void (*) (Enumerator_t2204 *, const MethodInfo*))Enumerator_VerifyCurrent_m12063_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12064_gshared (Enumerator_t2204 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12064(__this, method) (( void (*) (Enumerator_t2204 *, const MethodInfo*))Enumerator_Dispose_m12064_gshared)(__this, method)
