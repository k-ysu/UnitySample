#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MissingFieldException
struct MissingFieldException_t1370;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MissingFieldException::.ctor()
extern "C" void MissingFieldException__ctor_m7724 (MissingFieldException_t1370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingFieldException::.ctor(System.String)
extern "C" void MissingFieldException__ctor_m7725 (MissingFieldException_t1370 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingFieldException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingFieldException__ctor_m7726 (MissingFieldException_t1370 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingFieldException::get_Message()
extern "C" String_t* MissingFieldException_get_Message_m7727 (MissingFieldException_t1370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
