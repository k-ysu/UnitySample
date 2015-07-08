#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationCallbacks
struct SerializationCallbacks_t1230;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t491;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.SerializationCallbacks::.ctor(System.Type)
extern "C" void SerializationCallbacks__ctor_m6551 (SerializationCallbacks_t1230 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::.cctor()
extern "C" void SerializationCallbacks__cctor_m6552 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasDeserializedCallbacks()
extern "C" bool SerializationCallbacks_get_HasDeserializedCallbacks_m6553 (SerializationCallbacks_t1230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::GetMethodsByAttribute(System.Type,System.Type)
extern "C" ArrayList_t491 * SerializationCallbacks_GetMethodsByAttribute_m6554 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::Invoke(System.Collections.ArrayList,System.Object,System.Runtime.Serialization.StreamingContext)
extern "C" void SerializationCallbacks_Invoke_m6555 (Object_t * __this /* static, unused */, ArrayList_t491 * ___list, Object_t * ___target, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C" void SerializationCallbacks_RaiseOnDeserializing_m6556 (SerializationCallbacks_t1230 * __this, Object_t * ___target, StreamingContext_t311  ___contex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C" void SerializationCallbacks_RaiseOnDeserialized_m6557 (SerializationCallbacks_t1230 * __this, Object_t * ___target, StreamingContext_t311  ___contex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationCallbacks::GetSerializationCallbacks(System.Type)
extern "C" SerializationCallbacks_t1230 * SerializationCallbacks_GetSerializationCallbacks_m6558 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
