#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t2224;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t44;
// System.AsyncCallback
struct AsyncCallback_t45;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12163_gshared (Predicate_1_t2224 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m12163(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2224 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12163_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12164_gshared (Predicate_1_t2224 * __this, Object_t * ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m12164(__this, ___obj, method) (( bool (*) (Predicate_1_t2224 *, Object_t *, const MethodInfo*))Predicate_1_Invoke_m12164_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12165_gshared (Predicate_1_t2224 * __this, Object_t * ___obj, AsyncCallback_t45 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m12165(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2224 *, Object_t *, AsyncCallback_t45 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12165_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12166_gshared (Predicate_1_t2224 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m12166(__this, ___result, method) (( bool (*) (Predicate_1_t2224 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12166_gshared)(__this, ___result, method)
