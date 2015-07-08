#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform
struct Transform_t92;
// System.Collections.IEnumerator
struct IEnumerator_t279;

// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m626 (Transform_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" Object_t * Transform_GetEnumerator_m627 (Transform_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t92 * Transform_GetChild_m628 (Transform_t92 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
