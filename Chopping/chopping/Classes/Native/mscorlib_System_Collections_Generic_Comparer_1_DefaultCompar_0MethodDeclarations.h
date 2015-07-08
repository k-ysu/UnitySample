﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>
struct DefaultComparer_t2227;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>::.ctor()
extern "C" void DefaultComparer__ctor_m12175_gshared (DefaultComparer_t2227 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12175(__this, method) (( void (*) (DefaultComparer_t2227 *, const MethodInfo*))DefaultComparer__ctor_m12175_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12176_gshared (DefaultComparer_t2227 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12176(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2227 *, Object_t *, Object_t *, const MethodInfo*))DefaultComparer_Compare_m12176_gshared)(__this, ___x, ___y, method)