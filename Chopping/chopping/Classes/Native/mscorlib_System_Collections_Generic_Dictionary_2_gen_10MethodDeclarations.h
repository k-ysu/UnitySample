#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1991;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t296;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t1994;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1998;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1989;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t2299;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2127;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2300;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t652;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9358_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9358(__this, method) (( void (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2__ctor_m9358_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9359_gshared (Dictionary_2_t1991 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9359(__this, ___comparer, method) (( void (*) (Dictionary_2_t1991 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9359_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9361_gshared (Dictionary_2_t1991 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9361(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1991 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9361_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9363_gshared (Dictionary_2_t1991 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9363(__this, ___capacity, method) (( void (*) (Dictionary_2_t1991 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9363_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9365_gshared (Dictionary_2_t1991 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9365(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1991 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9365_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9367_gshared (Dictionary_2_t1991 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9367(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1991 *, SerializationInfo_t310 *, StreamingContext_t311 , const MethodInfo*))Dictionary_2__ctor_m9367_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9369_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9369(__this, method) (( Object_t* (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9369_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9371_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9371(__this, method) (( Object_t* (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9371_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9373_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9373(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9373_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9375_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9375(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1991 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9375_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9377_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9377(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1991 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9377_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9379_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9379(__this, ___key, method) (( bool (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9379_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9381_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9381(__this, ___key, method) (( void (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9381_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9383_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9383(__this, method) (( Object_t * (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9383_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9385_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9385(__this, method) (( bool (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9385_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9387_gshared (Dictionary_2_t1991 * __this, KeyValuePair_2_t1992  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9387(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1991 *, KeyValuePair_2_t1992 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9387_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9389_gshared (Dictionary_2_t1991 * __this, KeyValuePair_2_t1992  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9389(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1991 *, KeyValuePair_2_t1992 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9389_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9391_gshared (Dictionary_2_t1991 * __this, KeyValuePair_2U5BU5D_t2127* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9391(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1991 *, KeyValuePair_2U5BU5D_t2127*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9391_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9393_gshared (Dictionary_2_t1991 * __this, KeyValuePair_2_t1992  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9393(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1991 *, KeyValuePair_2_t1992 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9393_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9395_gshared (Dictionary_2_t1991 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9395(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1991 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9395_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9397_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9397(__this, method) (( Object_t * (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9397_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9399_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9399(__this, method) (( Object_t* (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9399_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9401_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9401(__this, method) (( Object_t * (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9403_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9403(__this, method) (( int32_t (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_get_Count_m9403_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9405_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9405(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9405_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9407_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9407(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1991 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9407_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9409_gshared (Dictionary_2_t1991 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9409(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1991 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9409_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9411_gshared (Dictionary_2_t1991 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9411(__this, ___size, method) (( void (*) (Dictionary_2_t1991 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9411_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9413_gshared (Dictionary_2_t1991 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9413(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1991 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9413_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1992  Dictionary_2_make_pair_m9415_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9415(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1992  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9415_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9417_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9417(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9417_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9419_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9419(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9419_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9421_gshared (Dictionary_2_t1991 * __this, KeyValuePair_2U5BU5D_t2127* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9421(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1991 *, KeyValuePair_2U5BU5D_t2127*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9421_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9423_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9423(__this, method) (( void (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_Resize_m9423_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9425_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9425(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1991 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m9425_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9427_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9427(__this, method) (( void (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_Clear_m9427_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9429_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9429(__this, ___key, method) (( bool (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9429_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9431_gshared (Dictionary_2_t1991 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9431(__this, ___value, method) (( bool (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9431_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9433_gshared (Dictionary_2_t1991 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9433(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1991 *, SerializationInfo_t310 *, StreamingContext_t311 , const MethodInfo*))Dictionary_2_GetObjectData_m9433_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9435_gshared (Dictionary_2_t1991 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9435(__this, ___sender, method) (( void (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9435_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9437_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9437(__this, ___key, method) (( bool (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9437_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9439_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9439(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1991 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9439_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t1994 * Dictionary_2_get_Keys_m9441_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9441(__this, method) (( KeyCollection_t1994 * (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_get_Keys_m9441_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1998 * Dictionary_2_get_Values_m9442_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9442(__this, method) (( ValueCollection_t1998 * (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_get_Values_m9442_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9444_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9444(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9444_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9446_gshared (Dictionary_2_t1991 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9446(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9446_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9448_gshared (Dictionary_2_t1991 * __this, KeyValuePair_2_t1992  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9448(__this, ___pair, method) (( bool (*) (Dictionary_2_t1991 *, KeyValuePair_2_t1992 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9448_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1996  Dictionary_2_GetEnumerator_m9450_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9450(__this, method) (( Enumerator_t1996  (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9450_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t653  Dictionary_2_U3CCopyToU3Em__0_m9452_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9452(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t653  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9452_gshared)(__this /* static, unused */, ___key, ___value, method)
