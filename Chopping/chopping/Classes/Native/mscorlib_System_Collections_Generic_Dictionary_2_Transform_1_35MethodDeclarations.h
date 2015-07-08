#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
struct Transform_1_t2182;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t44;
// System.AsyncCallback
struct AsyncCallback_t45;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11856_gshared (Transform_1_t2182 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11856(__this, ___object, ___method, method) (( void (*) (Transform_1_t2182 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11856_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m11857_gshared (Transform_1_t2182 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11857(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2182 *, Object_t *, uint8_t, const MethodInfo*))Transform_1_Invoke_m11857_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11858_gshared (Transform_1_t2182 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t45 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11858(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2182 *, Object_t *, uint8_t, AsyncCallback_t45 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11858_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m11859_gshared (Transform_1_t2182 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11859(__this, ___result, method) (( Object_t * (*) (Transform_1_t2182 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11859_gshared)(__this, ___result, method)
