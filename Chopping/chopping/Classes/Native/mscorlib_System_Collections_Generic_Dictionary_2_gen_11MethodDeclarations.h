#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2007;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t296;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2282;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2010;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2014;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1989;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t2307;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2308;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2309;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t652;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m9583_gshared (Dictionary_2_t2007 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9583(__this, method) (( void (*) (Dictionary_2_t2007 *, const MethodInfo*))Dictionary_2__ctor_m9583_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9585_gshared (Dictionary_2_t2007 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9585(__this, ___comparer, method) (( void (*) (Dictionary_2_t2007 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9585_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9587_gshared (Dictionary_2_t2007 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9587(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2007 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9587_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9588_gshared (Dictionary_2_t2007 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9588(__this, ___capacity, method) (( void (*) (Dictionary_2_t2007 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9588_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9590_gshared (Dictionary_2_t2007 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9590(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2007 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9590_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9592_gshared (Dictionary_2_t2007 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9592(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2007 *, SerializationInfo_t310 *, StreamingContext_t311 , const MethodInfo*))Dictionary_2__ctor_m9592_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9594_gshared (Dictionary_2_t2007 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9594(__this, method) (( Object_t* (*) (Dictionary_2_t2007 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9594_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9596_gshared (Dictionary_2_t2007 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9596(__this, method) (( Object_t* (*) (Dictionary_2_t2007 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9596_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9598_gshared (Dictionary_2_t2007 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9598(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2007 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9598_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9600_gshared (Dictionary_2_t2007 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9600(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2007 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9600_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9602_gshared (Dictionary_2_t2007 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9602(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2007 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9602_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9604_gshared (Dictionary_2_t2007 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9604(__this, ___key, method) (( bool (*) (Dictionary_2_t2007 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9604_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9606_gshared (Dictionary_2_t2007 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9606(__this, ___key, method) (( void (*) (Dictionary_2_t2007 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9606_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9608_gshared (Dictionary_2_t2007 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9608(__this, method) (( Object_t * (*) (Dictionary_2_t2007 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9608_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9610_gshared (Dictionary_2_t2007 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9610(__this, method) (( bool (*) (Dictionary_2_t2007 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9610_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9612_gshared (Dictionary_2_t2007 * __this, KeyValuePair_2_t2008  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9612(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2007 *, KeyValuePair_2_t2008 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9612_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9614_gshared (Dictionary_2_t2007 * __this, KeyValuePair_2_t2008  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9614(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2007 *, KeyValuePair_2_t2008 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9614_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9616_gshared (Dictionary_2_t2007 * __this, KeyValuePair_2U5BU5D_t2308* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9616(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2007 *, KeyValuePair_2U5BU5D_t2308*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9616_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9618_gshared (Dictionary_2_t2007 * __this, KeyValuePair_2_t2008  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9618(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2007 *, KeyValuePair_2_t2008 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9618_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9620_gshared (Dictionary_2_t2007 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9620(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2007 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9620_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9622_gshared (Dictionary_2_t2007 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9622(__this, method) (( Object_t * (*) (Dictionary_2_t2007 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9622_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9624_gshared (Dictionary_2_t2007 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9624(__this, method) (( Object_t* (*) (Dictionary_2_t2007 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9624_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9626_gshared (Dictionary_2_t2007 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9626(__this, method) (( Object_t * (*) (Dictionary_2_t2007 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9626_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9628_gshared (Dictionary_2_t2007 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9628(__this, method) (( int32_t (*) (Dictionary_2_t2007 *, const MethodInfo*))Dictionary_2_get_Count_m9628_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m9630_gshared (Dictionary_2_t2007 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9630(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2007 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9630_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9632_gshared (Dictionary_2_t2007 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9632(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2007 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9632_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9634_gshared (Dictionary_2_t2007 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9634(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2007 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9634_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9636_gshared (Dictionary_2_t2007 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9636(__this, ___size, method) (( void (*) (Dictionary_2_t2007 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9636_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9638_gshared (Dictionary_2_t2007 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9638(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2007 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9638_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2008  Dictionary_2_make_pair_m9640_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9640(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2008  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9640_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9642_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9642(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m9642_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m9644_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9644(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9644_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9646_gshared (Dictionary_2_t2007 * __this, KeyValuePair_2U5BU5D_t2308* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9646(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2007 *, KeyValuePair_2U5BU5D_t2308*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9646_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m9648_gshared (Dictionary_2_t2007 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9648(__this, method) (( void (*) (Dictionary_2_t2007 *, const MethodInfo*))Dictionary_2_Resize_m9648_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9650_gshared (Dictionary_2_t2007 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9650(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2007 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m9650_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m9652_gshared (Dictionary_2_t2007 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9652(__this, method) (( void (*) (Dictionary_2_t2007 *, const MethodInfo*))Dictionary_2_Clear_m9652_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9654_gshared (Dictionary_2_t2007 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9654(__this, ___key, method) (( bool (*) (Dictionary_2_t2007 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9654_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9656_gshared (Dictionary_2_t2007 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9656(__this, ___value, method) (( bool (*) (Dictionary_2_t2007 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9656_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9658_gshared (Dictionary_2_t2007 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9658(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2007 *, SerializationInfo_t310 *, StreamingContext_t311 , const MethodInfo*))Dictionary_2_GetObjectData_m9658_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9660_gshared (Dictionary_2_t2007 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9660(__this, ___sender, method) (( void (*) (Dictionary_2_t2007 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9660_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9662_gshared (Dictionary_2_t2007 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9662(__this, ___key, method) (( bool (*) (Dictionary_2_t2007 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9662_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9664_gshared (Dictionary_2_t2007 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9664(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2007 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9664_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2010 * Dictionary_2_get_Keys_m9666_gshared (Dictionary_2_t2007 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9666(__this, method) (( KeyCollection_t2010 * (*) (Dictionary_2_t2007 *, const MethodInfo*))Dictionary_2_get_Keys_m9666_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2014 * Dictionary_2_get_Values_m9668_gshared (Dictionary_2_t2007 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9668(__this, method) (( ValueCollection_t2014 * (*) (Dictionary_2_t2007 *, const MethodInfo*))Dictionary_2_get_Values_m9668_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9670_gshared (Dictionary_2_t2007 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9670(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2007 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9670_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m9672_gshared (Dictionary_2_t2007 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9672(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2007 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9672_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9674_gshared (Dictionary_2_t2007 * __this, KeyValuePair_2_t2008  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9674(__this, ___pair, method) (( bool (*) (Dictionary_2_t2007 *, KeyValuePair_2_t2008 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9674_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2012  Dictionary_2_GetEnumerator_m9676_gshared (Dictionary_2_t2007 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9676(__this, method) (( Enumerator_t2012  (*) (Dictionary_2_t2007 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9676_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t653  Dictionary_2_U3CCopyToU3Em__0_m9678_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9678(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t653  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9678_gshared)(__this /* static, unused */, ___key, ___value, method)
