#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2176;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t296;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t2398;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t2179;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t2183;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1989;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t2399;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t2400;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t2401;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t652;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m11719_gshared (Dictionary_2_t2176 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11719(__this, method) (( void (*) (Dictionary_2_t2176 *, const MethodInfo*))Dictionary_2__ctor_m11719_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11720_gshared (Dictionary_2_t2176 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11720(__this, ___comparer, method) (( void (*) (Dictionary_2_t2176 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11720_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11722_gshared (Dictionary_2_t2176 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11722(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2176 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11722_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11724_gshared (Dictionary_2_t2176 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11724(__this, ___capacity, method) (( void (*) (Dictionary_2_t2176 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11724_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11726_gshared (Dictionary_2_t2176 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11726(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2176 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11726_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11728_gshared (Dictionary_2_t2176 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11728(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2176 *, SerializationInfo_t310 *, StreamingContext_t311 , const MethodInfo*))Dictionary_2__ctor_m11728_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11730_gshared (Dictionary_2_t2176 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11730(__this, method) (( Object_t* (*) (Dictionary_2_t2176 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11730_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11732_gshared (Dictionary_2_t2176 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11732(__this, method) (( Object_t* (*) (Dictionary_2_t2176 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11732_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11734_gshared (Dictionary_2_t2176 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11734(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2176 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11734_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11736_gshared (Dictionary_2_t2176 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11736(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2176 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11736_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11738_gshared (Dictionary_2_t2176 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11738(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2176 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11738_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11740_gshared (Dictionary_2_t2176 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11740(__this, ___key, method) (( bool (*) (Dictionary_2_t2176 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11740_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11742_gshared (Dictionary_2_t2176 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11742(__this, ___key, method) (( void (*) (Dictionary_2_t2176 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11742_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11744_gshared (Dictionary_2_t2176 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11744(__this, method) (( Object_t * (*) (Dictionary_2_t2176 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11744_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11746_gshared (Dictionary_2_t2176 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11746(__this, method) (( bool (*) (Dictionary_2_t2176 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11746_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11748_gshared (Dictionary_2_t2176 * __this, KeyValuePair_2_t2177  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11748(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2176 *, KeyValuePair_2_t2177 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11748_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11750_gshared (Dictionary_2_t2176 * __this, KeyValuePair_2_t2177  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11750(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2176 *, KeyValuePair_2_t2177 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11750_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11752_gshared (Dictionary_2_t2176 * __this, KeyValuePair_2U5BU5D_t2400* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11752(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2176 *, KeyValuePair_2U5BU5D_t2400*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11752_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11754_gshared (Dictionary_2_t2176 * __this, KeyValuePair_2_t2177  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11754(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2176 *, KeyValuePair_2_t2177 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11754_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11756_gshared (Dictionary_2_t2176 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11756(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2176 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11756_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11758_gshared (Dictionary_2_t2176 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11758(__this, method) (( Object_t * (*) (Dictionary_2_t2176 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11758_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11760_gshared (Dictionary_2_t2176 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11760(__this, method) (( Object_t* (*) (Dictionary_2_t2176 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11760_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11762_gshared (Dictionary_2_t2176 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11762(__this, method) (( Object_t * (*) (Dictionary_2_t2176 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11762_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11764_gshared (Dictionary_2_t2176 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11764(__this, method) (( int32_t (*) (Dictionary_2_t2176 *, const MethodInfo*))Dictionary_2_get_Count_m11764_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m11766_gshared (Dictionary_2_t2176 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11766(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t2176 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11766_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11768_gshared (Dictionary_2_t2176 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11768(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2176 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m11768_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11770_gshared (Dictionary_2_t2176 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11770(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2176 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11770_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11772_gshared (Dictionary_2_t2176 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11772(__this, ___size, method) (( void (*) (Dictionary_2_t2176 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11772_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11774_gshared (Dictionary_2_t2176 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11774(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2176 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11774_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2177  Dictionary_2_make_pair_m11776_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11776(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2177  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m11776_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11778_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11778(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m11778_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m11780_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11780(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m11780_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11782_gshared (Dictionary_2_t2176 * __this, KeyValuePair_2U5BU5D_t2400* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11782(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2176 *, KeyValuePair_2U5BU5D_t2400*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11782_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m11784_gshared (Dictionary_2_t2176 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11784(__this, method) (( void (*) (Dictionary_2_t2176 *, const MethodInfo*))Dictionary_2_Resize_m11784_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11786_gshared (Dictionary_2_t2176 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11786(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2176 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m11786_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m11788_gshared (Dictionary_2_t2176 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11788(__this, method) (( void (*) (Dictionary_2_t2176 *, const MethodInfo*))Dictionary_2_Clear_m11788_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11790_gshared (Dictionary_2_t2176 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11790(__this, ___key, method) (( bool (*) (Dictionary_2_t2176 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11790_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11792_gshared (Dictionary_2_t2176 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11792(__this, ___value, method) (( bool (*) (Dictionary_2_t2176 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m11792_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11794_gshared (Dictionary_2_t2176 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11794(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2176 *, SerializationInfo_t310 *, StreamingContext_t311 , const MethodInfo*))Dictionary_2_GetObjectData_m11794_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11796_gshared (Dictionary_2_t2176 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11796(__this, ___sender, method) (( void (*) (Dictionary_2_t2176 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11796_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11798_gshared (Dictionary_2_t2176 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11798(__this, ___key, method) (( bool (*) (Dictionary_2_t2176 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11798_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11800_gshared (Dictionary_2_t2176 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11800(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2176 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11800_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t2179 * Dictionary_2_get_Keys_m11802_gshared (Dictionary_2_t2176 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11802(__this, method) (( KeyCollection_t2179 * (*) (Dictionary_2_t2176 *, const MethodInfo*))Dictionary_2_get_Keys_m11802_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t2183 * Dictionary_2_get_Values_m11804_gshared (Dictionary_2_t2176 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11804(__this, method) (( ValueCollection_t2183 * (*) (Dictionary_2_t2176 *, const MethodInfo*))Dictionary_2_get_Values_m11804_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11806_gshared (Dictionary_2_t2176 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11806(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2176 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11806_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m11808_gshared (Dictionary_2_t2176 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11808(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t2176 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11808_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11810_gshared (Dictionary_2_t2176 * __this, KeyValuePair_2_t2177  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11810(__this, ___pair, method) (( bool (*) (Dictionary_2_t2176 *, KeyValuePair_2_t2177 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11810_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t2181  Dictionary_2_GetEnumerator_m11812_gshared (Dictionary_2_t2176 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11812(__this, method) (( Enumerator_t2181  (*) (Dictionary_2_t2176 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11812_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t653  Dictionary_2_U3CCopyToU3Em__0_m11814_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11814(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t653  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11814_gshared)(__this /* static, unused */, ___key, ___value, method)
