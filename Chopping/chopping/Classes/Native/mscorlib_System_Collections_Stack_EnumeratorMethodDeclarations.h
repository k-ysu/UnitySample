#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Stack/Enumerator
struct Enumerator_t996;
// System.Object
struct Object_t;
// System.Collections.Stack
struct Stack_t271;

// System.Void System.Collections.Stack/Enumerator::.ctor(System.Collections.Stack)
extern "C" void Enumerator__ctor_m5137 (Enumerator_t996 * __this, Stack_t271 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m5138 (Enumerator_t996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m5139 (Enumerator_t996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
