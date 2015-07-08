#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t516;
// System.Uri
struct Uri_t184;
// System.Net.ServicePoint
struct ServicePoint_t515;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m1592 (HttpWebRequest_t516 * __this, Uri_t184 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m1593 (HttpWebRequest_t516 * __this, SerializationInfo_t310 * ___serializationInfo, StreamingContext_t311  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m1594 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m1595 (HttpWebRequest_t516 * __this, SerializationInfo_t310 * ___serializationInfo, StreamingContext_t311  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t184 * HttpWebRequest_get_Address_m1596 (HttpWebRequest_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t515 * HttpWebRequest_get_ServicePoint_m1597 (HttpWebRequest_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t515 * HttpWebRequest_GetServicePoint_m1598 (HttpWebRequest_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m1599 (HttpWebRequest_t516 * __this, SerializationInfo_t310 * ___serializationInfo, StreamingContext_t311  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
