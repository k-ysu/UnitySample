#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
extern TypeInfo* AssemblyCopyrightAttribute_t696_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t700_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t697_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t702_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t693_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t698_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t701_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t382_il2cpp_TypeInfo_var;
extern TypeInfo* InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t706_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t705_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t692_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1082);
		AssemblyDescriptionAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1086);
		AssemblyProductAttribute_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1083);
		AssemblyTitleAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1088);
		CLSCompliantAttribute_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		AssemblyCompanyAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		ComVisibleAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1087);
		RuntimeCompatibilityAttribute_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		AssemblyKeyFileAttribute_t706_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		AssemblyDelaySignAttribute_t705_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		NeutralResourcesLanguageAttribute_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1078);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t696 * tmp;
		tmp = (AssemblyCopyrightAttribute_t696 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t696_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m2557(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t700 * tmp;
		tmp = (AssemblyDescriptionAttribute_t700 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t700_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m2561(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t697 * tmp;
		tmp = (AssemblyProductAttribute_t697 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t697_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m2558(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t702 * tmp;
		tmp = (AssemblyTitleAttribute_t702 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t702_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m2563(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t693 * tmp;
		tmp = (CLSCompliantAttribute_t693 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t693_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2554(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t698 * tmp;
		tmp = (AssemblyCompanyAttribute_t698 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t698_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m2559(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t701 * tmp;
		tmp = (ComVisibleAttribute_t701 *)il2cpp_codegen_object_new (ComVisibleAttribute_t701_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m2562(tmp, false, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t382 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t382 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t382_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m1326(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m1327(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t381 * tmp;
		tmp = (InternalsVisibleToAttribute_t381 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t381_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1325(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t706 * tmp;
		tmp = (AssemblyKeyFileAttribute_t706 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t706_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m2567(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t705 * tmp;
		tmp = (AssemblyDelaySignAttribute_t705 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t705_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m2566(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t692 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t692 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t692_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m2553(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t693_il2cpp_TypeInfo_var;
void BigInteger_t736_CustomAttributesCacheGenerator_BigInteger__ctor_m2697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t693 * tmp;
		tmp = (CLSCompliantAttribute_t693 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t693_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2554(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t693_il2cpp_TypeInfo_var;
void BigInteger_t736_CustomAttributesCacheGenerator_BigInteger__ctor_m2699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t693 * tmp;
		tmp = (CLSCompliantAttribute_t693 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t693_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2554(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t693_il2cpp_TypeInfo_var;
void BigInteger_t736_CustomAttributesCacheGenerator_BigInteger__ctor_m2701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t693 * tmp;
		tmp = (CLSCompliantAttribute_t693 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t693_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2554(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t693_il2cpp_TypeInfo_var;
void BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_SetBit_m2708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t693 * tmp;
		tmp = (CLSCompliantAttribute_t693 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t693_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2554(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t693_il2cpp_TypeInfo_var;
void BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_SetBit_m2709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t693 * tmp;
		tmp = (CLSCompliantAttribute_t693 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t693_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2554(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t693_il2cpp_TypeInfo_var;
void BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_ToString_m2712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t693 * tmp;
		tmp = (CLSCompliantAttribute_t693 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t693_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2554(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t693_il2cpp_TypeInfo_var;
void BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_ToString_m2713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t693 * tmp;
		tmp = (CLSCompliantAttribute_t693 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t693_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2554(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t693_il2cpp_TypeInfo_var;
void BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m2723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t693 * tmp;
		tmp = (CLSCompliantAttribute_t693 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t693_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2554(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t693_il2cpp_TypeInfo_var;
void BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m2727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t693 * tmp;
		tmp = (CLSCompliantAttribute_t693 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t693_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2554(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t693_il2cpp_TypeInfo_var;
void BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_op_Equality_m2733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t693 * tmp;
		tmp = (CLSCompliantAttribute_t693 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t693_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2554(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t693_il2cpp_TypeInfo_var;
void BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m2734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t693 * tmp;
		tmp = (CLSCompliantAttribute_t693 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t693_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2554(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t693_il2cpp_TypeInfo_var;
void ModulusRing_t737_CustomAttributesCacheGenerator_ModulusRing_Pow_m2681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t693 * tmp;
		tmp = (CLSCompliantAttribute_t693 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t693_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2554(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
void ASN1_t656_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void PKCS12_t680_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
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
void PKCS12_t680_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
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
void PKCS12_t680_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
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
void PKCS12_t680_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
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
void X509Certificate_t541_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
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
void X509Certificate_t541_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
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
void X509Certificate_t541_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
void X509CertificateCollection_t681_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t386_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t768_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
void X509Crl_t658_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void X509Crl_t658_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
void X509ExtensionCollection_t684_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void ExtendedKeyUsageExtension_t771_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t386_il2cpp_TypeInfo_var;
void KeyUsages_t773_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t386_il2cpp_TypeInfo_var;
void CertTypes_t775_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t387_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t788_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void HttpsClientStream_t806_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
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
void HttpsClientStream_t806_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
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
void HttpsClientStream_t806_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3161(CustomAttributesCache* cache)
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
void HttpsClientStream_t806_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3162(CustomAttributesCache* cache)
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
void RSASslSignatureDeformatter_t812_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
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
void RSASslSignatureFormatter_t814_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t386_il2cpp_TypeInfo_var;
void SecurityProtocolType_t817_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t385_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t852_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern const CustomAttributesCacheGenerator g_Mono_Security_Assembly_AttributeGenerators[39] = 
{
	NULL,
	g_Mono_Security_Assembly_CustomAttributesCacheGenerator,
	BigInteger_t736_CustomAttributesCacheGenerator_BigInteger__ctor_m2697,
	BigInteger_t736_CustomAttributesCacheGenerator_BigInteger__ctor_m2699,
	BigInteger_t736_CustomAttributesCacheGenerator_BigInteger__ctor_m2701,
	BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_SetBit_m2708,
	BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_SetBit_m2709,
	BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_ToString_m2712,
	BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_ToString_m2713,
	BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m2723,
	BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m2727,
	BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_op_Equality_m2733,
	BigInteger_t736_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m2734,
	ModulusRing_t737_CustomAttributesCacheGenerator_ModulusRing_Pow_m2681,
	ASN1_t656_CustomAttributesCacheGenerator,
	PKCS12_t680_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t680_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t680_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t680_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	X509Certificate_t541_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t541_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t541_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t681_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t768_CustomAttributesCacheGenerator,
	X509Crl_t658_CustomAttributesCacheGenerator,
	X509Crl_t658_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t684_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t771_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t773_CustomAttributesCacheGenerator,
	CertTypes_t775_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t788_CustomAttributesCacheGenerator,
	HttpsClientStream_t806_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t806_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t806_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3161,
	HttpsClientStream_t806_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3162,
	RSASslSignatureDeformatter_t812_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t814_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t817_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t852_CustomAttributesCacheGenerator,
};
