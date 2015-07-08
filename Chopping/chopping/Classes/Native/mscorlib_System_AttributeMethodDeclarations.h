#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Attribute
struct Attribute_t96;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t370;

// System.Void System.Attribute::.ctor()
extern "C" void Attribute__ctor_m1189 (Attribute_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::CheckParameters(System.Object,System.Type)
extern "C" void Attribute_CheckParameters_m3626 (Object_t * __this /* static, unused */, Object_t * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
extern "C" Attribute_t96 * Attribute_GetCustomAttribute_m3627 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C" Attribute_t96 * Attribute_GetCustomAttribute_m3628 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Attribute::GetHashCode()
extern "C" int32_t Attribute_GetHashCode_m1323 (Attribute_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type)
extern "C" bool Attribute_IsDefined_m3629 (Object_t * __this /* static, unused */, ParameterInfo_t370 * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
extern "C" bool Attribute_IsDefined_m3630 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C" bool Attribute_IsDefined_m3631 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type,System.Boolean)
extern "C" bool Attribute_IsDefined_m3632 (Object_t * __this /* static, unused */, ParameterInfo_t370 * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::Equals(System.Object)
extern "C" bool Attribute_Equals_m1436 (Attribute_t96 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
