#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t188;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t295;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t296;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t339;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t340;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1926;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t290;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t297;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t299;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t652;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
#define Dictionary_2__ctor_m1249(__this, method) (( void (*) (Dictionary_2_t188 *, const MethodInfo*))Dictionary_2__ctor_m9358_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m10763(__this, ___comparer, method) (( void (*) (Dictionary_2_t188 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9359_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m10764(__this, ___dictionary, method) (( void (*) (Dictionary_2_t188 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9361_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Int32)
#define Dictionary_2__ctor_m10765(__this, ___capacity, method) (( void (*) (Dictionary_2_t188 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9363_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m10766(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t188 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9365_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m10767(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t188 *, SerializationInfo_t310 *, StreamingContext_t311 , const MethodInfo*))Dictionary_2__ctor_m9367_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10768(__this, method) (( Object_t* (*) (Dictionary_2_t188 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9369_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10769(__this, method) (( Object_t* (*) (Dictionary_2_t188 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9371_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10770(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t188 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9373_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10771(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t188 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9375_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m10772(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t188 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9377_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m10773(__this, ___key, method) (( bool (*) (Dictionary_2_t188 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9379_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m10774(__this, ___key, method) (( void (*) (Dictionary_2_t188 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9381_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10775(__this, method) (( Object_t * (*) (Dictionary_2_t188 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9383_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10776(__this, method) (( bool (*) (Dictionary_2_t188 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9385_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10777(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t188 *, KeyValuePair_2_t298 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9387_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10778(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t188 *, KeyValuePair_2_t298 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9389_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10779(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t188 *, KeyValuePair_2U5BU5D_t297*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9391_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10780(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t188 *, KeyValuePair_2_t298 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9393_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10781(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t188 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9395_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10782(__this, method) (( Object_t * (*) (Dictionary_2_t188 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9397_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10783(__this, method) (( Object_t* (*) (Dictionary_2_t188 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9399_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10784(__this, method) (( Object_t * (*) (Dictionary_2_t188 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
#define Dictionary_2_get_Count_m10785(__this, method) (( int32_t (*) (Dictionary_2_t188 *, const MethodInfo*))Dictionary_2_get_Count_m9403_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
#define Dictionary_2_get_Item_m10786(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t188 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9405_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m10787(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t188 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9407_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m10788(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t188 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9409_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m10789(__this, ___size, method) (( void (*) (Dictionary_2_t188 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9411_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m10790(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t188 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9413_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m10791(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t298  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9415_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m10792(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9417_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m10793(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9419_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m10794(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t188 *, KeyValuePair_2U5BU5D_t297*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9421_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Resize()
#define Dictionary_2_Resize_m10795(__this, method) (( void (*) (Dictionary_2_t188 *, const MethodInfo*))Dictionary_2_Resize_m9423_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
#define Dictionary_2_Add_m10796(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t188 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_Add_m9425_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
#define Dictionary_2_Clear_m10797(__this, method) (( void (*) (Dictionary_2_t188 *, const MethodInfo*))Dictionary_2_Clear_m9427_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m10798(__this, ___key, method) (( bool (*) (Dictionary_2_t188 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9429_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m10799(__this, ___value, method) (( bool (*) (Dictionary_2_t188 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9431_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m10800(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t188 *, SerializationInfo_t310 *, StreamingContext_t311 , const MethodInfo*))Dictionary_2_GetObjectData_m9433_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m10801(__this, ___sender, method) (( void (*) (Dictionary_2_t188 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9435_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(TKey)
#define Dictionary_2_Remove_m10802(__this, ___key, method) (( bool (*) (Dictionary_2_t188 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9437_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m10803(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t188 *, String_t*, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9439_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
#define Dictionary_2_get_Keys_m1251(__this, method) (( KeyCollection_t339 * (*) (Dictionary_2_t188 *, const MethodInfo*))Dictionary_2_get_Keys_m9441_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
#define Dictionary_2_get_Values_m1252(__this, method) (( ValueCollection_t340 * (*) (Dictionary_2_t188 *, const MethodInfo*))Dictionary_2_get_Values_m9442_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m10804(__this, ___key, method) (( String_t* (*) (Dictionary_2_t188 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9444_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m10805(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t188 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9446_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m10806(__this, ___pair, method) (( bool (*) (Dictionary_2_t188 *, KeyValuePair_2_t298 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9448_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m1250(__this, method) (( Enumerator_t338  (*) (Dictionary_2_t188 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9450_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Object>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m10807(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t653  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9452_gshared)(__this /* static, unused */, ___key, ___value, method)
