#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t59;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t58;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t2294;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t1986;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m1178(__this, method) (( void (*) (List_1_t59 *, const MethodInfo*))List_1__ctor_m1248_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m9321(__this, ___capacity, method) (( void (*) (List_1_t59 *, int32_t, const MethodInfo*))List_1__ctor_m8978_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m9322(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8980_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9323(__this, method) (( Object_t* (*) (List_1_t59 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9324(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t59 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1446_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9325(__this, method) (( Object_t * (*) (List_1_t59 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9326(__this, ___item, method) (( int32_t (*) (List_1_t59 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1449_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9327(__this, ___item, method) (( bool (*) (List_1_t59 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1451_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9328(__this, ___item, method) (( int32_t (*) (List_1_t59 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1452_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9329(__this, ___index, ___item, method) (( void (*) (List_1_t59 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1453_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9330(__this, ___item, method) (( void (*) (List_1_t59 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1454_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9331(__this, method) (( bool (*) (List_1_t59 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1456_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9332(__this, method) (( Object_t * (*) (List_1_t59 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1445_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9333(__this, ___index, method) (( Object_t * (*) (List_1_t59 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1447_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9334(__this, ___index, ___value, method) (( void (*) (List_1_t59 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1448_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m9335(__this, ___item, method) (( void (*) (List_1_t59 *, GUILayoutEntry_t58 *, const MethodInfo*))List_1_Add_m1457_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9336(__this, ___newCount, method) (( void (*) (List_1_t59 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8995_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m9337(__this, method) (( void (*) (List_1_t59 *, const MethodInfo*))List_1_Clear_m1450_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m9338(__this, ___item, method) (( bool (*) (List_1_t59 *, GUILayoutEntry_t58 *, const MethodInfo*))List_1_Contains_m1458_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9339(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t59 *, GUILayoutEntryU5BU5D_t1986*, int32_t, const MethodInfo*))List_1_CopyTo_m1459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m1172(__this, method) (( Enumerator_t322  (*) (List_1_t59 *, const MethodInfo*))List_1_GetEnumerator_m8999_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m9340(__this, ___item, method) (( int32_t (*) (List_1_t59 *, GUILayoutEntry_t58 *, const MethodInfo*))List_1_IndexOf_m1462_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9341(__this, ___start, ___delta, method) (( void (*) (List_1_t59 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9002_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9342(__this, ___index, method) (( void (*) (List_1_t59 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9004_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m9343(__this, ___index, ___item, method) (( void (*) (List_1_t59 *, int32_t, GUILayoutEntry_t58 *, const MethodInfo*))List_1_Insert_m1463_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m9344(__this, ___item, method) (( bool (*) (List_1_t59 *, GUILayoutEntry_t58 *, const MethodInfo*))List_1_Remove_m1460_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9345(__this, ___index, method) (( void (*) (List_1_t59 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1455_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m9346(__this, method) (( GUILayoutEntryU5BU5D_t1986* (*) (List_1_t59 *, const MethodInfo*))List_1_ToArray_m9009_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m9347(__this, method) (( int32_t (*) (List_1_t59 *, const MethodInfo*))List_1_get_Capacity_m9011_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9348(__this, ___value, method) (( void (*) (List_1_t59 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9013_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m9349(__this, method) (( int32_t (*) (List_1_t59 *, const MethodInfo*))List_1_get_Count_m1444_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m9350(__this, ___index, method) (( GUILayoutEntry_t58 * (*) (List_1_t59 *, int32_t, const MethodInfo*))List_1_get_Item_m1464_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m9351(__this, ___index, ___value, method) (( void (*) (List_1_t59 *, int32_t, GUILayoutEntry_t58 *, const MethodInfo*))List_1_set_Item_m1465_gshared)(__this, ___index, ___value, method)
