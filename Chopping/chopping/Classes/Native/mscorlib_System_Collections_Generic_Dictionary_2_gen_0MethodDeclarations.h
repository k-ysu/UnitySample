#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t71;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t295;
// System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>
struct ICollection_1_t2295;
// System.Object
struct Object_t;
// UnityEngine.GUIStyle
struct GUIStyle_t56;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
struct KeyCollection_t2003;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t324;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1926;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.GUIStyle>
struct IDictionary_2_t2296;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>[]
struct KeyValuePair_2U5BU5D_t2297;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct IEnumerator_1_t2298;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t652;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
#define Dictionary_2__ctor_m9357(__this, method) (( void (*) (Dictionary_2_t71 *, const MethodInfo*))Dictionary_2__ctor_m9358_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m1181(__this, ___comparer, method) (( void (*) (Dictionary_2_t71 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9359_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m9360(__this, ___dictionary, method) (( void (*) (Dictionary_2_t71 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9361_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Int32)
#define Dictionary_2__ctor_m9362(__this, ___capacity, method) (( void (*) (Dictionary_2_t71 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9363_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9364(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t71 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9365_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m9366(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t71 *, SerializationInfo_t310 *, StreamingContext_t311 , const MethodInfo*))Dictionary_2__ctor_m9367_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9368(__this, method) (( Object_t* (*) (Dictionary_2_t71 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9369_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9370(__this, method) (( Object_t* (*) (Dictionary_2_t71 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9371_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9372(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t71 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9373_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9374(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t71 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9375_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m9376(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t71 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9377_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m9378(__this, ___key, method) (( bool (*) (Dictionary_2_t71 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9379_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m9380(__this, ___key, method) (( void (*) (Dictionary_2_t71 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9381_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9382(__this, method) (( Object_t * (*) (Dictionary_2_t71 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9383_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9384(__this, method) (( bool (*) (Dictionary_2_t71 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9385_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9386(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t71 *, KeyValuePair_2_t2002 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9387_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9388(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t71 *, KeyValuePair_2_t2002 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9389_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9390(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t71 *, KeyValuePair_2U5BU5D_t2297*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9391_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9392(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t71 *, KeyValuePair_2_t2002 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9393_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9394(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t71 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9395_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9396(__this, method) (( Object_t * (*) (Dictionary_2_t71 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9397_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9398(__this, method) (( Object_t* (*) (Dictionary_2_t71 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9399_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9400(__this, method) (( Object_t * (*) (Dictionary_2_t71 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Count()
#define Dictionary_2_get_Count_m9402(__this, method) (( int32_t (*) (Dictionary_2_t71 *, const MethodInfo*))Dictionary_2_get_Count_m9403_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Item(TKey)
#define Dictionary_2_get_Item_m9404(__this, ___key, method) (( GUIStyle_t56 * (*) (Dictionary_2_t71 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9405_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m9406(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t71 *, String_t*, GUIStyle_t56 *, const MethodInfo*))Dictionary_2_set_Item_m9407_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m9408(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t71 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9409_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m9410(__this, ___size, method) (( void (*) (Dictionary_2_t71 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9411_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m9412(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t71 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9413_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m9414(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2002  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t56 *, const MethodInfo*))Dictionary_2_make_pair_m9415_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m9416(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t56 *, const MethodInfo*))Dictionary_2_pick_key_m9417_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m9418(__this /* static, unused */, ___key, ___value, method) (( GUIStyle_t56 * (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t56 *, const MethodInfo*))Dictionary_2_pick_value_m9419_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m9420(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t71 *, KeyValuePair_2U5BU5D_t2297*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9421_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Resize()
#define Dictionary_2_Resize_m9422(__this, method) (( void (*) (Dictionary_2_t71 *, const MethodInfo*))Dictionary_2_Resize_m9423_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Add(TKey,TValue)
#define Dictionary_2_Add_m9424(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t71 *, String_t*, GUIStyle_t56 *, const MethodInfo*))Dictionary_2_Add_m9425_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Clear()
#define Dictionary_2_Clear_m9426(__this, method) (( void (*) (Dictionary_2_t71 *, const MethodInfo*))Dictionary_2_Clear_m9427_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m9428(__this, ___key, method) (( bool (*) (Dictionary_2_t71 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9429_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m9430(__this, ___value, method) (( bool (*) (Dictionary_2_t71 *, GUIStyle_t56 *, const MethodInfo*))Dictionary_2_ContainsValue_m9431_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m9432(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t71 *, SerializationInfo_t310 *, StreamingContext_t311 , const MethodInfo*))Dictionary_2_GetObjectData_m9433_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m9434(__this, ___sender, method) (( void (*) (Dictionary_2_t71 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9435_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Remove(TKey)
#define Dictionary_2_Remove_m9436(__this, ___key, method) (( bool (*) (Dictionary_2_t71 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9437_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m9438(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t71 *, String_t*, GUIStyle_t56 **, const MethodInfo*))Dictionary_2_TryGetValue_m9439_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Keys()
#define Dictionary_2_get_Keys_m9440(__this, method) (( KeyCollection_t2003 * (*) (Dictionary_2_t71 *, const MethodInfo*))Dictionary_2_get_Keys_m9441_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Values()
#define Dictionary_2_get_Values_m1182(__this, method) (( ValueCollection_t324 * (*) (Dictionary_2_t71 *, const MethodInfo*))Dictionary_2_get_Values_m9442_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m9443(__this, ___key, method) (( String_t* (*) (Dictionary_2_t71 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9444_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m9445(__this, ___value, method) (( GUIStyle_t56 * (*) (Dictionary_2_t71 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9446_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m9447(__this, ___pair, method) (( bool (*) (Dictionary_2_t71 *, KeyValuePair_2_t2002 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9448_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m9449(__this, method) (( Enumerator_t2004  (*) (Dictionary_2_t71 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9450_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m9451(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t653  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t56 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9452_gshared)(__this /* static, unused */, ___key, ___value, method)
