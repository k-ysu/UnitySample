#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct DictionaryNodeEnumerator_t485;
// System.Object
struct Object_t;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t484;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t482;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::.ctor(System.Collections.Specialized.ListDictionary)
extern "C" void DictionaryNodeEnumerator__ctor_m1505 (DictionaryNodeEnumerator_t485 * __this, ListDictionary_t482 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::FailFast()
extern "C" void DictionaryNodeEnumerator_FailFast_m1506 (DictionaryNodeEnumerator_t485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::MoveNext()
extern "C" bool DictionaryNodeEnumerator_MoveNext_m1507 (DictionaryNodeEnumerator_t485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::Reset()
extern "C" void DictionaryNodeEnumerator_Reset_m1508 (DictionaryNodeEnumerator_t485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Current()
extern "C" Object_t * DictionaryNodeEnumerator_get_Current_m1509 (DictionaryNodeEnumerator_t485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_DictionaryNode()
extern "C" DictionaryNode_t484 * DictionaryNodeEnumerator_get_DictionaryNode_m1510 (DictionaryNodeEnumerator_t485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Entry()
extern "C" DictionaryEntry_t653  DictionaryNodeEnumerator_get_Entry_m1511 (DictionaryNodeEnumerator_t485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Key()
extern "C" Object_t * DictionaryNodeEnumerator_get_Key_m1512 (DictionaryNodeEnumerator_t485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Value()
extern "C" Object_t * DictionaryNodeEnumerator_get_Value_m1513 (DictionaryNodeEnumerator_t485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
