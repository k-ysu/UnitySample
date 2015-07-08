#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t16;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t44;
// System.AsyncCallback
struct AsyncCallback_t45;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
#define Action_1__ctor_m8919(__this, ___object, ___method, method) (( void (*) (Action_1_t16 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m8920_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m8921(__this, ___obj, method) (( void (*) (Action_1_t16 *, bool, const MethodInfo*))Action_1_Invoke_m8922_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m8923(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t16 *, bool, AsyncCallback_t45 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m8924_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m8925(__this, ___result, method) (( void (*) (Action_1_t16 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m8926_gshared)(__this, ___result, method)
