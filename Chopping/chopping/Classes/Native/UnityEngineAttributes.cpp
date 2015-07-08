#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"
extern TypeInfo* InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t382_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t383_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		RuntimeCompatibilityAttribute_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		ExtensionAttribute_t383_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(224);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t382 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t382 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t382_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m1326(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m1327(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t383 * tmp;
		tmp = (ExtensionAttribute_t383 *)il2cpp_codegen_object_new (ExtensionAttribute_t383_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m1328(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t1_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m1(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t1_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m2(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t270_il2cpp_TypeInfo_var;
void AssetBundle_t3_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m6(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t270 * tmp;
		tmp = (TypeInferenceRuleAttribute_t270 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t270_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1153(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t270_il2cpp_TypeInfo_var;
void AssetBundle_t3_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m7(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		TypeInferenceRuleAttribute_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t270 * tmp;
		tmp = (TypeInferenceRuleAttribute_t270 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t270_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1153(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void AssetBundle_t3_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void LayerMask_t7_CustomAttributesCacheGenerator_LayerMask_LayerToName_m11(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void LayerMask_t7_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m12(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t384_il2cpp_TypeInfo_var;
void LayerMask_t7_CustomAttributesCacheGenerator_LayerMask_t7_LayerMask_GetMask_m13_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t384 * tmp;
		tmp = (ParamArrayAttribute_t384 *)il2cpp_codegen_object_new (ParamArrayAttribute_t384_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1329(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void SystemInfo_t9_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m16(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Coroutine_t14_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m21(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void ScriptableObject_t15_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m24(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t220_il2cpp_TypeInfo_var;
void ScriptableObject_t15_CustomAttributesCacheGenerator_ScriptableObject_t15_ScriptableObject_Internal_CreateScriptableObject_m24_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(228);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t220 * tmp;
		tmp = (WritableAttribute_t220 *)il2cpp_codegen_object_new (WritableAttribute_t220_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1020(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void ScriptableObject_t15_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m25(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void ScriptableObject_t15_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m27(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m32(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m33(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m34(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m35(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m36(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m37(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m38(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m39(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m40(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m41(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m42(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m43(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m44(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m45(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m46(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m47(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m48(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m52(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GcLeaderboard_t27_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m96(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GcLeaderboard_t27_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m97(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GcLeaderboard_t27_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m98(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GcLeaderboard_t27_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m99(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Screen_t29_CustomAttributesCacheGenerator_Screen_get_width_m120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Screen_t29_CustomAttributesCacheGenerator_Screen_get_height_m121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Texture2D_t31_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t220_il2cpp_TypeInfo_var;
void Texture2D_t31_CustomAttributesCacheGenerator_Texture2D_t31_Texture2D_Internal_Create_m124_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(228);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t220 * tmp;
		tmp = (WritableAttribute_t220 *)il2cpp_codegen_object_new (WritableAttribute_t220_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1020(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUILayer_t36_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Gradient_t40_CustomAttributesCacheGenerator_Gradient_Init_m130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Gradient_t40_CustomAttributesCacheGenerator_Gradient_Cleanup_m131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void GUI_t50_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void GUI_t50_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void GUI_t50_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUI_t50_CustomAttributesCacheGenerator_GUI_set_changed_m142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUILayoutUtility_t57_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUILayoutUtility_t57_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIUtility_t66_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIUtility_t66_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIUtility_t66_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISettings_t67_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISettings_t67_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISettings_t67_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISettings_t67_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISettings_t67_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t218_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(193);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t218 * tmp;
		tmp = (ExecuteInEditMode_t218 *)il2cpp_codegen_object_new (ExecuteInEditMode_t218_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m1016(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUISkin_t48_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUIContent_t72_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUIContent_t72_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void GUIContent_t72_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyleState_t73_CustomAttributesCacheGenerator_GUIStyleState_Init_m262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyleState_t73_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m263(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyleState_t73_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m264(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyleState_t73_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_Init_m271(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_Cleanup_m272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_get_left_m273(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_set_left_m274(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_get_right_m275(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_set_right_m276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_get_top_m277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_set_top_m278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_get_bottom_m279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_set_bottom_m280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m281(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_get_vertical_m282(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_Init_m287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m288(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_get_name_m289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_set_name_m290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m292(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m299(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t75_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m305(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Event_t76_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Event_t76_CustomAttributesCacheGenerator_Event_Init_m308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Event_t76_CustomAttributesCacheGenerator_Event_Cleanup_m310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Event_t76_CustomAttributesCacheGenerator_Event_get_type_m311(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Event_t76_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m313(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Event_t76_CustomAttributesCacheGenerator_Event_get_modifiers_m314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Event_t76_CustomAttributesCacheGenerator_Event_get_character_m315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Event_t76_CustomAttributesCacheGenerator_Event_get_commandName_m316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Event_t76_CustomAttributesCacheGenerator_Event_get_keyCode_m317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Event_t76_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m319(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t386_il2cpp_TypeInfo_var;
void EventModifiers_t80_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(231);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t386 * tmp;
		tmp = (FlagsAttribute_t386 *)il2cpp_codegen_object_new (FlagsAttribute_t386_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m1332(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
void Vector2_t43_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t387 * tmp;
		tmp = (DefaultMemberAttribute_t387 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t387_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1333(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
void Vector3_t81_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t387 * tmp;
		tmp = (DefaultMemberAttribute_t387 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t387_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1333(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
void Color_t38_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t387 * tmp;
		tmp = (DefaultMemberAttribute_t387 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t387_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1333(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t210_il2cpp_TypeInfo_var;
void Color32_t82_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t210 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t210 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t210_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m1010(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
void Quaternion_t83_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t387 * tmp;
		tmp = (DefaultMemberAttribute_t387 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t387_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1333(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
void Matrix4x4_t84_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t387 * tmp;
		tmp = (DefaultMemberAttribute_t387 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t387_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1333(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Matrix4x4_t84_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Matrix4x4_t84_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Matrix4x4_t84_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Matrix4x4_t84_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Matrix4x4_t84_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Matrix4x4_t84_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Matrix4x4_t84_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Bounds_t85_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Bounds_t85_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Bounds_t85_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Bounds_t85_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
void Vector4_t86_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t387 * tmp;
		tmp = (DefaultMemberAttribute_t387 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t387_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1333(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t270_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Resources_t94_CustomAttributesCacheGenerator_Resources_Load_m481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t270 * tmp;
		tmp = (TypeInferenceRuleAttribute_t270 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t270_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1153(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t388_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t95_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t388 * tmp;
		tmp = (ObsoleteAttribute_t388 *)il2cpp_codegen_object_new (ObsoleteAttribute_t388_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1334(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t98_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t387 * tmp;
		tmp = (DefaultMemberAttribute_t387 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t387_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1333(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t98_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m486(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t98_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t98_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void WWW_t99_CustomAttributesCacheGenerator_WWW_DestroyWWW_m505(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void WWW_t99_CustomAttributesCacheGenerator_WWW_InitWWW_m506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void WWW_t99_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m508(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void WWW_t99_CustomAttributesCacheGenerator_WWW_get_bytes_m512(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void WWW_t99_CustomAttributesCacheGenerator_WWW_get_error_m513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void WWW_t99_CustomAttributesCacheGenerator_WWW_get_isDone_m514(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t267_il2cpp_TypeInfo_var;
void WWWForm_t103_CustomAttributesCacheGenerator_WWWForm_AddField_m518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t267_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t267 * tmp;
		tmp = (ExcludeFromDocsAttribute_t267 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t267_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1151(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t266_il2cpp_TypeInfo_var;
void WWWForm_t103_CustomAttributesCacheGenerator_WWWForm_t103_WWWForm_AddField_m519_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t266 * tmp;
		tmp = (DefaultValueAttribute_t266 *)il2cpp_codegen_object_new (DefaultValueAttribute_t266_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1147(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t266_il2cpp_TypeInfo_var;
void WWWTranscoder_t104_CustomAttributesCacheGenerator_WWWTranscoder_t104_WWWTranscoder_QPEncode_m526_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t266 * tmp;
		tmp = (DefaultValueAttribute_t266 *)il2cpp_codegen_object_new (DefaultValueAttribute_t266_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1147(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t266_il2cpp_TypeInfo_var;
void WWWTranscoder_t104_CustomAttributesCacheGenerator_WWWTranscoder_t104_WWWTranscoder_SevenBitClean_m529_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t266 * tmp;
		tmp = (DefaultValueAttribute_t266 *)il2cpp_codegen_object_new (DefaultValueAttribute_t266_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1147(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t388_il2cpp_TypeInfo_var;
void CacheIndex_t105_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t388 * tmp;
		tmp = (ObsoleteAttribute_t388 *)il2cpp_codegen_object_new (ObsoleteAttribute_t388_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1334(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t384_il2cpp_TypeInfo_var;
void UnityString_t106_CustomAttributesCacheGenerator_UnityString_t106_UnityString_Format_m531_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t384 * tmp;
		tmp = (ParamArrayAttribute_t384 *)il2cpp_codegen_object_new (ParamArrayAttribute_t384_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1329(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void AsyncOperation_t2_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Camera_t110_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Camera_t110_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Camera_t110_CustomAttributesCacheGenerator_Camera_get_cullingMask_m547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Camera_t110_CustomAttributesCacheGenerator_Camera_get_eventMask_m548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Camera_t110_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Camera_t110_CustomAttributesCacheGenerator_Camera_get_targetTexture_m551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Camera_t110_CustomAttributesCacheGenerator_Camera_get_clearFlags_m552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Camera_t110_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Camera_t110_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Camera_t110_CustomAttributesCacheGenerator_Camera_GetAllCameras_m556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Camera_t110_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Camera_t110_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var;
void CameraCallback_t111_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t390 * tmp;
		tmp = (EditorBrowsableAttribute_t390 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1337(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Debug_t112_CustomAttributesCacheGenerator_Debug_Internal_Log_m564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t220_il2cpp_TypeInfo_var;
void Debug_t112_CustomAttributesCacheGenerator_Debug_t112_Debug_Internal_Log_m564_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(228);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t220 * tmp;
		tmp = (WritableAttribute_t220 *)il2cpp_codegen_object_new (WritableAttribute_t220_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1020(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Display_t115_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Display_t115_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Display_t115_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Display_t115_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Display_t115_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Display_t115_CustomAttributesCacheGenerator_Display_SetParamsImpl_m597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Display_t115_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Display_t115_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void MonoBehaviour_t116_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Input_t117_CustomAttributesCacheGenerator_Input_GetMouseButton_m604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Input_t117_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Input_t117_CustomAttributesCacheGenerator_Input_get_mousePosition_m606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Object_t5_CustomAttributesCacheGenerator_Object_get_name_m608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Object_t5_CustomAttributesCacheGenerator_Object_ToString_m609(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Component_t109_CustomAttributesCacheGenerator_Component_get_gameObject_m620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Component_t109_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m621(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t391_il2cpp_TypeInfo_var;
void Component_t109_CustomAttributesCacheGenerator_Component_GetComponent_m1338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t391 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t391 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t391_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1339(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void GameObject_t118_CustomAttributesCacheGenerator_GameObject_SendMessage_m622(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t266_il2cpp_TypeInfo_var;
void GameObject_t118_CustomAttributesCacheGenerator_GameObject_t118_GameObject_SendMessage_m622_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t266 * tmp;
		tmp = (DefaultValueAttribute_t266 *)il2cpp_codegen_object_new (DefaultValueAttribute_t266_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1147(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t266_il2cpp_TypeInfo_var;
void GameObject_t118_CustomAttributesCacheGenerator_GameObject_t118_GameObject_SendMessage_m622_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t266 * tmp;
		tmp = (DefaultValueAttribute_t266 *)il2cpp_codegen_object_new (DefaultValueAttribute_t266_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1147(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Transform_t92_CustomAttributesCacheGenerator_Transform_get_childCount_m626(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Transform_t92_CustomAttributesCacheGenerator_Transform_GetChild_m628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Random_t120_CustomAttributesCacheGenerator_Random_RandomRangeInt_m630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void PlayerPrefs_t121_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t266_il2cpp_TypeInfo_var;
void PlayerPrefs_t121_CustomAttributesCacheGenerator_PlayerPrefs_t121_PlayerPrefs_GetString_m632_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t266 * tmp;
		tmp = (DefaultValueAttribute_t266 *)il2cpp_codegen_object_new (DefaultValueAttribute_t266_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1147(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t267_il2cpp_TypeInfo_var;
void PlayerPrefs_t121_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m633(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t267_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t267 * tmp;
		tmp = (ExcludeFromDocsAttribute_t267 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t267_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1151(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t388_il2cpp_TypeInfo_var;
void AnimationEvent_t132_CustomAttributesCacheGenerator_AnimationEvent_t132____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t388 * tmp;
		tmp = (ObsoleteAttribute_t388 *)il2cpp_codegen_object_new (ObsoleteAttribute_t388_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1334(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
void AnimationCurve_t136_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t387 * tmp;
		tmp = (DefaultMemberAttribute_t387 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t387_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1333(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t384_il2cpp_TypeInfo_var;
void AnimationCurve_t136_CustomAttributesCacheGenerator_AnimationCurve_t136_AnimationCurve__ctor_m690_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t384 * tmp;
		tmp = (ParamArrayAttribute_t384 *)il2cpp_codegen_object_new (ParamArrayAttribute_t384_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1329(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void AnimationCurve_t136_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void AnimationCurve_t136_CustomAttributesCacheGenerator_AnimationCurve_Init_m694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t388_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t133_CustomAttributesCacheGenerator_AnimatorStateInfo_t133____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t388 * tmp;
		tmp = (ObsoleteAttribute_t388 *)il2cpp_codegen_object_new (ObsoleteAttribute_t388_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1334(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Animator_t139_CustomAttributesCacheGenerator_Animator_StringToHash_m713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t388_il2cpp_TypeInfo_var;
void CharacterInfo_t146_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t388 * tmp;
		tmp = (ObsoleteAttribute_t388 *)il2cpp_codegen_object_new (ObsoleteAttribute_t388_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1334(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t388_il2cpp_TypeInfo_var;
void CharacterInfo_t146_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t388 * tmp;
		tmp = (ObsoleteAttribute_t388 *)il2cpp_codegen_object_new (ObsoleteAttribute_t388_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1334(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t388_il2cpp_TypeInfo_var;
void CharacterInfo_t146_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t388 * tmp;
		tmp = (ObsoleteAttribute_t388 *)il2cpp_codegen_object_new (ObsoleteAttribute_t388_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1334(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t388_il2cpp_TypeInfo_var;
void CharacterInfo_t146_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t388 * tmp;
		tmp = (ObsoleteAttribute_t388 *)il2cpp_codegen_object_new (ObsoleteAttribute_t388_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1334(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void Font_t69_CustomAttributesCacheGenerator_Font_get_dynamic_m739(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t147_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t390 * tmp;
		tmp = (EditorBrowsableAttribute_t390 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1337(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_Init_m743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m749(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m750(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m751(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m752(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t209_il2cpp_TypeInfo_var;
void TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m759(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t209 * tmp;
		tmp = (WrapperlessIcall_t209 *)il2cpp_codegen_object_new (WrapperlessIcall_t209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1009(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Request_t159_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Request_t159_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Request_t159_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Request_t159_CustomAttributesCacheGenerator_Request_get_sourceId_m780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Request_t159_CustomAttributesCacheGenerator_Request_get_appId_m781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Request_t159_CustomAttributesCacheGenerator_Request_get_domain_m782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Response_t161_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Response_t161_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Response_t161_CustomAttributesCacheGenerator_Response_get_success_m791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Response_t161_CustomAttributesCacheGenerator_Response_set_success_m792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Response_t161_CustomAttributesCacheGenerator_Response_get_extendedInfo_m793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Response_t161_CustomAttributesCacheGenerator_Response_set_extendedInfo_m794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchRequest_t164_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchRequest_t164_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchRequest_t164_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchRequest_t164_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchRequest_t164_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchRequest_t166_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchRequest_t166_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchRequest_t166_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchRequest_t166_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchRequest_t166_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchRequest_t166_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m831(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t168_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t168_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t168_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void DropConnectionRequest_t169_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void DropConnectionRequest_t169_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void DropConnectionRequest_t169_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void DropConnectionRequest_t169_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void DropConnectionRequest_t169_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void DropConnectionRequest_t169_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchRequest_t170_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchRequest_t170_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchRequest_t170_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchRequest_t170_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchRequest_t170_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m866(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_name_m877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_set_name_m878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchResponse_t175_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchResponse_t175_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ListMatchResponse_t175_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t393_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t176_il2cpp_TypeInfo_var;
void AppID_t176_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		AppID_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t393 * tmp;
		tmp = (DefaultValueAttribute_t393 *)il2cpp_codegen_object_new (DefaultValueAttribute_t393_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1342(tmp, Box(AppID_t176_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t393_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t177_il2cpp_TypeInfo_var;
void SourceID_t177_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		SourceID_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t393 * tmp;
		tmp = (DefaultValueAttribute_t393 *)il2cpp_codegen_object_new (DefaultValueAttribute_t393_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1342(tmp, Box(SourceID_t177_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t393_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t178_il2cpp_TypeInfo_var;
void NetworkID_t178_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		NetworkID_t178_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t393 * tmp;
		tmp = (DefaultValueAttribute_t393 *)il2cpp_codegen_object_new (DefaultValueAttribute_t393_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1342(tmp, Box(NetworkID_t178_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t393_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t179_il2cpp_TypeInfo_var;
void NodeID_t179_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		NodeID_t179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t393 * tmp;
		tmp = (DefaultValueAttribute_t393 *)il2cpp_codegen_object_new (DefaultValueAttribute_t393_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1342(tmp, Box(NodeID_t179_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t394_il2cpp_TypeInfo_var;
void NetworkMatch_t185_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t394 * tmp;
		tmp = (DebuggerHiddenAttribute_t394 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t394_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t396_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t394_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t396_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t394 * tmp;
		tmp = (DebuggerHiddenAttribute_t394 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t394_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t394_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t396_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t394 * tmp;
		tmp = (DebuggerHiddenAttribute_t394 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t394_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t394_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t396_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t394 * tmp;
		tmp = (DebuggerHiddenAttribute_t394 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t394_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var;
void JsonArray_t186_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(240);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t390 * tmp;
		tmp = (EditorBrowsableAttribute_t390 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1337(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t397 * tmp;
		tmp = (GeneratedCodeAttribute_t397 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1354(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var;
void JsonObject_t189_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		DefaultMemberAttribute_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(240);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t390 * tmp;
		tmp = (EditorBrowsableAttribute_t390 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1337(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t387 * tmp;
		tmp = (DefaultMemberAttribute_t387 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t387_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1333(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t397 * tmp;
		tmp = (GeneratedCodeAttribute_t397 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1354(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var;
void SimpleJson_t192_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(240);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t397 * tmp;
		tmp = (GeneratedCodeAttribute_t397 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1354(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t398_il2cpp_TypeInfo_var;
void SimpleJson_t192_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t398 * tmp;
		tmp = (SuppressMessageAttribute_t398 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t398_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1355(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1356(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t398_il2cpp_TypeInfo_var;
void SimpleJson_t192_CustomAttributesCacheGenerator_SimpleJson_NextToken_m950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t398 * tmp;
		tmp = (SuppressMessageAttribute_t398 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t398_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1355(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var;
void SimpleJson_t192_CustomAttributesCacheGenerator_SimpleJson_t192____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t390 * tmp;
		tmp = (EditorBrowsableAttribute_t390 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t390_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1337(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t190_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(240);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t397 * tmp;
		tmp = (GeneratedCodeAttribute_t397 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1354(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t398_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t190_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1357(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t398 * tmp;
		tmp = (SuppressMessageAttribute_t398 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t398_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1355(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1356(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t191_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(240);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t397 * tmp;
		tmp = (GeneratedCodeAttribute_t397 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1354(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t398_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t191_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m967(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t398 * tmp;
		tmp = (SuppressMessageAttribute_t398 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t398_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1355(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1356(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t398_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t191_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t398 * tmp;
		tmp = (SuppressMessageAttribute_t398 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t398_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1355(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1356(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var;
void ReflectionUtils_t208_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(240);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t397 * tmp;
		tmp = (GeneratedCodeAttribute_t397 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t397_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1354(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t384_il2cpp_TypeInfo_var;
void ReflectionUtils_t208_CustomAttributesCacheGenerator_ReflectionUtils_t208_ReflectionUtils_GetConstructorInfo_m993_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t384 * tmp;
		tmp = (ParamArrayAttribute_t384 *)il2cpp_codegen_object_new (ParamArrayAttribute_t384_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1329(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t384_il2cpp_TypeInfo_var;
void ReflectionUtils_t208_CustomAttributesCacheGenerator_ReflectionUtils_t208_ReflectionUtils_GetContructor_m998_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t384 * tmp;
		tmp = (ParamArrayAttribute_t384 *)il2cpp_codegen_object_new (ParamArrayAttribute_t384_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1329(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t384_il2cpp_TypeInfo_var;
void ReflectionUtils_t208_CustomAttributesCacheGenerator_ReflectionUtils_t208_ReflectionUtils_GetConstructorByReflection_m1000_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t384 * tmp;
		tmp = (ParamArrayAttribute_t384 *)il2cpp_codegen_object_new (ParamArrayAttribute_t384_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1329(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t399_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t387 * tmp;
		tmp = (DefaultMemberAttribute_t387 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t387_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1333(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t384_il2cpp_TypeInfo_var;
void ConstructorDelegate_t201_CustomAttributesCacheGenerator_ConstructorDelegate_t201_ConstructorDelegate_Invoke_m978_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t384 * tmp;
		tmp = (ParamArrayAttribute_t384 *)il2cpp_codegen_object_new (ParamArrayAttribute_t384_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1329(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t384_il2cpp_TypeInfo_var;
void ConstructorDelegate_t201_CustomAttributesCacheGenerator_ConstructorDelegate_t201_ConstructorDelegate_BeginInvoke_m979_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t384 * tmp;
		tmp = (ParamArrayAttribute_t384 *)il2cpp_codegen_object_new (ParamArrayAttribute_t384_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1329(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t203_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t204_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t205_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t206_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t207_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t401_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t210_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t401 * tmp;
		tmp = (AttributeUsageAttribute_t401 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t401_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1381(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t401_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t215_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t401 * tmp;
		tmp = (AttributeUsageAttribute_t401 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t401_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1381(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m1382(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t401_il2cpp_TypeInfo_var;
void RequireComponent_t216_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t401 * tmp;
		tmp = (AttributeUsageAttribute_t401 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t401_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1381(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1383(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t401_il2cpp_TypeInfo_var;
void WritableAttribute_t220_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t401 * tmp;
		tmp = (AttributeUsageAttribute_t401 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t401_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1381(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1383(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t401_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t221_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t401 * tmp;
		tmp = (AttributeUsageAttribute_t401 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t401_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1381(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Achievement_t233_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Achievement_t233_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Achievement_t233_CustomAttributesCacheGenerator_Achievement_get_id_m1053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Achievement_t233_CustomAttributesCacheGenerator_Achievement_set_id_m1054(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Achievement_t233_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1055(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Achievement_t233_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void AchievementDescription_t234_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void AchievementDescription_t234_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void AchievementDescription_t234_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1064(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Score_t235_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Score_t235_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Score_t235_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Score_t235_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1074(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Score_t235_CustomAttributesCacheGenerator_Score_get_value_m1075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Score_t235_CustomAttributesCacheGenerator_Score_set_value_m1076(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Leaderboard_t26_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Leaderboard_t26_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Leaderboard_t26_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Leaderboard_t26_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_get_id_m1084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_set_id_m1085(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1086(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_get_range_m1088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_set_range_m1089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t385 * tmp;
		tmp = (CompilerGeneratedAttribute_t385 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t391_il2cpp_TypeInfo_var;
void StackTraceUtility_t247_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t391 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t391 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t391_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1339(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t391_il2cpp_TypeInfo_var;
void StackTraceUtility_t247_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1106(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t391 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t391 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t391_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1339(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t391_il2cpp_TypeInfo_var;
void StackTraceUtility_t247_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t391 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t391 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t391_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1339(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t401_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t249_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t401 * tmp;
		tmp = (AttributeUsageAttribute_t401 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t401_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1381(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1383(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var;
void ArgumentCache_t255_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t268 * tmp;
		tmp = (FormerlySerializedAsAttribute_t268 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1152(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var;
void PersistentCall_t258_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t268 * tmp;
		tmp = (FormerlySerializedAsAttribute_t268 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1152(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var;
void PersistentCall_t258_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t268 * tmp;
		tmp = (FormerlySerializedAsAttribute_t268 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1152(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t268 * tmp;
		tmp = (FormerlySerializedAsAttribute_t268 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1152(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void PersistentCallGroup_t260_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t268 * tmp;
		tmp = (FormerlySerializedAsAttribute_t268 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1152(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var;
void UnityEventBase_t263_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t268 * tmp;
		tmp = (FormerlySerializedAsAttribute_t268 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t268_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1152(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t97_il2cpp_TypeInfo_var;
void UnityEventBase_t263_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t97 * tmp;
		tmp = (SerializeField_t97 *)il2cpp_codegen_object_new (SerializeField_t97_il2cpp_TypeInfo_var);
		SerializeField__ctor_m483(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t217_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t265_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t217 * tmp;
		tmp = (AddComponentMenu_t217 *)il2cpp_codegen_object_new (AddComponentMenu_t217_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m1015(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t401_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t266_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t401 * tmp;
		tmp = (AttributeUsageAttribute_t401 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t401_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1381(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t401_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t267_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t401 * tmp;
		tmp = (AttributeUsageAttribute_t401 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t401_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1381(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t401_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t268_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t401 * tmp;
		tmp = (AttributeUsageAttribute_t401 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t401_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1381(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1383(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m1382(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t401_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t270_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t401 * tmp;
		tmp = (AttributeUsageAttribute_t401 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t401_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1381(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[437] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t1_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m1,
	AssetBundleCreateRequest_t1_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m2,
	AssetBundle_t3_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m6,
	AssetBundle_t3_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m7,
	AssetBundle_t3_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8,
	LayerMask_t7_CustomAttributesCacheGenerator_LayerMask_LayerToName_m11,
	LayerMask_t7_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m12,
	LayerMask_t7_CustomAttributesCacheGenerator_LayerMask_t7_LayerMask_GetMask_m13_Arg0_ParameterInfo,
	SystemInfo_t9_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m16,
	Coroutine_t14_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m21,
	ScriptableObject_t15_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m24,
	ScriptableObject_t15_CustomAttributesCacheGenerator_ScriptableObject_t15_ScriptableObject_Internal_CreateScriptableObject_m24_Arg0_ParameterInfo,
	ScriptableObject_t15_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m25,
	ScriptableObject_t15_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m27,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m32,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m33,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m34,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m35,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m36,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m37,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m38,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m39,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m40,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m41,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m42,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m43,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m44,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m45,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m46,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m47,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m48,
	GameCenterPlatform_t25_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m52,
	GcLeaderboard_t27_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m96,
	GcLeaderboard_t27_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m97,
	GcLeaderboard_t27_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m98,
	GcLeaderboard_t27_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m99,
	Screen_t29_CustomAttributesCacheGenerator_Screen_get_width_m120,
	Screen_t29_CustomAttributesCacheGenerator_Screen_get_height_m121,
	Texture2D_t31_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m124,
	Texture2D_t31_CustomAttributesCacheGenerator_Texture2D_t31_Texture2D_Internal_Create_m124_Arg0_ParameterInfo,
	GUILayer_t36_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m126,
	Gradient_t40_CustomAttributesCacheGenerator_Gradient_Init_m130,
	Gradient_t40_CustomAttributesCacheGenerator_Gradient_Cleanup_m131,
	GUI_t50_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t50_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t50_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m139,
	GUI_t50_CustomAttributesCacheGenerator_GUI_set_changed_m142,
	GUILayoutUtility_t57_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m155,
	GUILayoutUtility_t57_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m157,
	GUIUtility_t66_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m189,
	GUIUtility_t66_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m191,
	GUIUtility_t66_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m195,
	GUISettings_t67_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t67_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t67_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t67_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t67_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t48_CustomAttributesCacheGenerator,
	GUISkin_t48_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t48_CustomAttributesCacheGenerator_m_box,
	GUISkin_t48_CustomAttributesCacheGenerator_m_button,
	GUISkin_t48_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t48_CustomAttributesCacheGenerator_m_label,
	GUISkin_t48_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t48_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t48_CustomAttributesCacheGenerator_m_window,
	GUISkin_t48_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t48_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t48_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t48_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t48_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t48_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t48_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t48_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t48_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t48_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t48_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t48_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t48_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t48_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t48_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t72_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t72_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t72_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t73_CustomAttributesCacheGenerator_GUIStyleState_Init_m262,
	GUIStyleState_t73_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m263,
	GUIStyleState_t73_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m264,
	GUIStyleState_t73_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m265,
	RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_Init_m271,
	RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_Cleanup_m272,
	RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_get_left_m273,
	RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_set_left_m274,
	RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_get_right_m275,
	RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_set_right_m276,
	RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_get_top_m277,
	RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_set_top_m278,
	RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_get_bottom_m279,
	RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_set_bottom_m280,
	RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m281,
	RectOffset_t60_CustomAttributesCacheGenerator_RectOffset_get_vertical_m282,
	GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_Init_m287,
	GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m288,
	GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_get_name_m289,
	GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_set_name_m290,
	GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m292,
	GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m295,
	GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m296,
	GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m297,
	GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m298,
	GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m299,
	GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m300,
	GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m301,
	GUIStyle_t56_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m302,
	TouchScreenKeyboard_t75_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m305,
	Event_t76_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t76_CustomAttributesCacheGenerator_Event_Init_m308,
	Event_t76_CustomAttributesCacheGenerator_Event_Cleanup_m310,
	Event_t76_CustomAttributesCacheGenerator_Event_get_type_m311,
	Event_t76_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m313,
	Event_t76_CustomAttributesCacheGenerator_Event_get_modifiers_m314,
	Event_t76_CustomAttributesCacheGenerator_Event_get_character_m315,
	Event_t76_CustomAttributesCacheGenerator_Event_get_commandName_m316,
	Event_t76_CustomAttributesCacheGenerator_Event_get_keyCode_m317,
	Event_t76_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m319,
	EventModifiers_t80_CustomAttributesCacheGenerator,
	Vector2_t43_CustomAttributesCacheGenerator,
	Vector3_t81_CustomAttributesCacheGenerator,
	Color_t38_CustomAttributesCacheGenerator,
	Color32_t82_CustomAttributesCacheGenerator,
	Quaternion_t83_CustomAttributesCacheGenerator,
	Matrix4x4_t84_CustomAttributesCacheGenerator,
	Matrix4x4_t84_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m387,
	Matrix4x4_t84_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m389,
	Matrix4x4_t84_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m391,
	Matrix4x4_t84_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m394,
	Matrix4x4_t84_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m407,
	Matrix4x4_t84_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m410,
	Matrix4x4_t84_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m411,
	Bounds_t85_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m436,
	Bounds_t85_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m439,
	Bounds_t85_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m442,
	Bounds_t85_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m446,
	Vector4_t86_CustomAttributesCacheGenerator,
	Resources_t94_CustomAttributesCacheGenerator_Resources_Load_m481,
	SerializePrivateVariables_t95_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t98_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t98_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m486,
	SphericalHarmonicsL2_t98_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m489,
	SphericalHarmonicsL2_t98_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m492,
	WWW_t99_CustomAttributesCacheGenerator_WWW_DestroyWWW_m505,
	WWW_t99_CustomAttributesCacheGenerator_WWW_InitWWW_m506,
	WWW_t99_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m508,
	WWW_t99_CustomAttributesCacheGenerator_WWW_get_bytes_m512,
	WWW_t99_CustomAttributesCacheGenerator_WWW_get_error_m513,
	WWW_t99_CustomAttributesCacheGenerator_WWW_get_isDone_m514,
	WWWForm_t103_CustomAttributesCacheGenerator_WWWForm_AddField_m518,
	WWWForm_t103_CustomAttributesCacheGenerator_WWWForm_t103_WWWForm_AddField_m519_Arg2_ParameterInfo,
	WWWTranscoder_t104_CustomAttributesCacheGenerator_WWWTranscoder_t104_WWWTranscoder_QPEncode_m526_Arg1_ParameterInfo,
	WWWTranscoder_t104_CustomAttributesCacheGenerator_WWWTranscoder_t104_WWWTranscoder_SevenBitClean_m529_Arg1_ParameterInfo,
	CacheIndex_t105_CustomAttributesCacheGenerator,
	UnityString_t106_CustomAttributesCacheGenerator_UnityString_t106_UnityString_Format_m531_Arg1_ParameterInfo,
	AsyncOperation_t2_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m533,
	Camera_t110_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m545,
	Camera_t110_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m546,
	Camera_t110_CustomAttributesCacheGenerator_Camera_get_cullingMask_m547,
	Camera_t110_CustomAttributesCacheGenerator_Camera_get_eventMask_m548,
	Camera_t110_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m549,
	Camera_t110_CustomAttributesCacheGenerator_Camera_get_targetTexture_m551,
	Camera_t110_CustomAttributesCacheGenerator_Camera_get_clearFlags_m552,
	Camera_t110_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m554,
	Camera_t110_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m555,
	Camera_t110_CustomAttributesCacheGenerator_Camera_GetAllCameras_m556,
	Camera_t110_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m561,
	Camera_t110_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m563,
	CameraCallback_t111_CustomAttributesCacheGenerator,
	Debug_t112_CustomAttributesCacheGenerator_Debug_Internal_Log_m564,
	Debug_t112_CustomAttributesCacheGenerator_Debug_t112_Debug_Internal_Log_m564_Arg2_ParameterInfo,
	Display_t115_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m592,
	Display_t115_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m593,
	Display_t115_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m594,
	Display_t115_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m595,
	Display_t115_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m596,
	Display_t115_CustomAttributesCacheGenerator_Display_SetParamsImpl_m597,
	Display_t115_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m598,
	Display_t115_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m599,
	MonoBehaviour_t116_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m602,
	Input_t117_CustomAttributesCacheGenerator_Input_GetMouseButton_m604,
	Input_t117_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m605,
	Input_t117_CustomAttributesCacheGenerator_Input_get_mousePosition_m606,
	Object_t5_CustomAttributesCacheGenerator_Object_get_name_m608,
	Object_t5_CustomAttributesCacheGenerator_Object_ToString_m609,
	Component_t109_CustomAttributesCacheGenerator_Component_get_gameObject_m620,
	Component_t109_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m621,
	Component_t109_CustomAttributesCacheGenerator_Component_GetComponent_m1338,
	GameObject_t118_CustomAttributesCacheGenerator_GameObject_SendMessage_m622,
	GameObject_t118_CustomAttributesCacheGenerator_GameObject_t118_GameObject_SendMessage_m622_Arg1_ParameterInfo,
	GameObject_t118_CustomAttributesCacheGenerator_GameObject_t118_GameObject_SendMessage_m622_Arg2_ParameterInfo,
	Transform_t92_CustomAttributesCacheGenerator_Transform_get_childCount_m626,
	Transform_t92_CustomAttributesCacheGenerator_Transform_GetChild_m628,
	Random_t120_CustomAttributesCacheGenerator_Random_RandomRangeInt_m630,
	PlayerPrefs_t121_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m632,
	PlayerPrefs_t121_CustomAttributesCacheGenerator_PlayerPrefs_t121_PlayerPrefs_GetString_m632_Arg1_ParameterInfo,
	PlayerPrefs_t121_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m633,
	AnimationEvent_t132_CustomAttributesCacheGenerator_AnimationEvent_t132____data_PropertyInfo,
	AnimationCurve_t136_CustomAttributesCacheGenerator,
	AnimationCurve_t136_CustomAttributesCacheGenerator_AnimationCurve_t136_AnimationCurve__ctor_m690_Arg0_ParameterInfo,
	AnimationCurve_t136_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m692,
	AnimationCurve_t136_CustomAttributesCacheGenerator_AnimationCurve_Init_m694,
	AnimatorStateInfo_t133_CustomAttributesCacheGenerator_AnimatorStateInfo_t133____nameHash_PropertyInfo,
	Animator_t139_CustomAttributesCacheGenerator_Animator_StringToHash_m713,
	CharacterInfo_t146_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t146_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t146_CustomAttributesCacheGenerator_width,
	CharacterInfo_t146_CustomAttributesCacheGenerator_flipped,
	Font_t69_CustomAttributesCacheGenerator_Font_get_dynamic_m739,
	FontTextureRebuildCallback_t147_CustomAttributesCacheGenerator,
	TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_Init_m743,
	TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m744,
	TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m747,
	TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m748,
	TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m749,
	TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m750,
	TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m751,
	TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m752,
	TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m754,
	TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m755,
	TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m756,
	TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m757,
	TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m758,
	TextGenerator_t154_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m759,
	Request_t159_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t159_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t159_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t159_CustomAttributesCacheGenerator_Request_get_sourceId_m780,
	Request_t159_CustomAttributesCacheGenerator_Request_get_appId_m781,
	Request_t159_CustomAttributesCacheGenerator_Request_get_domain_m782,
	Response_t161_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t161_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t161_CustomAttributesCacheGenerator_Response_get_success_m791,
	Response_t161_CustomAttributesCacheGenerator_Response_set_success_m792,
	Response_t161_CustomAttributesCacheGenerator_Response_get_extendedInfo_m793,
	Response_t161_CustomAttributesCacheGenerator_Response_set_extendedInfo_m794,
	CreateMatchRequest_t164_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t164_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t164_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t164_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t164_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m799,
	CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m800,
	CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m801,
	CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m802,
	CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m803,
	CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m804,
	CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m805,
	CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m806,
	CreateMatchRequest_t164_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m807,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m810,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m811,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m812,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m813,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m814,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m815,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m816,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m817,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m818,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m819,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m820,
	CreateMatchResponse_t165_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m821,
	JoinMatchRequest_t166_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t166_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t166_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m825,
	JoinMatchRequest_t166_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m826,
	JoinMatchRequest_t166_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m827,
	JoinMatchRequest_t166_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m828,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m831,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m832,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m833,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m834,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m835,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m836,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m837,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m838,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m839,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m840,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m841,
	JoinMatchResponse_t167_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m842,
	DestroyMatchRequest_t168_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t168_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m846,
	DestroyMatchRequest_t168_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m847,
	DropConnectionRequest_t169_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t169_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t169_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m850,
	DropConnectionRequest_t169_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m851,
	DropConnectionRequest_t169_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m852,
	DropConnectionRequest_t169_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m853,
	ListMatchRequest_t170_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t170_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t170_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t170_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t170_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m856,
	ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m857,
	ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m858,
	ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m859,
	ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m860,
	ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m861,
	ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m862,
	ListMatchRequest_t170_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m863,
	MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m866,
	MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m867,
	MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m868,
	MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m869,
	MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m870,
	MatchDirectConnectInfo_t171_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m871,
	MatchDesc_t173_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t173_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t173_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t173_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t173_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t173_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t173_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t173_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t173_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m875,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m876,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_name_m877,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_set_name_m878,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m879,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m880,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m881,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m882,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m883,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m884,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m885,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m886,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m887,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m888,
	MatchDesc_t173_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m889,
	ListMatchResponse_t175_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t175_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m893,
	ListMatchResponse_t175_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m894,
	AppID_t176_CustomAttributesCacheGenerator,
	SourceID_t177_CustomAttributesCacheGenerator,
	NetworkID_t178_CustomAttributesCacheGenerator,
	NodeID_t179_CustomAttributesCacheGenerator,
	NetworkMatch_t185_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1343,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t396_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t396_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1350,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t396_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1351,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t396_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1353,
	JsonArray_t186_CustomAttributesCacheGenerator,
	JsonObject_t189_CustomAttributesCacheGenerator,
	SimpleJson_t192_CustomAttributesCacheGenerator,
	SimpleJson_t192_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m938,
	SimpleJson_t192_CustomAttributesCacheGenerator_SimpleJson_NextToken_m950,
	SimpleJson_t192_CustomAttributesCacheGenerator_SimpleJson_t192____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t190_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t190_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1357,
	PocoJsonSerializerStrategy_t191_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t191_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m967,
	PocoJsonSerializerStrategy_t191_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m968,
	ReflectionUtils_t208_CustomAttributesCacheGenerator,
	ReflectionUtils_t208_CustomAttributesCacheGenerator_ReflectionUtils_t208_ReflectionUtils_GetConstructorInfo_m993_Arg1_ParameterInfo,
	ReflectionUtils_t208_CustomAttributesCacheGenerator_ReflectionUtils_t208_ReflectionUtils_GetContructor_m998_Arg1_ParameterInfo,
	ReflectionUtils_t208_CustomAttributesCacheGenerator_ReflectionUtils_t208_ReflectionUtils_GetConstructorByReflection_m1000_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t399_CustomAttributesCacheGenerator,
	ConstructorDelegate_t201_CustomAttributesCacheGenerator_ConstructorDelegate_t201_ConstructorDelegate_Invoke_m978_Arg0_ParameterInfo,
	ConstructorDelegate_t201_CustomAttributesCacheGenerator_ConstructorDelegate_t201_ConstructorDelegate_BeginInvoke_m979_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t203_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t204_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t205_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t206_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t207_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t210_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t215_CustomAttributesCacheGenerator,
	RequireComponent_t216_CustomAttributesCacheGenerator,
	WritableAttribute_t220_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t221_CustomAttributesCacheGenerator,
	Achievement_t233_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t233_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t233_CustomAttributesCacheGenerator_Achievement_get_id_m1053,
	Achievement_t233_CustomAttributesCacheGenerator_Achievement_set_id_m1054,
	Achievement_t233_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1055,
	Achievement_t233_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1056,
	AchievementDescription_t234_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t234_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1063,
	AchievementDescription_t234_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1064,
	Score_t235_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t235_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t235_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1073,
	Score_t235_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1074,
	Score_t235_CustomAttributesCacheGenerator_Score_get_value_m1075,
	Score_t235_CustomAttributesCacheGenerator_Score_set_value_m1076,
	Leaderboard_t26_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t26_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t26_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t26_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_get_id_m1084,
	Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_set_id_m1085,
	Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1086,
	Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1087,
	Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_get_range_m1088,
	Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_set_range_m1089,
	Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1090,
	Leaderboard_t26_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1091,
	StackTraceUtility_t247_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1103,
	StackTraceUtility_t247_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1106,
	StackTraceUtility_t247_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1108,
	SharedBetweenAnimatorsAttribute_t249_CustomAttributesCacheGenerator,
	ArgumentCache_t255_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	PersistentCall_t258_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t258_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t260_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t263_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t263_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t265_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t266_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t267_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t268_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t270_CustomAttributesCacheGenerator,
};
