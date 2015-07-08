#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t174;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t173;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerator_1_t2331;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// UnityEngine.Networking.Match.MatchDesc[]
struct MatchDescU5BU5D_t2073;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m10453(__this, method) (( void (*) (List_1_t174 *, const MethodInfo*))List_1__ctor_m1248_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Int32)
#define List_1__ctor_m10454(__this, ___capacity, method) (( void (*) (List_1_t174 *, int32_t, const MethodInfo*))List_1__ctor_m8978_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.cctor()
#define List_1__cctor_m10455(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8980_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10456(__this, method) (( Object_t* (*) (List_1_t174 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m10457(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t174 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1446_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10458(__this, method) (( Object_t * (*) (List_1_t174 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m10459(__this, ___item, method) (( int32_t (*) (List_1_t174 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1449_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m10460(__this, ___item, method) (( bool (*) (List_1_t174 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1451_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m10461(__this, ___item, method) (( int32_t (*) (List_1_t174 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1452_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m10462(__this, ___index, ___item, method) (( void (*) (List_1_t174 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1453_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m10463(__this, ___item, method) (( void (*) (List_1_t174 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1454_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10464(__this, method) (( bool (*) (List_1_t174 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1456_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m10465(__this, method) (( Object_t * (*) (List_1_t174 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1445_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m10466(__this, ___index, method) (( Object_t * (*) (List_1_t174 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1447_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m10467(__this, ___index, ___value, method) (( void (*) (List_1_t174 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1448_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Add(T)
#define List_1_Add_m10468(__this, ___item, method) (( void (*) (List_1_t174 *, MatchDesc_t173 *, const MethodInfo*))List_1_Add_m1457_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m10469(__this, ___newCount, method) (( void (*) (List_1_t174 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8995_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Clear()
#define List_1_Clear_m10470(__this, method) (( void (*) (List_1_t174 *, const MethodInfo*))List_1_Clear_m1450_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
#define List_1_Contains_m10471(__this, ___item, method) (( bool (*) (List_1_t174 *, MatchDesc_t173 *, const MethodInfo*))List_1_Contains_m1458_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m10472(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t174 *, MatchDescU5BU5D_t2073*, int32_t, const MethodInfo*))List_1_CopyTo_m1459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
#define List_1_GetEnumerator_m10473(__this, method) (( Enumerator_t2074  (*) (List_1_t174 *, const MethodInfo*))List_1_GetEnumerator_m8999_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::IndexOf(T)
#define List_1_IndexOf_m10474(__this, ___item, method) (( int32_t (*) (List_1_t174 *, MatchDesc_t173 *, const MethodInfo*))List_1_IndexOf_m1462_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m10475(__this, ___start, ___delta, method) (( void (*) (List_1_t174 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9002_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m10476(__this, ___index, method) (( void (*) (List_1_t174 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9004_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Insert(System.Int32,T)
#define List_1_Insert_m10477(__this, ___index, ___item, method) (( void (*) (List_1_t174 *, int32_t, MatchDesc_t173 *, const MethodInfo*))List_1_Insert_m1463_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Remove(T)
#define List_1_Remove_m10478(__this, ___item, method) (( bool (*) (List_1_t174 *, MatchDesc_t173 *, const MethodInfo*))List_1_Remove_m1460_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m10479(__this, ___index, method) (( void (*) (List_1_t174 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1455_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::ToArray()
#define List_1_ToArray_m10480(__this, method) (( MatchDescU5BU5D_t2073* (*) (List_1_t174 *, const MethodInfo*))List_1_ToArray_m9009_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Capacity()
#define List_1_get_Capacity_m10481(__this, method) (( int32_t (*) (List_1_t174 *, const MethodInfo*))List_1_get_Capacity_m9011_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m10482(__this, ___value, method) (( void (*) (List_1_t174 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9013_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
#define List_1_get_Count_m10483(__this, method) (( int32_t (*) (List_1_t174 *, const MethodInfo*))List_1_get_Count_m1444_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Item(System.Int32)
#define List_1_get_Item_m10484(__this, ___index, method) (( MatchDesc_t173 * (*) (List_1_t174 *, int32_t, const MethodInfo*))List_1_get_Item_m1464_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m10485(__this, ___index, ___value, method) (( void (*) (List_1_t174 *, int32_t, MatchDesc_t173 *, const MethodInfo*))List_1_set_Item_m1465_gshared)(__this, ___index, ___value, method)
