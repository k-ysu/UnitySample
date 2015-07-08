#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.DirectoryNotFoundException
struct DirectoryNotFoundException_t1025;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.DirectoryNotFoundException::.ctor()
extern "C" void DirectoryNotFoundException__ctor_m5385 (DirectoryNotFoundException_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryNotFoundException::.ctor(System.String)
extern "C" void DirectoryNotFoundException__ctor_m5386 (DirectoryNotFoundException_t1025 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DirectoryNotFoundException__ctor_m5387 (DirectoryNotFoundException_t1025 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
