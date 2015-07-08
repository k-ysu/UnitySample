#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CollectionBase
struct CollectionBase_t547;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t491;
// System.Collections.IList
struct IList_t444;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;

// System.Void System.Collections.CollectionBase::.ctor()
extern "C" void CollectionBase__ctor_m2487 (CollectionBase_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void CollectionBase_System_Collections_ICollection_CopyTo_m2652 (CollectionBase_t547 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * CollectionBase_System_Collections_ICollection_get_SyncRoot_m2651 (CollectionBase_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.Add(System.Object)
extern "C" int32_t CollectionBase_System_Collections_IList_Add_m2655 (CollectionBase_t547 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.Contains(System.Object)
extern "C" bool CollectionBase_System_Collections_IList_Contains_m2657 (CollectionBase_t547 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t CollectionBase_System_Collections_IList_IndexOf_m2658 (CollectionBase_t547 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void CollectionBase_System_Collections_IList_Insert_m2659 (CollectionBase_t547 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Remove(System.Object)
extern "C" void CollectionBase_System_Collections_IList_Remove_m2660 (CollectionBase_t547 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * CollectionBase_System_Collections_IList_get_Item_m2653 (CollectionBase_t547 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void CollectionBase_System_Collections_IList_set_Item_m2654 (CollectionBase_t547 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C" int32_t CollectionBase_get_Count_m2650 (CollectionBase_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator()
extern "C" Object_t * CollectionBase_GetEnumerator_m2649 (CollectionBase_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::Clear()
extern "C" void CollectionBase_Clear_m2656 (CollectionBase_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::RemoveAt(System.Int32)
extern "C" void CollectionBase_RemoveAt_m2661 (CollectionBase_t547 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C" ArrayList_t491 * CollectionBase_get_InnerList_m2482 (CollectionBase_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Collections.CollectionBase::get_List()
extern "C" Object_t * CollectionBase_get_List_m2538 (CollectionBase_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClear()
extern "C" void CollectionBase_OnClear_m2662 (CollectionBase_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClearComplete()
extern "C" void CollectionBase_OnClearComplete_m2663 (CollectionBase_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsert(System.Int32,System.Object)
extern "C" void CollectionBase_OnInsert_m2664 (CollectionBase_t547 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsertComplete(System.Int32,System.Object)
extern "C" void CollectionBase_OnInsertComplete_m2665 (CollectionBase_t547 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemove(System.Int32,System.Object)
extern "C" void CollectionBase_OnRemove_m2666 (CollectionBase_t547 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemoveComplete(System.Int32,System.Object)
extern "C" void CollectionBase_OnRemoveComplete_m2667 (CollectionBase_t547 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSet(System.Int32,System.Object,System.Object)
extern "C" void CollectionBase_OnSet_m2668 (CollectionBase_t547 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSetComplete(System.Int32,System.Object,System.Object)
extern "C" void CollectionBase_OnSetComplete_m2669 (CollectionBase_t547 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnValidate(System.Object)
extern "C" void CollectionBase_OnValidate_m2670 (CollectionBase_t547 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
