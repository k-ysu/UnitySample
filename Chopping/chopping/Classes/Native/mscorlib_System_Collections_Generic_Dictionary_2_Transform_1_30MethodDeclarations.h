#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transform_1_t2136;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t44;
// System.AsyncCallback
struct AsyncCallback_t45;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11360_gshared (Transform_1_t2136 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11360(__this, ___object, ___method, method) (( void (*) (Transform_1_t2136 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11360_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1992  Transform_1_Invoke_m11361_gshared (Transform_1_t2136 * __this, Object_t * ___key, KeyValuePair_2_t1992  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11361(__this, ___key, ___value, method) (( KeyValuePair_2_t1992  (*) (Transform_1_t2136 *, Object_t *, KeyValuePair_2_t1992 , const MethodInfo*))Transform_1_Invoke_m11361_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11362_gshared (Transform_1_t2136 * __this, Object_t * ___key, KeyValuePair_2_t1992  ___value, AsyncCallback_t45 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11362(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2136 *, Object_t *, KeyValuePair_2_t1992 , AsyncCallback_t45 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11362_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1992  Transform_1_EndInvoke_m11363_gshared (Transform_1_t2136 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11363(__this, ___result, method) (( KeyValuePair_2_t1992  (*) (Transform_1_t2136 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11363_gshared)(__this, ___result, method)
