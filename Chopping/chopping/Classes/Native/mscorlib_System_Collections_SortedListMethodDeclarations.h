﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.SortedList
struct SortedList_t670;
// System.Object
struct Object_t;
// System.Collections.IComparer
struct IComparer_t486;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t652;
// System.Array
struct Array_t;

// System.Void System.Collections.SortedList::.ctor()
extern "C" void SortedList__ctor_m5112 (SortedList_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Int32)
extern "C" void SortedList__ctor_m2416 (SortedList_t670 * __this, int32_t ___initialCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
extern "C" void SortedList__ctor_m5113 (SortedList_t670 * __this, Object_t * ___comparer, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.cctor()
extern "C" void SortedList__cctor_m5114 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * SortedList_System_Collections_IEnumerable_GetEnumerator_m5115 (SortedList_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Count()
extern "C" int32_t SortedList_get_Count_m5116 (SortedList_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_SyncRoot()
extern "C" Object_t * SortedList_get_SyncRoot_m5117 (SortedList_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsFixedSize()
extern "C" bool SortedList_get_IsFixedSize_m5118 (SortedList_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsReadOnly()
extern "C" bool SortedList_get_IsReadOnly_m5119 (SortedList_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_Item(System.Object)
extern "C" Object_t * SortedList_get_Item_m5120 (SortedList_t670 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Item(System.Object,System.Object)
extern "C" void SortedList_set_Item_m5121 (SortedList_t670 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Capacity()
extern "C" int32_t SortedList_get_Capacity_m5122 (SortedList_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Add(System.Object,System.Object)
extern "C" void SortedList_Add_m5123 (SortedList_t670 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::Contains(System.Object)
extern "C" bool SortedList_Contains_m5124 (SortedList_t670 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.SortedList::GetEnumerator()
extern "C" Object_t * SortedList_GetEnumerator_m5125 (SortedList_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Remove(System.Object)
extern "C" void SortedList_Remove_m5126 (SortedList_t670 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyTo(System.Array,System.Int32)
extern "C" void SortedList_CopyTo_m5127 (SortedList_t670 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::RemoveAt(System.Int32)
extern "C" void SortedList_RemoveAt_m5128 (SortedList_t670 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::IndexOfKey(System.Object)
extern "C" int32_t SortedList_IndexOfKey_m5129 (SortedList_t670 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::ContainsKey(System.Object)
extern "C" bool SortedList_ContainsKey_m5130 (SortedList_t670 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetByIndex(System.Int32)
extern "C" Object_t * SortedList_GetByIndex_m5131 (SortedList_t670 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::EnsureCapacity(System.Int32,System.Int32)
extern "C" void SortedList_EnsureCapacity_m5132 (SortedList_t670 * __this, int32_t ___n, int32_t ___free, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::PutImpl(System.Object,System.Object,System.Boolean)
extern "C" void SortedList_PutImpl_m5133 (SortedList_t670 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetImpl(System.Object)
extern "C" Object_t * SortedList_GetImpl_m5134 (SortedList_t670 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::InitTable(System.Int32,System.Boolean)
extern "C" void SortedList_InitTable_m5135 (SortedList_t670 * __this, int32_t ___capacity, bool ___forceSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::Find(System.Object)
extern "C" int32_t SortedList_Find_m5136 (SortedList_t670 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
