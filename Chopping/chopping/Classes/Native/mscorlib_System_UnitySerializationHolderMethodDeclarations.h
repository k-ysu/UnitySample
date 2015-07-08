#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1400;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1343;
// System.Reflection.Module
struct Module_t1065;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m8022 (UnitySerializationHolder_t1400 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m8023 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t310 * ___info, StreamingContext_t311  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m8024 (Object_t * __this /* static, unused */, DBNull_t1343 * ___instance, SerializationInfo_t310 * ___info, StreamingContext_t311  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m8025 (Object_t * __this /* static, unused */, Module_t1065 * ___instance, SerializationInfo_t310 * ___info, StreamingContext_t311  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m8026 (UnitySerializationHolder_t1400 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m8027 (UnitySerializationHolder_t1400 * __this, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
