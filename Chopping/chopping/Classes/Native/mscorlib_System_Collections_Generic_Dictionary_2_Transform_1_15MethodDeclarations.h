﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
struct Transform_1_t2061;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t44;
// System.AsyncCallback
struct AsyncCallback_t45;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m10337_gshared (Transform_1_t2061 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m10337(__this, ___object, ___method, method) (( void (*) (Transform_1_t2061 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m10337_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::Invoke(TKey,TValue)
extern "C" int64_t Transform_1_Invoke_m10338_gshared (Transform_1_t2061 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m10338(__this, ___key, ___value, method) (( int64_t (*) (Transform_1_t2061 *, Object_t *, int64_t, const MethodInfo*))Transform_1_Invoke_m10338_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m10339_gshared (Transform_1_t2061 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t45 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m10339(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2061 *, Object_t *, int64_t, AsyncCallback_t45 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m10339_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Transform_1_EndInvoke_m10340_gshared (Transform_1_t2061 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m10340(__this, ___result, method) (( int64_t (*) (Transform_1_t2061 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m10340_gshared)(__this, ___result, method)
