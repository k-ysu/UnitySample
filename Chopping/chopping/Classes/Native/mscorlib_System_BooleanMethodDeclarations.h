﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Boolean
struct Boolean_t333;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1425;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Boolean::.cctor()
extern "C" void Boolean__cctor_m4116 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Boolean::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Boolean_System_IConvertible_ToType_m4117 (bool* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Boolean_System_IConvertible_ToBoolean_m4118 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Boolean::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Boolean_System_IConvertible_ToByte_m4119 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Boolean::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Boolean_System_IConvertible_ToChar_m4120 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Boolean::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t51  Boolean_System_IConvertible_ToDateTime_m4121 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Boolean::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t347  Boolean_System_IConvertible_ToDecimal_m4122 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Boolean::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Boolean_System_IConvertible_ToDouble_m4123 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Boolean::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Boolean_System_IConvertible_ToInt16_m4124 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Boolean_System_IConvertible_ToInt32_m4125 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Boolean::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Boolean_System_IConvertible_ToInt64_m4126 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Boolean::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Boolean_System_IConvertible_ToSByte_m4127 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Boolean::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Boolean_System_IConvertible_ToSingle_m4128 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Boolean::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Boolean_System_IConvertible_ToUInt16_m4129 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Boolean::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Boolean_System_IConvertible_ToUInt32_m4130 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Boolean::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Boolean_System_IConvertible_ToUInt64_m4131 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::CompareTo(System.Object)
extern "C" int32_t Boolean_CompareTo_m4132 (bool* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Equals(System.Object)
extern "C" bool Boolean_Equals_m4133 (bool* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::CompareTo(System.Boolean)
extern "C" int32_t Boolean_CompareTo_m4134 (bool* __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Equals(System.Boolean)
extern "C" bool Boolean_Equals_m4135 (bool* __this, bool ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::GetHashCode()
extern "C" int32_t Boolean_GetHashCode_m4136 (bool* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Parse(System.String)
extern "C" bool Boolean_Parse_m4137 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString()
extern "C" String_t* Boolean_ToString_m1247 (bool* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString(System.IFormatProvider)
extern "C" String_t* Boolean_ToString_m4138 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
