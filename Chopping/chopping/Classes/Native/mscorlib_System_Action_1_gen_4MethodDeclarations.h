﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.Font>
struct Action_1_t148;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t69;
// System.IAsyncResult
struct IAsyncResult_t44;
// System.AsyncCallback
struct AsyncCallback_t45;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"
#define Action_1__ctor_m10014(__this, ___object, ___method, method) (( void (*) (Action_1_t148 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m8928_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Font>::Invoke(T)
#define Action_1_Invoke_m10015(__this, ___obj, method) (( void (*) (Action_1_t148 *, Font_t69 *, const MethodInfo*))Action_1_Invoke_m8930_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Font>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m10016(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t148 *, Font_t69 *, AsyncCallback_t45 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m8932_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Font>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m10017(__this, ___result, method) (( void (*) (Action_1_t148 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m8934_gshared)(__this, ___result, method)
