#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2102;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t44;
// System.AsyncCallback
struct AsyncCallback_t45;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
#define Transform_1__ctor_m10808(__this, ___object, ___method, method) (( void (*) (Transform_1_t2102 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m9516_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m10809(__this, ___key, ___value, method) (( DictionaryEntry_t653  (*) (Transform_1_t2102 *, String_t*, Object_t *, const MethodInfo*))Transform_1_Invoke_m9517_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m10810(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2102 *, String_t*, Object_t *, AsyncCallback_t45 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m9518_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m10811(__this, ___result, method) (( DictionaryEntry_t653  (*) (Transform_1_t2102 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m9519_gshared)(__this, ___result, method)
