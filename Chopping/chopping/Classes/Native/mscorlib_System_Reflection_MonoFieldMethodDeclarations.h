#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoField
struct MonoField_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t200;
// System.Object
struct Object_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.Binder
struct Binder_t376;
// System.Globalization.CultureInfo
struct CultureInfo_t342;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoField::.ctor()
extern "C" void MonoField__ctor_m6009 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldAttributes System.Reflection.MonoField::get_Attributes()
extern "C" int32_t MonoField_get_Attributes_m6010 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.MonoField::get_FieldHandle()
extern "C" RuntimeFieldHandle_t886  MonoField_get_FieldHandle_m6011 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_FieldType()
extern "C" Type_t * MonoField_get_FieldType_m6012 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::GetParentType(System.Boolean)
extern "C" Type_t * MonoField_GetParentType_m6013 (MonoField_t * __this, bool ___declaring, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_ReflectedType()
extern "C" Type_t * MonoField_get_ReflectedType_m6014 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_DeclaringType()
extern "C" Type_t * MonoField_get_DeclaringType_m6015 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::get_Name()
extern "C" String_t* MonoField_get_Name_m6016 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoField::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoField_IsDefined_m6017 (MonoField_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t200* MonoField_GetCustomAttributes_m6018 (MonoField_t * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t200* MonoField_GetCustomAttributes_m6019 (MonoField_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MonoField::GetFieldOffset()
extern "C" int32_t MonoField_GetFieldOffset_m6020 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValueInternal(System.Object)
extern "C" Object_t * MonoField_GetValueInternal_m6021 (MonoField_t * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValue(System.Object)
extern "C" Object_t * MonoField_GetValue_m6022 (MonoField_t * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::ToString()
extern "C" String_t* MonoField_ToString_m6023 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)
extern "C" void MonoField_SetValueInternal_m6024 (Object_t * __this /* static, unused */, FieldInfo_t * ___fi, Object_t * ___obj, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern "C" void MonoField_SetValue_m6025 (MonoField_t * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t376 * ___binder, CultureInfo_t342 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoField_GetObjectData_m6026 (MonoField_t * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::CheckGeneric()
extern "C" void MonoField_CheckGeneric_m6027 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
