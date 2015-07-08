#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
struct List_1_t1459;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1280;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t2409;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t2263;
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m12394(__this, method) (( void (*) (List_1_t1459 *, const MethodInfo*))List_1__ctor_m1248_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
#define List_1__ctor_m8095(__this, ___capacity, method) (( void (*) (List_1_t1459 *, int32_t, const MethodInfo*))List_1__ctor_m8978_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
#define List_1__cctor_m12395(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8980_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12396(__this, method) (( Object_t* (*) (List_1_t1459 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12397(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1459 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1446_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12398(__this, method) (( Object_t * (*) (List_1_t1459 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12399(__this, ___item, method) (( int32_t (*) (List_1_t1459 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1449_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12400(__this, ___item, method) (( bool (*) (List_1_t1459 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1451_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12401(__this, ___item, method) (( int32_t (*) (List_1_t1459 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1452_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12402(__this, ___index, ___item, method) (( void (*) (List_1_t1459 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1453_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12403(__this, ___item, method) (( void (*) (List_1_t1459 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1454_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12404(__this, method) (( bool (*) (List_1_t1459 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1456_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12405(__this, method) (( Object_t * (*) (List_1_t1459 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1445_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12406(__this, ___index, method) (( Object_t * (*) (List_1_t1459 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1447_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12407(__this, ___index, ___value, method) (( void (*) (List_1_t1459 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1448_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
#define List_1_Add_m12408(__this, ___item, method) (( void (*) (List_1_t1459 *, StrongName_t1280 *, const MethodInfo*))List_1_Add_m1457_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12409(__this, ___newCount, method) (( void (*) (List_1_t1459 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8995_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
#define List_1_Clear_m12410(__this, method) (( void (*) (List_1_t1459 *, const MethodInfo*))List_1_Clear_m1450_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
#define List_1_Contains_m12411(__this, ___item, method) (( bool (*) (List_1_t1459 *, StrongName_t1280 *, const MethodInfo*))List_1_Contains_m1458_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12412(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1459 *, StrongNameU5BU5D_t2263*, int32_t, const MethodInfo*))List_1_CopyTo_m1459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
#define List_1_GetEnumerator_m12413(__this, method) (( Enumerator_t2264  (*) (List_1_t1459 *, const MethodInfo*))List_1_GetEnumerator_m8999_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
#define List_1_IndexOf_m12414(__this, ___item, method) (( int32_t (*) (List_1_t1459 *, StrongName_t1280 *, const MethodInfo*))List_1_IndexOf_m1462_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12415(__this, ___start, ___delta, method) (( void (*) (List_1_t1459 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9002_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12416(__this, ___index, method) (( void (*) (List_1_t1459 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9004_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define List_1_Insert_m12417(__this, ___index, ___item, method) (( void (*) (List_1_t1459 *, int32_t, StrongName_t1280 *, const MethodInfo*))List_1_Insert_m1463_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
#define List_1_Remove_m12418(__this, ___item, method) (( bool (*) (List_1_t1459 *, StrongName_t1280 *, const MethodInfo*))List_1_Remove_m1460_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12419(__this, ___index, method) (( void (*) (List_1_t1459 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1455_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
#define List_1_ToArray_m12420(__this, method) (( StrongNameU5BU5D_t2263* (*) (List_1_t1459 *, const MethodInfo*))List_1_ToArray_m9009_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
#define List_1_get_Capacity_m12421(__this, method) (( int32_t (*) (List_1_t1459 *, const MethodInfo*))List_1_get_Capacity_m9011_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12422(__this, ___value, method) (( void (*) (List_1_t1459 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9013_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
#define List_1_get_Count_m12423(__this, method) (( int32_t (*) (List_1_t1459 *, const MethodInfo*))List_1_get_Count_m1444_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define List_1_get_Item_m12424(__this, ___index, method) (( StrongName_t1280 * (*) (List_1_t1459 *, int32_t, const MethodInfo*))List_1_get_Item_m1464_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define List_1_set_Item_m12425(__this, ___index, ___value, method) (( void (*) (List_1_t1459 *, int32_t, StrongName_t1280 *, const MethodInfo*))List_1_set_Item_m1465_gshared)(__this, ___index, ___value, method)
