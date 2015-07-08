#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern TypeInfo* TrackedReference_t137_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_Equals_m1126 (TrackedReference_t137 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TrackedReference_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m1128(NULL /*static, unused*/, ((TrackedReference_t137 *)IsInst(L_0, TrackedReference_t137_il2cpp_TypeInfo_var)), __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m1127 (TrackedReference_t137 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m1318(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_op_Equality_m1128 (Object_t * __this /* static, unused */, TrackedReference_t137 * ___x, TrackedReference_t137 * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t137 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t137 * L_1 = ___y;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		TrackedReference_t137 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m1319(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		Object_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		TrackedReference_t137 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m1319(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t137 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t137 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m1319(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void TrackedReference_t137_marshal(const TrackedReference_t137& unmarshaled, TrackedReference_t137_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void TrackedReference_t137_marshal_back(const TrackedReference_t137_marshaled& marshaled, TrackedReference_t137& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void TrackedReference_t137_marshal_cleanup(TrackedReference_t137_marshaled& marshaled)
{
}
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"


// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern "C" void ArgumentCache__ctor_m1129 (ArgumentCache_t255 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t380_il2cpp_TypeInfo_var;
extern "C" void ArgumentCache_TidyAssemblyTypeName_m1130 (ArgumentCache_t255 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Regex_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(212);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1223(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		String_t* L_2 = (__this->___m_ObjectArgumentAssemblyTypeName_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t380_il2cpp_TypeInfo_var);
		String_t* L_4 = Regex_Replace_m1320(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral256, L_3, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_0 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_0);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m1320(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral257, L_6, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_0 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_0);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m1320(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral258, L_9, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_0 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern "C" void ArgumentCache_OnBeforeSerialize_m1131 (ArgumentCache_t255 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m1130(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C" void ArgumentCache_OnAfterDeserialize_m1132 (ArgumentCache_t255 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m1130(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"



// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"



// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"



// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern TypeInfo* ArgumentCache_t255_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m1133 (PersistentCall_t258 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t255 * L_0 = (ArgumentCache_t255 *)il2cpp_codegen_object_new (ArgumentCache_t255_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m1129(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_0 = L_0;
		__this->___m_CallState_1 = 2;
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_10.h"
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_10MethodDeclarations.h"


// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern TypeInfo* List_1_t259_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1321_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m1134 (PersistentCallGroup_t260 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		List_1__ctor_m1321_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		List_1_t259 * L_0 = (List_1_t259 *)il2cpp_codegen_object_new (List_1_t259_il2cpp_TypeInfo_var);
		List_1__ctor_m1321(L_0, /*hidden argument*/List_1__ctor_m1321_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_11.h"
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_11MethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern TypeInfo* List_1_t261_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1322_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m1135 (InvokableCallList_t262 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		List_1__ctor_m1322_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t261 * L_0 = (List_1_t261 *)il2cpp_codegen_object_new (List_1_t261_il2cpp_TypeInfo_var);
		List_1__ctor_m1322(L_0, /*hidden argument*/List_1__ctor_m1322_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t261 * L_1 = (List_1_t261 *)il2cpp_codegen_object_new (List_1_t261_il2cpp_TypeInfo_var);
		List_1__ctor_m1322(L_1, /*hidden argument*/List_1__ctor_m1322_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t261 * L_2 = (List_1_t261 *)il2cpp_codegen_object_new (List_1_t261_il2cpp_TypeInfo_var);
		List_1__ctor_m1322(L_2, /*hidden argument*/List_1__ctor_m1322_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m1136 (InvokableCallList_t262 * __this, const MethodInfo* method)
{
	{
		List_1_t261 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(20 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		return;
	}
}
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"


// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern TypeInfo* InvokableCallList_t262_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t260_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m1137 (UnityEventBase_t263 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		PersistentCallGroup_t260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		InvokableCallList_t262 * L_0 = (InvokableCallList_t262 *)il2cpp_codegen_object_new (InvokableCallList_t262_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m1135(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t260 * L_1 = (PersistentCallGroup_t260 *)il2cpp_codegen_object_new (PersistentCallGroup_t260_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m1134(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m1176(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1138 (UnityEventBase_t263 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1139 (UnityEventBase_t263 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m1140(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m1176(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m1140 (UnityEventBase_t263 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t262 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m1136(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UnityEventBase_ToString_m1141 (UnityEventBase_t263 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m1224(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m1176(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1179(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral18, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"


// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern TypeInfo* ObjectU5BU5D_t200_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m1142 (UnityEvent_t264 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t200_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t200*)SZArrayNew(ObjectU5BU5D_t200_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m1137(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialog.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialogMethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"


// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
extern "C" void UserAuthorizationDialog__ctor_m1143 (UserAuthorizationDialog_t265 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m600(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::Start()
extern "C" void UserAuthorizationDialog_Start_m1144 (UserAuthorizationDialog_t265 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
extern "C" void UserAuthorizationDialog_OnGUI_m1145 (UserAuthorizationDialog_t265 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
extern "C" void UserAuthorizationDialog_DoUserAuthorizationDialog_m1146 (UserAuthorizationDialog_t265 * __this, int32_t ___windowID, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m1147 (DefaultValueAttribute_t266 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m1148 (DefaultValueAttribute_t266 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern TypeInfo* DefaultValueAttribute_t266_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m1149 (DefaultValueAttribute_t266 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t266 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t266 *)IsInst(L_0, DefaultValueAttribute_t266_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t266 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t266 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m1148(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t266 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m1148(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m1150 (DefaultValueAttribute_t266 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m1323(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"



// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern "C" void ExcludeFromDocsAttribute__ctor_m1151 (ExcludeFromDocsAttribute_t267 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"



// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C" void FormerlySerializedAsAttribute__ctor_m1152 (FormerlySerializedAsAttribute_t268 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"



// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"

// System.Enum
#include "mscorlib_System_Enum.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t269_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m1153 (TypeInferenceRuleAttribute_t270 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(221);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t269_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m1154(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m1154 (TypeInferenceRuleAttribute_t270 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m1155 (TypeInferenceRuleAttribute_t270 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"

// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"


// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" void GenericStack__ctor_m1156 (GenericStack_t49 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m1324(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
