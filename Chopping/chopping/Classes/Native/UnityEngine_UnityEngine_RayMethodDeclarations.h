#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Ray
struct Ray_t87;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" Vector3_t81  Ray_get_direction_m460 (Ray_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Ray::ToString()
extern "C" String_t* Ray_ToString_m461 (Ray_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
