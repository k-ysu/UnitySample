#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t187;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t439;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Object[]
struct ObjectU5BU5D_t200;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1248_gshared (List_1_t187 * __this, const MethodInfo* method);
#define List_1__ctor_m1248(__this, method) (( void (*) (List_1_t187 *, const MethodInfo*))List_1__ctor_m1248_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m8978_gshared (List_1_t187 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m8978(__this, ___capacity, method) (( void (*) (List_1_t187 *, int32_t, const MethodInfo*))List_1__ctor_m8978_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m8980_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m8980(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8980_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1461_gshared (List_1_t187 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1461(__this, method) (( Object_t* (*) (List_1_t187 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1446_gshared (List_1_t187 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1446(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t187 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1446_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1443_gshared (List_1_t187 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1443(__this, method) (( Object_t * (*) (List_1_t187 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1449_gshared (List_1_t187 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1449(__this, ___item, method) (( int32_t (*) (List_1_t187 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1449_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1451_gshared (List_1_t187 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1451(__this, ___item, method) (( bool (*) (List_1_t187 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1451_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1452_gshared (List_1_t187 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1452(__this, ___item, method) (( int32_t (*) (List_1_t187 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1452_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1453_gshared (List_1_t187 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1453(__this, ___index, ___item, method) (( void (*) (List_1_t187 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1453_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1454_gshared (List_1_t187 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1454(__this, ___item, method) (( void (*) (List_1_t187 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1454_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1456_gshared (List_1_t187 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1456(__this, method) (( bool (*) (List_1_t187 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1456_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1445_gshared (List_1_t187 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1445(__this, method) (( Object_t * (*) (List_1_t187 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1445_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1447_gshared (List_1_t187 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1447(__this, ___index, method) (( Object_t * (*) (List_1_t187 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1447_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1448_gshared (List_1_t187 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1448(__this, ___index, ___value, method) (( void (*) (List_1_t187 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1448_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m1457_gshared (List_1_t187 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m1457(__this, ___item, method) (( void (*) (List_1_t187 *, Object_t *, const MethodInfo*))List_1_Add_m1457_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m8995_gshared (List_1_t187 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m8995(__this, ___newCount, method) (( void (*) (List_1_t187 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8995_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m1450_gshared (List_1_t187 * __this, const MethodInfo* method);
#define List_1_Clear_m1450(__this, method) (( void (*) (List_1_t187 *, const MethodInfo*))List_1_Clear_m1450_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m1458_gshared (List_1_t187 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m1458(__this, ___item, method) (( bool (*) (List_1_t187 *, Object_t *, const MethodInfo*))List_1_Contains_m1458_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1459_gshared (List_1_t187 * __this, ObjectU5BU5D_t200* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1459(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t187 *, ObjectU5BU5D_t200*, int32_t, const MethodInfo*))List_1_CopyTo_m1459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1950  List_1_GetEnumerator_m8999_gshared (List_1_t187 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m8999(__this, method) (( Enumerator_t1950  (*) (List_1_t187 *, const MethodInfo*))List_1_GetEnumerator_m8999_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1462_gshared (List_1_t187 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m1462(__this, ___item, method) (( int32_t (*) (List_1_t187 *, Object_t *, const MethodInfo*))List_1_IndexOf_m1462_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m9002_gshared (List_1_t187 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m9002(__this, ___start, ___delta, method) (( void (*) (List_1_t187 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9002_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m9004_gshared (List_1_t187 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m9004(__this, ___index, method) (( void (*) (List_1_t187 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9004_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1463_gshared (List_1_t187 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m1463(__this, ___index, ___item, method) (( void (*) (List_1_t187 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m1463_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m1460_gshared (List_1_t187 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m1460(__this, ___item, method) (( bool (*) (List_1_t187 *, Object_t *, const MethodInfo*))List_1_Remove_m1460_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1455_gshared (List_1_t187 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1455(__this, ___index, method) (( void (*) (List_1_t187 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1455_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t200* List_1_ToArray_m9009_gshared (List_1_t187 * __this, const MethodInfo* method);
#define List_1_ToArray_m9009(__this, method) (( ObjectU5BU5D_t200* (*) (List_1_t187 *, const MethodInfo*))List_1_ToArray_m9009_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m9011_gshared (List_1_t187 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m9011(__this, method) (( int32_t (*) (List_1_t187 *, const MethodInfo*))List_1_get_Capacity_m9011_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m9013_gshared (List_1_t187 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m9013(__this, ___value, method) (( void (*) (List_1_t187 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9013_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m1444_gshared (List_1_t187 * __this, const MethodInfo* method);
#define List_1_get_Count_m1444(__this, method) (( int32_t (*) (List_1_t187 *, const MethodInfo*))List_1_get_Count_m1444_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m1464_gshared (List_1_t187 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1464(__this, ___index, method) (( Object_t * (*) (List_1_t187 *, int32_t, const MethodInfo*))List_1_get_Item_m1464_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1465_gshared (List_1_t187 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m1465(__this, ___index, ___value, method) (( void (*) (List_1_t187 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m1465_gshared)(__this, ___index, ___value, method)
