#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t259;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t258;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t2392;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t2166;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m1321(__this, method) (( void (*) (List_1_t259 *, const MethodInfo*))List_1__ctor_m1248_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Int32)
#define List_1__ctor_m11638(__this, ___capacity, method) (( void (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1__ctor_m8978_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.cctor()
#define List_1__cctor_m11639(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8980_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11640(__this, method) (( Object_t* (*) (List_1_t259 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11641(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t259 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1446_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11642(__this, method) (( Object_t * (*) (List_1_t259 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11643(__this, ___item, method) (( int32_t (*) (List_1_t259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1449_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11644(__this, ___item, method) (( bool (*) (List_1_t259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1451_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11645(__this, ___item, method) (( int32_t (*) (List_1_t259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1452_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11646(__this, ___index, ___item, method) (( void (*) (List_1_t259 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1453_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11647(__this, ___item, method) (( void (*) (List_1_t259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1454_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11648(__this, method) (( bool (*) (List_1_t259 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1456_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11649(__this, method) (( Object_t * (*) (List_1_t259 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1445_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11650(__this, ___index, method) (( Object_t * (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1447_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11651(__this, ___index, ___value, method) (( void (*) (List_1_t259 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1448_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Add(T)
#define List_1_Add_m11652(__this, ___item, method) (( void (*) (List_1_t259 *, PersistentCall_t258 *, const MethodInfo*))List_1_Add_m1457_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11653(__this, ___newCount, method) (( void (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8995_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Clear()
#define List_1_Clear_m11654(__this, method) (( void (*) (List_1_t259 *, const MethodInfo*))List_1_Clear_m1450_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define List_1_Contains_m11655(__this, ___item, method) (( bool (*) (List_1_t259 *, PersistentCall_t258 *, const MethodInfo*))List_1_Contains_m1458_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11656(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t259 *, PersistentCallU5BU5D_t2166*, int32_t, const MethodInfo*))List_1_CopyTo_m1459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define List_1_GetEnumerator_m11657(__this, method) (( Enumerator_t2167  (*) (List_1_t259 *, const MethodInfo*))List_1_GetEnumerator_m8999_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define List_1_IndexOf_m11658(__this, ___item, method) (( int32_t (*) (List_1_t259 *, PersistentCall_t258 *, const MethodInfo*))List_1_IndexOf_m1462_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11659(__this, ___start, ___delta, method) (( void (*) (List_1_t259 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9002_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11660(__this, ___index, method) (( void (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9004_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define List_1_Insert_m11661(__this, ___index, ___item, method) (( void (*) (List_1_t259 *, int32_t, PersistentCall_t258 *, const MethodInfo*))List_1_Insert_m1463_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define List_1_Remove_m11662(__this, ___item, method) (( bool (*) (List_1_t259 *, PersistentCall_t258 *, const MethodInfo*))List_1_Remove_m1460_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11663(__this, ___index, method) (( void (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1455_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::ToArray()
#define List_1_ToArray_m11664(__this, method) (( PersistentCallU5BU5D_t2166* (*) (List_1_t259 *, const MethodInfo*))List_1_ToArray_m9009_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Capacity()
#define List_1_get_Capacity_m11665(__this, method) (( int32_t (*) (List_1_t259 *, const MethodInfo*))List_1_get_Capacity_m9011_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11666(__this, ___value, method) (( void (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9013_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Count()
#define List_1_get_Count_m11667(__this, method) (( int32_t (*) (List_1_t259 *, const MethodInfo*))List_1_get_Count_m1444_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define List_1_get_Item_m11668(__this, ___index, method) (( PersistentCall_t258 * (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_get_Item_m1464_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m11669(__this, ___index, ___value, method) (( void (*) (List_1_t259 *, int32_t, PersistentCall_t258 *, const MethodInfo*))List_1_set_Item_m1465_gshared)(__this, ___index, ___value, method)
