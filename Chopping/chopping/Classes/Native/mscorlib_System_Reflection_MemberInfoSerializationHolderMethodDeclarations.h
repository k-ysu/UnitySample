#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MemberInfoSerializationHolder
struct MemberInfoSerializationHolder_t1085;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t196;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.MemberInfoSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MemberInfoSerializationHolder__ctor_m5955 (MemberInfoSerializationHolder_t1085 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes)
extern "C" void MemberInfoSerializationHolder_Serialize_m5956 (Object_t * __this /* static, unused */, SerializationInfo_t310 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes,System.Type[])
extern "C" void MemberInfoSerializationHolder_Serialize_m5957 (Object_t * __this /* static, unused */, SerializationInfo_t310 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, TypeU5BU5D_t196* ___genericArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MemberInfoSerializationHolder_GetObjectData_m5958 (MemberInfoSerializationHolder_t1085 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MemberInfoSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * MemberInfoSerializationHolder_GetRealObject_m5959 (MemberInfoSerializationHolder_t1085 * __this, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
