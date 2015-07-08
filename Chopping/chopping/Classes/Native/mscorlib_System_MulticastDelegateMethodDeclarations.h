#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t47;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1427;
// System.Delegate
struct Delegate_t332;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m1424 (MulticastDelegate_t47 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m1422 (MulticastDelegate_t47 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m1423 (MulticastDelegate_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1427* MulticastDelegate_GetInvocationList_m1426 (MulticastDelegate_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t332 * MulticastDelegate_CombineImpl_m1427 (MulticastDelegate_t47 * __this, Delegate_t332 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m4173 (MulticastDelegate_t47 * __this, MulticastDelegate_t47 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t47 * MulticastDelegate_KPM_m4174 (Object_t * __this /* static, unused */, MulticastDelegate_t47 * ___needle, MulticastDelegate_t47 * ___haystack, MulticastDelegate_t47 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t332 * MulticastDelegate_RemoveImpl_m1428 (MulticastDelegate_t47 * __this, Delegate_t332 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
