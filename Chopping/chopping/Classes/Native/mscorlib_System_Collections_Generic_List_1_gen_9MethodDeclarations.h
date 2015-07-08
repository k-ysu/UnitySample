#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t375;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t2382;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Type[]
struct TypeU5BU5D_t196;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m1297(__this, method) (( void (*) (List_1_t375 *, const MethodInfo*))List_1__ctor_m1248_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m11494(__this, ___capacity, method) (( void (*) (List_1_t375 *, int32_t, const MethodInfo*))List_1__ctor_m8978_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m11495(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8980_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11496(__this, method) (( Object_t* (*) (List_1_t375 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11497(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t375 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1446_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11498(__this, method) (( Object_t * (*) (List_1_t375 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11499(__this, ___item, method) (( int32_t (*) (List_1_t375 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1449_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11500(__this, ___item, method) (( bool (*) (List_1_t375 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1451_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11501(__this, ___item, method) (( int32_t (*) (List_1_t375 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1452_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11502(__this, ___index, ___item, method) (( void (*) (List_1_t375 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1453_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11503(__this, ___item, method) (( void (*) (List_1_t375 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1454_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11504(__this, method) (( bool (*) (List_1_t375 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1456_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11505(__this, method) (( Object_t * (*) (List_1_t375 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1445_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11506(__this, ___index, method) (( Object_t * (*) (List_1_t375 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1447_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11507(__this, ___index, ___value, method) (( void (*) (List_1_t375 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1448_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m11508(__this, ___item, method) (( void (*) (List_1_t375 *, Type_t *, const MethodInfo*))List_1_Add_m1457_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11509(__this, ___newCount, method) (( void (*) (List_1_t375 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8995_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m11510(__this, method) (( void (*) (List_1_t375 *, const MethodInfo*))List_1_Clear_m1450_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m11511(__this, ___item, method) (( bool (*) (List_1_t375 *, Type_t *, const MethodInfo*))List_1_Contains_m1458_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11512(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t375 *, TypeU5BU5D_t196*, int32_t, const MethodInfo*))List_1_CopyTo_m1459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m11513(__this, method) (( Enumerator_t2155  (*) (List_1_t375 *, const MethodInfo*))List_1_GetEnumerator_m8999_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m11514(__this, ___item, method) (( int32_t (*) (List_1_t375 *, Type_t *, const MethodInfo*))List_1_IndexOf_m1462_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11515(__this, ___start, ___delta, method) (( void (*) (List_1_t375 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9002_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11516(__this, ___index, method) (( void (*) (List_1_t375 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9004_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m11517(__this, ___index, ___item, method) (( void (*) (List_1_t375 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m1463_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m11518(__this, ___item, method) (( bool (*) (List_1_t375 *, Type_t *, const MethodInfo*))List_1_Remove_m1460_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11519(__this, ___index, method) (( void (*) (List_1_t375 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1455_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m1298(__this, method) (( TypeU5BU5D_t196* (*) (List_1_t375 *, const MethodInfo*))List_1_ToArray_m9009_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m11520(__this, method) (( int32_t (*) (List_1_t375 *, const MethodInfo*))List_1_get_Capacity_m9011_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11521(__this, ___value, method) (( void (*) (List_1_t375 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9013_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m11522(__this, method) (( int32_t (*) (List_1_t375 *, const MethodInfo*))List_1_get_Count_m1444_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m11523(__this, ___index, method) (( Type_t * (*) (List_1_t375 *, int32_t, const MethodInfo*))List_1_get_Item_m1464_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m11524(__this, ___index, ___value, method) (( void (*) (List_1_t375 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m1465_gshared)(__this, ___index, ___value, method)
