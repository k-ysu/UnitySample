#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_t1387;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RuntimeMethodHandle::.ctor(System.IntPtr)
extern "C" void RuntimeMethodHandle__ctor_m7932 (RuntimeMethodHandle_t1387 * __this, IntPtr_t ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeMethodHandle__ctor_m7933 (RuntimeMethodHandle_t1387 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeMethodHandle::get_Value()
extern "C" IntPtr_t RuntimeMethodHandle_get_Value_m7934 (RuntimeMethodHandle_t1387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeMethodHandle_GetObjectData_m7935 (RuntimeMethodHandle_t1387 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeMethodHandle::Equals(System.Object)
extern "C" bool RuntimeMethodHandle_Equals_m7936 (RuntimeMethodHandle_t1387 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeMethodHandle::GetHashCode()
extern "C" int32_t RuntimeMethodHandle_GetHashCode_m7937 (RuntimeMethodHandle_t1387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
