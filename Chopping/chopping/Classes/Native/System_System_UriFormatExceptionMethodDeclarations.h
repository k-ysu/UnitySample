#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UriFormatException
struct UriFormatException_t643;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UriFormatException::.ctor()
extern "C" void UriFormatException__ctor_m2352 (UriFormatException_t643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriFormatException::.ctor(System.String)
extern "C" void UriFormatException__ctor_m2353 (UriFormatException_t643 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UriFormatException__ctor_m2354 (UriFormatException_t643 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m2355 (UriFormatException_t643 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
