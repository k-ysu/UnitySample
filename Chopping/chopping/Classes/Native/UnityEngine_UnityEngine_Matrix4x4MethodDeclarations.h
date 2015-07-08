#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Matrix4x4
struct Matrix4x4_t84;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C" float Matrix4x4_get_Item_m380 (Matrix4x4_t84 * __this, int32_t ___row, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
extern "C" void Matrix4x4_set_Item_m381 (Matrix4x4_t84 * __this, int32_t ___row, int32_t ___column, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C" float Matrix4x4_get_Item_m382 (Matrix4x4_t84 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern "C" void Matrix4x4_set_Item_m383 (Matrix4x4_t84 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C" int32_t Matrix4x4_GetHashCode_m384 (Matrix4x4_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern "C" bool Matrix4x4_Equals_m385 (Matrix4x4_t84 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t84  Matrix4x4_Inverse_m386 (Object_t * __this /* static, unused */, Matrix4x4_t84  ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t84  Matrix4x4_INTERNAL_CALL_Inverse_m387 (Object_t * __this /* static, unused */, Matrix4x4_t84 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t84  Matrix4x4_Transpose_m388 (Object_t * __this /* static, unused */, Matrix4x4_t84  ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t84  Matrix4x4_INTERNAL_CALL_Transpose_m389 (Object_t * __this /* static, unused */, Matrix4x4_t84 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_Invert_m390 (Object_t * __this /* static, unused */, Matrix4x4_t84  ___inMatrix, Matrix4x4_t84 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_INTERNAL_CALL_Invert_m391 (Object_t * __this /* static, unused */, Matrix4x4_t84 * ___inMatrix, Matrix4x4_t84 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C" Matrix4x4_t84  Matrix4x4_get_inverse_m392 (Matrix4x4_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
extern "C" Matrix4x4_t84  Matrix4x4_get_transpose_m393 (Matrix4x4_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
extern "C" bool Matrix4x4_get_isIdentity_m394 (Matrix4x4_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" Vector4_t86  Matrix4x4_GetColumn_m395 (Matrix4x4_t84 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
extern "C" Vector4_t86  Matrix4x4_GetRow_m396 (Matrix4x4_t84 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
extern "C" void Matrix4x4_SetColumn_m397 (Matrix4x4_t84 * __this, int32_t ___i, Vector4_t86  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern "C" void Matrix4x4_SetRow_m398 (Matrix4x4_t84 * __this, int32_t ___i, Vector4_t86  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
extern "C" Vector3_t81  Matrix4x4_MultiplyPoint_m399 (Matrix4x4_t84 * __this, Vector3_t81  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C" Vector3_t81  Matrix4x4_MultiplyPoint3x4_m400 (Matrix4x4_t84 * __this, Vector3_t81  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern "C" Vector3_t81  Matrix4x4_MultiplyVector_m401 (Matrix4x4_t84 * __this, Vector3_t81  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
extern "C" Matrix4x4_t84  Matrix4x4_Scale_m402 (Object_t * __this /* static, unused */, Vector3_t81  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern "C" Matrix4x4_t84  Matrix4x4_get_zero_m403 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C" Matrix4x4_t84  Matrix4x4_get_identity_m404 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" void Matrix4x4_SetTRS_m405 (Matrix4x4_t84 * __this, Vector3_t81  ___pos, Quaternion_t83  ___q, Vector3_t81  ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Matrix4x4_t84  Matrix4x4_TRS_m406 (Object_t * __this /* static, unused */, Vector3_t81  ___pos, Quaternion_t83  ___q, Vector3_t81  ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" Matrix4x4_t84  Matrix4x4_INTERNAL_CALL_TRS_m407 (Object_t * __this /* static, unused */, Vector3_t81 * ___pos, Quaternion_t83 * ___q, Vector3_t81 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
extern "C" String_t* Matrix4x4_ToString_m408 (Matrix4x4_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString(System.String)
extern "C" String_t* Matrix4x4_ToString_m409 (Matrix4x4_t84 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t84  Matrix4x4_Ortho_m410 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t84  Matrix4x4_Perspective_m411 (Object_t * __this /* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t84  Matrix4x4_op_Multiply_m412 (Object_t * __this /* static, unused */, Matrix4x4_t84  ___lhs, Matrix4x4_t84  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Vector4_t86  Matrix4x4_op_Multiply_m413 (Object_t * __this /* static, unused */, Matrix4x4_t84  ___lhs, Vector4_t86  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Equality_m414 (Object_t * __this /* static, unused */, Matrix4x4_t84  ___lhs, Matrix4x4_t84  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Inequality_m415 (Object_t * __this /* static, unused */, Matrix4x4_t84  ___lhs, Matrix4x4_t84  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
