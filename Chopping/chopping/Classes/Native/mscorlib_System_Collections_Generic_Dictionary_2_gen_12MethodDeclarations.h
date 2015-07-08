#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2051;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t296;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t2320;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2055;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2059;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1989;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t2324;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t2325;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t2326;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t652;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m10172_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10172(__this, method) (( void (*) (Dictionary_2_t2051 *, const MethodInfo*))Dictionary_2__ctor_m10172_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10174_gshared (Dictionary_2_t2051 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10174(__this, ___comparer, method) (( void (*) (Dictionary_2_t2051 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10174_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m10176_gshared (Dictionary_2_t2051 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m10176(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2051 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10176_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10178_gshared (Dictionary_2_t2051 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10178(__this, ___capacity, method) (( void (*) (Dictionary_2_t2051 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10178_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10180_gshared (Dictionary_2_t2051 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10180(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2051 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10180_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10182_gshared (Dictionary_2_t2051 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10182(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2051 *, SerializationInfo_t310 *, StreamingContext_t311 , const MethodInfo*))Dictionary_2__ctor_m10182_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10184_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10184(__this, method) (( Object_t* (*) (Dictionary_2_t2051 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10184_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10186_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10186(__this, method) (( Object_t* (*) (Dictionary_2_t2051 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10186_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10188_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10188(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2051 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10188_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10190_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10190(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2051 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10190_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10192_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10192(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2051 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10192_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10194_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10194(__this, ___key, method) (( bool (*) (Dictionary_2_t2051 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10194_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10196_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10196(__this, ___key, method) (( void (*) (Dictionary_2_t2051 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10196_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10198_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10198(__this, method) (( Object_t * (*) (Dictionary_2_t2051 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10198_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10200_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10200(__this, method) (( bool (*) (Dictionary_2_t2051 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10200_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10202_gshared (Dictionary_2_t2051 * __this, KeyValuePair_2_t2052  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10202(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2051 *, KeyValuePair_2_t2052 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10202_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10204_gshared (Dictionary_2_t2051 * __this, KeyValuePair_2_t2052  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10204(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2051 *, KeyValuePair_2_t2052 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10204_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10206_gshared (Dictionary_2_t2051 * __this, KeyValuePair_2U5BU5D_t2325* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10206(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2051 *, KeyValuePair_2U5BU5D_t2325*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10206_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10208_gshared (Dictionary_2_t2051 * __this, KeyValuePair_2_t2052  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10208(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2051 *, KeyValuePair_2_t2052 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10208_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10210_gshared (Dictionary_2_t2051 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10210(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2051 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10210_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10212_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10212(__this, method) (( Object_t * (*) (Dictionary_2_t2051 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10212_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10214_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10214(__this, method) (( Object_t* (*) (Dictionary_2_t2051 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10214_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10216_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10216(__this, method) (( Object_t * (*) (Dictionary_2_t2051 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10216_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10218_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10218(__this, method) (( int32_t (*) (Dictionary_2_t2051 *, const MethodInfo*))Dictionary_2_get_Count_m10218_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m10220_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10220(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2051 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m10220_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10222_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10222(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2051 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m10222_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10224_gshared (Dictionary_2_t2051 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10224(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2051 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10224_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10226_gshared (Dictionary_2_t2051 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10226(__this, ___size, method) (( void (*) (Dictionary_2_t2051 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10226_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10228_gshared (Dictionary_2_t2051 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10228(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2051 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10228_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2052  Dictionary_2_make_pair_m10230_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10230(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2052  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m10230_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m10232_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m10232(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m10232_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m10234_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10234(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m10234_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10236_gshared (Dictionary_2_t2051 * __this, KeyValuePair_2U5BU5D_t2325* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10236(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2051 *, KeyValuePair_2U5BU5D_t2325*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10236_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m10238_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10238(__this, method) (( void (*) (Dictionary_2_t2051 *, const MethodInfo*))Dictionary_2_Resize_m10238_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10240_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10240(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2051 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m10240_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m10242_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10242(__this, method) (( void (*) (Dictionary_2_t2051 *, const MethodInfo*))Dictionary_2_Clear_m10242_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10244_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10244(__this, ___key, method) (( bool (*) (Dictionary_2_t2051 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m10244_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10246_gshared (Dictionary_2_t2051 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10246(__this, ___value, method) (( bool (*) (Dictionary_2_t2051 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m10246_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10248_gshared (Dictionary_2_t2051 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10248(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2051 *, SerializationInfo_t310 *, StreamingContext_t311 , const MethodInfo*))Dictionary_2_GetObjectData_m10248_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10250_gshared (Dictionary_2_t2051 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10250(__this, ___sender, method) (( void (*) (Dictionary_2_t2051 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10250_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10252_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10252(__this, ___key, method) (( bool (*) (Dictionary_2_t2051 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m10252_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10254_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10254(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2051 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m10254_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2055 * Dictionary_2_get_Keys_m10256_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m10256(__this, method) (( KeyCollection_t2055 * (*) (Dictionary_2_t2051 *, const MethodInfo*))Dictionary_2_get_Keys_m10256_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2059 * Dictionary_2_get_Values_m10258_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10258(__this, method) (( ValueCollection_t2059 * (*) (Dictionary_2_t2051 *, const MethodInfo*))Dictionary_2_get_Values_m10258_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m10260_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10260(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2051 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10260_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m10262_gshared (Dictionary_2_t2051 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10262(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2051 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10262_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10264_gshared (Dictionary_2_t2051 * __this, KeyValuePair_2_t2052  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10264(__this, ___pair, method) (( bool (*) (Dictionary_2_t2051 *, KeyValuePair_2_t2052 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10264_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2057  Dictionary_2_GetEnumerator_m10266_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10266(__this, method) (( Enumerator_t2057  (*) (Dictionary_2_t2051 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10266_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t653  Dictionary_2_U3CCopyToU3Em__0_m10268_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10268(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t653  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10268_gshared)(__this /* static, unused */, ___key, ___value, method)
