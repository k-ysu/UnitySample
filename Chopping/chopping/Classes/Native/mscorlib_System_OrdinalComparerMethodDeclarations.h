﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.OrdinalComparer
struct OrdinalComparer_t1389;
// System.String
struct String_t;

// System.Void System.OrdinalComparer::.ctor(System.Boolean)
extern "C" void OrdinalComparer__ctor_m7947 (OrdinalComparer_t1389 * __this, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.OrdinalComparer::Compare(System.String,System.String)
extern "C" int32_t OrdinalComparer_Compare_m7948 (OrdinalComparer_t1389 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.OrdinalComparer::Equals(System.String,System.String)
extern "C" bool OrdinalComparer_Equals_m7949 (OrdinalComparer_t1389 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.OrdinalComparer::GetHashCode(System.String)
extern "C" int32_t OrdinalComparer_GetHashCode_m7950 (OrdinalComparer_t1389 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
