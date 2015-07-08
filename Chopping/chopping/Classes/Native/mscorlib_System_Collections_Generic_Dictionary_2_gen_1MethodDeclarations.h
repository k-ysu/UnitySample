#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t280;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t295;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2024;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t2025;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1926;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t346;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t2312;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t2313;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t652;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
#define Dictionary_2__ctor_m1205(__this, method) (( void (*) (Dictionary_2_t280 *, const MethodInfo*))Dictionary_2__ctor_m9358_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9808(__this, ___comparer, method) (( void (*) (Dictionary_2_t280 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9359_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m9809(__this, ___dictionary, method) (( void (*) (Dictionary_2_t280 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9361_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m9810(__this, ___capacity, method) (( void (*) (Dictionary_2_t280 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9363_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9811(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t280 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9365_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m9812(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t280 *, SerializationInfo_t310 *, StreamingContext_t311 , const MethodInfo*))Dictionary_2__ctor_m9367_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9813(__this, method) (( Object_t* (*) (Dictionary_2_t280 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9369_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9814(__this, method) (( Object_t* (*) (Dictionary_2_t280 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9371_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9815(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t280 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9373_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9816(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t280 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9375_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m9817(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t280 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9377_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m9818(__this, ___key, method) (( bool (*) (Dictionary_2_t280 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9379_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m9819(__this, ___key, method) (( void (*) (Dictionary_2_t280 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9381_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9820(__this, method) (( Object_t * (*) (Dictionary_2_t280 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9383_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9821(__this, method) (( bool (*) (Dictionary_2_t280 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9385_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9822(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t280 *, KeyValuePair_2_t328 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9387_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9823(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t280 *, KeyValuePair_2_t328 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9389_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9824(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t280 *, KeyValuePair_2U5BU5D_t2312*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9391_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9825(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t280 *, KeyValuePair_2_t328 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9393_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9826(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t280 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9395_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9827(__this, method) (( Object_t * (*) (Dictionary_2_t280 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9397_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9828(__this, method) (( Object_t* (*) (Dictionary_2_t280 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9399_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9829(__this, method) (( Object_t * (*) (Dictionary_2_t280 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
#define Dictionary_2_get_Count_m9830(__this, method) (( int32_t (*) (Dictionary_2_t280 *, const MethodInfo*))Dictionary_2_get_Count_m9403_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m9831(__this, ___key, method) (( String_t* (*) (Dictionary_2_t280 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9405_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m9832(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t280 *, String_t*, String_t*, const MethodInfo*))Dictionary_2_set_Item_m9407_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m9833(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t280 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9409_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m9834(__this, ___size, method) (( void (*) (Dictionary_2_t280 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9411_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m9835(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t280 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9413_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m9836(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t328  (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_make_pair_m9415_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m9837(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_pick_key_m9417_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m9838(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_pick_value_m9419_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m9839(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t280 *, KeyValuePair_2U5BU5D_t2312*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9421_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Resize()
#define Dictionary_2_Resize_m9840(__this, method) (( void (*) (Dictionary_2_t280 *, const MethodInfo*))Dictionary_2_Resize_m9423_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m9841(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t280 *, String_t*, String_t*, const MethodInfo*))Dictionary_2_Add_m9425_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
#define Dictionary_2_Clear_m9842(__this, method) (( void (*) (Dictionary_2_t280 *, const MethodInfo*))Dictionary_2_Clear_m9427_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m9843(__this, ___key, method) (( bool (*) (Dictionary_2_t280 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9429_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m9844(__this, ___value, method) (( bool (*) (Dictionary_2_t280 *, String_t*, const MethodInfo*))Dictionary_2_ContainsValue_m9431_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m9845(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t280 *, SerializationInfo_t310 *, StreamingContext_t311 , const MethodInfo*))Dictionary_2_GetObjectData_m9433_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m9846(__this, ___sender, method) (( void (*) (Dictionary_2_t280 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9435_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m9847(__this, ___key, method) (( bool (*) (Dictionary_2_t280 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9437_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m9848(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t280 *, String_t*, String_t**, const MethodInfo*))Dictionary_2_TryGetValue_m9439_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m9849(__this, method) (( KeyCollection_t2024 * (*) (Dictionary_2_t280 *, const MethodInfo*))Dictionary_2_get_Keys_m9441_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Values()
#define Dictionary_2_get_Values_m9850(__this, method) (( ValueCollection_t2025 * (*) (Dictionary_2_t280 *, const MethodInfo*))Dictionary_2_get_Values_m9442_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m9851(__this, ___key, method) (( String_t* (*) (Dictionary_2_t280 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9444_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m9852(__this, ___value, method) (( String_t* (*) (Dictionary_2_t280 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9446_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m9853(__this, ___pair, method) (( bool (*) (Dictionary_2_t280 *, KeyValuePair_2_t328 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9448_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m1200(__this, method) (( Enumerator_t329  (*) (Dictionary_2_t280 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9450_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.String>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m9854(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t653  (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9452_gshared)(__this /* static, unused */, ___key, ___value, method)
