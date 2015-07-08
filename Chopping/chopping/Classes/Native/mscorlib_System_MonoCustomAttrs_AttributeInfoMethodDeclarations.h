#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoCustomAttrs/AttributeInfo
struct AttributeInfo_t1374;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t401;

// System.Void System.MonoCustomAttrs/AttributeInfo::.ctor(System.AttributeUsageAttribute,System.Int32)
extern "C" void AttributeInfo__ctor_m7740 (AttributeInfo_t1374 * __this, AttributeUsageAttribute_t401 * ___usage, int32_t ___inheritanceLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::get_Usage()
extern "C" AttributeUsageAttribute_t401 * AttributeInfo_get_Usage_m7741 (AttributeInfo_t1374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoCustomAttrs/AttributeInfo::get_InheritanceLevel()
extern "C" int32_t AttributeInfo_get_InheritanceLevel_m7742 (AttributeInfo_t1374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
