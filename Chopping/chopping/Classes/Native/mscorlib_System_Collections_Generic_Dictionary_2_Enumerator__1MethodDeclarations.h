#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1971;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1964;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9201_gshared (Enumerator_t1971 * __this, Dictionary_2_t1964 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9201(__this, ___dictionary, method) (( void (*) (Enumerator_t1971 *, Dictionary_2_t1964 *, const MethodInfo*))Enumerator__ctor_m9201_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9202_gshared (Enumerator_t1971 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9202(__this, method) (( Object_t * (*) (Enumerator_t1971 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9202_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t653  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9203_gshared (Enumerator_t1971 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9203(__this, method) (( DictionaryEntry_t653  (*) (Enumerator_t1971 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9203_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9204_gshared (Enumerator_t1971 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9204(__this, method) (( Object_t * (*) (Enumerator_t1971 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9204_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9205_gshared (Enumerator_t1971 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9205(__this, method) (( Object_t * (*) (Enumerator_t1971 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9205_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9206_gshared (Enumerator_t1971 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9206(__this, method) (( bool (*) (Enumerator_t1971 *, const MethodInfo*))Enumerator_MoveNext_m9206_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1965  Enumerator_get_Current_m9207_gshared (Enumerator_t1971 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9207(__this, method) (( KeyValuePair_2_t1965  (*) (Enumerator_t1971 *, const MethodInfo*))Enumerator_get_Current_m9207_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m9208_gshared (Enumerator_t1971 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9208(__this, method) (( int32_t (*) (Enumerator_t1971 *, const MethodInfo*))Enumerator_get_CurrentKey_m9208_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m9209_gshared (Enumerator_t1971 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9209(__this, method) (( Object_t * (*) (Enumerator_t1971 *, const MethodInfo*))Enumerator_get_CurrentValue_m9209_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m9210_gshared (Enumerator_t1971 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9210(__this, method) (( void (*) (Enumerator_t1971 *, const MethodInfo*))Enumerator_VerifyState_m9210_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9211_gshared (Enumerator_t1971 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9211(__this, method) (( void (*) (Enumerator_t1971 *, const MethodInfo*))Enumerator_VerifyCurrent_m9211_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m9212_gshared (Enumerator_t1971 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9212(__this, method) (( void (*) (Enumerator_t1971 *, const MethodInfo*))Enumerator_Dispose_m9212_gshared)(__this, method)
