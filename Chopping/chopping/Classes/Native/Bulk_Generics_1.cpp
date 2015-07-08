#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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

// System.Byte
#include "mscorlib_System_Byte.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.Byte>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Byte>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Byte>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Byte>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.UInt16
#include "mscorlib_System_UInt16.h"


// T System.Collections.Generic.IEnumerator`1<System.UInt16>::get_Current()
// System.Array/InternalEnumerator`1<System.UInt16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_23.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.UInt16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_23MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt16>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt16>(System.Int32)
extern "C" uint16_t Array_InternalArray__get_Item_TisUInt16_t351_m12642_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt16_t351_m12642(__this, p0, method) (( uint16_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUInt16_t351_m12642_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.UInt16>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m9905_gshared (InternalEnumerator_1_t2028 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9907_gshared (InternalEnumerator_1_t2028 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (( uint16_t (*) (InternalEnumerator_1_t2028 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2028 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt16>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m9909_gshared (InternalEnumerator_1_t2028 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt16>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m9911_gshared (InternalEnumerator_1_t2028 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2381((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.UInt16>::get_Current()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" uint16_t InternalEnumerator_1_get_Current_m9913_gshared (InternalEnumerator_1_t2028 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_1, (String_t*)(String_t*) &_stringLiteral1099, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t665 * L_3 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_3, (String_t*)(String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2381((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		uint16_t L_8 = (( uint16_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.UInt16>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt16>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UInt16>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt16>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt16>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt16>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt16>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt16>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.UInt16>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UInt16>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UInt16>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UInt16>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UInt16>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtr.h"


// T System.Collections.Generic.IEnumerator`1<System.IntPtr>::get_Current()
// System.Array/InternalEnumerator`1<System.IntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_26.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.IntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_26MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IntPtr>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IntPtr>(System.Int32)
extern "C" IntPtr_t Array_InternalArray__get_Item_TisIntPtr_t_m12653_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisIntPtr_t_m12653(__this, p0, method) (( IntPtr_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisIntPtr_t_m12653_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m9999_gshared (InternalEnumerator_1_t2033 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.IntPtr>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10000_gshared (InternalEnumerator_1_t2033 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (( IntPtr_t (*) (InternalEnumerator_1_t2033 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2033 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		IntPtr_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10001_gshared (InternalEnumerator_1_t2033 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.IntPtr>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10002_gshared (InternalEnumerator_1_t2033 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2381((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.IntPtr>::get_Current()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" IntPtr_t InternalEnumerator_1_get_Current_m10003_gshared (InternalEnumerator_1_t2033 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_1, (String_t*)(String_t*) &_stringLiteral1099, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t665 * L_3 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_3, (String_t*)(String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2381((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		IntPtr_t L_8 = (( IntPtr_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.IntPtr>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IntPtr>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.IntPtr>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IntPtr>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::set_Item(System.Int32,T)
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_genMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Single
#include "mscorlib_System_Single.h"


// T System.Collections.Generic.IEnumerator`1<System.Single>::get_Current()
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_27.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_27MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
extern "C" float Array_InternalArray__get_Item_TisSingle_t321_m12664_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSingle_t321_m12664(__this, p0, method) (( float (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSingle_t321_m12664_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Single>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10004_gshared (InternalEnumerator_1_t2035 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10005_gshared (InternalEnumerator_1_t2035 * __this, const MethodInfo* method)
{
	{
		float L_0 = (( float (*) (InternalEnumerator_1_t2035 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2035 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		float L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Single>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10006_gshared (InternalEnumerator_1_t2035 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Single>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10007_gshared (InternalEnumerator_1_t2035 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2381((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Single>::get_Current()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" float InternalEnumerator_1_get_Current_m10008_gshared (InternalEnumerator_1_t2035 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_1, (String_t*)(String_t*) &_stringLiteral1099, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t665 * L_3 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_3, (String_t*)(String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2381((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		float L_8 = (( float (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Single>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Single>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Single>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Single>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Single>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Single>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Single>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Single>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Keyframe>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_28.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_28MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
extern "C" Keyframe_t135  Array_InternalArray__get_Item_TisKeyframe_t135_m12675_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyframe_t135_m12675(__this, p0, method) (( Keyframe_t135  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyframe_t135_m12675_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10009_gshared (InternalEnumerator_1_t2036 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10010_gshared (InternalEnumerator_1_t2036 * __this, const MethodInfo* method)
{
	{
		Keyframe_t135  L_0 = (( Keyframe_t135  (*) (InternalEnumerator_1_t2036 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2036 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Keyframe_t135  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10011_gshared (InternalEnumerator_1_t2036 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10012_gshared (InternalEnumerator_1_t2036 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2381((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::get_Current()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" Keyframe_t135  InternalEnumerator_1_get_Current_m10013_gshared (InternalEnumerator_1_t2036 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_1, (String_t*)(String_t*) &_stringLiteral1099, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t665 * L_3 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_3, (String_t*)(String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2381((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Keyframe_t135  L_8 = (( Keyframe_t135  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Keyframe>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Keyframe>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Keyframe>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"


// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UIVertex>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_29.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.UIVertex>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_29MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UIVertex>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UIVertex>(System.Int32)
extern "C" UIVertex_t158  Array_InternalArray__get_Item_TisUIVertex_t158_m12686_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUIVertex_t158_m12686(__this, p0, method) (( UIVertex_t158  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUIVertex_t158_m12686_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10018_gshared (InternalEnumerator_1_t2037 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10019_gshared (InternalEnumerator_1_t2037 * __this, const MethodInfo* method)
{
	{
		UIVertex_t158  L_0 = (( UIVertex_t158  (*) (InternalEnumerator_1_t2037 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2037 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UIVertex_t158  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10020_gshared (InternalEnumerator_1_t2037 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10021_gshared (InternalEnumerator_1_t2037 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2381((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::get_Current()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" UIVertex_t158  InternalEnumerator_1_get_Current_m10022_gshared (InternalEnumerator_1_t2037 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_1, (String_t*)(String_t*) &_stringLiteral1099, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t665 * L_3 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_3, (String_t*)(String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2381((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		UIVertex_t158  L_8 = (( UIVertex_t158  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"

// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4MethodDeclarations.h"
struct Array_t;
struct UIVertexU5BU5D_t287;
// Declaration System.Void System.Array::Resize<UnityEngine.UIVertex>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UIVertex>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisUIVertex_t158_m12697_gshared (Object_t * __this /* static, unused */, UIVertexU5BU5D_t287** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisUIVertex_t158_m12697(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t287**, int32_t, const MethodInfo*))Array_Resize_TisUIVertex_t158_m12697_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
struct UIVertexU5BU5D_t287;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UIVertex>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UIVertex>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisUIVertex_t158_m12698_gshared (Object_t * __this /* static, unused */, UIVertexU5BU5D_t287* p0, UIVertex_t158  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisUIVertex_t158_m12698(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t287*, UIVertex_t158 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisUIVertex_t158_m12698_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)


// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m10023_gshared (List_1_t151 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UIVertexU5BU5D_t287* L_0 = ((List_1_t151_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_3;
		__this->____items_0 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1__ctor_m1220_gshared (List_1_t151 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_1 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_1, (String_t*)(String_t*) &_stringLiteral1226, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_0 = ((UIVertexU5BU5D_t287*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m10024_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t151_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_3 = ((UIVertexU5BU5D_t287*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10025_gshared (List_1_t151 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t151 *)__this);
		Enumerator_t2038  L_0 = (( Enumerator_t2038  (*) (List_1_t151 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((List_1_t151 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t2038  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10026_gshared (List_1_t151 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t287* L_0 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_1);
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10027_gshared (List_1_t151 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t151 *)__this);
		Enumerator_t2038  L_0 = (( Enumerator_t2038  (*) (List_1_t151 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((List_1_t151 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t2038  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_Add_m10028_gshared (List_1_t151 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t151 *)__this);
			VirtActionInvoker1< UIVertex_t158  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T) */, (List_1_t151 *)__this, (UIVertex_t158 )((*(UIVertex_t158 *)((UIVertex_t158 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			int32_t L_1 = (int32_t)(__this->____size_1);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t313 * L_2 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_2, (String_t*)(String_t*) &_stringLiteral1238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m10029_gshared (List_1_t151 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t151 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, UIVertex_t158  >::Invoke(21 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T) */, (List_1_t151 *)__this, (UIVertex_t158 )((*(UIVertex_t158 *)((UIVertex_t158 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			V_0 = (bool)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10030_gshared (List_1_t151 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t151 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t158  >::Invoke(25 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T) */, (List_1_t151 *)__this, (UIVertex_t158 )((*(UIVertex_t158 *)((UIVertex_t158 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			V_0 = (int32_t)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Insert_m10031_gshared (List_1_t151 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t151 *)__this);
		(( void (*) (List_1_t151 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((List_1_t151 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t151 *)__this);
			VirtActionInvoker2< int32_t, UIVertex_t158  >::Invoke(26 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T) */, (List_1_t151 *)__this, (int32_t)L_1, (UIVertex_t158 )((*(UIVertex_t158 *)((UIVertex_t158 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t313 * L_3 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_3, (String_t*)(String_t*) &_stringLiteral1238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m10032_gshared (List_1_t151 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t151 *)__this);
			VirtFuncInvoker1< bool, UIVertex_t158  >::Invoke(23 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T) */, (List_1_t151 *)__this, (UIVertex_t158 )((*(UIVertex_t158 *)((UIVertex_t158 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10033_gshared (List_1_t151 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10034_gshared (List_1_t151 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10035_gshared (List_1_t151 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t151 *)__this);
		UIVertex_t158  L_1 = (UIVertex_t158 )VirtFuncInvoker1< UIVertex_t158 , int32_t >::Invoke(28 /* T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, (List_1_t151 *)__this, (int32_t)L_0);
		UIVertex_t158  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_set_Item_m10036_gshared (List_1_t151 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t151 *)__this);
			VirtActionInvoker2< int32_t, UIVertex_t158  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T) */, (List_1_t151 *)__this, (int32_t)L_0, (UIVertex_t158 )((*(UIVertex_t158 *)((UIVertex_t158 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t313 * L_2 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_2, (String_t*)(String_t*) &_stringLiteral462, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m10037_gshared (List_1_t151 * __this, UIVertex_t158  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_1);
		UIVertexU5BU5D_t287* L_1 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((List_1_t151 *)__this);
		(( void (*) (List_1_t151 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((List_1_t151 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0017:
	{
		UIVertexU5BU5D_t287* L_2 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		int32_t L_3 = (int32_t)(__this->____size_1);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_1 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		UIVertex_t158  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((UIVertex_t158 *)(UIVertex_t158 *)SZArrayLdElema(L_2, L_5)) = (UIVertex_t158 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_2);
		__this->____version_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10038_gshared (List_1_t151 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_1);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		UIVertexU5BU5D_t287* L_3 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		NullCheck((List_1_t151 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t151 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)((List_1_t151 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		int32_t L_5 = Math_Max_m3506(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m3506(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t151 *)__this);
		(( void (*) (List_1_t151 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((List_1_t151 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m10039_gshared (List_1_t151 * __this, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t287* L_0 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		UIVertexU5BU5D_t287* L_1 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		NullCheck(L_1);
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_1 = 0;
		int32_t L_2 = (int32_t)(__this->____version_2);
		__this->____version_2 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m10040_gshared (List_1_t151 * __this, UIVertex_t158  ___item, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t287* L_0 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		UIVertex_t158  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_1);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t287*, UIVertex_t158 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t287*)L_0, (UIVertex_t158 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10041_gshared (List_1_t151 * __this, UIVertexU5BU5D_t287* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t287* L_0 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		UIVertexU5BU5D_t287* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_1);
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2038  List_1_GetEnumerator_m10042_gshared (List_1_t151 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2038  L_0 = {0};
		(( void (*) (Enumerator_t2038 *, List_1_t151 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)(&L_0, (List_1_t151 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10043_gshared (List_1_t151 * __this, UIVertex_t158  ___item, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t287* L_0 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		UIVertex_t158  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_1);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t287*, UIVertex_t158 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t287*)L_0, (UIVertex_t158 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10044_gshared (List_1_t151 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		UIVertexU5BU5D_t287* L_5 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		int32_t L_6 = ___start;
		UIVertexU5BU5D_t287* L_7 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_1);
		int32_t L_11 = ___start;
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0031:
	{
		int32_t L_12 = (int32_t)(__this->____size_1);
		int32_t L_13 = ___delta;
		__this->____size_1 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		UIVertexU5BU5D_t287* L_15 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		int32_t L_16 = (int32_t)(__this->____size_1);
		int32_t L_17 = ___delta;
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckIndex_m10045_gshared (List_1_t151 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t343 * L_3 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_3, (String_t*)(String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10046_gshared (List_1_t151 * __this, int32_t ___index, UIVertex_t158  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t151 *)__this);
		(( void (*) (List_1_t151 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((List_1_t151 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = (int32_t)(__this->____size_1);
		UIVertexU5BU5D_t287* L_2 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((List_1_t151 *)__this);
		(( void (*) (List_1_t151 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((List_1_t151 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t151 *)__this);
		(( void (*) (List_1_t151 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t151 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		UIVertexU5BU5D_t287* L_4 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		int32_t L_5 = ___index;
		UIVertex_t158  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UIVertex_t158 *)(UIVertex_t158 *)SZArrayLdElema(L_4, L_5)) = (UIVertex_t158 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_2);
		__this->____version_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m10047_gshared (List_1_t151 * __this, UIVertex_t158  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UIVertex_t158  L_0 = ___item;
		NullCheck((List_1_t151 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t158  >::Invoke(25 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T) */, (List_1_t151 *)__this, (UIVertex_t158 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t151 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(27 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32) */, (List_1_t151 *)__this, (int32_t)L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1_RemoveAt_m10048_gshared (List_1_t151 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t343 * L_3 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_3, (String_t*)(String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t151 *)__this);
		(( void (*) (List_1_t151 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t151 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		UIVertexU5BU5D_t287* L_5 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		int32_t L_6 = (int32_t)(__this->____size_1);
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_2);
		__this->____version_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t287* List_1_ToArray_m10049_gshared (List_1_t151 * __this, const MethodInfo* method)
{
	UIVertexU5BU5D_t287* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_1);
		V_0 = (UIVertexU5BU5D_t287*)((UIVertexU5BU5D_t287*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_0));
		UIVertexU5BU5D_t287* L_1 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		UIVertexU5BU5D_t287* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_1);
		Array_Copy_m2537(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		UIVertexU5BU5D_t287* L_4 = V_0;
		return L_4;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10050_gshared (List_1_t151 * __this, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t287* L_0 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m10051_gshared (List_1_t151 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_2 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2519(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		UIVertexU5BU5D_t287** L_3 = (UIVertexU5BU5D_t287**)&(__this->____items_0);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t287**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t287**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m10052_gshared (List_1_t151 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_1);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" UIVertex_t158  List_1_get_Item_m10053_gshared (List_1_t151 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_2 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_2, (String_t*)(String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		UIVertexU5BU5D_t287* L_3 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(UIVertex_t158 *)(UIVertex_t158 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Item_m10054_gshared (List_1_t151 * __this, int32_t ___index, UIVertex_t158  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t151 *)__this);
		(( void (*) (List_1_t151 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((List_1_t151 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_3 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_3, (String_t*)(String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		UIVertexU5BU5D_t287* L_4 = (UIVertexU5BU5D_t287*)(__this->____items_0);
		int32_t L_5 = ___index;
		UIVertex_t158  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UIVertex_t158 *)(UIVertex_t158 *)SZArrayLdElema(L_4, L_5)) = (UIVertex_t158 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Type
#include "mscorlib_System_Type.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m10055_gshared (Enumerator_t2038 * __this, List_1_t151 * ___l, const MethodInfo* method)
{
	{
		List_1_t151 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t151 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_2);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10056_gshared (Enumerator_t2038 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2038 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2038 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2384(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		UIVertex_t158  L_2 = (UIVertex_t158 )(__this->___current_3);
		UIVertex_t158  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::Dispose()
extern "C" void Enumerator_Dispose_m10057_gshared (Enumerator_t2038 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t151 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::VerifyState()
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m10058_gshared (Enumerator_t2038 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t151 * L_0 = (List_1_t151 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t2038  L_1 = (*(Enumerator_t2038 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m1176((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t858 * L_5 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3515(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t151 * L_7 = (List_1_t151 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_2);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t665 * L_9 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_9, (String_t*)(String_t*) &_stringLiteral1239, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10059_gshared (Enumerator_t2038 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2038 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2038 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t151 * L_2 = (List_1_t151 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_1);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t151 * L_4 = (List_1_t151 *)(__this->___l_0);
		NullCheck(L_4);
		UIVertexU5BU5D_t287* L_5 = (UIVertexU5BU5D_t287*)(L_4->____items_0);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(UIVertex_t158 *)(UIVertex_t158 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::get_Current()
extern "C" UIVertex_t158  Enumerator_get_Current_m10060_gshared (Enumerator_t2038 * __this, const MethodInfo* method)
{
	{
		UIVertex_t158  L_0 = (UIVertex_t158 )(__this->___current_3);
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1MethodDeclarations.h"

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::.ctor()
extern "C" void EqualityComparer_1__ctor_m10061_gshared (EqualityComparer_1_t2039 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t1495_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t196_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m10062_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t1495_0_0_0_var = il2cpp_codegen_type_from_index(2921);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		TypeU5BU5D_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(GenericEqualityComparer_1_t1495_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t196* L_4 = (TypeU5BU5D_t196*)((TypeU5BU5D_t196*)SZArrayNew(TypeU5BU5D_t196_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t196* >::Invoke(78 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t196*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7264(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2039_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2039 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t2040 * L_8 = (DefaultComparer_t2040 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2040 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2039_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m10063_gshared (EqualityComparer_1_t2039 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2039 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t158  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::GetHashCode(T) */, (EqualityComparer_1_t2039 *)__this, (UIVertex_t158 )((*(UIVertex_t158 *)((UIVertex_t158 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m10064_gshared (EqualityComparer_1_t2039 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2039 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, UIVertex_t158 , UIVertex_t158  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::Equals(T,T) */, (EqualityComparer_1_t2039 *)__this, (UIVertex_t158 )((*(UIVertex_t158 *)((UIVertex_t158 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (UIVertex_t158 )((*(UIVertex_t158 *)((UIVertex_t158 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::get_Default()
extern "C" EqualityComparer_1_t2039 * EqualityComparer_1_get_Default_m10065_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2039 * L_0 = ((EqualityComparer_1_t2039_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UIVertex>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UIVertex>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<UnityEngine.UIVertex>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern TypeInfo* EqualityComparer_1_t2039_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m10066_gshared (DefaultComparer_t2040 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2039_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4552);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t2039 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2039_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t2039 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2039 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10067_gshared (DefaultComparer_t2040 * __this, UIVertex_t158  ___obj, const MethodInfo* method)
{
	{
		UIVertex_t158  L_0 = ___obj;
		UIVertex_t158  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10068_gshared (DefaultComparer_t2040 * __this, UIVertex_t158  ___x, UIVertex_t158  ___y, const MethodInfo* method)
{
	{
		UIVertex_t158  L_0 = ___x;
		UIVertex_t158  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		UIVertex_t158  L_3 = ___y;
		UIVertex_t158  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		UIVertex_t158  L_6 = ___y;
		UIVertex_t158  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"


// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_30.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_30MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UICharInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UICharInfo>(System.Int32)
extern "C" UICharInfo_t149  Array_InternalArray__get_Item_TisUICharInfo_t149_m12700_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUICharInfo_t149_m12700(__this, p0, method) (( UICharInfo_t149  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUICharInfo_t149_m12700_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10069_gshared (InternalEnumerator_1_t2041 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10070_gshared (InternalEnumerator_1_t2041 * __this, const MethodInfo* method)
{
	{
		UICharInfo_t149  L_0 = (( UICharInfo_t149  (*) (InternalEnumerator_1_t2041 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2041 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UICharInfo_t149  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10071_gshared (InternalEnumerator_1_t2041 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10072_gshared (InternalEnumerator_1_t2041 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2381((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::get_Current()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" UICharInfo_t149  InternalEnumerator_1_get_Current_m10073_gshared (InternalEnumerator_1_t2041 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_1, (String_t*)(String_t*) &_stringLiteral1099, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t665 * L_3 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_3, (String_t*)(String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2381((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		UICharInfo_t149  L_8 = (( UICharInfo_t149  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5MethodDeclarations.h"
struct Array_t;
struct UICharInfoU5BU5D_t288;
// Declaration System.Void System.Array::Resize<UnityEngine.UICharInfo>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UICharInfo>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisUICharInfo_t149_m12711_gshared (Object_t * __this /* static, unused */, UICharInfoU5BU5D_t288** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisUICharInfo_t149_m12711(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t288**, int32_t, const MethodInfo*))Array_Resize_TisUICharInfo_t149_m12711_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
struct UICharInfoU5BU5D_t288;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UICharInfo>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UICharInfo>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisUICharInfo_t149_m12712_gshared (Object_t * __this /* static, unused */, UICharInfoU5BU5D_t288* p0, UICharInfo_t149  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisUICharInfo_t149_m12712(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t288*, UICharInfo_t149 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisUICharInfo_t149_m12712_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)


// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m10074_gshared (List_1_t152 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UICharInfoU5BU5D_t288* L_0 = ((List_1_t152_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_3;
		__this->____items_0 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1__ctor_m1221_gshared (List_1_t152 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_1 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_1, (String_t*)(String_t*) &_stringLiteral1226, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_0 = ((UICharInfoU5BU5D_t288*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m10075_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t152_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_3 = ((UICharInfoU5BU5D_t288*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10076_gshared (List_1_t152 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t152 *)__this);
		Enumerator_t2042  L_0 = (( Enumerator_t2042  (*) (List_1_t152 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((List_1_t152 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t2042  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10077_gshared (List_1_t152 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t288* L_0 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_1);
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10078_gshared (List_1_t152 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t152 *)__this);
		Enumerator_t2042  L_0 = (( Enumerator_t2042  (*) (List_1_t152 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((List_1_t152 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t2042  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_Add_m10079_gshared (List_1_t152 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t152 *)__this);
			VirtActionInvoker1< UICharInfo_t149  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T) */, (List_1_t152 *)__this, (UICharInfo_t149 )((*(UICharInfo_t149 *)((UICharInfo_t149 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			int32_t L_1 = (int32_t)(__this->____size_1);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t313 * L_2 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_2, (String_t*)(String_t*) &_stringLiteral1238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m10080_gshared (List_1_t152 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t152 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, UICharInfo_t149  >::Invoke(21 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T) */, (List_1_t152 *)__this, (UICharInfo_t149 )((*(UICharInfo_t149 *)((UICharInfo_t149 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			V_0 = (bool)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10081_gshared (List_1_t152 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t152 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UICharInfo_t149  >::Invoke(25 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T) */, (List_1_t152 *)__this, (UICharInfo_t149 )((*(UICharInfo_t149 *)((UICharInfo_t149 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			V_0 = (int32_t)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Insert_m10082_gshared (List_1_t152 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t152 *)__this);
		(( void (*) (List_1_t152 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((List_1_t152 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t152 *)__this);
			VirtActionInvoker2< int32_t, UICharInfo_t149  >::Invoke(26 /* System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T) */, (List_1_t152 *)__this, (int32_t)L_1, (UICharInfo_t149 )((*(UICharInfo_t149 *)((UICharInfo_t149 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t313 * L_3 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_3, (String_t*)(String_t*) &_stringLiteral1238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m10083_gshared (List_1_t152 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t152 *)__this);
			VirtFuncInvoker1< bool, UICharInfo_t149  >::Invoke(23 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T) */, (List_1_t152 *)__this, (UICharInfo_t149 )((*(UICharInfo_t149 *)((UICharInfo_t149 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10084_gshared (List_1_t152 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10085_gshared (List_1_t152 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10086_gshared (List_1_t152 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t152 *)__this);
		UICharInfo_t149  L_1 = (UICharInfo_t149 )VirtFuncInvoker1< UICharInfo_t149 , int32_t >::Invoke(28 /* T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32) */, (List_1_t152 *)__this, (int32_t)L_0);
		UICharInfo_t149  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_set_Item_m10087_gshared (List_1_t152 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t152 *)__this);
			VirtActionInvoker2< int32_t, UICharInfo_t149  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T) */, (List_1_t152 *)__this, (int32_t)L_0, (UICharInfo_t149 )((*(UICharInfo_t149 *)((UICharInfo_t149 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t313 * L_2 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_2, (String_t*)(String_t*) &_stringLiteral462, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m10088_gshared (List_1_t152 * __this, UICharInfo_t149  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_1);
		UICharInfoU5BU5D_t288* L_1 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((List_1_t152 *)__this);
		(( void (*) (List_1_t152 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((List_1_t152 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0017:
	{
		UICharInfoU5BU5D_t288* L_2 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		int32_t L_3 = (int32_t)(__this->____size_1);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_1 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		UICharInfo_t149  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((UICharInfo_t149 *)(UICharInfo_t149 *)SZArrayLdElema(L_2, L_5)) = (UICharInfo_t149 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_2);
		__this->____version_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10089_gshared (List_1_t152 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_1);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		UICharInfoU5BU5D_t288* L_3 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		NullCheck((List_1_t152 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t152 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)((List_1_t152 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		int32_t L_5 = Math_Max_m3506(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m3506(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t152 *)__this);
		(( void (*) (List_1_t152 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((List_1_t152 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m10090_gshared (List_1_t152 * __this, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t288* L_0 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		UICharInfoU5BU5D_t288* L_1 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		NullCheck(L_1);
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_1 = 0;
		int32_t L_2 = (int32_t)(__this->____version_2);
		__this->____version_2 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m10091_gshared (List_1_t152 * __this, UICharInfo_t149  ___item, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t288* L_0 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		UICharInfo_t149  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_1);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t288*, UICharInfo_t149 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)(NULL /*static, unused*/, (UICharInfoU5BU5D_t288*)L_0, (UICharInfo_t149 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10092_gshared (List_1_t152 * __this, UICharInfoU5BU5D_t288* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t288* L_0 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		UICharInfoU5BU5D_t288* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_1);
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2042  List_1_GetEnumerator_m10093_gshared (List_1_t152 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2042  L_0 = {0};
		(( void (*) (Enumerator_t2042 *, List_1_t152 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)(&L_0, (List_1_t152 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10094_gshared (List_1_t152 * __this, UICharInfo_t149  ___item, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t288* L_0 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		UICharInfo_t149  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_1);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t288*, UICharInfo_t149 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)(NULL /*static, unused*/, (UICharInfoU5BU5D_t288*)L_0, (UICharInfo_t149 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10095_gshared (List_1_t152 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		UICharInfoU5BU5D_t288* L_5 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		int32_t L_6 = ___start;
		UICharInfoU5BU5D_t288* L_7 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_1);
		int32_t L_11 = ___start;
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0031:
	{
		int32_t L_12 = (int32_t)(__this->____size_1);
		int32_t L_13 = ___delta;
		__this->____size_1 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		UICharInfoU5BU5D_t288* L_15 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		int32_t L_16 = (int32_t)(__this->____size_1);
		int32_t L_17 = ___delta;
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckIndex_m10096_gshared (List_1_t152 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t343 * L_3 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_3, (String_t*)(String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10097_gshared (List_1_t152 * __this, int32_t ___index, UICharInfo_t149  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t152 *)__this);
		(( void (*) (List_1_t152 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((List_1_t152 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = (int32_t)(__this->____size_1);
		UICharInfoU5BU5D_t288* L_2 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((List_1_t152 *)__this);
		(( void (*) (List_1_t152 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((List_1_t152 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t152 *)__this);
		(( void (*) (List_1_t152 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t152 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		UICharInfoU5BU5D_t288* L_4 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		int32_t L_5 = ___index;
		UICharInfo_t149  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UICharInfo_t149 *)(UICharInfo_t149 *)SZArrayLdElema(L_4, L_5)) = (UICharInfo_t149 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_2);
		__this->____version_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m10098_gshared (List_1_t152 * __this, UICharInfo_t149  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UICharInfo_t149  L_0 = ___item;
		NullCheck((List_1_t152 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UICharInfo_t149  >::Invoke(25 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T) */, (List_1_t152 *)__this, (UICharInfo_t149 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t152 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(27 /* System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32) */, (List_1_t152 *)__this, (int32_t)L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1_RemoveAt_m10099_gshared (List_1_t152 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t343 * L_3 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_3, (String_t*)(String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t152 *)__this);
		(( void (*) (List_1_t152 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t152 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		UICharInfoU5BU5D_t288* L_5 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		int32_t L_6 = (int32_t)(__this->____size_1);
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_2);
		__this->____version_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t288* List_1_ToArray_m10100_gshared (List_1_t152 * __this, const MethodInfo* method)
{
	UICharInfoU5BU5D_t288* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_1);
		V_0 = (UICharInfoU5BU5D_t288*)((UICharInfoU5BU5D_t288*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_0));
		UICharInfoU5BU5D_t288* L_1 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		UICharInfoU5BU5D_t288* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_1);
		Array_Copy_m2537(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		UICharInfoU5BU5D_t288* L_4 = V_0;
		return L_4;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10101_gshared (List_1_t152 * __this, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t288* L_0 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m10102_gshared (List_1_t152 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_2 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2519(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		UICharInfoU5BU5D_t288** L_3 = (UICharInfoU5BU5D_t288**)&(__this->____items_0);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t288**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(NULL /*static, unused*/, (UICharInfoU5BU5D_t288**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m10103_gshared (List_1_t152 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_1);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" UICharInfo_t149  List_1_get_Item_m10104_gshared (List_1_t152 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_2 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_2, (String_t*)(String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		UICharInfoU5BU5D_t288* L_3 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(UICharInfo_t149 *)(UICharInfo_t149 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Item_m10105_gshared (List_1_t152 * __this, int32_t ___index, UICharInfo_t149  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t152 *)__this);
		(( void (*) (List_1_t152 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((List_1_t152 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_3 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_3, (String_t*)(String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		UICharInfoU5BU5D_t288* L_4 = (UICharInfoU5BU5D_t288*)(__this->____items_0);
		int32_t L_5 = ___index;
		UICharInfo_t149  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UICharInfo_t149 *)(UICharInfo_t149 *)SZArrayLdElema(L_4, L_5)) = (UICharInfo_t149 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m10106_gshared (Enumerator_t2042 * __this, List_1_t152 * ___l, const MethodInfo* method)
{
	{
		List_1_t152 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t152 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_2);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10107_gshared (Enumerator_t2042 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2042 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2042 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2384(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		UICharInfo_t149  L_2 = (UICharInfo_t149 )(__this->___current_3);
		UICharInfo_t149  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::Dispose()
extern "C" void Enumerator_Dispose_m10108_gshared (Enumerator_t2042 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t152 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::VerifyState()
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m10109_gshared (Enumerator_t2042 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t152 * L_0 = (List_1_t152 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t2042  L_1 = (*(Enumerator_t2042 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m1176((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t858 * L_5 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3515(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t152 * L_7 = (List_1_t152 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_2);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t665 * L_9 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_9, (String_t*)(String_t*) &_stringLiteral1239, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10110_gshared (Enumerator_t2042 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2042 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2042 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t152 * L_2 = (List_1_t152 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_1);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t152 * L_4 = (List_1_t152 *)(__this->___l_0);
		NullCheck(L_4);
		UICharInfoU5BU5D_t288* L_5 = (UICharInfoU5BU5D_t288*)(L_4->____items_0);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(UICharInfo_t149 *)(UICharInfo_t149 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::get_Current()
extern "C" UICharInfo_t149  Enumerator_get_Current_m10111_gshared (Enumerator_t2042 * __this, const MethodInfo* method)
{
	{
		UICharInfo_t149  L_0 = (UICharInfo_t149 )(__this->___current_3);
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void EqualityComparer_1__ctor_m10112_gshared (EqualityComparer_1_t2043 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t1495_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t196_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m10113_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t1495_0_0_0_var = il2cpp_codegen_type_from_index(2921);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		TypeU5BU5D_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(GenericEqualityComparer_1_t1495_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t196* L_4 = (TypeU5BU5D_t196*)((TypeU5BU5D_t196*)SZArrayNew(TypeU5BU5D_t196_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t196* >::Invoke(78 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t196*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7264(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2043_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2043 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t2044 * L_8 = (DefaultComparer_t2044 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2044 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2043_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m10114_gshared (EqualityComparer_1_t2043 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2043 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UICharInfo_t149  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::GetHashCode(T) */, (EqualityComparer_1_t2043 *)__this, (UICharInfo_t149 )((*(UICharInfo_t149 *)((UICharInfo_t149 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m10115_gshared (EqualityComparer_1_t2043 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2043 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, UICharInfo_t149 , UICharInfo_t149  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::Equals(T,T) */, (EqualityComparer_1_t2043 *)__this, (UICharInfo_t149 )((*(UICharInfo_t149 *)((UICharInfo_t149 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (UICharInfo_t149 )((*(UICharInfo_t149 *)((UICharInfo_t149 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::get_Default()
extern "C" EqualityComparer_1_t2043 * EqualityComparer_1_get_Default_m10116_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2043 * L_0 = ((EqualityComparer_1_t2043_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UICharInfo>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UICharInfo>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<UnityEngine.UICharInfo>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern TypeInfo* EqualityComparer_1_t2043_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m10117_gshared (DefaultComparer_t2044 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2043_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4561);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t2043 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2043_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t2043 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2043 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10118_gshared (DefaultComparer_t2044 * __this, UICharInfo_t149  ___obj, const MethodInfo* method)
{
	{
		UICharInfo_t149  L_0 = ___obj;
		UICharInfo_t149  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10119_gshared (DefaultComparer_t2044 * __this, UICharInfo_t149  ___x, UICharInfo_t149  ___y, const MethodInfo* method)
{
	{
		UICharInfo_t149  L_0 = ___x;
		UICharInfo_t149  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		UICharInfo_t149  L_3 = ___y;
		UICharInfo_t149  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		UICharInfo_t149  L_6 = ___y;
		UICharInfo_t149  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"


// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_31.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_31MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UILineInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UILineInfo>(System.Int32)
extern "C" UILineInfo_t150  Array_InternalArray__get_Item_TisUILineInfo_t150_m12714_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUILineInfo_t150_m12714(__this, p0, method) (( UILineInfo_t150  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUILineInfo_t150_m12714_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10120_gshared (InternalEnumerator_1_t2045 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10121_gshared (InternalEnumerator_1_t2045 * __this, const MethodInfo* method)
{
	{
		UILineInfo_t150  L_0 = (( UILineInfo_t150  (*) (InternalEnumerator_1_t2045 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2045 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UILineInfo_t150  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10122_gshared (InternalEnumerator_1_t2045 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10123_gshared (InternalEnumerator_1_t2045 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2381((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::get_Current()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" UILineInfo_t150  InternalEnumerator_1_get_Current_m10124_gshared (InternalEnumerator_1_t2045 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_1, (String_t*)(String_t*) &_stringLiteral1099, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t665 * L_3 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_3, (String_t*)(String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2381((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		UILineInfo_t150  L_8 = (( UILineInfo_t150  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_6MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6MethodDeclarations.h"
struct Array_t;
struct UILineInfoU5BU5D_t289;
// Declaration System.Void System.Array::Resize<UnityEngine.UILineInfo>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UILineInfo>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisUILineInfo_t150_m12725_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t289** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisUILineInfo_t150_m12725(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t289**, int32_t, const MethodInfo*))Array_Resize_TisUILineInfo_t150_m12725_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
struct UILineInfoU5BU5D_t289;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UILineInfo>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UILineInfo>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisUILineInfo_t150_m12726_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t289* p0, UILineInfo_t150  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisUILineInfo_t150_m12726(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t289*, UILineInfo_t150 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisUILineInfo_t150_m12726_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)


// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m10125_gshared (List_1_t153 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UILineInfoU5BU5D_t289* L_0 = ((List_1_t153_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_3;
		__this->____items_0 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1__ctor_m1222_gshared (List_1_t153 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_1 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_1, (String_t*)(String_t*) &_stringLiteral1226, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_0 = ((UILineInfoU5BU5D_t289*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m10126_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t153_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_3 = ((UILineInfoU5BU5D_t289*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10127_gshared (List_1_t153 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t153 *)__this);
		Enumerator_t2046  L_0 = (( Enumerator_t2046  (*) (List_1_t153 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((List_1_t153 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t2046  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10128_gshared (List_1_t153 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t289* L_0 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_1);
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10129_gshared (List_1_t153 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t153 *)__this);
		Enumerator_t2046  L_0 = (( Enumerator_t2046  (*) (List_1_t153 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((List_1_t153 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t2046  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_Add_m10130_gshared (List_1_t153 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t153 *)__this);
			VirtActionInvoker1< UILineInfo_t150  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T) */, (List_1_t153 *)__this, (UILineInfo_t150 )((*(UILineInfo_t150 *)((UILineInfo_t150 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			int32_t L_1 = (int32_t)(__this->____size_1);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t313 * L_2 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_2, (String_t*)(String_t*) &_stringLiteral1238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m10131_gshared (List_1_t153 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t153 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, UILineInfo_t150  >::Invoke(21 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T) */, (List_1_t153 *)__this, (UILineInfo_t150 )((*(UILineInfo_t150 *)((UILineInfo_t150 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			V_0 = (bool)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10132_gshared (List_1_t153 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t153 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t150  >::Invoke(25 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T) */, (List_1_t153 *)__this, (UILineInfo_t150 )((*(UILineInfo_t150 *)((UILineInfo_t150 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			V_0 = (int32_t)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Insert_m10133_gshared (List_1_t153 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t153 *)__this);
		(( void (*) (List_1_t153 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((List_1_t153 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t153 *)__this);
			VirtActionInvoker2< int32_t, UILineInfo_t150  >::Invoke(26 /* System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T) */, (List_1_t153 *)__this, (int32_t)L_1, (UILineInfo_t150 )((*(UILineInfo_t150 *)((UILineInfo_t150 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t313 * L_3 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_3, (String_t*)(String_t*) &_stringLiteral1238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m10134_gshared (List_1_t153 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t153 *)__this);
			VirtFuncInvoker1< bool, UILineInfo_t150  >::Invoke(23 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T) */, (List_1_t153 *)__this, (UILineInfo_t150 )((*(UILineInfo_t150 *)((UILineInfo_t150 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10135_gshared (List_1_t153 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10136_gshared (List_1_t153 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10137_gshared (List_1_t153 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t153 *)__this);
		UILineInfo_t150  L_1 = (UILineInfo_t150 )VirtFuncInvoker1< UILineInfo_t150 , int32_t >::Invoke(28 /* T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32) */, (List_1_t153 *)__this, (int32_t)L_0);
		UILineInfo_t150  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t312_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1366_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_set_Item_m10138_gshared (List_1_t153 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidCastException_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1846);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t153 *)__this);
			VirtActionInvoker2< int32_t, UILineInfo_t150  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T) */, (List_1_t153 *)__this, (int32_t)L_0, (UILineInfo_t150 )((*(UILineInfo_t150 *)((UILineInfo_t150 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t312_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1366_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t313 * L_2 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_2, (String_t*)(String_t*) &_stringLiteral462, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m10139_gshared (List_1_t153 * __this, UILineInfo_t150  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_1);
		UILineInfoU5BU5D_t289* L_1 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((List_1_t153 *)__this);
		(( void (*) (List_1_t153 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((List_1_t153 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0017:
	{
		UILineInfoU5BU5D_t289* L_2 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		int32_t L_3 = (int32_t)(__this->____size_1);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_1 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		UILineInfo_t150  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((UILineInfo_t150 *)(UILineInfo_t150 *)SZArrayLdElema(L_2, L_5)) = (UILineInfo_t150 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_2);
		__this->____version_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10140_gshared (List_1_t153 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_1);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		UILineInfoU5BU5D_t289* L_3 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		NullCheck((List_1_t153 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t153 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)((List_1_t153 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		int32_t L_5 = Math_Max_m3506(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m3506(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t153 *)__this);
		(( void (*) (List_1_t153 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((List_1_t153 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m10141_gshared (List_1_t153 * __this, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t289* L_0 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		UILineInfoU5BU5D_t289* L_1 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		NullCheck(L_1);
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_1 = 0;
		int32_t L_2 = (int32_t)(__this->____version_2);
		__this->____version_2 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m10142_gshared (List_1_t153 * __this, UILineInfo_t150  ___item, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t289* L_0 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		UILineInfo_t150  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_1);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t289*, UILineInfo_t150 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t289*)L_0, (UILineInfo_t150 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10143_gshared (List_1_t153 * __this, UILineInfoU5BU5D_t289* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t289* L_0 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		UILineInfoU5BU5D_t289* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_1);
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2046  List_1_GetEnumerator_m10144_gshared (List_1_t153 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2046  L_0 = {0};
		(( void (*) (Enumerator_t2046 *, List_1_t153 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)(&L_0, (List_1_t153 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10145_gshared (List_1_t153 * __this, UILineInfo_t150  ___item, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t289* L_0 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		UILineInfo_t150  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_1);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t289*, UILineInfo_t150 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t289*)L_0, (UILineInfo_t150 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10146_gshared (List_1_t153 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		UILineInfoU5BU5D_t289* L_5 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		int32_t L_6 = ___start;
		UILineInfoU5BU5D_t289* L_7 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_1);
		int32_t L_11 = ___start;
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0031:
	{
		int32_t L_12 = (int32_t)(__this->____size_1);
		int32_t L_13 = ___delta;
		__this->____size_1 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		UILineInfoU5BU5D_t289* L_15 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		int32_t L_16 = (int32_t)(__this->____size_1);
		int32_t L_17 = ___delta;
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckIndex_m10147_gshared (List_1_t153 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t343 * L_3 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_3, (String_t*)(String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10148_gshared (List_1_t153 * __this, int32_t ___index, UILineInfo_t150  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t153 *)__this);
		(( void (*) (List_1_t153 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((List_1_t153 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = (int32_t)(__this->____size_1);
		UILineInfoU5BU5D_t289* L_2 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((List_1_t153 *)__this);
		(( void (*) (List_1_t153 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((List_1_t153 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t153 *)__this);
		(( void (*) (List_1_t153 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t153 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		UILineInfoU5BU5D_t289* L_4 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		int32_t L_5 = ___index;
		UILineInfo_t150  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UILineInfo_t150 *)(UILineInfo_t150 *)SZArrayLdElema(L_4, L_5)) = (UILineInfo_t150 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_2);
		__this->____version_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m10149_gshared (List_1_t153 * __this, UILineInfo_t150  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UILineInfo_t150  L_0 = ___item;
		NullCheck((List_1_t153 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t150  >::Invoke(25 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T) */, (List_1_t153 *)__this, (UILineInfo_t150 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t153 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(27 /* System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32) */, (List_1_t153 *)__this, (int32_t)L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1_RemoveAt_m10150_gshared (List_1_t153 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t343 * L_3 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_3, (String_t*)(String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t153 *)__this);
		(( void (*) (List_1_t153 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t153 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		UILineInfoU5BU5D_t289* L_5 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		int32_t L_6 = (int32_t)(__this->____size_1);
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_2);
		__this->____version_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t289* List_1_ToArray_m10151_gshared (List_1_t153 * __this, const MethodInfo* method)
{
	UILineInfoU5BU5D_t289* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_1);
		V_0 = (UILineInfoU5BU5D_t289*)((UILineInfoU5BU5D_t289*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_0));
		UILineInfoU5BU5D_t289* L_1 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		UILineInfoU5BU5D_t289* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_1);
		Array_Copy_m2537(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		UILineInfoU5BU5D_t289* L_4 = V_0;
		return L_4;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10152_gshared (List_1_t153 * __this, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t289* L_0 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m10153_gshared (List_1_t153 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_2 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2519(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		UILineInfoU5BU5D_t289** L_3 = (UILineInfoU5BU5D_t289**)&(__this->____items_0);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t289**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t289**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m10154_gshared (List_1_t153 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_1);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" UILineInfo_t150  List_1_get_Item_m10155_gshared (List_1_t153 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_2 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_2, (String_t*)(String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		UILineInfoU5BU5D_t289* L_3 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(UILineInfo_t150 *)(UILineInfo_t150 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Item_m10156_gshared (List_1_t153 * __this, int32_t ___index, UILineInfo_t150  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t153 *)__this);
		(( void (*) (List_1_t153 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((List_1_t153 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_1);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_3 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_3, (String_t*)(String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		UILineInfoU5BU5D_t289* L_4 = (UILineInfoU5BU5D_t289*)(__this->____items_0);
		int32_t L_5 = ___index;
		UILineInfo_t150  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UILineInfo_t150 *)(UILineInfo_t150 *)SZArrayLdElema(L_4, L_5)) = (UILineInfo_t150 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m10157_gshared (Enumerator_t2046 * __this, List_1_t153 * ___l, const MethodInfo* method)
{
	{
		List_1_t153 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t153 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_2);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10158_gshared (Enumerator_t2046 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2046 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2046 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2384(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		UILineInfo_t150  L_2 = (UILineInfo_t150 )(__this->___current_3);
		UILineInfo_t150  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::Dispose()
extern "C" void Enumerator_Dispose_m10159_gshared (Enumerator_t2046 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t153 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::VerifyState()
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m10160_gshared (Enumerator_t2046 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t153 * L_0 = (List_1_t153 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t2046  L_1 = (*(Enumerator_t2046 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m1176((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t858 * L_5 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3515(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t153 * L_7 = (List_1_t153 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_2);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t665 * L_9 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_9, (String_t*)(String_t*) &_stringLiteral1239, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10161_gshared (Enumerator_t2046 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2046 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2046 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t153 * L_2 = (List_1_t153 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_1);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t153 * L_4 = (List_1_t153 *)(__this->___l_0);
		NullCheck(L_4);
		UILineInfoU5BU5D_t289* L_5 = (UILineInfoU5BU5D_t289*)(L_4->____items_0);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(UILineInfo_t150 *)(UILineInfo_t150 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::get_Current()
extern "C" UILineInfo_t150  Enumerator_get_Current_m10162_gshared (Enumerator_t2046 * __this, const MethodInfo* method)
{
	{
		UILineInfo_t150  L_0 = (UILineInfo_t150 )(__this->___current_3);
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void EqualityComparer_1__ctor_m10163_gshared (EqualityComparer_1_t2047 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t1495_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t196_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m10164_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t1495_0_0_0_var = il2cpp_codegen_type_from_index(2921);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		TypeU5BU5D_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(GenericEqualityComparer_1_t1495_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t196* L_4 = (TypeU5BU5D_t196*)((TypeU5BU5D_t196*)SZArrayNew(TypeU5BU5D_t196_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t196* >::Invoke(78 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t196*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7264(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2047_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2047 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t2048 * L_8 = (DefaultComparer_t2048 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2048 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2047_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m10165_gshared (EqualityComparer_1_t2047 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2047 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t150  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::GetHashCode(T) */, (EqualityComparer_1_t2047 *)__this, (UILineInfo_t150 )((*(UILineInfo_t150 *)((UILineInfo_t150 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m10166_gshared (EqualityComparer_1_t2047 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2047 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, UILineInfo_t150 , UILineInfo_t150  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::Equals(T,T) */, (EqualityComparer_1_t2047 *)__this, (UILineInfo_t150 )((*(UILineInfo_t150 *)((UILineInfo_t150 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (UILineInfo_t150 )((*(UILineInfo_t150 *)((UILineInfo_t150 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::get_Default()
extern "C" EqualityComparer_1_t2047 * EqualityComparer_1_get_Default_m10167_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2047 * L_0 = ((EqualityComparer_1_t2047_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UILineInfo>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UILineInfo>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<UnityEngine.UILineInfo>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern TypeInfo* EqualityComparer_1_t2047_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m10168_gshared (DefaultComparer_t2048 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4570);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t2047 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2047_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2047 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10169_gshared (DefaultComparer_t2048 * __this, UILineInfo_t150  ___obj, const MethodInfo* method)
{
	{
		UILineInfo_t150  L_0 = ___obj;
		UILineInfo_t150  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10170_gshared (DefaultComparer_t2048 * __this, UILineInfo_t150  ___x, UILineInfo_t150  ___y, const MethodInfo* method)
{
	{
		UILineInfo_t150  L_0 = ___x;
		UILineInfo_t150  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		UILineInfo_t150  L_3 = ___y;
		UILineInfo_t150  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		UILineInfo_t150  L_6 = ___y;
		UILineInfo_t150  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_10.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_11.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_16.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_2.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_10MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_11MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_16MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_2MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
struct Dictionary_2_t2051;
struct DictionaryEntryU5BU5D_t2426;
struct Transform_1_t2050;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t653_TisDictionaryEntry_t653_m12755_gshared (Dictionary_2_t2051 * __this, DictionaryEntryU5BU5D_t2426* p0, int32_t p1, Transform_1_t2050 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t653_TisDictionaryEntry_t653_m12755(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2051 *, DictionaryEntryU5BU5D_t2426*, int32_t, Transform_1_t2050 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t653_TisDictionaryEntry_t653_m12755_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2051;
struct Array_t;
struct Transform_1_t2062;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2052_m12757_gshared (Dictionary_2_t2051 * __this, Array_t * p0, int32_t p1, Transform_1_t2062 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2052_m12757(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2051 *, Array_t *, int32_t, Transform_1_t2062 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2052_m12757_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2051;
struct KeyValuePair_2U5BU5D_t2325;
struct Transform_1_t2062;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2052_TisKeyValuePair_2_t2052_m12758_gshared (Dictionary_2_t2051 * __this, KeyValuePair_2U5BU5D_t2325* p0, int32_t p1, Transform_1_t2062 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2052_TisKeyValuePair_2_t2052_m12758(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2051 *, KeyValuePair_2U5BU5D_t2325*, int32_t, Transform_1_t2062 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2052_TisKeyValuePair_2_t2052_m12758_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m10172_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2051 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10174_gshared (Dictionary_2_t2051 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2051 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m10176_gshared (Dictionary_2_t2051 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t2051 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10178_gshared (Dictionary_2_t2051 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2051 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t279_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t319_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m10180_gshared (Dictionary_2_t2051 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		IEnumerator_t279_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		IDisposable_t319_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t2052  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral1225, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2051 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t2052  L_9 = (KeyValuePair_2_t2052 )InterfaceFuncInvoker0< KeyValuePair_2_t2052  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t2052 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2052 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int64_t L_11 = (( int64_t (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2052 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t2051 *)__this);
			VirtActionInvoker2< Object_t *, int64_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue) */, (Dictionary_2_t2051 *)__this, (Object_t *)L_10, (int64_t)L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t279_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			Object_t* L_15 = V_2;
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t319_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10182_gshared (Dictionary_2_t2051 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10184_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2051 *)__this);
		KeyCollection_t2055 * L_0 = (( KeyCollection_t2055 * (*) (Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t2051 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10186_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2051 *)__this);
		ValueCollection_t2059 * L_0 = (( ValueCollection_t2059 * (*) (Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2051 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10188_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t2051 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey) */, (Dictionary_2_t2051 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2051 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t2051 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2051 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t2051 *)__this);
		int64_t L_5 = (int64_t)VirtFuncInvoker1< int64_t, Object_t * >::Invoke(20 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey) */, (Dictionary_2_t2051 *)__this, (Object_t *)L_4);
		int64_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10190_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2051 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2051 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2051 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2051 *)__this);
		int64_t L_3 = (( int64_t (*) (Dictionary_2_t2051 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2051 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2051 *)__this);
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue) */, (Dictionary_2_t2051 *)__this, (Object_t *)L_1, (int64_t)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10192_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2051 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2051 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2051 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2051 *)__this);
		int64_t L_3 = (( int64_t (*) (Dictionary_2_t2051 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2051 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2051 *)__this);
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue) */, (Dictionary_2_t2051 *)__this, (Object_t *)L_1, (int64_t)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10194_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2051 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey) */, (Dictionary_2_t2051 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10196_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2051 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey) */, (Dictionary_2_t2051 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0023:
	{
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10198_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10200_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10202_gshared (Dictionary_2_t2051 * __this, KeyValuePair_2_t2052  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2052 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2052 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2051 *)__this);
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue) */, (Dictionary_2_t2051 *)__this, (Object_t *)L_0, (int64_t)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10204_gshared (Dictionary_2_t2051 * __this, KeyValuePair_2_t2052  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2052  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2051 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2051 *, KeyValuePair_2_t2052 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2051 *)__this, (KeyValuePair_2_t2052 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10206_gshared (Dictionary_2_t2051 * __this, KeyValuePair_2U5BU5D_t2325* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2325* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, KeyValuePair_2U5BU5D_t2325*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2051 *)__this, (KeyValuePair_2U5BU5D_t2325*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10208_gshared (Dictionary_2_t2051 * __this, KeyValuePair_2_t2052  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2052  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2051 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2051 *, KeyValuePair_2_t2052 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2051 *)__this, (KeyValuePair_2_t2052 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2052 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2051 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey) */, (Dictionary_2_t2051 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t2426_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10210_gshared (Dictionary_2_t2051 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t2426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5207);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2325* V_0 = {0};
	DictionaryEntryU5BU5D_t2426* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t2426* G_B5_1 = {0};
	Dictionary_2_t2051 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t2426* G_B4_1 = {0};
	Dictionary_2_t2051 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2325*)((KeyValuePair_2U5BU5D_t2325*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t2325* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2325* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, KeyValuePair_2U5BU5D_t2325*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2051 *)__this, (KeyValuePair_2U5BU5D_t2325*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2051 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t2426*)((DictionaryEntryU5BU5D_t2426*)IsInst(L_6, DictionaryEntryU5BU5D_t2426_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t2426* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t2426* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t2050 * L_10 = ((Dictionary_2_t2051_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2051 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2051 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2050 * L_12 = (Transform_1_t2050 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2050 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2051_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2051 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t2050 * L_13 = ((Dictionary_2_t2051_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t2051 *)G_B5_2);
		(( void (*) (Dictionary_2_t2051 *, DictionaryEntryU5BU5D_t2426*, int32_t, Transform_1_t2050 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t2051 *)G_B5_2, (DictionaryEntryU5BU5D_t2426*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t2050 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2062 * L_17 = (Transform_1_t2062 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2062 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, Array_t *, int32_t, Transform_1_t2062 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t2051 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t2062 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10212_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2057  L_0 = {0};
		(( void (*) (Enumerator_t2057 *, Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2051 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2057  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10214_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2057  L_0 = {0};
		(( void (*) (Enumerator_t2057 *, Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2051 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2057  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10216_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t2063 * L_0 = (ShimEnumerator_t2063 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2063 *, Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t2051 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10218_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t976_il2cpp_TypeInfo_var;
extern "C" int64_t Dictionary_2_get_Item_m10220_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		KeyNotFoundException_t976_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2939);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t341 * L_2 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_2, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t588* L_6 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t588* L_8 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t1959* L_10 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t200* L_15 = (ObjectU5BU5D_t200*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		Int64U5BU5D_t1428* L_20 = (Int64U5BU5D_t1428*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(int64_t*)(int64_t*)SZArrayLdElema(L_20, L_22));
	}

IL_007d:
	{
		LinkU5BU5D_t1959* L_23 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t976 * L_27 = (KeyNotFoundException_t976 *)il2cpp_codegen_object_new (KeyNotFoundException_t976_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m4914(L_27, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m10222_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t341 * L_2 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_2, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t588* L_7 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t588* L_8 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t1959* L_12 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t200* L_17 = (ObjectU5BU5D_t200*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), (Object_t *)L_20);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		LinkU5BU5D_t1959* L_23 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_28 = (int32_t)(__this->___count_10);
		int32_t L_29 = (int32_t)((int32_t)((int32_t)L_28+(int32_t)1));
		V_4 = (int32_t)L_29;
		__this->___count_10 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c9;
		}
	}
	{
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2051 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_32 = V_0;
		Int32U5BU5D_t588* L_33 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_33);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_33)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_34 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_34;
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_36 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_37 = (int32_t)L_36;
		V_4 = (int32_t)L_37;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_4;
		V_2 = (int32_t)L_38;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t1959* L_39 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_39, L_40))->___Next_1);
		__this->___emptySlot_9 = L_41;
	}

IL_0101:
	{
		LinkU5BU5D_t1959* L_42 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t588* L_44 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t588* L_47 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		LinkU5BU5D_t1959* L_50 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_51 = V_2;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = V_0;
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_50, L_51))->___HashCode_0 = L_52;
		ObjectU5BU5D_t200* L_53 = (ObjectU5BU5D_t200*)(__this->___keySlots_6);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___key;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t1959* L_57 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_58 = V_3;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		LinkU5BU5D_t1959* L_59 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_60 = V_2;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		int32_t L_61 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_59, L_60))->___Next_1);
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_57, L_58))->___Next_1 = L_61;
		LinkU5BU5D_t1959* L_62 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_63 = V_2;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		Int32U5BU5D_t588* L_64 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_65 = V_1;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_65);
		int32_t L_66 = L_65;
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_62, L_63))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_64, L_66))-(int32_t)1));
		Int32U5BU5D_t588* L_67 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, L_68)) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0194:
	{
		Int64U5BU5D_t1428* L_70 = (Int64U5BU5D_t1428*)(__this->___valueSlots_7);
		int32_t L_71 = V_2;
		int64_t L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_70, L_71)) = (int64_t)L_72;
		int32_t L_73 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t1951_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m10224_gshared (Dictionary_2_t2051 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		EqualityComparer_1_t1951_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4284);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2051 * G_B4_0 = {0};
	Dictionary_2_t2051 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2051 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_1 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_1, (String_t*)(String_t*) &_stringLiteral1226, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t2051 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2051 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2051 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t1951_il2cpp_TypeInfo_var);
		EqualityComparer_1_t1951 * L_5 = (( EqualityComparer_1_t1951 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2051 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t2051 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t588_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1959_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m10226_gshared (Dictionary_2_t2051 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1034);
		LinkU5BU5D_t1959_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5208);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t588*)SZArrayNew(Int32U5BU5D_t588_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t1959*)SZArrayNew(LinkU5BU5D_t1959_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t200*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((Int64U5BU5D_t1428*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t588* L_4 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t588* L_6 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m10228_gshared (Dictionary_2_t2051 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral173, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_3 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_3, (String_t*)(String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2381((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t313 * L_7 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_7, (String_t*)(String_t*) &_stringLiteral1227, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m2381((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t2051 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count() */, (Dictionary_2_t2051 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t313 * L_12 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_12, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2052  Dictionary_2_make_pair_m10230_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int64_t L_1 = ___value;
		KeyValuePair_2_t2052  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2052 *, Object_t *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (Object_t *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m10232_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m10234_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10236_gshared (Dictionary_2_t2051 * __this, KeyValuePair_2U5BU5D_t2325* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2325* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2051 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t2325* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2062 * L_5 = (Transform_1_t2062 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2062 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, KeyValuePair_2U5BU5D_t2325*, int32_t, Transform_1_t2062 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t2051 *)__this, (KeyValuePair_2U5BU5D_t2325*)L_2, (int32_t)L_3, (Transform_1_t2062 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern TypeInfo* Hashtable_t481_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t588_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1959_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m10238_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t481_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(922);
		Int32U5BU5D_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1034);
		LinkU5BU5D_t1959_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5208);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t588* V_1 = {0};
	LinkU5BU5D_t1959* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t200* V_7 = {0};
	Int64U5BU5D_t1428* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t588* L_0 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t481_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m5103(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t588*)((Int32U5BU5D_t588*)SZArrayNew(Int32U5BU5D_t588_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t1959*)((LinkU5BU5D_t1959*)SZArrayNew(LinkU5BU5D_t1959_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t588* L_4 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t1959* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t200* L_10 = (ObjectU5BU5D_t200*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t1959* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t588* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t588* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t1959* L_26 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t588* L_32 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t588* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t1959* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t200*)((ObjectU5BU5D_t200*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (Int64U5BU5D_t1428*)((Int64U5BU5D_t1428*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		ObjectU5BU5D_t200* L_37 = (ObjectU5BU5D_t200*)(__this->___keySlots_6);
		ObjectU5BU5D_t200* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		Int64U5BU5D_t1428* L_40 = (Int64U5BU5D_t1428*)(__this->___valueSlots_7);
		Int64U5BU5D_t1428* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t200* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		Int64U5BU5D_t1428* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m10240_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t341 * L_2 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_2, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t588* L_7 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t588* L_8 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t1959* L_11 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t200* L_16 = (ObjectU5BU5D_t200*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t313 * L_21 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_21, (String_t*)(String_t*) &_stringLiteral1230, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_007d:
	{
		LinkU5BU5D_t1959* L_22 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = (int32_t)L_24;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_26 = (int32_t)(__this->___count_10);
		int32_t L_27 = (int32_t)((int32_t)((int32_t)L_26+(int32_t)1));
		V_3 = (int32_t)L_27;
		__this->___count_10 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2051 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_30 = V_0;
		Int32U5BU5D_t588* L_31 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_31);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_32 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_34 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_35 = (int32_t)L_34;
		V_3 = (int32_t)L_35;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		V_2 = (int32_t)L_36;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t1959* L_37 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		__this->___emptySlot_9 = L_39;
	}

IL_00f9:
	{
		LinkU5BU5D_t1959* L_40 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = V_0;
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_40, L_41))->___HashCode_0 = L_42;
		LinkU5BU5D_t1959* L_43 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t588* L_45 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t588* L_48 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		ObjectU5BU5D_t200* L_51 = (ObjectU5BU5D_t200*)(__this->___keySlots_6);
		int32_t L_52 = V_2;
		Object_t * L_53 = ___key;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, L_52)) = (Object_t *)L_53;
		Int64U5BU5D_t1428* L_54 = (Int64U5BU5D_t1428*)(__this->___valueSlots_7);
		int32_t L_55 = V_2;
		int64_t L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_54, L_55)) = (int64_t)L_56;
		int32_t L_57 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m10242_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t588* L_0 = (Int32U5BU5D_t588*)(__this->___table_4);
		Int32U5BU5D_t588* L_1 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t200* L_2 = (ObjectU5BU5D_t200*)(__this->___keySlots_6);
		ObjectU5BU5D_t200* L_3 = (ObjectU5BU5D_t200*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		Int64U5BU5D_t1428* L_4 = (Int64U5BU5D_t1428*)(__this->___valueSlots_7);
		Int64U5BU5D_t1428* L_5 = (Int64U5BU5D_t1428*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t1959* L_6 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		LinkU5BU5D_t1959* L_7 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m10244_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t341 * L_2 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_2, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t588* L_6 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t588* L_8 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t1959* L_10 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t200* L_15 = (ObjectU5BU5D_t200*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t1959* L_20 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_20, L_21))->___Next_1);
		V_1 = (int32_t)L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t2064_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m10246_gshared (Dictionary_2_t2051 * __this, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2064_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4606);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2064_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2064 * L_0 = (( EqualityComparer_1_t2064 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t588* L_1 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		Int64U5BU5D_t1428* L_5 = (Int64U5BU5D_t1428*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		int64_t L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (Object_t*)L_4, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_5, L_7)), (int64_t)L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t1959* L_10 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t588* L_16 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m10248_gshared (Dictionary_2_t2051 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2325* V_0 = {0};
	{
		SerializationInfo_t310 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral269, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t310 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t310 *)L_2);
		SerializationInfo_AddValue_m2391((SerializationInfo_t310 *)L_2, (String_t*)(String_t*) &_stringLiteral271, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t310 *)L_4);
		SerializationInfo_AddValue_m2402((SerializationInfo_t310 *)L_4, (String_t*)(String_t*) &_stringLiteral273, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t2325*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2325*)((KeyValuePair_2U5BU5D_t2325*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t2325* L_8 = V_0;
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, KeyValuePair_2U5BU5D_t2325*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2051 *)__this, (KeyValuePair_2U5BU5D_t2325*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t310 * L_9 = ___info;
		Int32U5BU5D_t588* L_10 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t310 *)L_9);
		SerializationInfo_AddValue_m2391((SerializationInfo_t310 *)L_9, (String_t*)(String_t*) &_stringLiteral1231, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t310 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2325* L_12 = V_0;
		NullCheck((SerializationInfo_t310 *)L_11);
		SerializationInfo_AddValue_m2402((SerializationInfo_t310 *)L_11, (String_t*)(String_t*) &_stringLiteral1232, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m10250_gshared (Dictionary_2_t2051 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t2325* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t310 * L_0 = (SerializationInfo_t310 *)(__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t310 * L_1 = (SerializationInfo_t310 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t310 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m2401((SerializationInfo_t310 *)L_1, (String_t*)(String_t*) &_stringLiteral271, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t310 * L_3 = (SerializationInfo_t310 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t310 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m2392((SerializationInfo_t310 *)L_3, (String_t*)(String_t*) &_stringLiteral273, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t310 * L_6 = (SerializationInfo_t310 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t310 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m2401((SerializationInfo_t310 *)L_6, (String_t*)(String_t*) &_stringLiteral1231, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t310 * L_8 = (SerializationInfo_t310 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t310 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m2392((SerializationInfo_t310 *)L_8, (String_t*)(String_t*) &_stringLiteral1232, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t2325*)((KeyValuePair_2U5BU5D_t2325*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t2051 *)__this);
		(( void (*) (Dictionary_2_t2051 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t2051 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2325* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t2325* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2052 *)((KeyValuePair_2_t2052 *)(KeyValuePair_2_t2052 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t2325* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int64_t L_19 = (( int64_t (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2052 *)((KeyValuePair_2_t2052 *)(KeyValuePair_2_t2052 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2051 *)__this);
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue) */, (Dictionary_2_t2051 *)__this, (Object_t *)L_16, (int64_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2325* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t310 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t345_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m10252_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Int64_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	int64_t V_5 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t341 * L_2 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_2, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t588* L_7 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t588* L_8 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (int32_t)(-1);
	}

IL_004a:
	{
		LinkU5BU5D_t1959* L_12 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t200* L_17 = (ObjectU5BU5D_t200*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), (Object_t *)L_20);
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		LinkU5BU5D_t1959* L_23 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_28 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_28-(int32_t)1));
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t588* L_30 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_31 = V_1;
		LinkU5BU5D_t1959* L_32 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_32, L_33))->___Next_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t1959* L_35 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		LinkU5BU5D_t1959* L_37 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_35, L_36))->___Next_1 = L_39;
	}

IL_00e9:
	{
		LinkU5BU5D_t1959* L_40 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(__this->___emptySlot_9);
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_40, L_41))->___Next_1 = L_42;
		int32_t L_43 = V_2;
		__this->___emptySlot_9 = L_43;
		LinkU5BU5D_t1959* L_44 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_44, L_45))->___HashCode_0 = 0;
		ObjectU5BU5D_t200* L_46 = (ObjectU5BU5D_t200*)(__this->___keySlots_6);
		int32_t L_47 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_48 = V_4;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, L_47)) = (Object_t *)L_48;
		Int64U5BU5D_t1428* L_49 = (Int64U5BU5D_t1428*)(__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (Int64_t345_il2cpp_TypeInfo_var, (&V_5));
		int64_t L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_49, L_50)) = (int64_t)L_51;
		int32_t L_52 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t345_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m10254_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		Int64_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t341 * L_2 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_2, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t588* L_6 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t588* L_8 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t1959* L_10 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t200* L_15 = (ObjectU5BU5D_t200*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		int64_t* L_20 = ___value;
		Int64U5BU5D_t1428* L_21 = (Int64U5BU5D_t1428*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(int64_t*)(int64_t*)SZArrayLdElema(L_21, L_23));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t1959* L_24 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = (int32_t)L_26;
	}

IL_0096:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		int64_t* L_28 = ___value;
		Initobj (Int64_t345_il2cpp_TypeInfo_var, (&V_2));
		int64_t L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2055 * Dictionary_2_get_Keys_m10256_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t2055 * L_0 = (KeyCollection_t2055 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t2055 *, Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t2051 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2059 * Dictionary_2_get_Values_m10258_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t2059 * L_0 = (ValueCollection_t2059 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t2059 *, Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t2051 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" Object_t * Dictionary_2_ToTKey_m10260_gshared (Dictionary_2_t2051 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1175(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1233, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t313 * L_6 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2383(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t345_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" int64_t Dictionary_2_ToTValue_m10262_gshared (Dictionary_2_t2051 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		Int64_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (Int64_t345_il2cpp_TypeInfo_var, (&V_0));
		int64_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m1175(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1233, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t313 * L_8 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2383(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral462, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(int64_t*)((int64_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t2064_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10264_gshared (Dictionary_2_t2051 * __this, KeyValuePair_2_t2052  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2064_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4606);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2052 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2051 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, int64_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t2051 *)__this, (Object_t *)L_0, (int64_t*)(&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2064_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2064 * L_2 = (( EqualityComparer_1_t2064 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		int64_t L_3 = (( int64_t (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2052 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int64_t L_4 = V_0;
		NullCheck((EqualityComparer_1_t2064 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int64_t, int64_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, (EqualityComparer_1_t2064 *)L_2, (int64_t)L_3, (int64_t)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2057  Dictionary_2_GetEnumerator_m10266_gshared (Dictionary_2_t2051 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2057  L_0 = {0};
		(( void (*) (Enumerator_t2057 *, Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2051 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t653  Dictionary_2_U3CCopyToU3Em__0_m10268_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		int64_t L_2 = ___value;
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_3);
		DictionaryEntry_t653  L_5 = {0};
		DictionaryEntry__ctor_m2379(&L_5, (Object_t *)((Object_t *)L_1), (Object_t *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_32.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_32MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32)
extern "C" KeyValuePair_2_t2052  Array_InternalArray__get_Item_TisKeyValuePair_2_t2052_m12729_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2052_m12729(__this, p0, method) (( KeyValuePair_2_t2052  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2052_m12729_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10269_gshared (InternalEnumerator_1_t2053 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10270_gshared (InternalEnumerator_1_t2053 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2052  L_0 = (( KeyValuePair_2_t2052  (*) (InternalEnumerator_1_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2053 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2052  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10271_gshared (InternalEnumerator_1_t2053 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10272_gshared (InternalEnumerator_1_t2053 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2381((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t2052  InternalEnumerator_1_get_Current_m10273_gshared (InternalEnumerator_1_t2053 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_1, (String_t*)(String_t*) &_stringLiteral1099, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t665 * L_3 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_3, (String_t*)(String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2381((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t2052  L_8 = (( KeyValuePair_2_t2052  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m10274_gshared (KeyValuePair_2_t2052 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2052 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t2052 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2052 *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t2052 *)__this, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m10275_gshared (KeyValuePair_2_t2052 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m10276_gshared (KeyValuePair_2_t2052 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Value()
extern "C" int64_t KeyValuePair_2_get_Value_m10277_gshared (KeyValuePair_2_t2052 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (int64_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m10278_gshared (KeyValuePair_2_t2052 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::ToString()
extern TypeInfo* StringU5BU5D_t197_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m10279_gshared (KeyValuePair_2_t2052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int64_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t197* G_B2_1 = {0};
	StringU5BU5D_t197* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t197* G_B1_1 = {0};
	StringU5BU5D_t197* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t197* G_B3_2 = {0};
	StringU5BU5D_t197* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t197* G_B5_1 = {0};
	StringU5BU5D_t197* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t197* G_B4_1 = {0};
	StringU5BU5D_t197* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t197* G_B6_2 = {0};
	StringU5BU5D_t197* G_B6_3 = {0};
	{
		StringU5BU5D_t197* L_0 = (StringU5BU5D_t197*)((StringU5BU5D_t197*)SZArrayNew(StringU5BU5D_t197_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral188);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral188;
		StringU5BU5D_t197* L_1 = (StringU5BU5D_t197*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2052 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((Object_t *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2052 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_4;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t197* L_7 = (StringU5BU5D_t197*)G_B3_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral252;
		StringU5BU5D_t197* L_8 = (StringU5BU5D_t197*)L_7;
		int64_t L_9 = (( int64_t (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2052 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_10);
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_11)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		int64_t L_12 = (( int64_t (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2052 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int64_t)L_12;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t197* L_15 = (StringU5BU5D_t197*)G_B6_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral189);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral189;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m1214(NULL /*static, unused*/, (StringU5BU5D_t197*)L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::get_Values()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Int64>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int64>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Int64>::get_Current()
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_33.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_33MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
extern "C" int64_t Array_InternalArray__get_Item_TisInt64_t345_m12740_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt64_t345_m12740(__this, p0, method) (( int64_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisInt64_t345_m12740_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Int64>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10280_gshared (InternalEnumerator_1_t2054 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10281_gshared (InternalEnumerator_1_t2054 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (InternalEnumerator_1_t2054 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2054 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10282_gshared (InternalEnumerator_1_t2054 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int64>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10283_gshared (InternalEnumerator_1_t2054 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2381((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Int64>::get_Current()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" int64_t InternalEnumerator_1_get_Current_m10284_gshared (InternalEnumerator_1_t2054 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_1, (String_t*)(String_t*) &_stringLiteral1099, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t665 * L_3 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_3, (String_t*)(String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2381((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int64_t L_8 = (( int64_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Int64>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Int64>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Int64>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Int64>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Int64>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_11.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_14.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_14MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_11MethodDeclarations.h"
struct Dictionary_2_t2051;
struct Array_t;
struct Transform_1_t2058;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m12751_gshared (Dictionary_2_t2051 * __this, Array_t * p0, int32_t p1, Transform_1_t2058 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m12751(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2051 *, Array_t *, int32_t, Transform_1_t2058 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m12751_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2051;
struct ObjectU5BU5D_t200;
struct Transform_1_t2058;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m12750_gshared (Dictionary_2_t2051 * __this, ObjectU5BU5D_t200* p0, int32_t p1, Transform_1_t2058 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m12750(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2051 *, ObjectU5BU5D_t200*, int32_t, Transform_1_t2058 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m12750_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m10285_gshared (KeyCollection_t2055 * __this, Dictionary_2_t2051 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2051 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral1225, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t2051 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m10286_gshared (KeyCollection_t2055 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*)(String_t*) &_stringLiteral1236, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m10287_gshared (KeyCollection_t2055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*)(String_t*) &_stringLiteral1236, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m10288_gshared (KeyCollection_t2055 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2051 * L_0 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t2051 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey) */, (Dictionary_2_t2051 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m10289_gshared (KeyCollection_t2055 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*)(String_t*) &_stringLiteral1236, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m10290_gshared (KeyCollection_t2055 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2055 *)__this);
		Enumerator_t2056  L_0 = (( Enumerator_t2056  (*) (KeyCollection_t2055 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2055 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2056  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m10291_gshared (KeyCollection_t2055 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t200* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t200*)((ObjectU5BU5D_t200*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t200* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t200* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t2055 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t200*, int32_t >::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t2055 *)__this, (ObjectU5BU5D_t200*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t2051 * L_4 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2051 *)L_4);
		(( void (*) (Dictionary_2_t2051 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2051 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2051 * L_7 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2058 * L_11 = (Transform_1_t2058 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2058 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2051 *)L_7);
		(( void (*) (Dictionary_2_t2051 *, Array_t *, int32_t, Transform_1_t2058 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2051 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2058 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m10292_gshared (KeyCollection_t2055 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2055 *)__this);
		Enumerator_t2056  L_0 = (( Enumerator_t2056  (*) (KeyCollection_t2055 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2055 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2056  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m10293_gshared (KeyCollection_t2055 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t443_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m10294_gshared (KeyCollection_t2055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(696);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2051 * L_0 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t443_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m10295_gshared (KeyCollection_t2055 * __this, ObjectU5BU5D_t200* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2051 * L_0 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		ObjectU5BU5D_t200* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2051 *)L_0);
		(( void (*) (Dictionary_2_t2051 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2051 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2051 * L_3 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		ObjectU5BU5D_t200* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2058 * L_7 = (Transform_1_t2058 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2058 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2051 *)L_3);
		(( void (*) (Dictionary_2_t2051 *, ObjectU5BU5D_t200*, int32_t, Transform_1_t2058 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2051 *)L_3, (ObjectU5BU5D_t200*)L_4, (int32_t)L_5, (Transform_1_t2058 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2056  KeyCollection_GetEnumerator_m10296_gshared (KeyCollection_t2055 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2051 * L_0 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		Enumerator_t2056  L_1 = {0};
		(( void (*) (Enumerator_t2056 *, Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2051 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m10297_gshared (KeyCollection_t2055 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2051 * L_0 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2051 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count() */, (Dictionary_2_t2051 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10298_gshared (Enumerator_t2056 * __this, Dictionary_2_t2051 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2051 * L_0 = ___host;
		NullCheck((Dictionary_2_t2051 *)L_0);
		Enumerator_t2057  L_1 = (( Enumerator_t2057  (*) (Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2051 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10299_gshared (Enumerator_t2056 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2057 * L_0 = (Enumerator_t2057 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2057 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m10300_gshared (Enumerator_t2056 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2057 * L_0 = (Enumerator_t2057 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2057 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10301_gshared (Enumerator_t2056 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2057 * L_0 = (Enumerator_t2057 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2057 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m10302_gshared (Enumerator_t2056 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2057 * L_0 = (Enumerator_t2057 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2052 * L_1 = (KeyValuePair_2_t2052 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2052 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10303_gshared (Enumerator_t2057 * __this, Dictionary_2_t2051 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t2051 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2051 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10304_gshared (Enumerator_t2057 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2057 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2052  L_0 = (KeyValuePair_2_t2052 )(__this->___current_3);
		KeyValuePair_2_t2052  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t653  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10305_gshared (Enumerator_t2057 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2057 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2052 * L_0 = (KeyValuePair_2_t2052 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2052 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t2052 * L_3 = (KeyValuePair_2_t2052 *)&(__this->___current_3);
		int64_t L_4 = (( int64_t (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2052 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t653  L_7 = {0};
		DictionaryEntry__ctor_m2379(&L_7, (Object_t *)((Object_t *)L_2), (Object_t *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10306_gshared (Enumerator_t2057 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t2057 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10307_gshared (Enumerator_t2057 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t2057 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10308_gshared (Enumerator_t2057 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2057 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t2051 * L_4 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t1959* L_5 = (LinkU5BU5D_t1959*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t2051 * L_8 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t200* L_9 = (ObjectU5BU5D_t200*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2051 * L_12 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		NullCheck(L_12);
		Int64U5BU5D_t1428* L_13 = (Int64U5BU5D_t1428*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2052  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2052 *, Object_t *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t2051 * L_18 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t2052  Enumerator_get_Current_m10309_gshared (Enumerator_t2057 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2052  L_0 = (KeyValuePair_2_t2052 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m10310_gshared (Enumerator_t2057 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2057 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2052 * L_0 = (KeyValuePair_2_t2052 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2052 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m10311_gshared (Enumerator_t2057 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2057 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2052 * L_0 = (KeyValuePair_2_t2052 *)&(__this->___current_3);
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2052 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m10312_gshared (Enumerator_t2057 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2051 * L_0 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t858 * L_1 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3515(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t2051 * L_2 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t665 * L_5 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_5, (String_t*)(String_t*) &_stringLiteral1234, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m10313_gshared (Enumerator_t2057 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2057 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_1, (String_t*)(String_t*) &_stringLiteral1235, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m10314_gshared (Enumerator_t2057 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2051 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m10315_gshared (Transform_1_t2058 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m10316_gshared (Transform_1_t2058 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m10316((Transform_1_t2058 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t345_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m10317_gshared (Transform_1_t2058 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t45 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int64_t345_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m10318_gshared (Transform_1_t2058 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_12.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_15.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_15MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_12MethodDeclarations.h"
struct Dictionary_2_t2051;
struct Array_t;
struct Transform_1_t2061;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt64_t345_m12753_gshared (Dictionary_2_t2051 * __this, Array_t * p0, int32_t p1, Transform_1_t2061 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt64_t345_m12753(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2051 *, Array_t *, int32_t, Transform_1_t2061 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt64_t345_m12753_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2051;
struct Int64U5BU5D_t1428;
struct Transform_1_t2061;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t345_TisInt64_t345_m12754_gshared (Dictionary_2_t2051 * __this, Int64U5BU5D_t1428* p0, int32_t p1, Transform_1_t2061 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt64_t345_TisInt64_t345_m12754(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2051 *, Int64U5BU5D_t1428*, int32_t, Transform_1_t2061 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt64_t345_TisInt64_t345_m12754_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" void ValueCollection__ctor_m10319_gshared (ValueCollection_t2059 * __this, Dictionary_2_t2051 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2051 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral1225, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t2051 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m10320_gshared (ValueCollection_t2059 * __this, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*)(String_t*) &_stringLiteral1236, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m10321_gshared (ValueCollection_t2059 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*)(String_t*) &_stringLiteral1236, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m10322_gshared (ValueCollection_t2059 * __this, int64_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2051 * L_0 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		int64_t L_1 = ___item;
		NullCheck((Dictionary_2_t2051 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2051 *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2051 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m10323_gshared (ValueCollection_t2059 * __this, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*)(String_t*) &_stringLiteral1236, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m10324_gshared (ValueCollection_t2059 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2059 *)__this);
		Enumerator_t2060  L_0 = (( Enumerator_t2060  (*) (ValueCollection_t2059 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2059 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2060  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m10325_gshared (ValueCollection_t2059 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int64U5BU5D_t1428* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int64U5BU5D_t1428*)((Int64U5BU5D_t1428*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int64U5BU5D_t1428* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int64U5BU5D_t1428* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t2059 *)__this);
		VirtActionInvoker2< Int64U5BU5D_t1428*, int32_t >::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::CopyTo(TValue[],System.Int32) */, (ValueCollection_t2059 *)__this, (Int64U5BU5D_t1428*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t2051 * L_4 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2051 *)L_4);
		(( void (*) (Dictionary_2_t2051 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2051 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2051 * L_7 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2061 * L_11 = (Transform_1_t2061 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2061 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2051 *)L_7);
		(( void (*) (Dictionary_2_t2051 *, Array_t *, int32_t, Transform_1_t2061 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2051 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2061 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m10326_gshared (ValueCollection_t2059 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2059 *)__this);
		Enumerator_t2060  L_0 = (( Enumerator_t2060  (*) (ValueCollection_t2059 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2059 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2060  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m10327_gshared (ValueCollection_t2059 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t443_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m10328_gshared (ValueCollection_t2059 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(696);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2051 * L_0 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t443_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m10329_gshared (ValueCollection_t2059 * __this, Int64U5BU5D_t1428* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2051 * L_0 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		Int64U5BU5D_t1428* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2051 *)L_0);
		(( void (*) (Dictionary_2_t2051 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2051 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2051 * L_3 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		Int64U5BU5D_t1428* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2061 * L_7 = (Transform_1_t2061 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2061 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2051 *)L_3);
		(( void (*) (Dictionary_2_t2051 *, Int64U5BU5D_t1428*, int32_t, Transform_1_t2061 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2051 *)L_3, (Int64U5BU5D_t1428*)L_4, (int32_t)L_5, (Transform_1_t2061 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2060  ValueCollection_GetEnumerator_m10330_gshared (ValueCollection_t2059 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2051 * L_0 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		Enumerator_t2060  L_1 = {0};
		(( void (*) (Enumerator_t2060 *, Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2051 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m10331_gshared (ValueCollection_t2059 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2051 * L_0 = (Dictionary_2_t2051 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2051 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count() */, (Dictionary_2_t2051 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10332_gshared (Enumerator_t2060 * __this, Dictionary_2_t2051 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2051 * L_0 = ___host;
		NullCheck((Dictionary_2_t2051 *)L_0);
		Enumerator_t2057  L_1 = (( Enumerator_t2057  (*) (Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2051 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10333_gshared (Enumerator_t2060 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2057 * L_0 = (Enumerator_t2057 *)&(__this->___host_enumerator_0);
		int64_t L_1 = (( int64_t (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2057 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m10334_gshared (Enumerator_t2060 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2057 * L_0 = (Enumerator_t2057 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2057 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10335_gshared (Enumerator_t2060 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2057 * L_0 = (Enumerator_t2057 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2057 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" int64_t Enumerator_get_Current_m10336_gshared (Enumerator_t2060 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2057 * L_0 = (Enumerator_t2057 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2052 * L_1 = (KeyValuePair_2_t2052 *)&(L_0->___current_3);
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2052 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m10337_gshared (Transform_1_t2061 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::Invoke(TKey,TValue)
extern "C" int64_t Transform_1_Invoke_m10338_gshared (Transform_1_t2061 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m10338((Transform_1_t2061 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int64_t (*FunctionPointerType) (Object_t * __this, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t345_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m10339_gshared (Transform_1_t2061 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t45 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int64_t345_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Transform_1_EndInvoke_m10340_gshared (Transform_1_t2061 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int64_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m10341_gshared (Transform_1_t2050 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t653  Transform_1_Invoke_m10342_gshared (Transform_1_t2050 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m10342((Transform_1_t2050 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t653  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t653  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t653  (*FunctionPointerType) (Object_t * __this, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t345_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m10343_gshared (Transform_1_t2050 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t45 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int64_t345_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t653  Transform_1_EndInvoke_m10344_gshared (Transform_1_t2050 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t653 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m10345_gshared (Transform_1_t2062 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2052  Transform_1_Invoke_m10346_gshared (Transform_1_t2062 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m10346((Transform_1_t2062 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2052  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2052  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2052  (*FunctionPointerType) (Object_t * __this, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t345_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m10347_gshared (Transform_1_t2062 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t45 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int64_t345_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2052  Transform_1_EndInvoke_m10348_gshared (Transform_1_t2062 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2052 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10349_gshared (ShimEnumerator_t2063 * __this, Dictionary_2_t2051 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2051 * L_0 = ___host;
		NullCheck((Dictionary_2_t2051 *)L_0);
		Enumerator_t2057  L_1 = (( Enumerator_t2057  (*) (Dictionary_2_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2051 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10350_gshared (ShimEnumerator_t2063 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2057 * L_0 = (Enumerator_t2057 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2057 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t652_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t653  ShimEnumerator_get_Entry_m10351_gshared (ShimEnumerator_t2063 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(960);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2057  L_0 = (Enumerator_t2057 )(__this->___host_enumerator_0);
		Enumerator_t2057  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t653  L_3 = (DictionaryEntry_t653 )InterfaceFuncInvoker0< DictionaryEntry_t653  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t652_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10352_gshared (ShimEnumerator_t2063 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2052  V_0 = {0};
	{
		Enumerator_t2057 * L_0 = (Enumerator_t2057 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2052  L_1 = (( KeyValuePair_2_t2052  (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2057 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2052 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2052 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10353_gshared (ShimEnumerator_t2063 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2052  V_0 = {0};
	{
		Enumerator_t2057 * L_0 = (Enumerator_t2057 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2052  L_1 = (( KeyValuePair_2_t2052  (*) (Enumerator_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2057 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2052 )L_1;
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2052 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern TypeInfo* DictionaryEntry_t653_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m10354_gshared (ShimEnumerator_t2063 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(925);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t2063 *)__this);
		DictionaryEntry_t653  L_0 = (DictionaryEntry_t653 )VirtFuncInvoker0< DictionaryEntry_t653  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry() */, (ShimEnumerator_t2063 *)__this);
		DictionaryEntry_t653  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t653_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.Int64>::.ctor()
extern "C" void EqualityComparer_1__ctor_m10355_gshared (EqualityComparer_1_t2064 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Int64>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t1495_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t196_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m10356_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t1495_0_0_0_var = il2cpp_codegen_type_from_index(2921);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		TypeU5BU5D_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(GenericEqualityComparer_1_t1495_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t196* L_4 = (TypeU5BU5D_t196*)((TypeU5BU5D_t196*)SZArrayNew(TypeU5BU5D_t196_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t196* >::Invoke(78 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t196*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7264(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2064_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2064 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t2066 * L_8 = (DefaultComparer_t2066 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2066 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2064_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int64>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m10357_gshared (EqualityComparer_1_t2064 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2064 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int64_t >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int64>::GetHashCode(T) */, (EqualityComparer_1_t2064 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m10358_gshared (EqualityComparer_1_t2064 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2064 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, int64_t, int64_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, (EqualityComparer_1_t2064 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (int64_t)((*(int64_t*)((int64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int64>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Int64>::get_Default()
extern "C" EqualityComparer_1_t2064 * EqualityComparer_1_get_Default_m10359_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2064 * L_0 = ((EqualityComparer_1_t2064_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__4.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericEqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__4MethodDeclarations.h"



// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::.ctor()
extern TypeInfo* EqualityComparer_1_t2064_il2cpp_TypeInfo_var;
extern "C" void GenericEqualityComparer_1__ctor_m10360_gshared (GenericEqualityComparer_1_t2065 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2064_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4606);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t2064 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2064_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t2064 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2064 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m10361_gshared (GenericEqualityComparer_1_t2065 * __this, int64_t ___obj, const MethodInfo* method)
{
	{
		int64_t L_0 = ___obj;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m10362_gshared (GenericEqualityComparer_1_t2065 * __this, int64_t ___x, int64_t ___y, const MethodInfo* method)
{
	{
		int64_t L_0 = ___x;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_3 = ___y;
		int64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int64_t L_6 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, int64_t >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Int64>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (int64_t)L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.Int64>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::.ctor()
extern TypeInfo* EqualityComparer_1_t2064_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m10363_gshared (DefaultComparer_t2066 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2064_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4606);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t2064 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2064_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t2064 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2064 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10364_gshared (DefaultComparer_t2066 * __this, int64_t ___obj, const MethodInfo* method)
{
	{
		int64_t L_0 = ___obj;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10365_gshared (DefaultComparer_t2066 * __this, int64_t ___x, int64_t ___y, const MethodInfo* method)
{
	{
		int64_t L_0 = ___x;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_3 = ___y;
		int64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int64_t L_6 = ___y;
		int64_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_13.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_14.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_21.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_22.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_3.h"
// System.Collections.Generic.EqualityComparer`1<System.UInt64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_13MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_14MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_21MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_22MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_3MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.UInt64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5MethodDeclarations.h"
struct Dictionary_2_t2081;
struct DictionaryEntryU5BU5D_t2426;
struct Transform_1_t2080;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t653_TisDictionaryEntry_t653_m12786_gshared (Dictionary_2_t2081 * __this, DictionaryEntryU5BU5D_t2426* p0, int32_t p1, Transform_1_t2080 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t653_TisDictionaryEntry_t653_m12786(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2081 *, DictionaryEntryU5BU5D_t2426*, int32_t, Transform_1_t2080 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t653_TisDictionaryEntry_t653_m12786_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2081;
struct Array_t;
struct Transform_1_t2092;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2082_m12788_gshared (Dictionary_2_t2081 * __this, Array_t * p0, int32_t p1, Transform_1_t2092 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2082_m12788(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2081 *, Array_t *, int32_t, Transform_1_t2092 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2082_m12788_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2081;
struct KeyValuePair_2U5BU5D_t2339;
struct Transform_1_t2092;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2082_TisKeyValuePair_2_t2082_m12789_gshared (Dictionary_2_t2081 * __this, KeyValuePair_2U5BU5D_t2339* p0, int32_t p1, Transform_1_t2092 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2082_TisKeyValuePair_2_t2082_m12789(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2081 *, KeyValuePair_2U5BU5D_t2339*, int32_t, Transform_1_t2092 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2082_TisKeyValuePair_2_t2082_m12789_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10492_gshared (Dictionary_2_t2081 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2081 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10494_gshared (Dictionary_2_t2081 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2081 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m10496_gshared (Dictionary_2_t2081 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t2081 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10498_gshared (Dictionary_2_t2081 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2081 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t279_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t319_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m10500_gshared (Dictionary_2_t2081 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		IEnumerator_t279_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		IDisposable_t319_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t2082  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral1225, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2081 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t2082  L_9 = (KeyValuePair_2_t2082 )InterfaceFuncInvoker0< KeyValuePair_2_t2082  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t2082 )L_9;
			uint64_t L_10 = (( uint64_t (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2082 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2082 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t2081 *)__this);
			VirtActionInvoker2< uint64_t, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2081 *)__this, (uint64_t)L_10, (Object_t *)L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t279_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			Object_t* L_15 = V_2;
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t319_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10502_gshared (Dictionary_2_t2081 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10504_gshared (Dictionary_2_t2081 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2081 *)__this);
		KeyCollection_t2085 * L_0 = (( KeyCollection_t2085 * (*) (Dictionary_2_t2081 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t2081 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10506_gshared (Dictionary_2_t2081 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2081 *)__this);
		ValueCollection_t2089 * L_0 = (( ValueCollection_t2089 * (*) (Dictionary_2_t2081 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2081 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10508_gshared (Dictionary_2_t2081 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t2081 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, uint64_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2081 *)__this, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2081 *)__this);
		uint64_t L_4 = (( uint64_t (*) (Dictionary_2_t2081 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2081 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t2081 *)__this);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, uint64_t >::Invoke(20 /* TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey) */, (Dictionary_2_t2081 *)__this, (uint64_t)L_4);
		Object_t * L_6 = L_5;
		return ((Object_t *)L_6);
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10510_gshared (Dictionary_2_t2081 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2081 *)__this);
		uint64_t L_1 = (( uint64_t (*) (Dictionary_2_t2081 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2081 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2081 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t2081 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2081 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2081 *)__this);
		VirtActionInvoker2< uint64_t, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue) */, (Dictionary_2_t2081 *)__this, (uint64_t)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10512_gshared (Dictionary_2_t2081 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2081 *)__this);
		uint64_t L_1 = (( uint64_t (*) (Dictionary_2_t2081 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2081 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2081 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t2081 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2081 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2081 *)__this);
		VirtActionInvoker2< uint64_t, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2081 *)__this, (uint64_t)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10514_gshared (Dictionary_2_t2081 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2081 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, uint64_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2081 *)__this, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10516_gshared (Dictionary_2_t2081 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2081 *)__this);
		VirtFuncInvoker1< bool, uint64_t >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey) */, (Dictionary_2_t2081 *)__this, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0023:
	{
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10518_gshared (Dictionary_2_t2081 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10520_gshared (Dictionary_2_t2081 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10522_gshared (Dictionary_2_t2081 * __this, KeyValuePair_2_t2082  ___keyValuePair, const MethodInfo* method)
{
	{
		uint64_t L_0 = (( uint64_t (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2082 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2082 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2081 *)__this);
		VirtActionInvoker2< uint64_t, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2081 *)__this, (uint64_t)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10524_gshared (Dictionary_2_t2081 * __this, KeyValuePair_2_t2082  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2082  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2081 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2081 *, KeyValuePair_2_t2082 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2081 *)__this, (KeyValuePair_2_t2082 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10526_gshared (Dictionary_2_t2081 * __this, KeyValuePair_2U5BU5D_t2339* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2339* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, KeyValuePair_2U5BU5D_t2339*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2081 *)__this, (KeyValuePair_2U5BU5D_t2339*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10528_gshared (Dictionary_2_t2081 * __this, KeyValuePair_2_t2082  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2082  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2081 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2081 *, KeyValuePair_2_t2082 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2081 *)__this, (KeyValuePair_2_t2082 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2082 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2081 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, uint64_t >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey) */, (Dictionary_2_t2081 *)__this, (uint64_t)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t2426_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10530_gshared (Dictionary_2_t2081 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t2426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5207);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2339* V_0 = {0};
	DictionaryEntryU5BU5D_t2426* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t2426* G_B5_1 = {0};
	Dictionary_2_t2081 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t2426* G_B4_1 = {0};
	Dictionary_2_t2081 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2339*)((KeyValuePair_2U5BU5D_t2339*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t2339* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2339* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, KeyValuePair_2U5BU5D_t2339*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2081 *)__this, (KeyValuePair_2U5BU5D_t2339*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2081 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t2426*)((DictionaryEntryU5BU5D_t2426*)IsInst(L_6, DictionaryEntryU5BU5D_t2426_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t2426* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t2426* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t2080 * L_10 = ((Dictionary_2_t2081_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2081 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2081 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2080 * L_12 = (Transform_1_t2080 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2080 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2081_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2081 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t2080 * L_13 = ((Dictionary_2_t2081_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t2081 *)G_B5_2);
		(( void (*) (Dictionary_2_t2081 *, DictionaryEntryU5BU5D_t2426*, int32_t, Transform_1_t2080 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t2081 *)G_B5_2, (DictionaryEntryU5BU5D_t2426*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t2080 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2092 * L_17 = (Transform_1_t2092 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2092 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, Array_t *, int32_t, Transform_1_t2092 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t2081 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t2092 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10532_gshared (Dictionary_2_t2081 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2087  L_0 = {0};
		(( void (*) (Enumerator_t2087 *, Dictionary_2_t2081 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2081 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2087  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10534_gshared (Dictionary_2_t2081 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2087  L_0 = {0};
		(( void (*) (Enumerator_t2087 *, Dictionary_2_t2081 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2081 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2087  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10536_gshared (Dictionary_2_t2081 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t2093 * L_0 = (ShimEnumerator_t2093 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2093 *, Dictionary_2_t2081 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t2081 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10538_gshared (Dictionary_2_t2081 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t976_il2cpp_TypeInfo_var;
extern "C" Object_t * Dictionary_2_get_Item_m10540_gshared (Dictionary_2_t2081 * __this, uint64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		KeyNotFoundException_t976_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2939);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t341 * L_3 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_3, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (uint64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t588* L_7 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t588* L_9 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t1959* L_11 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		UInt64U5BU5D_t1264* L_16 = (UInt64U5BU5D_t1264*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		uint64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_16, L_18)), (uint64_t)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ObjectU5BU5D_t200* L_21 = (ObjectU5BU5D_t200*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23));
	}

IL_007d:
	{
		LinkU5BU5D_t1959* L_24 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = (int32_t)L_26;
	}

IL_008f:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t976 * L_28 = (KeyNotFoundException_t976 *)il2cpp_codegen_object_new (KeyNotFoundException_t976_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m4914(L_28, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m10542_gshared (Dictionary_2_t2081 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t341 * L_3 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_3, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (uint64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t588* L_8 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t588* L_9 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t1959* L_13 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		UInt64U5BU5D_t1264* L_18 = (UInt64U5BU5D_t1264*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		uint64_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_18, L_20)), (uint64_t)L_21);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_23 = V_2;
		V_3 = (int32_t)L_23;
		LinkU5BU5D_t1959* L_24 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = (int32_t)L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_29 = (int32_t)(__this->___count_10);
		int32_t L_30 = (int32_t)((int32_t)((int32_t)L_29+(int32_t)1));
		V_4 = (int32_t)L_30;
		__this->___count_10 = L_30;
		int32_t L_31 = V_4;
		int32_t L_32 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_00c9;
		}
	}
	{
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2081 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_33 = V_0;
		Int32U5BU5D_t588* L_34 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_34);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_35 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_35;
		int32_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_37 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_38 = (int32_t)L_37;
		V_4 = (int32_t)L_38;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_38+(int32_t)1));
		int32_t L_39 = V_4;
		V_2 = (int32_t)L_39;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t1959* L_40 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_40, L_41))->___Next_1);
		__this->___emptySlot_9 = L_42;
	}

IL_0101:
	{
		LinkU5BU5D_t1959* L_43 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t588* L_45 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t588* L_48 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		LinkU5BU5D_t1959* L_51 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		int32_t L_53 = V_0;
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_51, L_52))->___HashCode_0 = L_53;
		UInt64U5BU5D_t1264* L_54 = (UInt64U5BU5D_t1264*)(__this->___keySlots_6);
		int32_t L_55 = V_2;
		uint64_t L_56 = ___key;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((uint64_t*)(uint64_t*)SZArrayLdElema(L_54, L_55)) = (uint64_t)L_56;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t1959* L_58 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_59 = V_3;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		LinkU5BU5D_t1959* L_60 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		int32_t L_62 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_60, L_61))->___Next_1);
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_58, L_59))->___Next_1 = L_62;
		LinkU5BU5D_t1959* L_63 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_64 = V_2;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		Int32U5BU5D_t588* L_65 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_63, L_64))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_65, L_67))-(int32_t)1));
		Int32U5BU5D_t588* L_68 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_69);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_68, L_69)) = (int32_t)((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0194:
	{
		ObjectU5BU5D_t200* L_71 = (ObjectU5BU5D_t200*)(__this->___valueSlots_7);
		int32_t L_72 = V_2;
		Object_t * L_73 = ___value;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_71, L_72)) = (Object_t *)L_73;
		int32_t L_74 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_74+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t2094_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m10544_gshared (Dictionary_2_t2081 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		EqualityComparer_1_t2094_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2081 * G_B4_0 = {0};
	Dictionary_2_t2081 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2081 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_1 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_1, (String_t*)(String_t*) &_stringLiteral1226, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t2081 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2081 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2081 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2094_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2094 * L_5 = (( EqualityComparer_1_t2094 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2081 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t2081 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t588_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1959_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m10546_gshared (Dictionary_2_t2081 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1034);
		LinkU5BU5D_t1959_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5208);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t588*)SZArrayNew(Int32U5BU5D_t588_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t1959*)SZArrayNew(LinkU5BU5D_t1959_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((UInt64U5BU5D_t1264*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ObjectU5BU5D_t200*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t588* L_4 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t588* L_6 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m10548_gshared (Dictionary_2_t2081 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral173, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_3 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_3, (String_t*)(String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2381((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t313 * L_7 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_7, (String_t*)(String_t*) &_stringLiteral1227, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m2381((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t2081 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count() */, (Dictionary_2_t2081 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t313 * L_12 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_12, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2082  Dictionary_2_make_pair_m10550_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___key;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t2082  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2082 *, uint64_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (uint64_t)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m10552_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m10554_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10556_gshared (Dictionary_2_t2081 * __this, KeyValuePair_2U5BU5D_t2339* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2339* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2081 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t2339* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2092 * L_5 = (Transform_1_t2092 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2092 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, KeyValuePair_2U5BU5D_t2339*, int32_t, Transform_1_t2092 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t2081 *)__this, (KeyValuePair_2U5BU5D_t2339*)L_2, (int32_t)L_3, (Transform_1_t2092 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern TypeInfo* Hashtable_t481_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t588_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1959_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m10558_gshared (Dictionary_2_t2081 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t481_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(922);
		Int32U5BU5D_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1034);
		LinkU5BU5D_t1959_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5208);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t588* V_1 = {0};
	LinkU5BU5D_t1959* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	UInt64U5BU5D_t1264* V_7 = {0};
	ObjectU5BU5D_t200* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t588* L_0 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t481_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m5103(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t588*)((Int32U5BU5D_t588*)SZArrayNew(Int32U5BU5D_t588_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t1959*)((LinkU5BU5D_t1959*)SZArrayNew(LinkU5BU5D_t1959_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t588* L_4 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t1959* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		UInt64U5BU5D_t1264* L_10 = (UInt64U5BU5D_t1264*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t1959* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t588* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t588* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t1959* L_26 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t588* L_32 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t588* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t1959* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (UInt64U5BU5D_t1264*)((UInt64U5BU5D_t1264*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (ObjectU5BU5D_t200*)((ObjectU5BU5D_t200*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		UInt64U5BU5D_t1264* L_37 = (UInt64U5BU5D_t1264*)(__this->___keySlots_6);
		UInt64U5BU5D_t1264* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ObjectU5BU5D_t200* L_40 = (ObjectU5BU5D_t200*)(__this->___valueSlots_7);
		ObjectU5BU5D_t200* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		UInt64U5BU5D_t1264* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ObjectU5BU5D_t200* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m10560_gshared (Dictionary_2_t2081 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t341 * L_3 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_3, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (uint64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t588* L_8 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t588* L_9 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t1959* L_12 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		UInt64U5BU5D_t1264* L_17 = (UInt64U5BU5D_t1264*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		uint64_t L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_17, L_19)), (uint64_t)L_20);
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t313 * L_22 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_22, (String_t*)(String_t*) &_stringLiteral1230, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007d:
	{
		LinkU5BU5D_t1959* L_23 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_3 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_3;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2081 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t588* L_32 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_3 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_2 = (int32_t)L_37;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t1959* L_38 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_00f9:
	{
		LinkU5BU5D_t1959* L_41 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = V_0;
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_41, L_42))->___HashCode_0 = L_43;
		LinkU5BU5D_t1959* L_44 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		Int32U5BU5D_t588* L_46 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_47 = V_1;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_44, L_45))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_46, L_48))-(int32_t)1));
		Int32U5BU5D_t588* L_49 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		UInt64U5BU5D_t1264* L_52 = (UInt64U5BU5D_t1264*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		uint64_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((uint64_t*)(uint64_t*)SZArrayLdElema(L_52, L_53)) = (uint64_t)L_54;
		ObjectU5BU5D_t200* L_55 = (ObjectU5BU5D_t200*)(__this->___valueSlots_7);
		int32_t L_56 = V_2;
		Object_t * L_57 = ___value;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, L_56)) = (Object_t *)L_57;
		int32_t L_58 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_58+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m10562_gshared (Dictionary_2_t2081 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t588* L_0 = (Int32U5BU5D_t588*)(__this->___table_4);
		Int32U5BU5D_t588* L_1 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		UInt64U5BU5D_t1264* L_2 = (UInt64U5BU5D_t1264*)(__this->___keySlots_6);
		UInt64U5BU5D_t1264* L_3 = (UInt64U5BU5D_t1264*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t200* L_4 = (ObjectU5BU5D_t200*)(__this->___valueSlots_7);
		ObjectU5BU5D_t200* L_5 = (ObjectU5BU5D_t200*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t1959* L_6 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		LinkU5BU5D_t1959* L_7 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m3501(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m10564_gshared (Dictionary_2_t2081 * __this, uint64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t341 * L_3 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_3, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (uint64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t588* L_7 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t588* L_9 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t1959* L_11 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		UInt64U5BU5D_t1264* L_16 = (UInt64U5BU5D_t1264*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		uint64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_16, L_18)), (uint64_t)L_19);
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t1959* L_21 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_21, L_22))->___Next_1);
		V_1 = (int32_t)L_23;
	}

IL_0084:
	{
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t1951_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m10566_gshared (Dictionary_2_t2081 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t1951_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4284);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t1951_il2cpp_TypeInfo_var);
		EqualityComparer_1_t1951 * L_0 = (( EqualityComparer_1_t1951 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t588* L_1 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		ObjectU5BU5D_t200* L_5 = (ObjectU5BU5D_t200*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (Object_t*)L_4, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7)), (Object_t *)L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t1959* L_10 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t588* L_16 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m10568_gshared (Dictionary_2_t2081 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2339* V_0 = {0};
	{
		SerializationInfo_t310 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral269, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t310 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t310 *)L_2);
		SerializationInfo_AddValue_m2391((SerializationInfo_t310 *)L_2, (String_t*)(String_t*) &_stringLiteral271, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t310 *)L_4);
		SerializationInfo_AddValue_m2402((SerializationInfo_t310 *)L_4, (String_t*)(String_t*) &_stringLiteral273, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t2339*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2339*)((KeyValuePair_2U5BU5D_t2339*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t2339* L_8 = V_0;
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, KeyValuePair_2U5BU5D_t2339*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2081 *)__this, (KeyValuePair_2U5BU5D_t2339*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t310 * L_9 = ___info;
		Int32U5BU5D_t588* L_10 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t310 *)L_9);
		SerializationInfo_AddValue_m2391((SerializationInfo_t310 *)L_9, (String_t*)(String_t*) &_stringLiteral1231, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t310 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2339* L_12 = V_0;
		NullCheck((SerializationInfo_t310 *)L_11);
		SerializationInfo_AddValue_m2402((SerializationInfo_t310 *)L_11, (String_t*)(String_t*) &_stringLiteral1232, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m10570_gshared (Dictionary_2_t2081 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t2339* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t310 * L_0 = (SerializationInfo_t310 *)(__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t310 * L_1 = (SerializationInfo_t310 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t310 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m2401((SerializationInfo_t310 *)L_1, (String_t*)(String_t*) &_stringLiteral271, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t310 * L_3 = (SerializationInfo_t310 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t310 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m2392((SerializationInfo_t310 *)L_3, (String_t*)(String_t*) &_stringLiteral273, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t310 * L_6 = (SerializationInfo_t310 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t310 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m2401((SerializationInfo_t310 *)L_6, (String_t*)(String_t*) &_stringLiteral1231, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t310 * L_8 = (SerializationInfo_t310 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t310 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m2392((SerializationInfo_t310 *)L_8, (String_t*)(String_t*) &_stringLiteral1232, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t2339*)((KeyValuePair_2U5BU5D_t2339*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t2081 *)__this);
		(( void (*) (Dictionary_2_t2081 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t2081 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2339* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t2339* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		uint64_t L_16 = (( uint64_t (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2082 *)((KeyValuePair_2_t2082 *)(KeyValuePair_2_t2082 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t2339* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Object_t * L_19 = (( Object_t * (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2082 *)((KeyValuePair_2_t2082 *)(KeyValuePair_2_t2082 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2081 *)__this);
		VirtActionInvoker2< uint64_t, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2081 *)__this, (uint64_t)L_16, (Object_t *)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2339* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t310 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t348_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m10572_gshared (Dictionary_2_t2081 * __this, uint64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		UInt64_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	Object_t * V_5 = {0};
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t341 * L_3 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_3, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (uint64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t588* L_8 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t588* L_9 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		int32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (int32_t)(-1);
	}

IL_004a:
	{
		LinkU5BU5D_t1959* L_13 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		UInt64U5BU5D_t1264* L_18 = (UInt64U5BU5D_t1264*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		uint64_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_18, L_20)), (uint64_t)L_21);
		if (!L_22)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_23 = V_2;
		V_3 = (int32_t)L_23;
		LinkU5BU5D_t1959* L_24 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = (int32_t)L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_29 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_29-(int32_t)1));
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t588* L_31 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_32 = V_1;
		LinkU5BU5D_t1959* L_33 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_33, L_34))->___Next_1);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, L_32)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t1959* L_36 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		LinkU5BU5D_t1959* L_38 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_36, L_37))->___Next_1 = L_40;
	}

IL_00e9:
	{
		LinkU5BU5D_t1959* L_41 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = (int32_t)(__this->___emptySlot_9);
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_41, L_42))->___Next_1 = L_43;
		int32_t L_44 = V_2;
		__this->___emptySlot_9 = L_44;
		LinkU5BU5D_t1959* L_45 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_45, L_46))->___HashCode_0 = 0;
		UInt64U5BU5D_t1264* L_47 = (UInt64U5BU5D_t1264*)(__this->___keySlots_6);
		int32_t L_48 = V_2;
		Initobj (UInt64_t348_il2cpp_TypeInfo_var, (&V_4));
		uint64_t L_49 = V_4;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((uint64_t*)(uint64_t*)SZArrayLdElema(L_47, L_48)) = (uint64_t)L_49;
		ObjectU5BU5D_t200* L_50 = (ObjectU5BU5D_t200*)(__this->___valueSlots_7);
		int32_t L_51 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_5));
		Object_t * L_52 = V_5;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51)) = (Object_t *)L_52;
		int32_t L_53 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_53+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m10574_gshared (Dictionary_2_t2081 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t341 * L_3 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_3, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (uint64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t588* L_7 = (Int32U5BU5D_t588*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t588* L_9 = (Int32U5BU5D_t588*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t1959* L_11 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		UInt64U5BU5D_t1264* L_16 = (UInt64U5BU5D_t1264*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		uint64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_16, L_18)), (uint64_t)L_19);
		if (!L_20)
		{
			goto IL_0084;
		}
	}
	{
		Object_t ** L_21 = ___value;
		ObjectU5BU5D_t200* L_22 = (ObjectU5BU5D_t200*)(__this->___valueSlots_7);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		*L_21 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_22, L_24));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t1959* L_25 = (LinkU5BU5D_t1959*)(__this->___linkSlots_5);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_25, L_26))->___Next_1);
		V_1 = (int32_t)L_27;
	}

IL_0096:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		Object_t ** L_29 = ___value;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
		Object_t * L_30 = V_2;
		*L_29 = L_30;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t2085 * Dictionary_2_get_Keys_m10576_gshared (Dictionary_2_t2081 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t2085 * L_0 = (KeyCollection_t2085 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t2085 *, Dictionary_2_t2081 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t2081 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t2089 * Dictionary_2_get_Values_m10578_gshared (Dictionary_2_t2081 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t2089 * L_0 = (ValueCollection_t2089 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t2089 *, Dictionary_2_t2081 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t2081 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" uint64_t Dictionary_2_ToTKey_m10580_gshared (Dictionary_2_t2081 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1175(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1233, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t313 * L_6 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2383(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((*(uint64_t*)((uint64_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" Object_t * Dictionary_2_ToTValue_m10582_gshared (Dictionary_2_t2081 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_0));
		Object_t * L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, (RuntimeTypeHandle_t885 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m1175(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1233, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t313 * L_8 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2383(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral462, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t1951_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10584_gshared (Dictionary_2_t2081 * __this, KeyValuePair_2_t2082  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t1951_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4284);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		uint64_t L_0 = (( uint64_t (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2082 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2081 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, uint64_t, Object_t ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t2081 *)__this, (uint64_t)L_0, (Object_t **)(&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t1951_il2cpp_TypeInfo_var);
		EqualityComparer_1_t1951 * L_2 = (( EqualityComparer_1_t1951 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2082 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_4 = V_0;
		NullCheck((EqualityComparer_1_t1951 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t1951 *)L_2, (Object_t *)L_3, (Object_t *)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t2087  Dictionary_2_GetEnumerator_m10586_gshared (Dictionary_2_t2081 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2087  L_0 = {0};
		(( void (*) (Enumerator_t2087 *, Dictionary_2_t2081 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2081 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t653  Dictionary_2_U3CCopyToU3Em__0_m10588_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		Object_t * L_3 = ___value;
		Object_t * L_4 = L_3;
		DictionaryEntry_t653  L_5 = {0};
		DictionaryEntry__ctor_m2379(&L_5, (Object_t *)L_2, (Object_t *)((Object_t *)L_4), /*hidden argument*/NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_34.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_34MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t2082  Array_InternalArray__get_Item_TisKeyValuePair_2_t2082_m12760_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2082_m12760(__this, p0, method) (( KeyValuePair_2_t2082  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2082_m12760_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10589_gshared (InternalEnumerator_1_t2083 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10590_gshared (InternalEnumerator_1_t2083 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2082  L_0 = (( KeyValuePair_2_t2082  (*) (InternalEnumerator_1_t2083 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2083 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2082  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10591_gshared (InternalEnumerator_1_t2083 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10592_gshared (InternalEnumerator_1_t2083 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2381((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Current()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t2082  InternalEnumerator_1_get_Current_m10593_gshared (InternalEnumerator_1_t2083 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_1, (String_t*)(String_t*) &_stringLiteral1099, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t665 * L_3 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_3, (String_t*)(String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2381((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t2082  L_8 = (( KeyValuePair_2_t2082  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m10594_gshared (KeyValuePair_2_t2082 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2082 *, uint64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t2082 *)__this, (uint64_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2082 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t2082 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::get_Key()
extern "C" uint64_t KeyValuePair_2_get_Key_m10595_gshared (KeyValuePair_2_t2082 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (uint64_t)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m10596_gshared (KeyValuePair_2_t2082 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m10597_gshared (KeyValuePair_2_t2082 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m10598_gshared (KeyValuePair_2_t2082 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::ToString()
extern TypeInfo* StringU5BU5D_t197_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m10599_gshared (KeyValuePair_2_t2082 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	uint64_t V_0 = 0;
	Object_t * V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t197* G_B2_1 = {0};
	StringU5BU5D_t197* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t197* G_B1_1 = {0};
	StringU5BU5D_t197* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t197* G_B3_2 = {0};
	StringU5BU5D_t197* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t197* G_B5_1 = {0};
	StringU5BU5D_t197* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t197* G_B4_1 = {0};
	StringU5BU5D_t197* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t197* G_B6_2 = {0};
	StringU5BU5D_t197* G_B6_3 = {0};
	{
		StringU5BU5D_t197* L_0 = (StringU5BU5D_t197*)((StringU5BU5D_t197*)SZArrayNew(StringU5BU5D_t197_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral188);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral188;
		StringU5BU5D_t197* L_1 = (StringU5BU5D_t197*)L_0;
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2082 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		uint64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		uint64_t L_5 = (( uint64_t (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2082 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (uint64_t)L_5;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t197* L_8 = (StringU5BU5D_t197*)G_B3_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 2)) = (String_t*)(String_t*) &_stringLiteral252;
		StringU5BU5D_t197* L_9 = (StringU5BU5D_t197*)L_8;
		Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2082 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_11 = L_10;
		G_B4_0 = 3;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		if (!((Object_t *)L_11))
		{
			G_B5_0 = 3;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			goto IL_0066;
		}
	}
	{
		Object_t * L_12 = (( Object_t * (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2082 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Object_t *)L_12;
		NullCheck((Object_t *)(*(&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t197* L_15 = (StringU5BU5D_t197*)G_B6_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral189);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral189;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m1214(NULL /*static, unused*/, (StringU5BU5D_t197*)L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::get_Values()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.UInt64>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt64>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.UInt64>::get_Current()
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_35.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_35MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
extern "C" uint64_t Array_InternalArray__get_Item_TisUInt64_t348_m12771_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt64_t348_m12771(__this, p0, method) (( uint64_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUInt64_t348_m12771_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.UInt64>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10600_gshared (InternalEnumerator_1_t2084 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10601_gshared (InternalEnumerator_1_t2084 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (( uint64_t (*) (InternalEnumerator_1_t2084 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2084 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10602_gshared (InternalEnumerator_1_t2084 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt64>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10603_gshared (InternalEnumerator_1_t2084 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2381((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.UInt64>::get_Current()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" uint64_t InternalEnumerator_1_get_Current_m10604_gshared (InternalEnumerator_1_t2084 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_1, (String_t*)(String_t*) &_stringLiteral1099, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t665 * L_3 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_3, (String_t*)(String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2381((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		uint64_t L_8 = (( uint64_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.UInt64>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UInt64>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_14.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_19.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_19MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_14MethodDeclarations.h"
struct Dictionary_2_t2081;
struct Array_t;
struct Transform_1_t2088;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.UInt64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.UInt64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t348_m12782_gshared (Dictionary_2_t2081 * __this, Array_t * p0, int32_t p1, Transform_1_t2088 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t348_m12782(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2081 *, Array_t *, int32_t, Transform_1_t2088 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t348_m12782_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2081;
struct UInt64U5BU5D_t1264;
struct Transform_1_t2088;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.UInt64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.UInt64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisUInt64_t348_TisUInt64_t348_m12783_gshared (Dictionary_2_t2081 * __this, UInt64U5BU5D_t1264* p0, int32_t p1, Transform_1_t2088 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisUInt64_t348_TisUInt64_t348_m12783(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2081 *, UInt64U5BU5D_t1264*, int32_t, Transform_1_t2088 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisUInt64_t348_TisUInt64_t348_m12783_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m10605_gshared (KeyCollection_t2085 * __this, Dictionary_2_t2081 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1161((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2081 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*)(String_t*) &_stringLiteral1225, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t2081 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m10606_gshared (KeyCollection_t2085 * __this, uint64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*)(String_t*) &_stringLiteral1236, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m10607_gshared (KeyCollection_t2085 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*)(String_t*) &_stringLiteral1236, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m10608_gshared (KeyCollection_t2085 * __this, uint64_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2081 * L_0 = (Dictionary_2_t2081 *)(__this->___dictionary_0);
		uint64_t L_1 = ___item;
		NullCheck((Dictionary_2_t2081 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, uint64_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2081 *)L_0, (uint64_t)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m10609_gshared (KeyCollection_t2085 * __this, uint64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*)(String_t*) &_stringLiteral1236, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m10610_gshared (KeyCollection_t2085 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2085 *)__this);
		Enumerator_t2086  L_0 = (( Enumerator_t2086  (*) (KeyCollection_t2085 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2085 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2086  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m10611_gshared (KeyCollection_t2085 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	UInt64U5BU5D_t1264* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (UInt64U5BU5D_t1264*)((UInt64U5BU5D_t1264*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		UInt64U5BU5D_t1264* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		UInt64U5BU5D_t1264* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t2085 *)__this);
		VirtActionInvoker2< UInt64U5BU5D_t1264*, int32_t >::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t2085 *)__this, (UInt64U5BU5D_t1264*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t2081 * L_4 = (Dictionary_2_t2081 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2081 *)L_4);
		(( void (*) (Dictionary_2_t2081 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2081 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2081 * L_7 = (Dictionary_2_t2081 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2088 * L_11 = (Transform_1_t2088 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2088 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2081 *)L_7);
		(( void (*) (Dictionary_2_t2081 *, Array_t *, int32_t, Transform_1_t2088 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2081 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2088 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m10612_gshared (KeyCollection_t2085 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2085 *)__this);
		Enumerator_t2086  L_0 = (( Enumerator_t2086  (*) (KeyCollection_t2085 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2085 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2086  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m10613_gshared (KeyCollection_t2085 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t443_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m10614_gshared (KeyCollection_t2085 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(696);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2081 * L_0 = (Dictionary_2_t2081 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t443_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m10615_gshared (KeyCollection_t2085 * __this, UInt64U5BU5D_t1264* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2081 * L_0 = (Dictionary_2_t2081 *)(__this->___dictionary_0);
		UInt64U5BU5D_t1264* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2081 *)L_0);
		(( void (*) (Dictionary_2_t2081 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2081 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2081 * L_3 = (Dictionary_2_t2081 *)(__this->___dictionary_0);
		UInt64U5BU5D_t1264* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2088 * L_7 = (Transform_1_t2088 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2088 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2081 *)L_3);
		(( void (*) (Dictionary_2_t2081 *, UInt64U5BU5D_t1264*, int32_t, Transform_1_t2088 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2081 *)L_3, (UInt64U5BU5D_t1264*)L_4, (int32_t)L_5, (Transform_1_t2088 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t2086  KeyCollection_GetEnumerator_m10616_gshared (KeyCollection_t2085 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2081 * L_0 = (Dictionary_2_t2081 *)(__this->___dictionary_0);
		Enumerator_t2086  L_1 = {0};
		(( void (*) (Enumerator_t2086 *, Dictionary_2_t2081 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2081 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m10617_gshared (KeyCollection_t2085 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2081 * L_0 = (Dictionary_2_t2081 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2081 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count() */, (Dictionary_2_t2081 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10618_gshared (Enumerator_t2086 * __this, Dictionary_2_t2081 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2081 * L_0 = ___host;
		NullCheck((Dictionary_2_t2081 *)L_0);
		Enumerator_t2087  L_1 = (( Enumerator_t2087  (*) (Dictionary_2_t2081 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2081 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10619_gshared (Enumerator_t2086 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2087 * L_0 = (Enumerator_t2087 *)&(__this->___host_enumerator_0);
		uint64_t L_1 = (( uint64_t (*) (Enumerator_t2087 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2087 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		uint64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m10620_gshared (Enumerator_t2086 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2087 * L_0 = (Enumerator_t2087 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2087 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2087 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10621_gshared (Enumerator_t2086 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2087 * L_0 = (Enumerator_t2087 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2087 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2087 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" uint64_t Enumerator_get_Current_m10622_gshared (Enumerator_t2086 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2087 * L_0 = (Enumerator_t2087 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2082 * L_1 = (KeyValuePair_2_t2082 *)&(L_0->___current_3);
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2082 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10623_gshared (Enumerator_t2087 * __this, Dictionary_2_t2081 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t2081 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2081 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10624_gshared (Enumerator_t2087 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2087 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2087 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2082  L_0 = (KeyValuePair_2_t2082 )(__this->___current_3);
		KeyValuePair_2_t2082  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t653  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10625_gshared (Enumerator_t2087 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2087 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2087 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2082 * L_0 = (KeyValuePair_2_t2082 *)&(__this->___current_3);
		uint64_t L_1 = (( uint64_t (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2082 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		uint64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_2);
		KeyValuePair_2_t2082 * L_4 = (KeyValuePair_2_t2082 *)&(__this->___current_3);
		Object_t * L_5 = (( Object_t * (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2082 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_6 = L_5;
		DictionaryEntry_t653  L_7 = {0};
		DictionaryEntry__ctor_m2379(&L_7, (Object_t *)L_3, (Object_t *)((Object_t *)L_6), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10626_gshared (Enumerator_t2087 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (( uint64_t (*) (Enumerator_t2087 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t2087 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10627_gshared (Enumerator_t2087 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2087 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t2087 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10628_gshared (Enumerator_t2087 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2087 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2087 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t2081 * L_4 = (Dictionary_2_t2081 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t1959* L_5 = (LinkU5BU5D_t1959*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t975 *)(Link_t975 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t2081 * L_8 = (Dictionary_2_t2081 *)(__this->___dictionary_0);
		NullCheck(L_8);
		UInt64U5BU5D_t1264* L_9 = (UInt64U5BU5D_t1264*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2081 * L_12 = (Dictionary_2_t2081 *)(__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t200* L_13 = (ObjectU5BU5D_t200*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2082  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2082 *, uint64_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_9, L_11)), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t2081 * L_18 = (Dictionary_2_t2081 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2082  Enumerator_get_Current_m10629_gshared (Enumerator_t2087 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2082  L_0 = (KeyValuePair_2_t2082 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m10630_gshared (Enumerator_t2087 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2087 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2087 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2082 * L_0 = (KeyValuePair_2_t2082 *)&(__this->___current_3);
		uint64_t L_1 = (( uint64_t (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2082 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m10631_gshared (Enumerator_t2087 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2087 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2087 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2082 * L_0 = (KeyValuePair_2_t2082 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2082 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m10632_gshared (Enumerator_t2087 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2081 * L_0 = (Dictionary_2_t2081 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t858 * L_1 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3515(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t2081 * L_2 = (Dictionary_2_t2081 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t665 * L_5 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_5, (String_t*)(String_t*) &_stringLiteral1234, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m10633_gshared (Enumerator_t2087 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2087 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2087 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_1, (String_t*)(String_t*) &_stringLiteral1235, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m10634_gshared (Enumerator_t2087 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2081 *)NULL;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
