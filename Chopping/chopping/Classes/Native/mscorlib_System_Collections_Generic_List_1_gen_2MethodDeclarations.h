#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t101;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t2301;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.String[]
struct StringU5BU5D_t197;
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m1211(__this, method) (( void (*) (List_1_t101 *, const MethodInfo*))List_1__ctor_m1248_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m9914(__this, ___capacity, method) (( void (*) (List_1_t101 *, int32_t, const MethodInfo*))List_1__ctor_m8978_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String>::.cctor()
#define List_1__cctor_m9915(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8980_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9916(__this, method) (( Object_t* (*) (List_1_t101 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9917(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t101 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1446_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9918(__this, method) (( Object_t * (*) (List_1_t101 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9919(__this, ___item, method) (( int32_t (*) (List_1_t101 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1449_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9920(__this, ___item, method) (( bool (*) (List_1_t101 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1451_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9921(__this, ___item, method) (( int32_t (*) (List_1_t101 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1452_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9922(__this, ___index, ___item, method) (( void (*) (List_1_t101 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1453_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9923(__this, ___item, method) (( void (*) (List_1_t101 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1454_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9924(__this, method) (( bool (*) (List_1_t101 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1456_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9925(__this, method) (( Object_t * (*) (List_1_t101 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1445_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9926(__this, ___index, method) (( Object_t * (*) (List_1_t101 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1447_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9927(__this, ___index, ___value, method) (( void (*) (List_1_t101 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1448_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
#define List_1_Add_m9928(__this, ___item, method) (( void (*) (List_1_t101 *, String_t*, const MethodInfo*))List_1_Add_m1457_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9929(__this, ___newCount, method) (( void (*) (List_1_t101 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8995_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
#define List_1_Clear_m9930(__this, method) (( void (*) (List_1_t101 *, const MethodInfo*))List_1_Clear_m1450_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
#define List_1_Contains_m9931(__this, ___item, method) (( bool (*) (List_1_t101 *, String_t*, const MethodInfo*))List_1_Contains_m1458_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9932(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t101 *, StringU5BU5D_t197*, int32_t, const MethodInfo*))List_1_CopyTo_m1459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m9933(__this, method) (( Enumerator_t2029  (*) (List_1_t101 *, const MethodInfo*))List_1_GetEnumerator_m8999_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
#define List_1_IndexOf_m9934(__this, ___item, method) (( int32_t (*) (List_1_t101 *, String_t*, const MethodInfo*))List_1_IndexOf_m1462_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9935(__this, ___start, ___delta, method) (( void (*) (List_1_t101 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9002_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9936(__this, ___index, method) (( void (*) (List_1_t101 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9004_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,T)
#define List_1_Insert_m9937(__this, ___index, ___item, method) (( void (*) (List_1_t101 *, int32_t, String_t*, const MethodInfo*))List_1_Insert_m1463_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
#define List_1_Remove_m9938(__this, ___item, method) (( bool (*) (List_1_t101 *, String_t*, const MethodInfo*))List_1_Remove_m1460_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9939(__this, ___index, method) (( void (*) (List_1_t101 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1455_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m8090(__this, method) (( StringU5BU5D_t197* (*) (List_1_t101 *, const MethodInfo*))List_1_ToArray_m9009_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Capacity()
#define List_1_get_Capacity_m9940(__this, method) (( int32_t (*) (List_1_t101 *, const MethodInfo*))List_1_get_Capacity_m9011_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9941(__this, ___value, method) (( void (*) (List_1_t101 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9013_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m9942(__this, method) (( int32_t (*) (List_1_t101 *, const MethodInfo*))List_1_get_Count_m1444_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m9943(__this, ___index, method) (( String_t* (*) (List_1_t101 *, int32_t, const MethodInfo*))List_1_get_Item_m1464_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
#define List_1_set_Item_m9944(__this, ___index, ___value, method) (( void (*) (List_1_t101 *, int32_t, String_t*, const MethodInfo*))List_1_set_Item_m1465_gshared)(__this, ___index, ___value, method)
