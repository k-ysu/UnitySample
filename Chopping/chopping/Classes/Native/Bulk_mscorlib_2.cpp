﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.IO.MonoFileType
#include "mscorlib_System_IO_MonoFileType.h"
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
// System.IO.MonoFileType
#include "mscorlib_System_IO_MonoFileTypeMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.IO.MonoIO
#include "mscorlib_System_IO_MonoIO.h"
#ifndef _MSC_VER
#else
#endif
// System.IO.MonoIO
#include "mscorlib_System_IO_MonoIOMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributes.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.IO.MonoIOError
#include "mscorlib_System_IO_MonoIOError.h"
// System.String
#include "mscorlib_System_String.h"
// System.UnauthorizedAccessException
#include "mscorlib_System_UnauthorizedAccessException.h"
// System.IO.IOException
#include "mscorlib_System_IO_IOException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.IsolatedStorage.IsolatedStorageException
#include "mscorlib_System_IO_IsolatedStorage_IsolatedStorageException.h"
// System.IO.PathTooLongException
#include "mscorlib_System_IO_PathTooLongException.h"
#include "mscorlib_ArrayTypes.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.IO.MonoIOStat
#include "mscorlib_System_IO_MonoIOStat.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.FileShare
#include "mscorlib_System_IO_FileShare.h"
// System.IO.FileOptions
#include "mscorlib_System_IO_FileOptions.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.UnauthorizedAccessException
#include "mscorlib_System_UnauthorizedAccessExceptionMethodDeclarations.h"
// System.IO.IOException
#include "mscorlib_System_IO_IOExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.IO.IsolatedStorage.IsolatedStorageException
#include "mscorlib_System_IO_IsolatedStorage_IsolatedStorageExceptionMethodDeclarations.h"
// System.IO.PathTooLongException
#include "mscorlib_System_IO_PathTooLongExceptionMethodDeclarations.h"


// System.Void System.IO.MonoIO::.cctor()
extern TypeInfo* MonoIO_t1038_il2cpp_TypeInfo_var;
extern "C" void MonoIO__cctor_m5480 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoIO_t1038_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1962);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MonoIO_t1038_StaticFields*)MonoIO_t1038_il2cpp_TypeInfo_var->static_fields)->___InvalidFileAttributes_0 = (-1);
		IntPtr_t L_0 = IntPtr_op_Explicit_m4150(NULL /*static, unused*/, (((int64_t)(-1))), /*hidden argument*/NULL);
		((MonoIO_t1038_StaticFields*)MonoIO_t1038_il2cpp_TypeInfo_var->static_fields)->___InvalidHandle_1 = L_0;
		return;
	}
}
// System.Exception System.IO.MonoIO::GetException(System.IO.MonoIOError)
extern TypeInfo* UnauthorizedAccessException_t1397_il2cpp_TypeInfo_var;
extern TypeInfo* IOException_t872_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* MonoIO_t1038_il2cpp_TypeInfo_var;
extern "C" Exception_t65 * MonoIO_GetException_m5481 (Object_t * __this /* static, unused */, int32_t ___error, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnauthorizedAccessException_t1397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1965);
		IOException_t872_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1562);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		MonoIO_t1038_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1962);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = ___error;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)80))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_002c;
	}

IL_000d:
	{
		UnauthorizedAccessException_t1397 * L_3 = (UnauthorizedAccessException_t1397 *)il2cpp_codegen_object_new (UnauthorizedAccessException_t1397_il2cpp_TypeInfo_var);
		UnauthorizedAccessException__ctor_m8017(L_3, (String_t*) &_stringLiteral1511, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		V_0 = (String_t*) &_stringLiteral1512;
		String_t* L_4 = V_0;
		int32_t L_5 = ___error;
		IOException_t872 * L_6 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_6, L_4, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_5)), /*hidden argument*/NULL);
		return L_6;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_8 = ___error;
		IL2CPP_RUNTIME_CLASS_INIT(MonoIO_t1038_il2cpp_TypeInfo_var);
		Exception_t65 * L_9 = MonoIO_GetException_m5482(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Exception System.IO.MonoIO::GetException(System.String,System.IO.MonoIOError)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IsolatedStorageException_t1019_il2cpp_TypeInfo_var;
extern TypeInfo* IOException_t872_il2cpp_TypeInfo_var;
extern TypeInfo* UnauthorizedAccessException_t1397_il2cpp_TypeInfo_var;
extern TypeInfo* PathTooLongException_t1040_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t200_il2cpp_TypeInfo_var;
extern TypeInfo* MonoIOError_t1039_il2cpp_TypeInfo_var;
extern "C" Exception_t65 * MonoIO_GetException_m5482 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___error, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		IsolatedStorageException_t1019_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1968);
		IOException_t872_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1562);
		UnauthorizedAccessException_t1397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1965);
		PathTooLongException_t1040_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1974);
		ObjectU5BU5D_t200_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		MonoIOError_t1039_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1975);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = ___error;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 0)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 1)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 2)
		{
			goto IL_00ae;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 3)
		{
			goto IL_00d3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 4)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 0)
		{
			goto IL_0166;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 1)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 2)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 3)
		{
			goto IL_0180;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 4)
		{
			goto IL_019a;
		}
	}

IL_003b:
	{
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)15))) == 0)
		{
			goto IL_0100;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)15))) == 1)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)15))) == 2)
		{
			goto IL_0214;
		}
	}

IL_0050:
	{
		int32_t L_4 = V_1;
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)80))) == 0)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)80))) == 1)
		{
			goto IL_0065;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)80))) == 2)
		{
			goto IL_01fa;
		}
	}

IL_0065:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)39))))
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)87))))
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)145))))
		{
			goto IL_01ce;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)206))))
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)6000))))
		{
			goto IL_01e8;
		}
	}
	{
		goto IL_0228;
	}

IL_009b:
	{
		String_t* L_10 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1513, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		String_t* L_12 = V_0;
		IsolatedStorageException_t1019 * L_13 = (IsolatedStorageException_t1019 *)il2cpp_codegen_object_new (IsolatedStorageException_t1019_il2cpp_TypeInfo_var);
		IsolatedStorageException__ctor_m5347(L_13, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_00ae:
	{
		int32_t L_14 = ___error;
		IOException_t872 * L_15 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_15, (String_t*) &_stringLiteral1514, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_14)), /*hidden argument*/NULL);
		return L_15;
	}

IL_00c0:
	{
		String_t* L_16 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1515, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		String_t* L_18 = V_0;
		IsolatedStorageException_t1019 * L_19 = (IsolatedStorageException_t1019 *)il2cpp_codegen_object_new (IsolatedStorageException_t1019_il2cpp_TypeInfo_var);
		IsolatedStorageException__ctor_m5347(L_19, L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_00d3:
	{
		String_t* L_20 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1516, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		String_t* L_22 = V_0;
		UnauthorizedAccessException_t1397 * L_23 = (UnauthorizedAccessException_t1397 *)il2cpp_codegen_object_new (UnauthorizedAccessException_t1397_il2cpp_TypeInfo_var);
		UnauthorizedAccessException__ctor_m8017(L_23, L_22, /*hidden argument*/NULL);
		return L_23;
	}

IL_00e6:
	{
		String_t* L_24 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1517, L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		String_t* L_26 = V_0;
		int32_t L_27 = ___error;
		IOException_t872 * L_28 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_28, L_26, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_27)), /*hidden argument*/NULL);
		return L_28;
	}

IL_0100:
	{
		String_t* L_29 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1518, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		String_t* L_31 = V_0;
		int32_t L_32 = ___error;
		IOException_t872 * L_33 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_33, L_31, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_32)), /*hidden argument*/NULL);
		return L_33;
	}

IL_011a:
	{
		String_t* L_34 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1519, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		String_t* L_36 = V_0;
		int32_t L_37 = ___error;
		IOException_t872 * L_38 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_38, L_36, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_37)), /*hidden argument*/NULL);
		return L_38;
	}

IL_0134:
	{
		String_t* L_39 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1520, L_39, /*hidden argument*/NULL);
		V_0 = L_40;
		String_t* L_41 = V_0;
		PathTooLongException_t1040 * L_42 = (PathTooLongException_t1040 *)il2cpp_codegen_object_new (PathTooLongException_t1040_il2cpp_TypeInfo_var);
		PathTooLongException__ctor_m5521(L_42, L_41, /*hidden argument*/NULL);
		return L_42;
	}

IL_0147:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_43 = String_Format_m1215(NULL /*static, unused*/, (String_t*) &_stringLiteral1521, ((ObjectU5BU5D_t200*)SZArrayNew(ObjectU5BU5D_t200_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		V_0 = L_43;
		String_t* L_44 = V_0;
		int32_t L_45 = ___error;
		IOException_t872 * L_46 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_46, L_44, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_45)), /*hidden argument*/NULL);
		return L_46;
	}

IL_0166:
	{
		String_t* L_47 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1522, L_47, /*hidden argument*/NULL);
		V_0 = L_48;
		String_t* L_49 = V_0;
		int32_t L_50 = ___error;
		IOException_t872 * L_51 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_51, L_49, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_50)), /*hidden argument*/NULL);
		return L_51;
	}

IL_0180:
	{
		String_t* L_52 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_53 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1523, L_52, /*hidden argument*/NULL);
		V_0 = L_53;
		String_t* L_54 = V_0;
		int32_t L_55 = ___error;
		IOException_t872 * L_56 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_56, L_54, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_55)), /*hidden argument*/NULL);
		return L_56;
	}

IL_019a:
	{
		String_t* L_57 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1524, L_57, /*hidden argument*/NULL);
		V_0 = L_58;
		String_t* L_59 = V_0;
		int32_t L_60 = ___error;
		IOException_t872 * L_61 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_61, L_59, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_60)), /*hidden argument*/NULL);
		return L_61;
	}

IL_01b4:
	{
		String_t* L_62 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_63 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1525, L_62, /*hidden argument*/NULL);
		V_0 = L_63;
		String_t* L_64 = V_0;
		int32_t L_65 = ___error;
		IOException_t872 * L_66 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_66, L_64, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_65)), /*hidden argument*/NULL);
		return L_66;
	}

IL_01ce:
	{
		String_t* L_67 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_68 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1526, L_67, /*hidden argument*/NULL);
		V_0 = L_68;
		String_t* L_69 = V_0;
		int32_t L_70 = ___error;
		IOException_t872 * L_71 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_71, L_69, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_70)), /*hidden argument*/NULL);
		return L_71;
	}

IL_01e8:
	{
		int32_t L_72 = ___error;
		IOException_t872 * L_73 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_73, (String_t*) &_stringLiteral1527, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_72)), /*hidden argument*/NULL);
		return L_73;
	}

IL_01fa:
	{
		String_t* L_74 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_75 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1528, L_74, /*hidden argument*/NULL);
		V_0 = L_75;
		String_t* L_76 = V_0;
		int32_t L_77 = ___error;
		IOException_t872 * L_78 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_78, L_76, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_77)), /*hidden argument*/NULL);
		return L_78;
	}

IL_0214:
	{
		V_0 = (String_t*) &_stringLiteral1529;
		String_t* L_79 = V_0;
		int32_t L_80 = ___error;
		IOException_t872 * L_81 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_81, L_79, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_80)), /*hidden argument*/NULL);
		return L_81;
	}

IL_0228:
	{
		int32_t L_82 = ___error;
		int32_t L_83 = L_82;
		Object_t * L_84 = Box(MonoIOError_t1039_il2cpp_TypeInfo_var, &L_83);
		String_t* L_85 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_86 = String_Format_m3946(NULL /*static, unused*/, (String_t*) &_stringLiteral1530, L_84, L_85, /*hidden argument*/NULL);
		V_0 = L_86;
		String_t* L_87 = V_0;
		int32_t L_88 = ___error;
		IOException_t872 * L_89 = (IOException_t872 *)il2cpp_codegen_object_new (IOException_t872_il2cpp_TypeInfo_var);
		IOException__ctor_m5459(L_89, L_87, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_88)), /*hidden argument*/NULL);
		return L_89;
	}
}
// System.Boolean System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)
extern "C" bool MonoIO_CreateDirectory_m5483 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method)
{
	typedef bool (*MonoIO_CreateDirectory_m5483_ftn) (String_t*, int32_t*);
	static MonoIO_CreateDirectory_m5483_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_CreateDirectory_m5483_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___error);
}
// System.String[] System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C" StringU5BU5D_t197* MonoIO_GetFileSystemEntries_m5484 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___path_with_pattern, int32_t ___attrs, int32_t ___mask, int32_t* ___error, const MethodInfo* method)
{
	typedef StringU5BU5D_t197* (*MonoIO_GetFileSystemEntries_m5484_ftn) (String_t*, String_t*, int32_t, int32_t, int32_t*);
	static MonoIO_GetFileSystemEntries_m5484_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileSystemEntries_m5484_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___path_with_pattern, ___attrs, ___mask, ___error);
}
// System.String System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)
extern "C" String_t* MonoIO_GetCurrentDirectory_m5485 (Object_t * __this /* static, unused */, int32_t* ___error, const MethodInfo* method)
{
	typedef String_t* (*MonoIO_GetCurrentDirectory_m5485_ftn) (int32_t*);
	static MonoIO_GetCurrentDirectory_m5485_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetCurrentDirectory_m5485_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___error);
}
// System.Boolean System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)
extern "C" bool MonoIO_DeleteFile_m5486 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method)
{
	typedef bool (*MonoIO_DeleteFile_m5486_ftn) (String_t*, int32_t*);
	static MonoIO_DeleteFile_m5486_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_DeleteFile_m5486_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___error);
}
// System.IO.FileAttributes System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_GetFileAttributes_m5487 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method)
{
	typedef int32_t (*MonoIO_GetFileAttributes_m5487_ftn) (String_t*, int32_t*);
	static MonoIO_GetFileAttributes_m5487_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileAttributes_m5487_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___error);
}
// System.IO.MonoFileType System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_GetFileType_m5488 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method)
{
	typedef int32_t (*MonoIO_GetFileType_m5488_ftn) (IntPtr_t, int32_t*);
	static MonoIO_GetFileType_m5488_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileType_m5488_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___error);
}
// System.Boolean System.IO.MonoIO::ExistsFile(System.String,System.IO.MonoIOError&)
extern TypeInfo* MonoIO_t1038_il2cpp_TypeInfo_var;
extern "C" bool MonoIO_ExistsFile_m5489 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoIO_t1038_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1962);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		String_t* L_0 = ___path;
		int32_t* L_1 = ___error;
		IL2CPP_RUNTIME_CLASS_INIT(MonoIO_t1038_il2cpp_TypeInfo_var);
		int32_t L_2 = MonoIO_GetFileAttributes_m5487(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ((MonoIO_t1038_StaticFields*)MonoIO_t1038_il2cpp_TypeInfo_var->static_fields)->___InvalidFileAttributes_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		int32_t L_5 = V_0;
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)16))))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		return 1;
	}
}
// System.Boolean System.IO.MonoIO::ExistsDirectory(System.String,System.IO.MonoIOError&)
extern TypeInfo* MonoIO_t1038_il2cpp_TypeInfo_var;
extern "C" bool MonoIO_ExistsDirectory_m5490 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoIO_t1038_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1962);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		String_t* L_0 = ___path;
		int32_t* L_1 = ___error;
		IL2CPP_RUNTIME_CLASS_INIT(MonoIO_t1038_il2cpp_TypeInfo_var);
		int32_t L_2 = MonoIO_GetFileAttributes_m5487(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t* L_3 = ___error;
		if ((!(((uint32_t)(*((int32_t*)L_3))) == ((uint32_t)2))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t* L_4 = ___error;
		*((int32_t*)(L_4)) = (int32_t)3;
	}

IL_0010:
	{
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(MonoIO_t1038_il2cpp_TypeInfo_var);
		int32_t L_6 = ((MonoIO_t1038_StaticFields*)MonoIO_t1038_il2cpp_TypeInfo_var->static_fields)->___InvalidFileAttributes_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		int32_t L_7 = V_0;
		if (((int32_t)((int32_t)L_7&(int32_t)((int32_t)16))))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}

IL_0022:
	{
		return 1;
	}
}
// System.Boolean System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)
extern "C" bool MonoIO_GetFileStat_m5491 (Object_t * __this /* static, unused */, String_t* ___path, MonoIOStat_t1036 * ___stat, int32_t* ___error, const MethodInfo* method)
{
	typedef bool (*MonoIO_GetFileStat_m5491_ftn) (String_t*, MonoIOStat_t1036 *, int32_t*);
	static MonoIO_GetFileStat_m5491_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileStat_m5491_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___stat, ___error);
}
// System.IntPtr System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)
extern "C" IntPtr_t MonoIO_Open_m5492 (Object_t * __this /* static, unused */, String_t* ___filename, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___options, int32_t* ___error, const MethodInfo* method)
{
	typedef IntPtr_t (*MonoIO_Open_m5492_ftn) (String_t*, int32_t, int32_t, int32_t, int32_t, int32_t*);
	static MonoIO_Open_m5492_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Open_m5492_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___filename, ___mode, ___access, ___share, ___options, ___error);
}
// System.Boolean System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)
extern "C" bool MonoIO_Close_m5493 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method)
{
	typedef bool (*MonoIO_Close_m5493_ftn) (IntPtr_t, int32_t*);
	static MonoIO_Close_m5493_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Close_m5493_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___error);
}
// System.Int32 System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_Read_m5494 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t102* ___dest, int32_t ___dest_offset, int32_t ___count, int32_t* ___error, const MethodInfo* method)
{
	typedef int32_t (*MonoIO_Read_m5494_ftn) (IntPtr_t, ByteU5BU5D_t102*, int32_t, int32_t, int32_t*);
	static MonoIO_Read_m5494_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Read_m5494_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___dest, ___dest_offset, ___count, ___error);
}
// System.Int32 System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_Write_m5495 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t102* ___src, int32_t ___src_offset, int32_t ___count, int32_t* ___error, const MethodInfo* method)
{
	typedef int32_t (*MonoIO_Write_m5495_ftn) (IntPtr_t, ByteU5BU5D_t102*, int32_t, int32_t, int32_t*);
	static MonoIO_Write_m5495_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Write_m5495_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___src, ___src_offset, ___count, ___error);
}
// System.Int64 System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
extern "C" int64_t MonoIO_Seek_m5496 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int64_t ___offset, int32_t ___origin, int32_t* ___error, const MethodInfo* method)
{
	typedef int64_t (*MonoIO_Seek_m5496_ftn) (IntPtr_t, int64_t, int32_t, int32_t*);
	static MonoIO_Seek_m5496_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Seek_m5496_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___offset, ___origin, ___error);
}
// System.Int64 System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)
extern "C" int64_t MonoIO_GetLength_m5497 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method)
{
	typedef int64_t (*MonoIO_GetLength_m5497_ftn) (IntPtr_t, int32_t*);
	static MonoIO_GetLength_m5497_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetLength_m5497_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___error);
}
// System.Boolean System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)
extern "C" bool MonoIO_SetLength_m5498 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int64_t ___length, int32_t* ___error, const MethodInfo* method)
{
	typedef bool (*MonoIO_SetLength_m5498_ftn) (IntPtr_t, int64_t, int32_t*);
	static MonoIO_SetLength_m5498_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_SetLength_m5498_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___length, ___error);
}
// System.IntPtr System.IO.MonoIO::get_ConsoleOutput()
extern "C" IntPtr_t MonoIO_get_ConsoleOutput_m5499 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef IntPtr_t (*MonoIO_get_ConsoleOutput_m5499_ftn) ();
	static MonoIO_get_ConsoleOutput_m5499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_ConsoleOutput_m5499_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleOutput()");
	return _il2cpp_icall_func();
}
// System.IntPtr System.IO.MonoIO::get_ConsoleInput()
extern "C" IntPtr_t MonoIO_get_ConsoleInput_m5500 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef IntPtr_t (*MonoIO_get_ConsoleInput_m5500_ftn) ();
	static MonoIO_get_ConsoleInput_m5500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_ConsoleInput_m5500_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleInput()");
	return _il2cpp_icall_func();
}
// System.IntPtr System.IO.MonoIO::get_ConsoleError()
extern "C" IntPtr_t MonoIO_get_ConsoleError_m5501 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef IntPtr_t (*MonoIO_get_ConsoleError_m5501_ftn) ();
	static MonoIO_get_ConsoleError_m5501_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_ConsoleError_m5501_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleError()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_VolumeSeparatorChar()
extern "C" uint16_t MonoIO_get_VolumeSeparatorChar_m5502 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_VolumeSeparatorChar_m5502_ftn) ();
	static MonoIO_get_VolumeSeparatorChar_m5502_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_VolumeSeparatorChar_m5502_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_VolumeSeparatorChar()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_DirectorySeparatorChar()
extern "C" uint16_t MonoIO_get_DirectorySeparatorChar_m5503 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_DirectorySeparatorChar_m5503_ftn) ();
	static MonoIO_get_DirectorySeparatorChar_m5503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_DirectorySeparatorChar_m5503_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_DirectorySeparatorChar()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_AltDirectorySeparatorChar()
extern "C" uint16_t MonoIO_get_AltDirectorySeparatorChar_m5504 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_AltDirectorySeparatorChar_m5504_ftn) ();
	static MonoIO_get_AltDirectorySeparatorChar_m5504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_AltDirectorySeparatorChar_m5504_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_AltDirectorySeparatorChar()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_PathSeparator()
extern "C" uint16_t MonoIO_get_PathSeparator_m5505 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_PathSeparator_m5505_ftn) ();
	static MonoIO_get_PathSeparator_m5505_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_PathSeparator_m5505_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_PathSeparator()");
	return _il2cpp_icall_func();
}
#ifndef _MSC_VER
#else
#endif
// System.IO.MonoIOError
#include "mscorlib_System_IO_MonoIOErrorMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.IO.MonoIOStat
#include "mscorlib_System_IO_MonoIOStatMethodDeclarations.h"



// Conversion methods for marshalling of: System.IO.MonoIOStat
void MonoIOStat_t1036_marshal(const MonoIOStat_t1036& unmarshaled, MonoIOStat_t1036_marshaled& marshaled)
{
	marshaled.___Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___Name_0);
	marshaled.___Attributes_1 = unmarshaled.___Attributes_1;
	marshaled.___Length_2 = unmarshaled.___Length_2;
	marshaled.___CreationTime_3 = unmarshaled.___CreationTime_3;
	marshaled.___LastAccessTime_4 = unmarshaled.___LastAccessTime_4;
	marshaled.___LastWriteTime_5 = unmarshaled.___LastWriteTime_5;
}
void MonoIOStat_t1036_marshal_back(const MonoIOStat_t1036_marshaled& marshaled, MonoIOStat_t1036& unmarshaled)
{
	unmarshaled.___Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___Name_0);
	unmarshaled.___Attributes_1 = marshaled.___Attributes_1;
	unmarshaled.___Length_2 = marshaled.___Length_2;
	unmarshaled.___CreationTime_3 = marshaled.___CreationTime_3;
	unmarshaled.___LastAccessTime_4 = marshaled.___LastAccessTime_4;
	unmarshaled.___LastWriteTime_5 = marshaled.___LastWriteTime_5;
}
// Conversion method for clean up from marshalling of: System.IO.MonoIOStat
void MonoIOStat_t1036_marshal_cleanup(MonoIOStat_t1036_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
}
// System.IO.Path
#include "mscorlib_System_IO_Path.h"
#ifndef _MSC_VER
#else
#endif
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"

// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.IO.Directory
#include "mscorlib_System_IO_DirectoryMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"


// System.Void System.IO.Path::.cctor()
extern TypeInfo* MonoIO_t1038_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t300_il2cpp_TypeInfo_var;
extern "C" void Path__cctor_m5506 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoIO_t1038_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1962);
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		CharU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(71);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoIO_t1038_il2cpp_TypeInfo_var);
		uint16_t L_0 = MonoIO_get_VolumeSeparatorChar_m5502(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___VolumeSeparatorChar_5 = L_0;
		uint16_t L_1 = MonoIO_get_DirectorySeparatorChar_m5503(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2 = L_1;
		uint16_t L_2 = MonoIO_get_AltDirectorySeparatorChar_m5504(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1 = L_2;
		uint16_t L_3 = MonoIO_get_PathSeparator_m5505(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___PathSeparator_3 = L_3;
		CharU5BU5D_t300* L_4 = Path_GetInvalidPathChars_m5516(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___InvalidPathChars_0 = L_4;
		String_t* L_5 = Char_ToString_m2536((&((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2), /*hidden argument*/NULL);
		((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorStr_4 = L_5;
		CharU5BU5D_t300* L_6 = ((CharU5BU5D_t300*)SZArrayNew(CharU5BU5D_t300_il2cpp_TypeInfo_var, 3));
		uint16_t L_7 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_6, 0)) = (uint16_t)L_7;
		CharU5BU5D_t300* L_8 = L_6;
		uint16_t L_9 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, 1)) = (uint16_t)L_9;
		CharU5BU5D_t300* L_10 = L_8;
		uint16_t L_11 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___VolumeSeparatorChar_5;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 2)) = (uint16_t)L_11;
		((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___PathSeparatorChars_6 = L_10;
		uint16_t L_12 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		uint16_t L_13 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___VolumeSeparatorChar_5;
		((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___dirEqualsVolume_7 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		return;
	}
}
// System.String System.IO.Path::Combine(System.String,System.String)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Path_Combine_m3536 (Object_t * __this /* static, unused */, String_t* ___path1, String_t* ___path2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	{
		String_t* L_0 = ___path1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral1531, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___path2;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t341 * L_3 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_3, (String_t*) &_stringLiteral1532, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		String_t* L_4 = ___path1;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m1158(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_6 = ___path2;
		return L_6;
	}

IL_0026:
	{
		String_t* L_7 = ___path2;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m1158(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_9 = ___path1;
		return L_9;
	}

IL_0030:
	{
		String_t* L_10 = ___path1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		CharU5BU5D_t300* L_11 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___InvalidPathChars_0;
		NullCheck(L_10);
		int32_t L_12 = String_IndexOfAny_m2542(L_10, L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t313 * L_13 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_13, (String_t*) &_stringLiteral1492, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0049:
	{
		String_t* L_14 = ___path2;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		CharU5BU5D_t300* L_15 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___InvalidPathChars_0;
		NullCheck(L_14);
		int32_t L_16 = String_IndexOfAny_m2542(L_14, L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentException_t313 * L_17 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_17, (String_t*) &_stringLiteral1492, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0062:
	{
		String_t* L_18 = ___path2;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_19 = Path_IsPathRooted_m5515(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_20 = ___path2;
		return L_20;
	}

IL_006c:
	{
		String_t* L_21 = ___path1;
		String_t* L_22 = ___path1;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m1158(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		uint16_t L_24 = String_get_Chars_m1306(L_21, ((int32_t)((int32_t)L_23-(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_24;
		uint16_t L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_26 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00a0;
		}
	}
	{
		uint16_t L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_28 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_27) == ((int32_t)L_28)))
		{
			goto IL_00a0;
		}
	}
	{
		uint16_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_30 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___VolumeSeparatorChar_5;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_31 = ___path1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_32 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_33 = ___path2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m1179(NULL /*static, unused*/, L_31, L_32, L_33, /*hidden argument*/NULL);
		return L_34;
	}

IL_00a0:
	{
		String_t* L_35 = ___path1;
		String_t* L_36 = ___path2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Concat_m1175(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}
}
// System.String System.IO.Path::CleanPath(System.String)
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Path_CleanPath_m5507 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		CharU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(71);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	CharU5BU5D_t300* V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint16_t V_9 = 0x0;
	{
		String_t* L_0 = ___s;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1158(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		String_t* L_2 = ___s;
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m1306(L_2, 0, /*hidden argument*/NULL);
		V_3 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)2)))
		{
			goto IL_0029;
		}
	}
	{
		uint16_t L_5 = V_3;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6 = ___s;
		NullCheck(L_6);
		uint16_t L_7 = String_get_Chars_m1306(L_6, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0029;
		}
	}
	{
		V_2 = 2;
	}

IL_0029:
	{
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		uint16_t L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_10 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_003d;
		}
	}
	{
		uint16_t L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_12 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_003f;
		}
	}

IL_003d:
	{
		String_t* L_13 = ___s;
		return L_13;
	}

IL_003f:
	{
		int32_t L_14 = V_2;
		V_4 = L_14;
		goto IL_0097;
	}

IL_0044:
	{
		String_t* L_15 = ___s;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m1306(L_15, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		uint16_t L_18 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_19 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_0062;
		}
	}
	{
		uint16_t L_20 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_21 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		goto IL_0091;
	}

IL_0062:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_22+(int32_t)1))) == ((uint32_t)L_23))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
		goto IL_0091;
	}

IL_006f:
	{
		String_t* L_25 = ___s;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		uint16_t L_27 = String_get_Chars_m1306(L_25, ((int32_t)((int32_t)L_26+(int32_t)1)), /*hidden argument*/NULL);
		V_5 = L_27;
		uint16_t L_28 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_29 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_28) == ((int32_t)L_29)))
		{
			goto IL_008d;
		}
	}
	{
		uint16_t L_30 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_31 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_0091;
		}
	}

IL_008d:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_0091:
	{
		int32_t L_33 = V_4;
		V_4 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_0097:
	{
		int32_t L_34 = V_4;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_36 = V_1;
		if (L_36)
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_37 = ___s;
		return L_37;
	}

IL_00a1:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_1;
		V_6 = ((CharU5BU5D_t300*)SZArrayNew(CharU5BU5D_t300_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_38-(int32_t)L_39))));
		int32_t L_40 = V_2;
		if (!L_40)
		{
			goto IL_00ba;
		}
	}
	{
		CharU5BU5D_t300* L_41 = V_6;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_41, 0)) = (uint16_t)((int32_t)92);
		CharU5BU5D_t300* L_42 = V_6;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_42, 1)) = (uint16_t)((int32_t)92);
	}

IL_00ba:
	{
		int32_t L_43 = V_2;
		V_7 = L_43;
		int32_t L_44 = V_2;
		V_8 = L_44;
		goto IL_013d;
	}

IL_00c5:
	{
		String_t* L_45 = ___s;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		uint16_t L_47 = String_get_Chars_m1306(L_45, L_46, /*hidden argument*/NULL);
		V_9 = L_47;
		uint16_t L_48 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_49 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_48) == ((int32_t)L_49)))
		{
			goto IL_00ef;
		}
	}
	{
		uint16_t L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_51 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_50) == ((int32_t)L_51)))
		{
			goto IL_00ef;
		}
	}
	{
		CharU5BU5D_t300* L_52 = V_6;
		int32_t L_53 = V_8;
		int32_t L_54 = L_53;
		V_8 = ((int32_t)((int32_t)L_54+(int32_t)1));
		uint16_t L_55 = V_9;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_54);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_52, L_54)) = (uint16_t)L_55;
		goto IL_0137;
	}

IL_00ef:
	{
		int32_t L_56 = V_8;
		CharU5BU5D_t300* L_57 = V_6;
		NullCheck(L_57);
		if ((((int32_t)((int32_t)((int32_t)L_56+(int32_t)1))) == ((int32_t)(((int32_t)(((Array_t *)L_57)->max_length))))))
		{
			goto IL_0137;
		}
	}
	{
		CharU5BU5D_t300* L_58 = V_6;
		int32_t L_59 = V_8;
		int32_t L_60 = L_59;
		V_8 = ((int32_t)((int32_t)L_60+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_61 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_60);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_58, L_60)) = (uint16_t)L_61;
		goto IL_0130;
	}

IL_010a:
	{
		String_t* L_62 = ___s;
		int32_t L_63 = V_7;
		NullCheck(L_62);
		uint16_t L_64 = String_get_Chars_m1306(L_62, ((int32_t)((int32_t)L_63+(int32_t)1)), /*hidden argument*/NULL);
		V_9 = L_64;
		uint16_t L_65 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_66 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_012a;
		}
	}
	{
		uint16_t L_67 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_68 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_67) == ((int32_t)L_68)))
		{
			goto IL_012a;
		}
	}
	{
		goto IL_0137;
	}

IL_012a:
	{
		int32_t L_69 = V_7;
		V_7 = ((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0130:
	{
		int32_t L_70 = V_7;
		int32_t L_71 = V_0;
		if ((((int32_t)L_70) < ((int32_t)((int32_t)((int32_t)L_71-(int32_t)1)))))
		{
			goto IL_010a;
		}
	}

IL_0137:
	{
		int32_t L_72 = V_7;
		V_7 = ((int32_t)((int32_t)L_72+(int32_t)1));
	}

IL_013d:
	{
		int32_t L_73 = V_7;
		int32_t L_74 = V_0;
		if ((((int32_t)L_73) >= ((int32_t)L_74)))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_75 = V_8;
		CharU5BU5D_t300* L_76 = V_6;
		NullCheck(L_76);
		if ((((int32_t)L_75) < ((int32_t)(((int32_t)(((Array_t *)L_76)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_014d:
	{
		CharU5BU5D_t300* L_77 = V_6;
		String_t* L_78 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_78 = String_CreateString_m1265(L_78, L_77, /*hidden argument*/NULL);
		return L_78;
	}
}
// System.String System.IO.Path::GetDirectoryName(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t424_il2cpp_TypeInfo_var;
extern "C" String_t* Path_GetDirectoryName_m5508 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		Char_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m1163(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t313 * L_3 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_3, (String_t*) &_stringLiteral1533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		String_t* L_4 = ___path;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_5 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_6 = Path_GetPathRoot_m5514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m1163(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (String_t*)NULL;
	}

IL_002b:
	{
		String_t* L_9 = ___path;
		NullCheck(L_9);
		String_t* L_10 = String_Trim_m1194(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m1158(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		ArgumentException_t313 * L_12 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_12, (String_t*) &_stringLiteral1534, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0043:
	{
		String_t* L_13 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		CharU5BU5D_t300* L_14 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___InvalidPathChars_0;
		NullCheck(L_13);
		int32_t L_15 = String_IndexOfAny_m2542(L_13, L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) <= ((int32_t)(-1))))
		{
			goto IL_005c;
		}
	}
	{
		ArgumentException_t313 * L_16 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_16, (String_t*) &_stringLiteral1434, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_005c:
	{
		String_t* L_17 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		CharU5BU5D_t300* L_18 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___PathSeparatorChars_6;
		NullCheck(L_17);
		int32_t L_19 = String_LastIndexOfAny_m3934(L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		int32_t L_20 = V_0;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_006f:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_23 = ___path;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		String_t* L_25 = String_Substring_m1197(L_23, 0, L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		String_t* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = String_get_Length_m1158(L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) < ((int32_t)2)))
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_29 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		uint16_t L_32 = String_get_Chars_m1306(L_30, ((int32_t)((int32_t)L_31-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_33 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_34 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_35 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		uint16_t L_36 = L_35;
		Object_t * L_37 = Box(Char_t424_il2cpp_TypeInfo_var, &L_36);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = String_Concat_m1185(NULL /*static, unused*/, L_34, L_37, /*hidden argument*/NULL);
		return L_38;
	}

IL_00b1:
	{
		String_t* L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_40 = Path_CleanPath_m5507(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		return L_40;
	}

IL_00b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_41;
	}
}
// System.String System.IO.Path::GetFileName(System.String)
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" String_t* Path_GetFileName_m5509 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___path;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___path;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1158(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		String_t* L_3 = ___path;
		return L_3;
	}

IL_000d:
	{
		String_t* L_4 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		CharU5BU5D_t300* L_5 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___InvalidPathChars_0;
		NullCheck(L_4);
		int32_t L_6 = String_IndexOfAny_m2542(L_4, L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t313 * L_7 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_7, (String_t*) &_stringLiteral1492, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0026:
	{
		String_t* L_8 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		CharU5BU5D_t300* L_9 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___PathSeparatorChars_6;
		NullCheck(L_8);
		int32_t L_10 = String_LastIndexOfAny_m3934(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_12 = ___path;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m1193(L_12, ((int32_t)((int32_t)L_13+(int32_t)1)), /*hidden argument*/NULL);
		return L_14;
	}

IL_0040:
	{
		String_t* L_15 = ___path;
		return L_15;
	}
}
// System.String System.IO.Path::GetFullPath(System.String)
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern "C" String_t* Path_GetFullPath_m5510 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_InsecureGetFullPath_m5512(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String System.IO.Path::WindowsDriveAdjustment(System.String)
extern TypeInfo* Char_t424_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern "C" String_t* Path_WindowsDriveAdjustment_m5511 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___path;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1158(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) >= ((int32_t)2)))
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ___path;
		return L_2;
	}

IL_000b:
	{
		String_t* L_3 = ___path;
		NullCheck(L_3);
		uint16_t L_4 = String_get_Chars_m1306(L_3, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_5 = ___path;
		NullCheck(L_5);
		uint16_t L_6 = String_get_Chars_m1306(L_5, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t424_il2cpp_TypeInfo_var);
		bool L_7 = Char_IsLetter_m3879(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0026;
		}
	}

IL_0024:
	{
		String_t* L_8 = ___path;
		return L_8;
	}

IL_0026:
	{
		String_t* L_9 = Directory_GetCurrentDirectory_m5375(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10 = ___path;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m1158(L_10, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_12 = V_0;
		NullCheck(L_12);
		uint16_t L_13 = String_get_Chars_m1306(L_12, 0, /*hidden argument*/NULL);
		String_t* L_14 = ___path;
		NullCheck(L_14);
		uint16_t L_15 = String_get_Chars_m1306(L_14, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)L_15))))
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_16 = V_0;
		___path = L_16;
		goto IL_005d;
	}

IL_004c:
	{
		String_t* L_17 = ___path;
		uint16_t L_18 = ((int32_t)92);
		Object_t * L_19 = Box(Char_t424_il2cpp_TypeInfo_var, &L_18);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m1185(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
		___path = L_20;
	}

IL_005d:
	{
		goto IL_00cb;
	}

IL_005f:
	{
		String_t* L_21 = ___path;
		NullCheck(L_21);
		uint16_t L_22 = String_get_Chars_m1306(L_21, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_23 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_24 = ___path;
		NullCheck(L_24);
		uint16_t L_25 = String_get_Chars_m1306(L_24, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_26 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_27 = V_0;
		NullCheck(L_27);
		uint16_t L_28 = String_get_Chars_m1306(L_27, 0, /*hidden argument*/NULL);
		String_t* L_29 = ___path;
		NullCheck(L_29);
		uint16_t L_30 = String_get_Chars_m1306(L_29, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)L_30))))
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_31 = V_0;
		String_t* L_32 = ___path;
		String_t* L_33 = ___path;
		NullCheck(L_33);
		int32_t L_34 = String_get_Length_m1158(L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		String_t* L_35 = String_Substring_m1197(L_32, 2, ((int32_t)((int32_t)L_34-(int32_t)2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_36 = Path_Combine_m3536(NULL /*static, unused*/, L_31, L_35, /*hidden argument*/NULL);
		___path = L_36;
		goto IL_00cb;
	}

IL_00a6:
	{
		String_t* L_37 = ___path;
		NullCheck(L_37);
		String_t* L_38 = String_Substring_m1197(L_37, 0, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_39 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_40 = ___path;
		String_t* L_41 = ___path;
		NullCheck(L_41);
		int32_t L_42 = String_get_Length_m1158(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		String_t* L_43 = String_Substring_m1197(L_40, 2, ((int32_t)((int32_t)L_42-(int32_t)2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m1179(NULL /*static, unused*/, L_38, L_39, L_43, /*hidden argument*/NULL);
		___path = L_44;
	}

IL_00cb:
	{
		String_t* L_45 = ___path;
		return L_45;
	}
}
// System.String System.IO.Path::InsecureGetFullPath(System.String)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t424_il2cpp_TypeInfo_var;
extern "C" String_t* Path_InsecureGetFullPath_m5512 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Char_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	uint16_t V_1 = 0x0;
	String_t* V_2 = {0};
	{
		String_t* L_0 = ___path;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral1426, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___path;
		NullCheck(L_2);
		String_t* L_3 = String_Trim_m1194(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1158(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_5 = Locale_GetText_m4424(NULL /*static, unused*/, (String_t*) &_stringLiteral1535, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		ArgumentException_t313 * L_7 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002d:
	{
		bool L_8 = Environment_get_IsRunningOnWindows_m7673(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		String_t* L_9 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_10 = Path_WindowsDriveAdjustment_m5511(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		___path = L_10;
	}

IL_003e:
	{
		String_t* L_11 = ___path;
		String_t* L_12 = ___path;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m1158(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		uint16_t L_14 = String_get_Chars_m1306(L_11, ((int32_t)((int32_t)L_13-(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_14;
		String_t* L_15 = ___path;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m1158(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)2)))
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_17 = ___path;
		NullCheck(L_17);
		uint16_t L_18 = String_get_Chars_m1306(L_17, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_19 = Path_IsDsc_m5513(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_20 = ___path;
		NullCheck(L_20);
		uint16_t L_21 = String_get_Chars_m1306(L_20, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_22 = Path_IsDsc_m5513(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_23 = ___path;
		NullCheck(L_23);
		int32_t L_24 = String_get_Length_m1158(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_25 = ___path;
		String_t* L_26 = ___path;
		NullCheck(L_26);
		uint16_t L_27 = String_get_Chars_m1306(L_26, 0, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_28 = String_IndexOf_m1192(L_25, L_27, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_009a;
		}
	}

IL_008f:
	{
		ArgumentException_t313 * L_29 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_29, (String_t*) &_stringLiteral1536, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_009a:
	{
		String_t* L_30 = ___path;
		NullCheck(L_30);
		uint16_t L_31 = String_get_Chars_m1306(L_30, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_32 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_00bc;
		}
	}
	{
		String_t* L_33 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_34 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		uint16_t L_35 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_33);
		String_t* L_36 = String_Replace_m1311(L_33, L_34, L_35, /*hidden argument*/NULL);
		___path = L_36;
	}

IL_00bc:
	{
		String_t* L_37 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_38 = Path_CanonicalizePath_m5519(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		___path = L_38;
		goto IL_016c;
	}

IL_00cb:
	{
		String_t* L_39 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_40 = Path_IsPathRooted_m5515(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_41 = Directory_GetCurrentDirectory_m5375(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_42 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_43 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m1179(NULL /*static, unused*/, L_41, L_42, L_43, /*hidden argument*/NULL);
		___path = L_44;
		goto IL_0162;
	}

IL_00ec:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_45 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_46 = ___path;
		NullCheck(L_46);
		int32_t L_47 = String_get_Length_m1158(L_46, /*hidden argument*/NULL);
		if ((((int32_t)L_47) < ((int32_t)2)))
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_48 = ___path;
		NullCheck(L_48);
		uint16_t L_49 = String_get_Chars_m1306(L_48, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_50 = Path_IsDsc_m5513(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_51 = ___path;
		NullCheck(L_51);
		uint16_t L_52 = String_get_Chars_m1306(L_51, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_53 = Path_IsDsc_m5513(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_54 = Directory_GetCurrentDirectory_m5375(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_54;
		String_t* L_55 = V_2;
		NullCheck(L_55);
		uint16_t L_56 = String_get_Chars_m1306(L_55, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_57 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_0142;
		}
	}
	{
		String_t* L_58 = V_2;
		NullCheck(L_58);
		String_t* L_59 = String_Substring_m1197(L_58, 0, 2, /*hidden argument*/NULL);
		String_t* L_60 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = String_Concat_m1175(NULL /*static, unused*/, L_59, L_60, /*hidden argument*/NULL);
		___path = L_61;
		goto IL_0162;
	}

IL_0142:
	{
		String_t* L_62 = V_2;
		String_t* L_63 = V_2;
		String_t* L_64 = V_2;
		NullCheck(L_64);
		int32_t L_65 = String_IndexOf_m1208(L_64, (String_t*) &_stringLiteral191, /*hidden argument*/NULL);
		NullCheck(L_63);
		int32_t L_66 = String_IndexOf_m1192(L_63, ((int32_t)92), ((int32_t)((int32_t)L_65+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_62);
		String_t* L_67 = String_Substring_m1197(L_62, 0, L_66, /*hidden argument*/NULL);
		___path = L_67;
	}

IL_0162:
	{
		String_t* L_68 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_69 = Path_CanonicalizePath_m5519(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		___path = L_69;
	}

IL_016c:
	{
		uint16_t L_70 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_71 = Path_IsDsc_m5513(NULL /*static, unused*/, L_70, /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_019d;
		}
	}
	{
		String_t* L_72 = ___path;
		String_t* L_73 = ___path;
		NullCheck(L_73);
		int32_t L_74 = String_get_Length_m1158(L_73, /*hidden argument*/NULL);
		NullCheck(L_72);
		uint16_t L_75 = String_get_Chars_m1306(L_72, ((int32_t)((int32_t)L_74-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_76 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_75) == ((int32_t)L_76)))
		{
			goto IL_019d;
		}
	}
	{
		String_t* L_77 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_78 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		uint16_t L_79 = L_78;
		Object_t * L_80 = Box(Char_t424_il2cpp_TypeInfo_var, &L_79);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_81 = String_Concat_m1185(NULL /*static, unused*/, L_77, L_80, /*hidden argument*/NULL);
		___path = L_81;
	}

IL_019d:
	{
		String_t* L_82 = ___path;
		return L_82;
	}
}
// System.Boolean System.IO.Path::IsDsc(System.Char)
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern "C" bool Path_IsDsc_m5513 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		uint16_t L_0 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_1 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		uint16_t L_2 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_3 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.String System.IO.Path::GetPathRoot(System.String)
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Path_GetPathRoot_m5514 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* G_B10_0 = {0};
	{
		String_t* L_0 = ___path;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___path;
		NullCheck(L_1);
		String_t* L_2 = String_Trim_m1194(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1158(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_t313 * L_4 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_4, (String_t*) &_stringLiteral1537, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001d:
	{
		String_t* L_5 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_6 = Path_IsPathRooted_m5515(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_7;
	}

IL_002b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_8 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_9 = ___path;
		NullCheck(L_9);
		uint16_t L_10 = String_get_Chars_m1306(L_9, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_11 = Path_IsDsc_m5513(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_12 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorStr_4;
		G_B10_0 = L_12;
		goto IL_004e;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B10_0 = L_13;
	}

IL_004e:
	{
		return G_B10_0;
	}

IL_004f:
	{
		V_0 = 2;
		String_t* L_14 = ___path;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1158(L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_16 = ___path;
		NullCheck(L_16);
		uint16_t L_17 = String_get_Chars_m1306(L_16, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_18 = Path_IsDsc_m5513(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_19 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorStr_4;
		return L_19;
	}

IL_006e:
	{
		String_t* L_20 = ___path;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m1158(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_21) >= ((int32_t)2)))
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_22;
	}

IL_007d:
	{
		String_t* L_23 = ___path;
		NullCheck(L_23);
		uint16_t L_24 = String_get_Chars_m1306(L_23, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_25 = Path_IsDsc_m5513(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_010f;
		}
	}
	{
		String_t* L_26 = ___path;
		NullCheck(L_26);
		uint16_t L_27 = String_get_Chars_m1306(L_26, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_28 = Path_IsDsc_m5513(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_00a5;
	}

IL_00a1:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00a5:
	{
		int32_t L_30 = V_0;
		String_t* L_31 = ___path;
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m1158(L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_30) >= ((int32_t)L_32)))
		{
			goto IL_00bc;
		}
	}
	{
		String_t* L_33 = ___path;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		uint16_t L_35 = String_get_Chars_m1306(L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_36 = Path_IsDsc_m5513(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00a1;
		}
	}

IL_00bc:
	{
		int32_t L_37 = V_0;
		String_t* L_38 = ___path;
		NullCheck(L_38);
		int32_t L_39 = String_get_Length_m1158(L_38, /*hidden argument*/NULL);
		if ((((int32_t)L_37) >= ((int32_t)L_39)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)((int32_t)L_40+(int32_t)1));
		goto IL_00cf;
	}

IL_00cb:
	{
		int32_t L_41 = V_0;
		V_0 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00cf:
	{
		int32_t L_42 = V_0;
		String_t* L_43 = ___path;
		NullCheck(L_43);
		int32_t L_44 = String_get_Length_m1158(L_43, /*hidden argument*/NULL);
		if ((((int32_t)L_42) >= ((int32_t)L_44)))
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_45 = ___path;
		int32_t L_46 = V_0;
		NullCheck(L_45);
		uint16_t L_47 = String_get_Chars_m1306(L_45, L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_48 = Path_IsDsc_m5513(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_00cb;
		}
	}

IL_00e6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_49 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_50 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_51 = ___path;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		String_t* L_53 = String_Substring_m1197(L_51, 2, ((int32_t)((int32_t)L_52-(int32_t)2)), /*hidden argument*/NULL);
		uint16_t L_54 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		uint16_t L_55 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_53);
		String_t* L_56 = String_Replace_m1311(L_53, L_54, L_55, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_57 = String_Concat_m1179(NULL /*static, unused*/, L_49, L_50, L_56, /*hidden argument*/NULL);
		return L_57;
	}

IL_010f:
	{
		String_t* L_58 = ___path;
		NullCheck(L_58);
		uint16_t L_59 = String_get_Chars_m1306(L_58, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_60 = Path_IsDsc_m5513(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0123;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_61 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorStr_4;
		return L_61;
	}

IL_0123:
	{
		String_t* L_62 = ___path;
		NullCheck(L_62);
		uint16_t L_63 = String_get_Chars_m1306(L_62, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_64 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
		{
			goto IL_014e;
		}
	}
	{
		String_t* L_65 = ___path;
		NullCheck(L_65);
		int32_t L_66 = String_get_Length_m1158(L_65, /*hidden argument*/NULL);
		if ((((int32_t)L_66) < ((int32_t)3)))
		{
			goto IL_014c;
		}
	}
	{
		String_t* L_67 = ___path;
		NullCheck(L_67);
		uint16_t L_68 = String_get_Chars_m1306(L_67, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_69 = Path_IsDsc_m5513(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_70 = V_0;
		V_0 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_014c:
	{
		goto IL_015b;
	}

IL_014e:
	{
		String_t* L_71 = Directory_GetCurrentDirectory_m5375(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_71);
		String_t* L_72 = String_Substring_m1197(L_71, 0, 2, /*hidden argument*/NULL);
		return L_72;
	}

IL_015b:
	{
		String_t* L_73 = ___path;
		int32_t L_74 = V_0;
		NullCheck(L_73);
		String_t* L_75 = String_Substring_m1197(L_73, 0, L_74, /*hidden argument*/NULL);
		return L_75;
	}
}
// System.Boolean System.IO.Path::IsPathRooted(System.String)
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" bool Path_IsPathRooted_m5515 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	{
		String_t* L_0 = ___path;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___path;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1158(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return 0;
	}

IL_000d:
	{
		String_t* L_3 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		CharU5BU5D_t300* L_4 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___InvalidPathChars_0;
		NullCheck(L_3);
		int32_t L_5 = String_IndexOfAny_m2542(L_3, L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t313 * L_6 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_6, (String_t*) &_stringLiteral1492, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0026:
	{
		String_t* L_7 = ___path;
		NullCheck(L_7);
		uint16_t L_8 = String_get_Chars_m1306(L_7, 0, /*hidden argument*/NULL);
		V_0 = L_8;
		uint16_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_10 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0061;
		}
	}
	{
		uint16_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_12 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_13 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___dirEqualsVolume_7;
		if (L_13)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_14 = ___path;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1158(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_16 = ___path;
		NullCheck(L_16);
		uint16_t L_17 = String_get_Chars_m1306(L_16, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_18 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___VolumeSeparatorChar_5;
		G_B11_0 = ((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B11_0 = 0;
	}

IL_005f:
	{
		G_B13_0 = G_B11_0;
		goto IL_0062;
	}

IL_0061:
	{
		G_B13_0 = 1;
	}

IL_0062:
	{
		return G_B13_0;
	}
}
// System.Char[] System.IO.Path::GetInvalidPathChars()
extern TypeInfo* CharU5BU5D_t300_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t1424____U24U24fieldU2D30_20_FieldInfo_var;
extern "C" CharU5BU5D_t300* Path_GetInvalidPathChars_m5516 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(71);
		U3CPrivateImplementationDetailsU3E_t1424____U24U24fieldU2D30_20_FieldInfo_var = il2cpp_codegen_field_info_from_index(1847, 20);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Environment_get_IsRunningOnWindows_m7673(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t300* L_1 = ((CharU5BU5D_t300*)SZArrayNew(CharU5BU5D_t300_il2cpp_TypeInfo_var, ((int32_t)36)));
		RuntimeHelpers_InitializeArray_m2417(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t1424____U24U24fieldU2D30_20_FieldInfo_var), /*hidden argument*/NULL);
		return L_1;
	}

IL_001a:
	{
		return ((CharU5BU5D_t300*)SZArrayNew(CharU5BU5D_t300_il2cpp_TypeInfo_var, 1));
	}
}
// System.String System.IO.Path::GetServerAndShare(System.String)
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern "C" String_t* Path_GetServerAndShare_m5517 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 2;
		goto IL_0008;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		String_t* L_2 = ___path;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1158(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_4 = ___path;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint16_t L_6 = String_get_Chars_m1306(L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_7 = Path_IsDsc_m5513(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0004;
		}
	}

IL_001f:
	{
		int32_t L_8 = V_0;
		String_t* L_9 = ___path;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m1158(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		goto IL_0032;
	}

IL_002e:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_13 = V_0;
		String_t* L_14 = ___path;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1158(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_16 = ___path;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		uint16_t L_18 = String_get_Chars_m1306(L_16, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_19 = Path_IsDsc_m5513(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_002e;
		}
	}

IL_0049:
	{
		String_t* L_20 = ___path;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		String_t* L_22 = String_Substring_m1197(L_20, 2, ((int32_t)((int32_t)L_21-(int32_t)2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_23 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		uint16_t L_24 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_22);
		String_t* L_25 = String_Replace_m1311(L_22, L_23, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Boolean System.IO.Path::SameRoot(System.String,System.String)
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t342_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Path_SameRoot_m5518 (Object_t * __this /* static, unused */, String_t* ___root, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		CultureInfo_t342_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	uint16_t V_2 = 0x0;
	int32_t G_B18_0 = 0;
	{
		String_t* L_0 = ___root;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1158(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___path;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1158(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return 0;
	}

IL_0014:
	{
		String_t* L_4 = ___root;
		NullCheck(L_4);
		uint16_t L_5 = String_get_Chars_m1306(L_4, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_6 = Path_IsDsc_m5513(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_7 = ___root;
		NullCheck(L_7);
		uint16_t L_8 = String_get_Chars_m1306(L_7, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_9 = Path_IsDsc_m5513(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_10 = ___path;
		NullCheck(L_10);
		uint16_t L_11 = String_get_Chars_m1306(L_10, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_12 = Path_IsDsc_m5513(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = ___path;
		NullCheck(L_13);
		uint16_t L_14 = String_get_Chars_m1306(L_13, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_15 = Path_IsDsc_m5513(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_004e;
		}
	}

IL_004c:
	{
		return 0;
	}

IL_004e:
	{
		String_t* L_16 = ___root;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_17 = Path_GetServerAndShare_m5517(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		String_t* L_18 = ___path;
		String_t* L_19 = Path_GetServerAndShare_m5517(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		String_t* L_20 = V_0;
		String_t* L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t342_il2cpp_TypeInfo_var);
		CultureInfo_t342 * L_22 = CultureInfo_get_InvariantCulture_m1260(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_23 = String_Compare_m2422(NULL /*static, unused*/, L_20, L_21, 1, L_22, /*hidden argument*/NULL);
		return ((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		String_t* L_24 = ___root;
		NullCheck(L_24);
		uint16_t L_25 = String_get_Chars_m1306(L_24, 0, /*hidden argument*/NULL);
		V_2 = L_25;
		String_t* L_26 = ___path;
		NullCheck(L_26);
		uint16_t L_27 = String_get_Chars_m1306(L_26, 0, /*hidden argument*/NULL);
		bool L_28 = Char_Equals_m3877((&V_2), L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0087;
		}
	}
	{
		return 0;
	}

IL_0087:
	{
		String_t* L_29 = ___path;
		NullCheck(L_29);
		uint16_t L_30 = String_get_Chars_m1306(L_29, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_31 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___VolumeSeparatorChar_5;
		if ((((int32_t)L_30) == ((int32_t)L_31)))
		{
			goto IL_0097;
		}
	}
	{
		return 0;
	}

IL_0097:
	{
		String_t* L_32 = ___root;
		NullCheck(L_32);
		int32_t L_33 = String_get_Length_m1158(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_33) <= ((int32_t)2)))
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_34 = ___path;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m1158(L_34, /*hidden argument*/NULL);
		if ((((int32_t)L_35) <= ((int32_t)2)))
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_36 = ___root;
		NullCheck(L_36);
		uint16_t L_37 = String_get_Chars_m1306(L_36, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_38 = Path_IsDsc_m5513(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_39 = ___path;
		NullCheck(L_39);
		uint16_t L_40 = String_get_Chars_m1306(L_39, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_41 = Path_IsDsc_m5513(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		G_B18_0 = ((int32_t)(L_41));
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B18_0 = 0;
	}

IL_00c6:
	{
		return G_B18_0;
	}

IL_00c7:
	{
		return 1;
	}
}
// System.String System.IO.Path::CanonicalizePath(System.String)
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t424_il2cpp_TypeInfo_var;
extern "C" String_t* Path_CanonicalizePath_m5519 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		CharU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(71);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Char_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t197* V_1 = {0};
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* V_6 = {0};
	String_t* V_7 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	{
		String_t* L_0 = ___path;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		String_t* L_1 = ___path;
		return L_1;
	}

IL_0005:
	{
		bool L_2 = Environment_get_IsRunningOnWindows_m7673(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___path;
		NullCheck(L_3);
		String_t* L_4 = String_Trim_m1194(L_3, /*hidden argument*/NULL);
		___path = L_4;
	}

IL_0016:
	{
		String_t* L_5 = ___path;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m1158(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_7 = ___path;
		return L_7;
	}

IL_0020:
	{
		String_t* L_8 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_9 = Path_GetPathRoot_m5514(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10 = ___path;
		CharU5BU5D_t300* L_11 = ((CharU5BU5D_t300*)SZArrayNew(CharU5BU5D_t300_il2cpp_TypeInfo_var, 2));
		uint16_t L_12 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_11, 0)) = (uint16_t)L_12;
		CharU5BU5D_t300* L_13 = L_11;
		uint16_t L_14 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 1)) = (uint16_t)L_14;
		NullCheck(L_10);
		StringU5BU5D_t197* L_15 = String_Split_m1305(L_10, L_13, /*hidden argument*/NULL);
		V_1 = L_15;
		V_2 = 0;
		bool L_16 = Environment_get_IsRunningOnWindows_m7673(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m1158(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_19 = V_0;
		NullCheck(L_19);
		uint16_t L_20 = String_get_Chars_m1306(L_19, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_21 = Path_IsDsc_m5513(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_22 = V_0;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m1306(L_22, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_24 = Path_IsDsc_m5513(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		G_B11_0 = ((int32_t)(L_24));
		goto IL_0073;
	}

IL_0072:
	{
		G_B11_0 = 0;
	}

IL_0073:
	{
		V_3 = G_B11_0;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_007a;
		}
	}
	{
		G_B14_0 = 3;
		goto IL_007b;
	}

IL_007a:
	{
		G_B14_0 = 0;
	}

IL_007b:
	{
		V_4 = G_B14_0;
		V_5 = 0;
		goto IL_00e9;
	}

IL_0082:
	{
		bool L_26 = Environment_get_IsRunningOnWindows_m7673(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_009c;
		}
	}
	{
		StringU5BU5D_t197* L_27 = V_1;
		int32_t L_28 = V_5;
		StringU5BU5D_t197* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_29, L_31)));
		String_t* L_32 = String_TrimEnd_m2448((*(String_t**)(String_t**)SZArrayLdElema(L_29, L_31)), ((CharU5BU5D_t300*)SZArrayNew(CharU5BU5D_t300_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		ArrayElementTypeCheck (L_27, L_32);
		*((String_t**)(String_t**)SZArrayLdElema(L_27, L_28)) = (String_t*)L_32;
	}

IL_009c:
	{
		StringU5BU5D_t197* L_33 = V_1;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = L_34;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_36 = String_op_Equality_m1163(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_33, L_35)), (String_t*) &_stringLiteral178, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_37 = V_5;
		if (!L_37)
		{
			goto IL_00bd;
		}
	}
	{
		StringU5BU5D_t197* L_38 = V_1;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = L_39;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_38, L_40)));
		int32_t L_41 = String_get_Length_m1158((*(String_t**)(String_t**)SZArrayLdElema(L_38, L_40)), /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_00bd;
		}
	}

IL_00bb:
	{
		goto IL_00e3;
	}

IL_00bd:
	{
		StringU5BU5D_t197* L_42 = V_1;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		int32_t L_44 = L_43;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m1163(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_42, L_44)), (String_t*) &_stringLiteral590, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_4;
		if ((((int32_t)L_46) <= ((int32_t)L_47)))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_48 = V_2;
		V_2 = ((int32_t)((int32_t)L_48-(int32_t)1));
	}

IL_00d6:
	{
		goto IL_00e3;
	}

IL_00d8:
	{
		StringU5BU5D_t197* L_49 = V_1;
		int32_t L_50 = V_2;
		int32_t L_51 = L_50;
		V_2 = ((int32_t)((int32_t)L_51+(int32_t)1));
		StringU5BU5D_t197* L_52 = V_1;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		int32_t L_54 = L_53;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_51);
		ArrayElementTypeCheck (L_49, (*(String_t**)(String_t**)SZArrayLdElema(L_52, L_54)));
		*((String_t**)(String_t**)SZArrayLdElema(L_49, L_51)) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_52, L_54));
	}

IL_00e3:
	{
		int32_t L_55 = V_5;
		V_5 = ((int32_t)((int32_t)L_55+(int32_t)1));
	}

IL_00e9:
	{
		int32_t L_56 = V_5;
		StringU5BU5D_t197* L_57 = V_1;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)(((int32_t)(((Array_t *)L_57)->max_length))))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_58 = V_2;
		if (!L_58)
		{
			goto IL_0106;
		}
	}
	{
		int32_t L_59 = V_2;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0108;
		}
	}
	{
		StringU5BU5D_t197* L_60 = V_1;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, 0);
		int32_t L_61 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_62 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_63 = String_op_Equality_m1163(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_60, L_61)), L_62, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_0108;
		}
	}

IL_0106:
	{
		String_t* L_64 = V_0;
		return L_64;
	}

IL_0108:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_65 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorStr_4;
		StringU5BU5D_t197* L_66 = V_1;
		int32_t L_67 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_68 = String_Join_m3951(NULL /*static, unused*/, L_65, L_66, 0, L_67, /*hidden argument*/NULL);
		V_6 = L_68;
		bool L_69 = Environment_get_IsRunningOnWindows_m7673(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_022a;
		}
	}
	{
		bool L_70 = V_3;
		if (!L_70)
		{
			goto IL_0132;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_71 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_72 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_73 = String_Concat_m1175(NULL /*static, unused*/, L_71, L_72, /*hidden argument*/NULL);
		V_6 = L_73;
	}

IL_0132:
	{
		String_t* L_74 = V_0;
		String_t* L_75 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_76 = Path_SameRoot_m5518(NULL /*static, unused*/, L_74, L_75, /*hidden argument*/NULL);
		if (L_76)
		{
			goto IL_0146;
		}
	}
	{
		String_t* L_77 = V_0;
		String_t* L_78 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_79 = String_Concat_m1175(NULL /*static, unused*/, L_77, L_78, /*hidden argument*/NULL);
		V_6 = L_79;
	}

IL_0146:
	{
		bool L_80 = V_3;
		if (!L_80)
		{
			goto IL_014c;
		}
	}
	{
		String_t* L_81 = V_6;
		return L_81;
	}

IL_014c:
	{
		String_t* L_82 = ___path;
		NullCheck(L_82);
		uint16_t L_83 = String_get_Chars_m1306(L_82, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_84 = Path_IsDsc_m5513(NULL /*static, unused*/, L_83, /*hidden argument*/NULL);
		if (L_84)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_85 = V_0;
		String_t* L_86 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_87 = Path_SameRoot_m5518(NULL /*static, unused*/, L_85, L_86, /*hidden argument*/NULL);
		if (!L_87)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_88 = V_6;
		NullCheck(L_88);
		int32_t L_89 = String_get_Length_m1158(L_88, /*hidden argument*/NULL);
		if ((((int32_t)L_89) > ((int32_t)2)))
		{
			goto IL_018e;
		}
	}
	{
		String_t* L_90 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		String_t* L_91 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorStr_4;
		NullCheck(L_90);
		bool L_92 = String_EndsWith_m1307(L_90, L_91, /*hidden argument*/NULL);
		if (L_92)
		{
			goto IL_018e;
		}
	}
	{
		String_t* L_93 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_94 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		uint16_t L_95 = L_94;
		Object_t * L_96 = Box(Char_t424_il2cpp_TypeInfo_var, &L_95);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_97 = String_Concat_m1185(NULL /*static, unused*/, L_93, L_96, /*hidden argument*/NULL);
		V_6 = L_97;
	}

IL_018e:
	{
		String_t* L_98 = V_6;
		return L_98;
	}

IL_0191:
	{
		String_t* L_99 = Directory_GetCurrentDirectory_m5375(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_7 = L_99;
		String_t* L_100 = V_7;
		NullCheck(L_100);
		int32_t L_101 = String_get_Length_m1158(L_100, /*hidden argument*/NULL);
		if ((((int32_t)L_101) <= ((int32_t)1)))
		{
			goto IL_01ea;
		}
	}
	{
		String_t* L_102 = V_7;
		NullCheck(L_102);
		uint16_t L_103 = String_get_Chars_m1306(L_102, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_104 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_103) == ((uint32_t)L_104))))
		{
			goto IL_01ea;
		}
	}
	{
		String_t* L_105 = V_6;
		NullCheck(L_105);
		int32_t L_106 = String_get_Length_m1158(L_105, /*hidden argument*/NULL);
		if (!L_106)
		{
			goto IL_01c9;
		}
	}
	{
		String_t* L_107 = V_6;
		NullCheck(L_107);
		uint16_t L_108 = String_get_Chars_m1306(L_107, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_109 = Path_IsDsc_m5513(NULL /*static, unused*/, L_108, /*hidden argument*/NULL);
		if (!L_109)
		{
			goto IL_01d9;
		}
	}

IL_01c9:
	{
		String_t* L_110 = V_6;
		uint16_t L_111 = ((int32_t)92);
		Object_t * L_112 = Box(Char_t424_il2cpp_TypeInfo_var, &L_111);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_113 = String_Concat_m1185(NULL /*static, unused*/, L_110, L_112, /*hidden argument*/NULL);
		V_6 = L_113;
	}

IL_01d9:
	{
		String_t* L_114 = V_7;
		NullCheck(L_114);
		String_t* L_115 = String_Substring_m1197(L_114, 0, 2, /*hidden argument*/NULL);
		String_t* L_116 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_117 = String_Concat_m1175(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/NULL);
		return L_117;
	}

IL_01ea:
	{
		String_t* L_118 = V_7;
		String_t* L_119 = V_7;
		NullCheck(L_119);
		int32_t L_120 = String_get_Length_m1158(L_119, /*hidden argument*/NULL);
		NullCheck(L_118);
		uint16_t L_121 = String_get_Chars_m1306(L_118, ((int32_t)((int32_t)L_120-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_122 = Path_IsDsc_m5513(NULL /*static, unused*/, L_121, /*hidden argument*/NULL);
		if (!L_122)
		{
			goto IL_0220;
		}
	}
	{
		String_t* L_123 = V_6;
		NullCheck(L_123);
		uint16_t L_124 = String_get_Chars_m1306(L_123, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		bool L_125 = Path_IsDsc_m5513(NULL /*static, unused*/, L_124, /*hidden argument*/NULL);
		if (!L_125)
		{
			goto IL_0220;
		}
	}
	{
		String_t* L_126 = V_7;
		String_t* L_127 = V_6;
		NullCheck(L_127);
		String_t* L_128 = String_Substring_m1193(L_127, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_129 = String_Concat_m1175(NULL /*static, unused*/, L_126, L_128, /*hidden argument*/NULL);
		return L_129;
	}

IL_0220:
	{
		String_t* L_130 = V_7;
		String_t* L_131 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_132 = String_Concat_m1175(NULL /*static, unused*/, L_130, L_131, /*hidden argument*/NULL);
		return L_132;
	}

IL_022a:
	{
		String_t* L_133 = V_6;
		return L_133;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"


// System.Void System.IO.PathTooLongException::.ctor()
extern "C" void PathTooLongException__ctor_m5520 (PathTooLongException_t1040 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m4424(NULL /*static, unused*/, (String_t*) &_stringLiteral1538, /*hidden argument*/NULL);
		IOException__ctor_m5457(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.PathTooLongException::.ctor(System.String)
extern "C" void PathTooLongException__ctor_m5521 (PathTooLongException_t1040 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		IOException__ctor_m5457(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.PathTooLongException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void PathTooLongException__ctor_m5522 (PathTooLongException_t1040 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t310 * L_0 = ___info;
		StreamingContext_t311  L_1 = ___context;
		IOException__ctor_m5458(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.SearchPattern
#include "mscorlib_System_IO_SearchPattern.h"
#ifndef _MSC_VER
#else
#endif
// System.IO.SearchPattern
#include "mscorlib_System_IO_SearchPatternMethodDeclarations.h"



// System.Void System.IO.SearchPattern::.cctor()
extern TypeInfo* CharU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* SearchPattern_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern "C" void SearchPattern__cctor_m5523 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(71);
		SearchPattern_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1963);
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		s_Il2CppMethodIntialized = true;
	}
	{
		CharU5BU5D_t300* L_0 = ((CharU5BU5D_t300*)SZArrayNew(CharU5BU5D_t300_il2cpp_TypeInfo_var, 2));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)42);
		CharU5BU5D_t300* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)63);
		((SearchPattern_t1041_StaticFields*)SearchPattern_t1041_il2cpp_TypeInfo_var->static_fields)->___WildcardChars_0 = L_1;
		CharU5BU5D_t300* L_2 = ((CharU5BU5D_t300*)SZArrayNew(CharU5BU5D_t300_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		uint16_t L_3 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 0)) = (uint16_t)L_3;
		CharU5BU5D_t300* L_4 = L_2;
		uint16_t L_5 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, 1)) = (uint16_t)L_5;
		((SearchPattern_t1041_StaticFields*)SearchPattern_t1041_il2cpp_TypeInfo_var->static_fields)->___InvalidChars_1 = L_4;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOriginMethodDeclarations.h"



// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
#ifndef _MSC_VER
#else
#endif
// System.IO.Stream
#include "mscorlib_System_IO_StreamMethodDeclarations.h"

// System.IO.NullStream
#include "mscorlib_System_IO_NullStream.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.IO.StreamAsyncResult
#include "mscorlib_System_IO_StreamAsyncResult.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.IO.NullStream
#include "mscorlib_System_IO_NullStreamMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.IO.StreamAsyncResult
#include "mscorlib_System_IO_StreamAsyncResultMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"


// System.Void System.IO.Stream::.ctor()
extern "C" void Stream__ctor_m3563 (Stream_t808 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.Stream::.cctor()
extern TypeInfo* NullStream_t1042_il2cpp_TypeInfo_var;
extern TypeInfo* Stream_t808_il2cpp_TypeInfo_var;
extern "C" void Stream__cctor_m5524 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullStream_t1042_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1976);
		Stream_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1563);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullStream_t1042 * L_0 = (NullStream_t1042 *)il2cpp_codegen_object_new (NullStream_t1042_il2cpp_TypeInfo_var);
		NullStream__ctor_m5525(L_0, /*hidden argument*/NULL);
		((Stream_t808_StaticFields*)Stream_t808_il2cpp_TypeInfo_var->static_fields)->___Null_0 = L_0;
		return;
	}
}
// System.Boolean System.IO.Stream::get_CanRead()
// System.Boolean System.IO.Stream::get_CanSeek()
// System.Boolean System.IO.Stream::get_CanWrite()
// System.Int64 System.IO.Stream::get_Length()
// System.Int64 System.IO.Stream::get_Position()
// System.Void System.IO.Stream::set_Position(System.Int64)
// System.Void System.IO.Stream::Dispose()
extern "C" void Stream_Dispose_m3613 (Stream_t808 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, __this);
		return;
	}
}
// System.Void System.IO.Stream::Dispose(System.Boolean)
extern "C" void Stream_Dispose_m3566 (Stream_t808 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.Stream::Close()
extern "C" void Stream_Close_m3565 (Stream_t808 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void System.IO.Stream::Dispose(System.Boolean) */, __this, 1);
		return;
	}
}
// System.Void System.IO.Stream::Flush()
// System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32)
// System.Int32 System.IO.Stream::ReadByte()
extern TypeInfo* ByteU5BU5D_t102_il2cpp_TypeInfo_var;
extern "C" int32_t Stream_ReadByte_m3614 (Stream_t808 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t102* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t102*)SZArrayNew(ByteU5BU5D_t102_il2cpp_TypeInfo_var, 1));
		ByteU5BU5D_t102* L_0 = V_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t102*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_0, 0, 1);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_t102* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3));
	}

IL_0017:
	{
		return (-1);
	}
}
// System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin)
// System.Void System.IO.Stream::SetLength(System.Int64)
// System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32)
// System.Void System.IO.Stream::WriteByte(System.Byte)
extern TypeInfo* ByteU5BU5D_t102_il2cpp_TypeInfo_var;
extern "C" void Stream_WriteByte_m3615 (Stream_t808 * __this, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t102* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t102*)SZArrayNew(ByteU5BU5D_t102_il2cpp_TypeInfo_var, 1));
		ByteU5BU5D_t102* L_0 = V_0;
		uint8_t L_1 = ___value;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)L_1;
		ByteU5BU5D_t102* L_2 = V_0;
		VirtActionInvoker3< ByteU5BU5D_t102*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_2, 0, 1);
		return;
	}
}
// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern TypeInfo* StreamAsyncResult_t1043_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t65_il2cpp_TypeInfo_var;
extern "C" Object_t * Stream_BeginRead_m3616 (Stream_t808 * __this, ByteU5BU5D_t102* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t45 * ___callback, Object_t * ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		StreamAsyncResult_t1043_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1977);
		Exception_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	StreamAsyncResult_t1043 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t65 * V_2 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t667 * L_1 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_1, (String_t*) &_stringLiteral1475, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t * L_2 = ___state;
		StreamAsyncResult_t1043 * L_3 = (StreamAsyncResult_t1043 *)il2cpp_codegen_object_new (StreamAsyncResult_t1043_il2cpp_TypeInfo_var);
		StreamAsyncResult__ctor_m5539(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_t102* L_4 = ___buffer;
		int32_t L_5 = ___offset;
		int32_t L_6 = ___count;
		int32_t L_7 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t102*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_4, L_5, L_6);
		V_1 = L_7;
		StreamAsyncResult_t1043 * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		StreamAsyncResult_SetComplete_m5541(L_8, (Exception_t65 *)NULL, L_9, /*hidden argument*/NULL);
		goto IL_003a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t65_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002f;
		throw e;
	}

CATCH_002f:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t65 *)__exception_local);
		StreamAsyncResult_t1043 * L_10 = V_0;
		Exception_t65 * L_11 = V_2;
		NullCheck(L_10);
		StreamAsyncResult_SetComplete_m5541(L_10, L_11, 0, /*hidden argument*/NULL);
		goto IL_003a;
	} // end catch (depth: 1)

IL_003a:
	{
		AsyncCallback_t45 * L_12 = ___callback;
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		AsyncCallback_t45 * L_13 = ___callback;
		StreamAsyncResult_t1043 * L_14 = V_0;
		NullCheck(L_13);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.AsyncCallback::Invoke(System.IAsyncResult) */, L_13, L_14);
	}

IL_0046:
	{
		StreamAsyncResult_t1043 * L_15 = V_0;
		return L_15;
	}
}
// System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern TypeInfo* StreamAsyncResult_t1043_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t65_il2cpp_TypeInfo_var;
extern "C" Object_t * Stream_BeginWrite_m3617 (Stream_t808 * __this, ByteU5BU5D_t102* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t45 * ___callback, Object_t * ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		StreamAsyncResult_t1043_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1977);
		Exception_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	StreamAsyncResult_t1043 * V_0 = {0};
	Exception_t65 * V_1 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t667 * L_1 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_1, (String_t*) &_stringLiteral1481, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t * L_2 = ___state;
		StreamAsyncResult_t1043 * L_3 = (StreamAsyncResult_t1043 *)il2cpp_codegen_object_new (StreamAsyncResult_t1043_il2cpp_TypeInfo_var);
		StreamAsyncResult__ctor_m5539(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_t102* L_4 = ___buffer;
		int32_t L_5 = ___offset;
		int32_t L_6 = ___count;
		VirtActionInvoker3< ByteU5BU5D_t102*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_4, L_5, L_6);
		StreamAsyncResult_t1043 * L_7 = V_0;
		NullCheck(L_7);
		StreamAsyncResult_SetComplete_m5540(L_7, (Exception_t65 *)NULL, /*hidden argument*/NULL);
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t65_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002d;
		throw e;
	}

CATCH_002d:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t65 *)__exception_local);
		StreamAsyncResult_t1043 * L_8 = V_0;
		Exception_t65 * L_9 = V_1;
		NullCheck(L_8);
		StreamAsyncResult_SetComplete_m5540(L_8, L_9, /*hidden argument*/NULL);
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		AsyncCallback_t45 * L_10 = ___callback;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		AsyncCallback_t45 * L_11 = ___callback;
		StreamAsyncResult_t1043 * L_12 = V_0;
		NullCheck(L_11);
		VirtFuncInvoker3< Object_t *, Object_t *, AsyncCallback_t45 *, Object_t * >::Invoke(11 /* System.IAsyncResult System.AsyncCallback::BeginInvoke(System.IAsyncResult,System.AsyncCallback,System.Object) */, L_11, L_12, (AsyncCallback_t45 *)NULL, NULL);
	}

IL_0046:
	{
		StreamAsyncResult_t1043 * L_13 = V_0;
		return L_13;
	}
}
// System.Int32 System.IO.Stream::EndRead(System.IAsyncResult)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* StreamAsyncResult_t1043_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" int32_t Stream_EndRead_m3618 (Stream_t808 * __this, Object_t * ___asyncResult, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		StreamAsyncResult_t1043_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1977);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	StreamAsyncResult_t1043 * V_0 = {0};
	{
		Object_t * L_0 = ___asyncResult;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral1479, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___asyncResult;
		V_0 = ((StreamAsyncResult_t1043 *)IsInst(L_2, StreamAsyncResult_t1043_il2cpp_TypeInfo_var));
		StreamAsyncResult_t1043 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		StreamAsyncResult_t1043 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = StreamAsyncResult_get_NBytes_m5546(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}

IL_0021:
	{
		ArgumentException_t313 * L_6 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2383(L_6, (String_t*) &_stringLiteral1480, (String_t*) &_stringLiteral1479, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		StreamAsyncResult_t1043 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = StreamAsyncResult_get_Done_m5547(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		InvalidOperationException_t665 * L_9 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_9, (String_t*) &_stringLiteral1539, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0044:
	{
		StreamAsyncResult_t1043 * L_10 = V_0;
		NullCheck(L_10);
		StreamAsyncResult_set_Done_m5548(L_10, 1, /*hidden argument*/NULL);
		StreamAsyncResult_t1043 * L_11 = V_0;
		NullCheck(L_11);
		Exception_t65 * L_12 = StreamAsyncResult_get_Exception_m5545(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		StreamAsyncResult_t1043 * L_13 = V_0;
		NullCheck(L_13);
		Exception_t65 * L_14 = StreamAsyncResult_get_Exception_m5545(L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		StreamAsyncResult_t1043 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = StreamAsyncResult_get_NBytes_m5546(L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void System.IO.Stream::EndWrite(System.IAsyncResult)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* StreamAsyncResult_t1043_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" void Stream_EndWrite_m3619 (Stream_t808 * __this, Object_t * ___asyncResult, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		StreamAsyncResult_t1043_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1977);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	StreamAsyncResult_t1043 * V_0 = {0};
	{
		Object_t * L_0 = ___asyncResult;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral1479, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___asyncResult;
		V_0 = ((StreamAsyncResult_t1043 *)IsInst(L_2, StreamAsyncResult_t1043_il2cpp_TypeInfo_var));
		StreamAsyncResult_t1043 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		StreamAsyncResult_t1043 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = StreamAsyncResult_get_NBytes_m5546(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0031;
		}
	}

IL_0021:
	{
		ArgumentException_t313 * L_6 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2383(L_6, (String_t*) &_stringLiteral1480, (String_t*) &_stringLiteral1479, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		StreamAsyncResult_t1043 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = StreamAsyncResult_get_Done_m5547(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		InvalidOperationException_t665 * L_9 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_9, (String_t*) &_stringLiteral1540, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0044:
	{
		StreamAsyncResult_t1043 * L_10 = V_0;
		NullCheck(L_10);
		StreamAsyncResult_set_Done_m5548(L_10, 1, /*hidden argument*/NULL);
		StreamAsyncResult_t1043 * L_11 = V_0;
		NullCheck(L_11);
		Exception_t65 * L_12 = StreamAsyncResult_get_Exception_m5545(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		StreamAsyncResult_t1043 * L_13 = V_0;
		NullCheck(L_13);
		Exception_t65 * L_14 = StreamAsyncResult_get_Exception_m5545(L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.NullStream::.ctor()
extern TypeInfo* Stream_t808_il2cpp_TypeInfo_var;
extern "C" void NullStream__ctor_m5525 (NullStream_t1042 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stream_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1563);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t808_il2cpp_TypeInfo_var);
		Stream__ctor_m3563(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.IO.NullStream::get_CanRead()
extern "C" bool NullStream_get_CanRead_m5526 (NullStream_t1042 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.IO.NullStream::get_CanSeek()
extern "C" bool NullStream_get_CanSeek_m5527 (NullStream_t1042 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.IO.NullStream::get_CanWrite()
extern "C" bool NullStream_get_CanWrite_m5528 (NullStream_t1042 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Int64 System.IO.NullStream::get_Length()
extern "C" int64_t NullStream_get_Length_m5529 (NullStream_t1042 * __this, const MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
// System.Int64 System.IO.NullStream::get_Position()
extern "C" int64_t NullStream_get_Position_m5530 (NullStream_t1042 * __this, const MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
// System.Void System.IO.NullStream::set_Position(System.Int64)
extern "C" void NullStream_set_Position_m5531 (NullStream_t1042 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.NullStream::Flush()
extern "C" void NullStream_Flush_m5532 (NullStream_t1042 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 System.IO.NullStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t NullStream_Read_m5533 (NullStream_t1042 * __this, ByteU5BU5D_t102* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int32 System.IO.NullStream::ReadByte()
extern "C" int32_t NullStream_ReadByte_m5534 (NullStream_t1042 * __this, const MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int64 System.IO.NullStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t NullStream_Seek_m5535 (NullStream_t1042 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
// System.Void System.IO.NullStream::SetLength(System.Int64)
extern "C" void NullStream_SetLength_m5536 (NullStream_t1042 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.NullStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void NullStream_Write_m5537 (NullStream_t1042 * __this, ByteU5BU5D_t102* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.NullStream::WriteByte(System.Byte)
extern "C" void NullStream_WriteByte_m5538 (NullStream_t1042 * __this, uint8_t ___value, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"


// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
extern "C" void StreamAsyncResult__ctor_m5539 (StreamAsyncResult_t1043 * __this, Object_t * ___state, const MethodInfo* method)
{
	{
		__this->___nbytes_4 = (-1);
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___state;
		__this->___state_0 = L_0;
		return;
	}
}
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
extern "C" void StreamAsyncResult_SetComplete_m5540 (StreamAsyncResult_t1043 * __this, Exception_t65 * ___e, const MethodInfo* method)
{
	StreamAsyncResult_t1043 * V_0 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Exception_t65 * L_0 = ___e;
		__this->___exc_3 = L_0;
		__this->___completed_1 = 1;
		V_0 = __this;
		StreamAsyncResult_t1043 * L_1 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			ManualResetEvent_t807 * L_2 = (__this->___wh_5);
			if (!L_2)
			{
				goto IL_002a;
			}
		}

IL_001e:
		{
			ManualResetEvent_t807 * L_3 = (__this->___wh_5);
			NullCheck(L_3);
			EventWaitHandle_Set_m3555(L_3, /*hidden argument*/NULL);
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		StreamAsyncResult_t1043 * L_4 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C" void StreamAsyncResult_SetComplete_m5541 (StreamAsyncResult_t1043 * __this, Exception_t65 * ___e, int32_t ___nbytes, const MethodInfo* method)
{
	{
		int32_t L_0 = ___nbytes;
		__this->___nbytes_4 = L_0;
		Exception_t65 * L_1 = ___e;
		StreamAsyncResult_SetComplete_m5540(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.IO.StreamAsyncResult::get_AsyncState()
extern "C" Object_t * StreamAsyncResult_get_AsyncState_m5542 (StreamAsyncResult_t1043 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.IO.StreamAsyncResult::get_AsyncWaitHandle()
extern TypeInfo* ManualResetEvent_t807_il2cpp_TypeInfo_var;
extern "C" WaitHandle_t854 * StreamAsyncResult_get_AsyncWaitHandle_m5543 (StreamAsyncResult_t1043 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1551);
		s_Il2CppMethodIntialized = true;
	}
	StreamAsyncResult_t1043 * V_0 = {0};
	WaitHandle_t854 * V_1 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		StreamAsyncResult_t1043 * L_0 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			ManualResetEvent_t807 * L_1 = (__this->___wh_5);
			if (L_1)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_2 = (__this->___completed_1);
			ManualResetEvent_t807 * L_3 = (ManualResetEvent_t807 *)il2cpp_codegen_object_new (ManualResetEvent_t807_il2cpp_TypeInfo_var);
			ManualResetEvent__ctor_m3554(L_3, L_2, /*hidden argument*/NULL);
			__this->___wh_5 = L_3;
		}

IL_0021:
		{
			ManualResetEvent_t807 * L_4 = (__this->___wh_5);
			V_1 = L_4;
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		StreamAsyncResult_t1043 * L_5 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0033:
	{
		WaitHandle_t854 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean System.IO.StreamAsyncResult::get_IsCompleted()
extern "C" bool StreamAsyncResult_get_IsCompleted_m5544 (StreamAsyncResult_t1043 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_1);
		return L_0;
	}
}
// System.Exception System.IO.StreamAsyncResult::get_Exception()
extern "C" Exception_t65 * StreamAsyncResult_get_Exception_m5545 (StreamAsyncResult_t1043 * __this, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = (__this->___exc_3);
		return L_0;
	}
}
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
extern "C" int32_t StreamAsyncResult_get_NBytes_m5546 (StreamAsyncResult_t1043 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___nbytes_4);
		return L_0;
	}
}
// System.Boolean System.IO.StreamAsyncResult::get_Done()
extern "C" bool StreamAsyncResult_get_Done_m5547 (StreamAsyncResult_t1043 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___done_2);
		return L_0;
	}
}
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
extern "C" void StreamAsyncResult_set_Done_m5548 (StreamAsyncResult_t1043 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___done_2 = L_0;
		return;
	}
}
// System.IO.StreamReader/NullStreamReader
#include "mscorlib_System_IO_StreamReader_NullStreamReader.h"
#ifndef _MSC_VER
#else
#endif
// System.IO.StreamReader/NullStreamReader
#include "mscorlib_System_IO_StreamReader_NullStreamReaderMethodDeclarations.h"

// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReaderMethodDeclarations.h"


// System.Void System.IO.StreamReader/NullStreamReader::.ctor()
extern TypeInfo* StreamReader_t1045_il2cpp_TypeInfo_var;
extern "C" void NullStreamReader__ctor_m5549 (NullStreamReader_t1044 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StreamReader_t1045_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1967);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StreamReader_t1045_il2cpp_TypeInfo_var);
		StreamReader__ctor_m5555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.IO.StreamReader/NullStreamReader::Peek()
extern "C" int32_t NullStreamReader_Peek_m5550 (NullStreamReader_t1044 * __this, const MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.StreamReader/NullStreamReader::Read()
extern "C" int32_t NullStreamReader_Read_m5551 (NullStreamReader_t1044 * __this, const MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.StreamReader/NullStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t NullStreamReader_Read_m5552 (NullStreamReader_t1044 * __this, CharU5BU5D_t300* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.String System.IO.StreamReader/NullStreamReader::ReadLine()
extern "C" String_t* NullStreamReader_ReadLine_m5553 (NullStreamReader_t1044 * __this, const MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.String System.IO.StreamReader/NullStreamReader::ReadToEnd()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* NullStreamReader_ReadToEnd_m5554 (NullStreamReader_t1044 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReader.h"
#ifndef _MSC_VER
#else
#endif

// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStream.h"
// System.Text.Decoder
#include "mscorlib_System_Text_Decoder.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReaderMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// System.Text.Decoder
#include "mscorlib_System_Text_DecoderMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"


// System.Void System.IO.StreamReader::.ctor()
extern TypeInfo* TextReader_t972_il2cpp_TypeInfo_var;
extern "C" void StreamReader__ctor_m5555 (StreamReader_t1045 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextReader_t972_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1978);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextReader_t972_il2cpp_TypeInfo_var);
		TextReader__ctor_m5597(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void StreamReader__ctor_m5556 (StreamReader_t1045 * __this, Stream_t808 * ___stream, Encoding_t281 * ___encoding, const MethodInfo* method)
{
	{
		Stream_t808 * L_0 = ___stream;
		Encoding_t281 * L_1 = ___encoding;
		StreamReader__ctor_m5557(__this, L_0, L_1, 1, ((int32_t)1024), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern TypeInfo* TextReader_t972_il2cpp_TypeInfo_var;
extern "C" void StreamReader__ctor_m5557 (StreamReader_t1045 * __this, Stream_t808 * ___stream, Encoding_t281 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextReader_t972_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1978);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextReader_t972_il2cpp_TypeInfo_var);
		TextReader__ctor_m5597(__this, /*hidden argument*/NULL);
		Stream_t808 * L_0 = ___stream;
		Encoding_t281 * L_1 = ___encoding;
		bool L_2 = ___detectEncodingFromByteOrderMarks;
		int32_t L_3 = ___bufferSize;
		StreamReader_Initialize_m5561(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.String)
extern TypeInfo* Encoding_t281_il2cpp_TypeInfo_var;
extern "C" void StreamReader__ctor_m5558 (StreamReader_t1045 * __this, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t281_il2cpp_TypeInfo_var);
		Encoding_t281 * L_1 = Encoding_get_UTF8Unmarked_m7068(NULL /*static, unused*/, /*hidden argument*/NULL);
		StreamReader__ctor_m5559(__this, L_0, L_1, 1, ((int32_t)4096), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
extern TypeInfo* TextReader_t972_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t691_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void StreamReader__ctor_m5559 (StreamReader_t1045 * __this, String_t* ___path, Encoding_t281 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextReader_t972_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1978);
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Path_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	Stream_t808 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextReader_t972_il2cpp_TypeInfo_var);
		TextReader__ctor_m5597(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___path;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral1426, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_3 = ___path;
		bool L_4 = String_op_Equality_m1163(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_t313 * L_5 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_5, (String_t*) &_stringLiteral1541, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002c:
	{
		String_t* L_6 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t691_il2cpp_TypeInfo_var);
		CharU5BU5D_t300* L_7 = ((Path_t691_StaticFields*)Path_t691_il2cpp_TypeInfo_var->static_fields)->___InvalidPathChars_0;
		NullCheck(L_6);
		int32_t L_8 = String_IndexOfAny_m2542(L_6, L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentException_t313 * L_9 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_9, (String_t*) &_stringLiteral1542, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0045:
	{
		Encoding_t281 * L_10 = ___encoding;
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		ArgumentNullException_t341 * L_11 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_11, (String_t*) &_stringLiteral1543, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0053:
	{
		int32_t L_12 = ___bufferSize;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_13 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1263(L_13, (String_t*) &_stringLiteral1460, (String_t*) &_stringLiteral1544, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0068:
	{
		String_t* L_14 = ___path;
		FileStream_t865 * L_15 = File_OpenRead_m3533(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		Stream_t808 * L_16 = V_0;
		Encoding_t281 * L_17 = ___encoding;
		bool L_18 = ___detectEncodingFromByteOrderMarks;
		int32_t L_19 = ___bufferSize;
		StreamReader_Initialize_m5561(__this, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamReader::.cctor()
extern TypeInfo* NullStreamReader_t1044_il2cpp_TypeInfo_var;
extern TypeInfo* StreamReader_t1045_il2cpp_TypeInfo_var;
extern "C" void StreamReader__cctor_m5560 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullStreamReader_t1044_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1979);
		StreamReader_t1045_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1967);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullStreamReader_t1044 * L_0 = (NullStreamReader_t1044 *)il2cpp_codegen_object_new (NullStreamReader_t1044_il2cpp_TypeInfo_var);
		NullStreamReader__ctor_m5549(L_0, /*hidden argument*/NULL);
		((StreamReader_t1045_StaticFields*)StreamReader_t1045_il2cpp_TypeInfo_var->static_fields)->___Null_12 = L_0;
		return;
	}
}
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t102_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t300_il2cpp_TypeInfo_var;
extern "C" void StreamReader_Initialize_m5561 (StreamReader_t1045 * __this, Stream_t808 * ___stream, Encoding_t281 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		ByteU5BU5D_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		CharU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(71);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t102* V_0 = {0};
	StreamReader_t1045 * G_B12_0 = {0};
	StreamReader_t1045 * G_B11_0 = {0};
	int32_t G_B13_0 = 0;
	StreamReader_t1045 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	StreamReader_t1045 * G_B15_1 = {0};
	int32_t G_B14_0 = 0;
	StreamReader_t1045 * G_B14_1 = {0};
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	StreamReader_t1045 * G_B16_2 = {0};
	{
		Stream_t808 * L_0 = ___stream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral1545, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Encoding_t281 * L_2 = ___encoding;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t341 * L_3 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_3, (String_t*) &_stringLiteral1543, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		Stream_t808 * L_4 = ___stream;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.IO.Stream::get_CanRead() */, L_4);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		ArgumentException_t313 * L_6 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_6, (String_t*) &_stringLiteral1546, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002f:
	{
		int32_t L_7 = ___bufferSize;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_8 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1263(L_8, (String_t*) &_stringLiteral1460, (String_t*) &_stringLiteral1544, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		int32_t L_9 = ___bufferSize;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0056;
		}
	}
	{
		___bufferSize = ((int32_t)128);
	}

IL_0056:
	{
		Stream_t808 * L_10 = ___stream;
		__this->___base_stream_9 = L_10;
		int32_t L_11 = ___bufferSize;
		__this->___input_buffer_1 = ((ByteU5BU5D_t102*)SZArrayNew(ByteU5BU5D_t102_il2cpp_TypeInfo_var, L_11));
		int32_t L_12 = ___bufferSize;
		__this->___buffer_size_5 = L_12;
		Encoding_t281 * L_13 = ___encoding;
		__this->___encoding_7 = L_13;
		Encoding_t281 * L_14 = ___encoding;
		NullCheck(L_14);
		Decoder_t1020 * L_15 = (Decoder_t1020 *)VirtFuncInvoker0< Decoder_t1020 * >::Invoke(15 /* System.Text.Decoder System.Text.Encoding::GetDecoder() */, L_14);
		__this->___decoder_8 = L_15;
		Encoding_t281 * L_16 = ___encoding;
		NullCheck(L_16);
		ByteU5BU5D_t102* L_17 = (ByteU5BU5D_t102*)VirtFuncInvoker0< ByteU5BU5D_t102* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetPreamble() */, L_16);
		V_0 = L_17;
		bool L_18 = ___detectEncodingFromByteOrderMarks;
		G_B11_0 = __this;
		if (!L_18)
		{
			G_B12_0 = __this;
			goto IL_0093;
		}
	}
	{
		G_B13_0 = 1;
		G_B13_1 = G_B11_0;
		goto IL_0094;
	}

IL_0093:
	{
		G_B13_0 = 0;
		G_B13_1 = G_B12_0;
	}

IL_0094:
	{
		NullCheck(G_B13_1);
		G_B13_1->___do_checks_6 = G_B13_0;
		int32_t L_19 = (__this->___do_checks_6);
		ByteU5BU5D_t102* L_20 = V_0;
		NullCheck(L_20);
		G_B14_0 = L_19;
		G_B14_1 = __this;
		if ((((int32_t)(((Array_t *)L_20)->max_length))))
		{
			G_B15_0 = L_19;
			G_B15_1 = __this;
			goto IL_00a8;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B16_0 = 2;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_00a9:
	{
		NullCheck(G_B16_2);
		G_B16_2->___do_checks_6 = ((int32_t)((int32_t)G_B16_1+(int32_t)G_B16_0));
		Encoding_t281 * L_21 = ___encoding;
		int32_t L_22 = ___bufferSize;
		NullCheck(L_21);
		int32_t L_23 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(17 /* System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32) */, L_21, L_22);
		__this->___decoded_buffer_2 = ((CharU5BU5D_t300*)SZArrayNew(CharU5BU5D_t300_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_23+(int32_t)1))));
		__this->___decoded_count_3 = 0;
		__this->___pos_4 = 0;
		return;
	}
}
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
extern "C" void StreamReader_Dispose_m5562 (StreamReader_t1045 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Stream_t808 * L_1 = (__this->___base_stream_9);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Stream_t808 * L_2 = (__this->___base_stream_9);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_2);
	}

IL_0016:
	{
		__this->___input_buffer_1 = (ByteU5BU5D_t102*)NULL;
		__this->___decoded_buffer_2 = (CharU5BU5D_t300*)NULL;
		__this->___encoding_7 = (Encoding_t281 *)NULL;
		__this->___decoder_8 = (Decoder_t1020 *)NULL;
		__this->___base_stream_9 = (Stream_t808 *)NULL;
		bool L_3 = ___disposing;
		TextReader_Dispose_m5600(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
extern TypeInfo* Encoding_t281_il2cpp_TypeInfo_var;
extern "C" int32_t StreamReader_DoChecks_m5563 (StreamReader_t1045 * __this, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t102* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->___do_checks_6);
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((uint32_t)2))))
		{
			goto IL_0040;
		}
	}
	{
		Encoding_t281 * L_1 = (__this->___encoding_7);
		NullCheck(L_1);
		ByteU5BU5D_t102* L_2 = (ByteU5BU5D_t102*)VirtFuncInvoker0< ByteU5BU5D_t102* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetPreamble() */, L_1);
		V_0 = L_2;
		ByteU5BU5D_t102* L_3 = V_0;
		NullCheck(L_3);
		V_1 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = ___count;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0040;
		}
	}
	{
		V_2 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		ByteU5BU5D_t102* L_6 = (__this->___input_buffer_1);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		ByteU5BU5D_t102* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8))) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_11)))))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_003a;
	}

IL_0032:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0036:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0023;
		}
	}

IL_003a:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_17 = V_2;
		return L_17;
	}

IL_0040:
	{
		int32_t L_18 = (__this->___do_checks_6);
		if ((!(((uint32_t)((int32_t)((int32_t)L_18&(int32_t)1))) == ((uint32_t)1))))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_19 = ___count;
		if ((((int32_t)L_19) >= ((int32_t)2)))
		{
			goto IL_0054;
		}
	}
	{
		return 0;
	}

IL_0054:
	{
		ByteU5BU5D_t102* L_20 = (__this->___input_buffer_1);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		int32_t L_21 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_21))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_007f;
		}
	}
	{
		ByteU5BU5D_t102* L_22 = (__this->___input_buffer_1);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 1);
		int32_t L_23 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_23))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t281_il2cpp_TypeInfo_var);
		Encoding_t281 * L_24 = Encoding_get_BigEndianUnicode_m3518(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___encoding_7 = L_24;
		return 2;
	}

IL_007f:
	{
		int32_t L_25 = ___count;
		if ((((int32_t)L_25) >= ((int32_t)3)))
		{
			goto IL_0085;
		}
	}
	{
		return 0;
	}

IL_0085:
	{
		ByteU5BU5D_t102* L_26 = (__this->___input_buffer_1);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		int32_t L_27 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27))) == ((uint32_t)((int32_t)239)))))
		{
			goto IL_00bf;
		}
	}
	{
		ByteU5BU5D_t102* L_28 = (__this->___input_buffer_1);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 1);
		int32_t L_29 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_28, L_29))) == ((uint32_t)((int32_t)187)))))
		{
			goto IL_00bf;
		}
	}
	{
		ByteU5BU5D_t102* L_30 = (__this->___input_buffer_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 2);
		int32_t L_31 = 2;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_31))) == ((uint32_t)((int32_t)191)))))
		{
			goto IL_00bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t281_il2cpp_TypeInfo_var);
		Encoding_t281 * L_32 = Encoding_get_UTF8Unmarked_m7068(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___encoding_7 = L_32;
		return 3;
	}

IL_00bf:
	{
		int32_t L_33 = ___count;
		if ((((int32_t)L_33) >= ((int32_t)4)))
		{
			goto IL_00fa;
		}
	}
	{
		ByteU5BU5D_t102* L_34 = (__this->___input_buffer_1);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 0);
		int32_t L_35 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_34, L_35))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00f8;
		}
	}
	{
		ByteU5BU5D_t102* L_36 = (__this->___input_buffer_1);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 1);
		int32_t L_37 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_36, L_37))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_00f8;
		}
	}
	{
		ByteU5BU5D_t102* L_38 = (__this->___input_buffer_1);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 2);
		int32_t L_39 = 2;
		if (!(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_38, L_39)))
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t281_il2cpp_TypeInfo_var);
		Encoding_t281 * L_40 = Encoding_get_Unicode_m7070(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___encoding_7 = L_40;
		return 2;
	}

IL_00f8:
	{
		return 0;
	}

IL_00fa:
	{
		ByteU5BU5D_t102* L_41 = (__this->___input_buffer_1);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 0);
		int32_t L_42 = 0;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_41, L_42)))
		{
			goto IL_0139;
		}
	}
	{
		ByteU5BU5D_t102* L_43 = (__this->___input_buffer_1);
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 1);
		int32_t L_44 = 1;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_43, L_44)))
		{
			goto IL_0139;
		}
	}
	{
		ByteU5BU5D_t102* L_45 = (__this->___input_buffer_1);
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 2);
		int32_t L_46 = 2;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_45, L_46))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_0139;
		}
	}
	{
		ByteU5BU5D_t102* L_47 = (__this->___input_buffer_1);
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 3);
		int32_t L_48 = 3;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_47, L_48))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0139;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t281_il2cpp_TypeInfo_var);
		Encoding_t281 * L_49 = Encoding_get_BigEndianUTF32_m7072(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___encoding_7 = L_49;
		return 4;
	}

IL_0139:
	{
		ByteU5BU5D_t102* L_50 = (__this->___input_buffer_1);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 0);
		int32_t L_51 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_50, L_51))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0185;
		}
	}
	{
		ByteU5BU5D_t102* L_52 = (__this->___input_buffer_1);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 1);
		int32_t L_53 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_52, L_53))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_0185;
		}
	}
	{
		ByteU5BU5D_t102* L_54 = (__this->___input_buffer_1);
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 2);
		int32_t L_55 = 2;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_55)))
		{
			goto IL_0178;
		}
	}
	{
		ByteU5BU5D_t102* L_56 = (__this->___input_buffer_1);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 3);
		int32_t L_57 = 3;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_56, L_57)))
		{
			goto IL_0178;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t281_il2cpp_TypeInfo_var);
		Encoding_t281 * L_58 = Encoding_get_UTF32_m7071(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___encoding_7 = L_58;
		return 4;
	}

IL_0178:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t281_il2cpp_TypeInfo_var);
		Encoding_t281 * L_59 = Encoding_get_Unicode_m7070(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___encoding_7 = L_59;
		return 2;
	}

IL_0185:
	{
		return 0;
	}
}
// System.Int32 System.IO.StreamReader::ReadBuffer()
extern TypeInfo* CharU5BU5D_t300_il2cpp_TypeInfo_var;
extern "C" int32_t StreamReader_ReadBuffer_m5564 (StreamReader_t1045 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(71);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Encoding_t281 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		__this->___pos_4 = 0;
		V_0 = 0;
		__this->___decoded_count_3 = 0;
		V_1 = 0;
	}

IL_0012:
	{
		Stream_t808 * L_0 = (__this->___base_stream_9);
		ByteU5BU5D_t102* L_1 = (__this->___input_buffer_1);
		int32_t L_2 = (__this->___buffer_size_5);
		NullCheck(L_0);
		int32_t L_3 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t102*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		return 0;
	}

IL_0031:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = (__this->___buffer_size_5);
		__this->___mayBlock_10 = ((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		int32_t L_7 = (__this->___do_checks_6);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		Encoding_t281 * L_8 = (__this->___encoding_7);
		V_2 = L_8;
		int32_t L_9 = V_0;
		int32_t L_10 = StreamReader_DoChecks_m5563(__this, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Encoding_t281 * L_11 = V_2;
		Encoding_t281 * L_12 = (__this->___encoding_7);
		if ((((Object_t*)(Encoding_t281 *)L_11) == ((Object_t*)(Encoding_t281 *)L_12)))
		{
			goto IL_00a8;
		}
	}
	{
		Encoding_t281 * L_13 = V_2;
		int32_t L_14 = (__this->___buffer_size_5);
		NullCheck(L_13);
		int32_t L_15 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(17 /* System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32) */, L_13, L_14);
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
		Encoding_t281 * L_16 = (__this->___encoding_7);
		int32_t L_17 = (__this->___buffer_size_5);
		NullCheck(L_16);
		int32_t L_18 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(17 /* System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32) */, L_16, L_17);
		V_4 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_3;
		int32_t L_20 = V_4;
		if ((((int32_t)L_19) == ((int32_t)L_20)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_21 = V_4;
		__this->___decoded_buffer_2 = ((CharU5BU5D_t300*)SZArrayNew(CharU5BU5D_t300_il2cpp_TypeInfo_var, L_21));
	}

IL_0097:
	{
		Encoding_t281 * L_22 = (__this->___encoding_7);
		NullCheck(L_22);
		Decoder_t1020 * L_23 = (Decoder_t1020 *)VirtFuncInvoker0< Decoder_t1020 * >::Invoke(15 /* System.Text.Decoder System.Text.Encoding::GetDecoder() */, L_22);
		__this->___decoder_8 = L_23;
	}

IL_00a8:
	{
		__this->___do_checks_6 = 0;
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)((int32_t)L_24-(int32_t)L_25));
	}

IL_00b3:
	{
		int32_t L_26 = (__this->___decoded_count_3);
		Decoder_t1020 * L_27 = (__this->___decoder_8);
		ByteU5BU5D_t102* L_28 = (__this->___input_buffer_1);
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		CharU5BU5D_t300* L_31 = (__this->___decoded_buffer_2);
		NullCheck(L_27);
		int32_t L_32 = (int32_t)VirtFuncInvoker5< int32_t, ByteU5BU5D_t102*, int32_t, int32_t, CharU5BU5D_t300*, int32_t >::Invoke(4 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_27, L_28, L_29, L_30, L_31, 0);
		__this->___decoded_count_3 = ((int32_t)((int32_t)L_26+(int32_t)L_32));
		V_1 = 0;
		int32_t L_33 = (__this->___decoded_count_3);
		if (!L_33)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_34 = (__this->___decoded_count_3);
		return L_34;
	}
}
// System.Int32 System.IO.StreamReader::Peek()
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern "C" int32_t StreamReader_Peek_m5565 (StreamReader_t1045 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stream_t808 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t858 * L_1 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m7915(L_1, (String_t*) &_stringLiteral1547, (String_t*) &_stringLiteral1548, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = StreamReader_ReadBuffer_m5564(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (-1);
	}

IL_0030:
	{
		CharU5BU5D_t300* L_5 = (__this->___decoded_buffer_2);
		int32_t L_6 = (__this->___pos_4);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_7));
	}
}
// System.Int32 System.IO.StreamReader::Read()
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern "C" int32_t StreamReader_Read_m5566 (StreamReader_t1045 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Stream_t808 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t858 * L_1 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m7915(L_1, (String_t*) &_stringLiteral1547, (String_t*) &_stringLiteral1548, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = StreamReader_ReadBuffer_m5564(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (-1);
	}

IL_0030:
	{
		CharU5BU5D_t300* L_5 = (__this->___decoded_buffer_2);
		int32_t L_6 = (__this->___pos_4);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___pos_4 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_9));
	}
}
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" int32_t StreamReader_Read_m5567 (StreamReader_t1045 * __this, CharU5BU5D_t300* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B16_0 = 0;
	{
		Stream_t808 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t858 * L_1 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m7915(L_1, (String_t*) &_stringLiteral1547, (String_t*) &_stringLiteral1548, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		CharU5BU5D_t300* L_2 = ___buffer;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t341 * L_3 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_3, (String_t*) &_stringLiteral903, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		int32_t L_4 = ___index;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_5 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1263(L_5, (String_t*) &_stringLiteral262, (String_t*) &_stringLiteral662, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003a:
	{
		int32_t L_6 = ___count;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_7 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1263(L_7, (String_t*) &_stringLiteral344, (String_t*) &_stringLiteral662, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004e:
	{
		int32_t L_8 = ___index;
		CharU5BU5D_t300* L_9 = ___buffer;
		NullCheck(L_9);
		int32_t L_10 = ___count;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_0061;
		}
	}
	{
		ArgumentException_t313 * L_11 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_11, (String_t*) &_stringLiteral1549, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0061:
	{
		V_0 = 0;
		goto IL_00d9;
	}

IL_0068:
	{
		int32_t L_12 = (__this->___pos_4);
		int32_t L_13 = (__this->___decoded_count_3);
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_14 = StreamReader_ReadBuffer_m5564(__this, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_16 = V_0;
		G_B16_0 = L_16;
		goto IL_0086;
	}

IL_0085:
	{
		G_B16_0 = 0;
	}

IL_0086:
	{
		return G_B16_0;
	}

IL_0087:
	{
		int32_t L_17 = (__this->___decoded_count_3);
		int32_t L_18 = (__this->___pos_4);
		int32_t L_19 = ___count;
		int32_t L_20 = Math_Min_m7714(NULL /*static, unused*/, ((int32_t)((int32_t)L_17-(int32_t)L_18)), L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		CharU5BU5D_t300* L_21 = (__this->___decoded_buffer_2);
		int32_t L_22 = (__this->___pos_4);
		CharU5BU5D_t300* L_23 = ___buffer;
		int32_t L_24 = ___index;
		int32_t L_25 = V_1;
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_21, L_22, (Array_t *)(Array_t *)L_23, L_24, L_25, /*hidden argument*/NULL);
		int32_t L_26 = (__this->___pos_4);
		int32_t L_27 = V_1;
		__this->___pos_4 = ((int32_t)((int32_t)L_26+(int32_t)L_27));
		int32_t L_28 = ___index;
		int32_t L_29 = V_1;
		___index = ((int32_t)((int32_t)L_28+(int32_t)L_29));
		int32_t L_30 = ___count;
		int32_t L_31 = V_1;
		___count = ((int32_t)((int32_t)L_30-(int32_t)L_31));
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		V_0 = ((int32_t)((int32_t)L_32+(int32_t)L_33));
		bool L_34 = (__this->___mayBlock_10);
		if (!L_34)
		{
			goto IL_00d9;
		}
	}
	{
		goto IL_00dd;
	}

IL_00d9:
	{
		int32_t L_35 = ___count;
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_0068;
		}
	}

IL_00dd:
	{
		int32_t L_36 = V_0;
		return L_36;
	}
}
// System.Int32 System.IO.StreamReader::FindNextEOL()
extern "C" int32_t StreamReader_FindNextEOL_m5568 (StreamReader_t1045 * __this, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		goto IL_008e;
	}

IL_0007:
	{
		CharU5BU5D_t300* L_0 = (__this->___decoded_buffer_2);
		int32_t L_1 = (__this->___pos_4);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2));
		uint16_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = (__this->___pos_4);
		__this->___pos_4 = ((int32_t)((int32_t)L_4+(int32_t)1));
		bool L_5 = (__this->___foundCR_13);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = (__this->___pos_4);
		G_B5_0 = ((int32_t)((int32_t)L_6-(int32_t)2));
		goto IL_0042;
	}

IL_003a:
	{
		int32_t L_7 = (__this->___pos_4);
		G_B5_0 = ((int32_t)((int32_t)L_7-(int32_t)1));
	}

IL_0042:
	{
		V_1 = G_B5_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
	}

IL_0049:
	{
		__this->___foundCR_13 = 0;
		int32_t L_9 = V_1;
		return L_9;
	}

IL_0052:
	{
		bool L_10 = (__this->___foundCR_13);
		if (!L_10)
		{
			goto IL_0075;
		}
	}
	{
		__this->___foundCR_13 = 0;
		int32_t L_11 = (__this->___pos_4);
		if (L_11)
		{
			goto IL_006c;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_006c:
	{
		int32_t L_12 = (__this->___pos_4);
		return ((int32_t)((int32_t)L_12-(int32_t)1));
	}

IL_0075:
	{
		uint16_t L_13 = V_0;
		__this->___foundCR_13 = ((((int32_t)L_13) == ((int32_t)((int32_t)13)))? 1 : 0);
		int32_t L_14 = (__this->___pos_4);
		__this->___pos_4 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_008e:
	{
		int32_t L_15 = (__this->___pos_4);
		int32_t L_16 = (__this->___decoded_count_3);
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}
}
// System.String System.IO.StreamReader::ReadLine()
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t301_il2cpp_TypeInfo_var;
extern "C" String_t* StreamReader_ReadLine_m5569 (StreamReader_t1045 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		StringBuilder_t301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StringBuilder_t301 * V_2 = {0};
	StringBuilder_t301 * V_3 = {0};
	{
		Stream_t808 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t858 * L_1 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m7915(L_1, (String_t*) &_stringLiteral1547, (String_t*) &_stringLiteral1548, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = StreamReader_ReadBuffer_m5564(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0030:
	{
		int32_t L_5 = (__this->___pos_4);
		V_0 = L_5;
		int32_t L_6 = StreamReader_FindNextEOL_m5568(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = V_1;
		int32_t L_8 = (__this->___decoded_count_3);
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		CharU5BU5D_t300* L_11 = (__this->___decoded_buffer_2);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		String_t* L_15 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_15 = String_CreateString_m1259(L_15, L_11, L_12, ((int32_t)((int32_t)L_13-(int32_t)L_14)), /*hidden argument*/NULL);
		return L_15;
	}

IL_005b:
	{
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0078;
		}
	}
	{
		StringBuilder_t301 * L_17 = (__this->___line_builder_11);
		StringBuilder_t301 * L_18 = (__this->___line_builder_11);
		NullCheck(L_18);
		int32_t L_19 = StringBuilder_get_Length_m2508(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_20 = StringBuilder_ToString_m7099(L_17, 0, L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_0078:
	{
		StringBuilder_t301 * L_21 = (__this->___line_builder_11);
		if (L_21)
		{
			goto IL_008d;
		}
	}
	{
		StringBuilder_t301 * L_22 = (StringBuilder_t301 *)il2cpp_codegen_object_new (StringBuilder_t301_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2410(L_22, /*hidden argument*/NULL);
		__this->___line_builder_11 = L_22;
		goto IL_0099;
	}

IL_008d:
	{
		StringBuilder_t301 * L_23 = (__this->___line_builder_11);
		NullCheck(L_23);
		StringBuilder_set_Length_m2550(L_23, 0, /*hidden argument*/NULL);
	}

IL_0099:
	{
		bool L_24 = (__this->___foundCR_13);
		if (!L_24)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_25 = (__this->___decoded_count_3);
		__this->___decoded_count_3 = ((int32_t)((int32_t)L_25-(int32_t)1));
	}

IL_00af:
	{
		StringBuilder_t301 * L_26 = (__this->___line_builder_11);
		CharU5BU5D_t300* L_27 = (__this->___decoded_buffer_2);
		int32_t L_28 = V_0;
		int32_t L_29 = (__this->___decoded_count_3);
		int32_t L_30 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m7104(L_26, L_27, L_28, ((int32_t)((int32_t)L_29-(int32_t)L_30)), /*hidden argument*/NULL);
		int32_t L_31 = StreamReader_ReadBuffer_m5564(__this, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0118;
		}
	}
	{
		StringBuilder_t301 * L_32 = (__this->___line_builder_11);
		NullCheck(L_32);
		int32_t L_33 = StringBuilder_get_Capacity_m7094(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0100;
		}
	}
	{
		StringBuilder_t301 * L_34 = (__this->___line_builder_11);
		V_2 = L_34;
		__this->___line_builder_11 = (StringBuilder_t301 *)NULL;
		StringBuilder_t301 * L_35 = V_2;
		StringBuilder_t301 * L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = StringBuilder_get_Length_m2508(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_38 = StringBuilder_ToString_m7099(L_35, 0, L_37, /*hidden argument*/NULL);
		return L_38;
	}

IL_0100:
	{
		StringBuilder_t301 * L_39 = (__this->___line_builder_11);
		StringBuilder_t301 * L_40 = (__this->___line_builder_11);
		NullCheck(L_40);
		int32_t L_41 = StringBuilder_get_Length_m2508(L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		String_t* L_42 = StringBuilder_ToString_m7099(L_39, 0, L_41, /*hidden argument*/NULL);
		return L_42;
	}

IL_0118:
	{
		int32_t L_43 = (__this->___pos_4);
		V_0 = L_43;
		int32_t L_44 = StreamReader_FindNextEOL_m5568(__this, /*hidden argument*/NULL);
		V_1 = L_44;
		int32_t L_45 = V_1;
		int32_t L_46 = (__this->___decoded_count_3);
		if ((((int32_t)L_45) >= ((int32_t)L_46)))
		{
			goto IL_018f;
		}
	}
	{
		int32_t L_47 = V_1;
		int32_t L_48 = V_0;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_018f;
		}
	}
	{
		StringBuilder_t301 * L_49 = (__this->___line_builder_11);
		CharU5BU5D_t300* L_50 = (__this->___decoded_buffer_2);
		int32_t L_51 = V_0;
		int32_t L_52 = V_1;
		int32_t L_53 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m7104(L_49, L_50, L_51, ((int32_t)((int32_t)L_52-(int32_t)L_53)), /*hidden argument*/NULL);
		StringBuilder_t301 * L_54 = (__this->___line_builder_11);
		NullCheck(L_54);
		int32_t L_55 = StringBuilder_get_Capacity_m7094(L_54, /*hidden argument*/NULL);
		if ((((int32_t)L_55) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0177;
		}
	}
	{
		StringBuilder_t301 * L_56 = (__this->___line_builder_11);
		V_3 = L_56;
		__this->___line_builder_11 = (StringBuilder_t301 *)NULL;
		StringBuilder_t301 * L_57 = V_3;
		StringBuilder_t301 * L_58 = V_3;
		NullCheck(L_58);
		int32_t L_59 = StringBuilder_get_Length_m2508(L_58, /*hidden argument*/NULL);
		NullCheck(L_57);
		String_t* L_60 = StringBuilder_ToString_m7099(L_57, 0, L_59, /*hidden argument*/NULL);
		return L_60;
	}

IL_0177:
	{
		StringBuilder_t301 * L_61 = (__this->___line_builder_11);
		StringBuilder_t301 * L_62 = (__this->___line_builder_11);
		NullCheck(L_62);
		int32_t L_63 = StringBuilder_get_Length_m2508(L_62, /*hidden argument*/NULL);
		NullCheck(L_61);
		String_t* L_64 = StringBuilder_ToString_m7099(L_61, 0, L_63, /*hidden argument*/NULL);
		return L_64;
	}

IL_018f:
	{
		int32_t L_65 = V_1;
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_01ac;
		}
	}
	{
		StringBuilder_t301 * L_66 = (__this->___line_builder_11);
		StringBuilder_t301 * L_67 = (__this->___line_builder_11);
		NullCheck(L_67);
		int32_t L_68 = StringBuilder_get_Length_m2508(L_67, /*hidden argument*/NULL);
		NullCheck(L_66);
		String_t* L_69 = StringBuilder_ToString_m7099(L_66, 0, L_68, /*hidden argument*/NULL);
		return L_69;
	}

IL_01ac:
	{
		goto IL_0099;
	}
}
// System.String System.IO.StreamReader::ReadToEnd()
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t301_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t300_il2cpp_TypeInfo_var;
extern "C" String_t* StreamReader_ReadToEnd_m5570 (StreamReader_t1045 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		StringBuilder_t301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		CharU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(71);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t301 * V_0 = {0};
	int32_t V_1 = 0;
	CharU5BU5D_t300* V_2 = {0};
	int32_t V_3 = 0;
	{
		Stream_t808 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t858 * L_1 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m7915(L_1, (String_t*) &_stringLiteral1547, (String_t*) &_stringLiteral1548, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		StringBuilder_t301 * L_2 = (StringBuilder_t301 *)il2cpp_codegen_object_new (StringBuilder_t301_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2410(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		CharU5BU5D_t300* L_3 = (__this->___decoded_buffer_2);
		NullCheck(L_3);
		V_1 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = V_1;
		V_2 = ((CharU5BU5D_t300*)SZArrayNew(CharU5BU5D_t300_il2cpp_TypeInfo_var, L_4));
		goto IL_003a;
	}

IL_0030:
	{
		StringBuilder_t301 * L_5 = V_0;
		CharU5BU5D_t300* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_5);
		StringBuilder_Append_m7104(L_5, L_6, 0, L_7, /*hidden argument*/NULL);
	}

IL_003a:
	{
		CharU5BU5D_t300* L_8 = V_2;
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t300*, int32_t, int32_t >::Invoke(8 /* System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32) */, __this, L_8, 0, L_9);
		int32_t L_11 = L_10;
		V_3 = L_11;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		StringBuilder_t301 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_12);
		return L_13;
	}
}
// System.IO.StreamWriter
#include "mscorlib_System_IO_StreamWriter.h"
#ifndef _MSC_VER
#else
#endif
// System.IO.StreamWriter
#include "mscorlib_System_IO_StreamWriterMethodDeclarations.h"

// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriterMethodDeclarations.h"
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"


// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void StreamWriter__ctor_m5571 (StreamWriter_t1046 * __this, Stream_t808 * ___stream, Encoding_t281 * ___encoding, const MethodInfo* method)
{
	{
		Stream_t808 * L_0 = ___stream;
		Encoding_t281 * L_1 = ___encoding;
		StreamWriter__ctor_m5572(__this, L_0, L_1, ((int32_t)1024), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
extern TypeInfo* TextWriter_t690_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" void StreamWriter__ctor_m5572 (StreamWriter_t1046 * __this, Stream_t808 * ___stream, Encoding_t281 * ___encoding, int32_t ___bufferSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextWriter_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1980);
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextWriter_t690_il2cpp_TypeInfo_var);
		TextWriter__ctor_m5617(__this, /*hidden argument*/NULL);
		Stream_t808 * L_0 = ___stream;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral1545, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Encoding_t281 * L_2 = ___encoding;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t341 * L_3 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_3, (String_t*) &_stringLiteral1543, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int32_t L_4 = ___bufferSize;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_5 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_5, (String_t*) &_stringLiteral1460, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0031:
	{
		Stream_t808 * L_6 = ___stream;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_6);
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_t313 * L_8 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_8, (String_t*) &_stringLiteral1550, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		Stream_t808 * L_9 = ___stream;
		__this->___internalStream_3 = L_9;
		Encoding_t281 * L_10 = ___encoding;
		int32_t L_11 = ___bufferSize;
		StreamWriter_Initialize_m5574(__this, L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamWriter::.cctor()
extern TypeInfo* Stream_t808_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t281_il2cpp_TypeInfo_var;
extern TypeInfo* StreamWriter_t1046_il2cpp_TypeInfo_var;
extern "C" void StreamWriter__cctor_m5573 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stream_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1563);
		Encoding_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		StreamWriter_t1046_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1911);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t808_il2cpp_TypeInfo_var);
		Stream_t808 * L_0 = ((Stream_t808_StaticFields*)Stream_t808_il2cpp_TypeInfo_var->static_fields)->___Null_0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t281_il2cpp_TypeInfo_var);
		Encoding_t281 * L_1 = Encoding_get_UTF8Unmarked_m7068(NULL /*static, unused*/, /*hidden argument*/NULL);
		StreamWriter_t1046 * L_2 = (StreamWriter_t1046 *)il2cpp_codegen_object_new (StreamWriter_t1046_il2cpp_TypeInfo_var);
		StreamWriter__ctor_m5572(L_2, L_0, L_1, 1, /*hidden argument*/NULL);
		((StreamWriter_t1046_StaticFields*)StreamWriter_t1046_il2cpp_TypeInfo_var->static_fields)->___Null_11 = L_2;
		return;
	}
}
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
extern TypeInfo* CharU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t102_il2cpp_TypeInfo_var;
extern "C" void StreamWriter_Initialize_m5574 (StreamWriter_t1046 * __this, Encoding_t281 * ___encoding, int32_t ___bufferSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(71);
		ByteU5BU5D_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Encoding_t281 * L_0 = ___encoding;
		__this->___internalEncoding_2 = L_0;
		int32_t L_1 = 0;
		V_1 = L_1;
		__this->___byte_pos_6 = L_1;
		int32_t L_2 = V_1;
		__this->___decode_pos_8 = L_2;
		int32_t L_3 = ___bufferSize;
		int32_t L_4 = Math_Max_m3506(NULL /*static, unused*/, L_3, ((int32_t)256), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->___decode_buf_7 = ((CharU5BU5D_t300*)SZArrayNew(CharU5BU5D_t300_il2cpp_TypeInfo_var, L_5));
		Encoding_t281 * L_6 = ___encoding;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(16 /* System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32) */, L_6, L_7);
		__this->___byte_buf_5 = ((ByteU5BU5D_t102*)SZArrayNew(ByteU5BU5D_t102_il2cpp_TypeInfo_var, L_8));
		Stream_t808 * L_9 = (__this->___internalStream_3);
		NullCheck(L_9);
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_9);
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		Stream_t808 * L_11 = (__this->___internalStream_3);
		NullCheck(L_11);
		int64_t L_12 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Position() */, L_11);
		if ((((int64_t)L_12) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0064;
		}
	}
	{
		__this->___preamble_done_10 = 1;
	}

IL_0064:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
extern "C" void StreamWriter_set_AutoFlush_m5575 (StreamWriter_t1046 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___iflush_4 = L_0;
		bool L_1 = (__this->___iflush_4);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.StreamWriter::Flush() */, __this);
	}

IL_0015:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
extern TypeInfo* Exception_t65_il2cpp_TypeInfo_var;
extern "C" void StreamWriter_Dispose_m5576 (StreamWriter_t1046 * __this, bool ___disposing, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t65 * V_0 = {0};
	Exception_t65 * V_1 = {0};
	Exception_t65 * V_2 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Exception_t65 *)NULL;
		bool L_0 = (__this->___DisposedAlready_9);
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		bool L_1 = ___disposing;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Stream_t808 * L_2 = (__this->___internalStream_3);
		if (!L_2)
		{
			goto IL_003e;
		}
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.StreamWriter::Flush() */, __this);
		goto IL_0022;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t65_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_001d:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t65 *)__exception_local);
		Exception_t65 * L_3 = V_1;
		V_0 = L_3;
		goto IL_0022;
	} // end catch (depth: 1)

IL_0022:
	{
		__this->___DisposedAlready_9 = 1;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		Stream_t808 * L_4 = (__this->___internalStream_3);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_4);
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t65_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t65 *)__exception_local);
			Exception_t65 * L_5 = V_0;
			if (L_5)
			{
				goto IL_003c;
			}
		}

IL_003a:
		{
			Exception_t65 * L_6 = V_2;
			V_0 = L_6;
		}

IL_003c:
		{
			goto IL_003e;
		}
	} // end catch (depth: 1)

IL_003e:
	{
		__this->___internalStream_3 = (Stream_t808 *)NULL;
		__this->___byte_buf_5 = (ByteU5BU5D_t102*)NULL;
		__this->___internalEncoding_2 = (Encoding_t281 *)NULL;
		__this->___decode_buf_7 = (CharU5BU5D_t300*)NULL;
		Exception_t65 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		Exception_t65 * L_8 = V_0;
		il2cpp_codegen_raise_exception(L_8);
	}

IL_005f:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Flush()
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern "C" void StreamWriter_Flush_m5577 (StreamWriter_t1046 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t858 * L_1 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3515(L_1, (String_t*) &_stringLiteral1551, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		StreamWriter_Decode_m5579(__this, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___byte_pos_6);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		StreamWriter_FlushBytes_m5578(__this, /*hidden argument*/NULL);
		Stream_t808 * L_3 = (__this->___internalStream_3);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Flush() */, L_3);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::FlushBytes()
extern "C" void StreamWriter_FlushBytes_m5578 (StreamWriter_t1046 * __this, const MethodInfo* method)
{
	ByteU5BU5D_t102* V_0 = {0};
	{
		bool L_0 = (__this->___preamble_done_10);
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_1 = (__this->___byte_pos_6);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		Encoding_t281 * L_2 = (__this->___internalEncoding_2);
		NullCheck(L_2);
		ByteU5BU5D_t102* L_3 = (ByteU5BU5D_t102*)VirtFuncInvoker0< ByteU5BU5D_t102* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetPreamble() */, L_2);
		V_0 = L_3;
		ByteU5BU5D_t102* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		Stream_t808 * L_5 = (__this->___internalStream_3);
		ByteU5BU5D_t102* L_6 = V_0;
		ByteU5BU5D_t102* L_7 = V_0;
		NullCheck(L_7);
		NullCheck(L_5);
		VirtActionInvoker3< ByteU5BU5D_t102*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, (((int32_t)(((Array_t *)L_7)->max_length))));
	}

IL_0033:
	{
		__this->___preamble_done_10 = 1;
	}

IL_003a:
	{
		Stream_t808 * L_8 = (__this->___internalStream_3);
		ByteU5BU5D_t102* L_9 = (__this->___byte_buf_5);
		int32_t L_10 = (__this->___byte_pos_6);
		NullCheck(L_8);
		VirtActionInvoker3< ByteU5BU5D_t102*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
		__this->___byte_pos_6 = 0;
		return;
	}
}
// System.Void System.IO.StreamWriter::Decode()
extern "C" void StreamWriter_Decode_m5579 (StreamWriter_t1046 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___byte_pos_6);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		StreamWriter_FlushBytes_m5578(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		int32_t L_1 = (__this->___decode_pos_8);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Encoding_t281 * L_2 = (__this->___internalEncoding_2);
		CharU5BU5D_t300* L_3 = (__this->___decode_buf_7);
		int32_t L_4 = (__this->___decode_pos_8);
		ByteU5BU5D_t102* L_5 = (__this->___byte_buf_5);
		int32_t L_6 = (__this->___byte_pos_6);
		NullCheck(L_2);
		int32_t L_7 = (int32_t)VirtFuncInvoker5< int32_t, CharU5BU5D_t300*, int32_t, int32_t, ByteU5BU5D_t102*, int32_t >::Invoke(7 /* System.Int32 System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_2, L_3, 0, L_4, L_5, L_6);
		V_0 = L_7;
		int32_t L_8 = (__this->___byte_pos_6);
		int32_t L_9 = V_0;
		__this->___byte_pos_6 = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		__this->___decode_pos_8 = 0;
	}

IL_0052:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" void StreamWriter_Write_m5580 (StreamWriter_t1046 * __this, CharU5BU5D_t300* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t858 * L_1 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3515(L_1, (String_t*) &_stringLiteral1551, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		CharU5BU5D_t300* L_2 = ___buffer;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t341 * L_3 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_3, (String_t*) &_stringLiteral903, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0021:
	{
		int32_t L_4 = ___index;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_5 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1263(L_5, (String_t*) &_stringLiteral262, (String_t*) &_stringLiteral662, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0035:
	{
		int32_t L_6 = ___count;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_7 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1263(L_7, (String_t*) &_stringLiteral344, (String_t*) &_stringLiteral662, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0049:
	{
		int32_t L_8 = ___index;
		CharU5BU5D_t300* L_9 = ___buffer;
		NullCheck(L_9);
		int32_t L_10 = ___count;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_005c;
		}
	}
	{
		ArgumentException_t313 * L_11 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_11, (String_t*) &_stringLiteral1549, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005c:
	{
		CharU5BU5D_t300* L_12 = ___buffer;
		int32_t L_13 = ___index;
		int32_t L_14 = ___count;
		StreamWriter_LowLevelWrite_m5581(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		bool L_15 = (__this->___iflush_4);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.StreamWriter::Flush() */, __this);
	}

IL_0073:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
extern "C" void StreamWriter_LowLevelWrite_m5581 (StreamWriter_t1046 * __this, CharU5BU5D_t300* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0060;
	}

IL_0002:
	{
		CharU5BU5D_t300* L_0 = (__this->___decode_buf_7);
		NullCheck(L_0);
		int32_t L_1 = (__this->___decode_pos_8);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))-(int32_t)L_1));
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		StreamWriter_Decode_m5579(__this, /*hidden argument*/NULL);
		CharU5BU5D_t300* L_3 = (__this->___decode_buf_7);
		NullCheck(L_3);
		V_0 = (((int32_t)(((Array_t *)L_3)->max_length)));
	}

IL_0024:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = ___count;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = ___count;
		V_0 = L_6;
	}

IL_002a:
	{
		CharU5BU5D_t300* L_7 = ___buffer;
		int32_t L_8 = ___index;
		CharU5BU5D_t300* L_9 = (__this->___decode_buf_7);
		int32_t L_10 = (__this->___decode_pos_8);
		int32_t L_11 = V_0;
		Buffer_BlockCopy_m2434(NULL /*static, unused*/, (Array_t *)(Array_t *)L_7, ((int32_t)((int32_t)L_8*(int32_t)2)), (Array_t *)(Array_t *)L_9, ((int32_t)((int32_t)L_10*(int32_t)2)), ((int32_t)((int32_t)L_11*(int32_t)2)), /*hidden argument*/NULL);
		int32_t L_12 = ___count;
		int32_t L_13 = V_0;
		___count = ((int32_t)((int32_t)L_12-(int32_t)L_13));
		int32_t L_14 = ___index;
		int32_t L_15 = V_0;
		___index = ((int32_t)((int32_t)L_14+(int32_t)L_15));
		int32_t L_16 = (__this->___decode_pos_8);
		int32_t L_17 = V_0;
		__this->___decode_pos_8 = ((int32_t)((int32_t)L_16+(int32_t)L_17));
	}

IL_0060:
	{
		int32_t L_18 = ___count;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
extern "C" void StreamWriter_LowLevelWrite_m5582 (StreamWriter_t1046 * __this, String_t* ___s, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___s;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1158(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_006d;
	}

IL_000b:
	{
		CharU5BU5D_t300* L_2 = (__this->___decode_buf_7);
		NullCheck(L_2);
		int32_t L_3 = (__this->___decode_pos_8);
		V_2 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))-(int32_t)L_3));
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		StreamWriter_Decode_m5579(__this, /*hidden argument*/NULL);
		CharU5BU5D_t300* L_5 = (__this->___decode_buf_7);
		NullCheck(L_5);
		V_2 = (((int32_t)(((Array_t *)L_5)->max_length)));
	}

IL_002d:
	{
		int32_t L_6 = V_2;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_8 = V_0;
		V_2 = L_8;
	}

IL_0033:
	{
		V_3 = 0;
		goto IL_0053;
	}

IL_0037:
	{
		CharU5BU5D_t300* L_9 = (__this->___decode_buf_7);
		int32_t L_10 = V_3;
		int32_t L_11 = (__this->___decode_pos_8);
		String_t* L_12 = ___s;
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		uint16_t L_15 = String_get_Chars_m1306(L_12, ((int32_t)((int32_t)L_13+(int32_t)L_14)), /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)((int32_t)L_10+(int32_t)L_11)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_9, ((int32_t)((int32_t)L_10+(int32_t)L_11)))) = (uint16_t)L_15;
		int32_t L_16 = V_3;
		V_3 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_2;
		V_0 = ((int32_t)((int32_t)L_19-(int32_t)L_20));
		int32_t L_21 = V_1;
		int32_t L_22 = V_2;
		V_1 = ((int32_t)((int32_t)L_21+(int32_t)L_22));
		int32_t L_23 = (__this->___decode_pos_8);
		int32_t L_24 = V_2;
		__this->___decode_pos_8 = ((int32_t)((int32_t)L_23+(int32_t)L_24));
	}

IL_006d:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.Char)
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern "C" void StreamWriter_Write_m5583 (StreamWriter_t1046 * __this, uint16_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t858 * L_1 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3515(L_1, (String_t*) &_stringLiteral1551, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		int32_t L_2 = (__this->___decode_pos_8);
		CharU5BU5D_t300* L_3 = (__this->___decode_buf_7);
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		StreamWriter_Decode_m5579(__this, /*hidden argument*/NULL);
	}

IL_0029:
	{
		CharU5BU5D_t300* L_4 = (__this->___decode_buf_7);
		int32_t L_5 = (__this->___decode_pos_8);
		int32_t L_6 = L_5;
		V_0 = L_6;
		__this->___decode_pos_8 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_0;
		uint16_t L_8 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_7);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_7)) = (uint16_t)L_8;
		bool L_9 = (__this->___iflush_4);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.StreamWriter::Flush() */, __this);
	}

IL_0050:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.Char[])
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern "C" void StreamWriter_Write_m5584 (StreamWriter_t1046 * __this, CharU5BU5D_t300* ___buffer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t858 * L_1 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3515(L_1, (String_t*) &_stringLiteral1551, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		CharU5BU5D_t300* L_2 = ___buffer;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		CharU5BU5D_t300* L_3 = ___buffer;
		CharU5BU5D_t300* L_4 = ___buffer;
		NullCheck(L_4);
		StreamWriter_LowLevelWrite_m5581(__this, L_3, 0, (((int32_t)(((Array_t *)L_4)->max_length))), /*hidden argument*/NULL);
	}

IL_0021:
	{
		bool L_5 = (__this->___iflush_4);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.StreamWriter::Flush() */, __this);
	}

IL_002f:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.String)
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern "C" void StreamWriter_Write_m5585 (StreamWriter_t1046 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t858 * L_1 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3515(L_1, (String_t*) &_stringLiteral1551, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		String_t* L_2 = ___value;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3 = ___value;
		StreamWriter_LowLevelWrite_m5582(__this, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		bool L_4 = (__this->___iflush_4);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.StreamWriter::Flush() */, __this);
	}

IL_002b:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Close()
extern "C" void StreamWriter_Close_m5586 (StreamWriter_t1046 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void System.IO.StreamWriter::Dispose(System.Boolean) */, __this, 1);
		return;
	}
}
// System.Void System.IO.StreamWriter::Finalize()
extern "C" void StreamWriter_Finalize_m5587 (StreamWriter_t1046 * __this, const MethodInfo* method)
{
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void System.IO.StreamWriter::Dispose(System.Boolean) */, __this, 0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		Object_Finalize_m1160(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0010:
	{
		return;
	}
}
// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
#ifndef _MSC_VER
#else
#endif
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"



// System.Void System.IO.StringReader::.ctor(System.String)
extern TypeInfo* TextReader_t972_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" void StringReader__ctor_m1206 (StringReader_t330 * __this, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextReader_t972_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1978);
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextReader_t972_il2cpp_TypeInfo_var);
		TextReader__ctor_m5597(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___s;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral930, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		String_t* L_2 = ___s;
		__this->___source_1 = L_2;
		__this->___nextChar_2 = 0;
		String_t* L_3 = ___s;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1158(L_3, /*hidden argument*/NULL);
		__this->___sourceLength_3 = L_4;
		return;
	}
}
// System.Void System.IO.StringReader::Dispose(System.Boolean)
extern "C" void StringReader_Dispose_m5588 (StringReader_t330 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		__this->___source_1 = (String_t*)NULL;
		bool L_0 = ___disposing;
		TextReader_Dispose_m5600(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.IO.StringReader::Peek()
extern "C" int32_t StringReader_Peek_m5589 (StringReader_t330 * __this, const MethodInfo* method)
{
	{
		StringReader_CheckObjectDisposedException_m5594(__this, /*hidden argument*/NULL);
		int32_t L_0 = (__this->___nextChar_2);
		int32_t L_1 = (__this->___sourceLength_3);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		String_t* L_2 = (__this->___source_1);
		int32_t L_3 = (__this->___nextChar_2);
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m1306(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.IO.StringReader::Read()
extern "C" int32_t StringReader_Read_m5590 (StringReader_t330 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		StringReader_CheckObjectDisposedException_m5594(__this, /*hidden argument*/NULL);
		int32_t L_0 = (__this->___nextChar_2);
		int32_t L_1 = (__this->___sourceLength_3);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		String_t* L_2 = (__this->___source_1);
		int32_t L_3 = (__this->___nextChar_2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->___nextChar_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		NullCheck(L_2);
		uint16_t L_6 = String_get_Chars_m1306(L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int32 System.IO.StringReader::Read(System.Char[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" int32_t StringReader_Read_m5591 (StringReader_t330 * __this, CharU5BU5D_t300* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		StringReader_CheckObjectDisposedException_m5594(__this, /*hidden argument*/NULL);
		CharU5BU5D_t300* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral903, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		CharU5BU5D_t300* L_2 = ___buffer;
		NullCheck(L_2);
		int32_t L_3 = ___index;
		int32_t L_4 = ___count;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))-(int32_t)L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t313 * L_5 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m7288(L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0022:
	{
		int32_t L_6 = ___index;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_7 = ___count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		ArgumentOutOfRangeException_t343 * L_8 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2519(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0030:
	{
		int32_t L_9 = (__this->___nextChar_2);
		int32_t L_10 = (__this->___sourceLength_3);
		int32_t L_11 = ___count;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_12 = (__this->___sourceLength_3);
		int32_t L_13 = (__this->___nextChar_2);
		V_0 = ((int32_t)((int32_t)L_12-(int32_t)L_13));
		goto IL_0052;
	}

IL_0050:
	{
		int32_t L_14 = ___count;
		V_0 = L_14;
	}

IL_0052:
	{
		String_t* L_15 = (__this->___source_1);
		int32_t L_16 = (__this->___nextChar_2);
		CharU5BU5D_t300* L_17 = ___buffer;
		int32_t L_18 = ___index;
		int32_t L_19 = V_0;
		NullCheck(L_15);
		String_CopyTo_m3912(L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		int32_t L_20 = (__this->___nextChar_2);
		int32_t L_21 = V_0;
		__this->___nextChar_2 = ((int32_t)((int32_t)L_20+(int32_t)L_21));
		int32_t L_22 = V_0;
		return L_22;
	}
}
// System.String System.IO.StringReader::ReadLine()
extern "C" String_t* StringReader_ReadLine_m5592 (StringReader_t330 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	StringReader_t330 * G_B14_1 = {0};
	int32_t G_B13_0 = 0;
	StringReader_t330 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	StringReader_t330 * G_B15_2 = {0};
	{
		StringReader_CheckObjectDisposedException_m5594(__this, /*hidden argument*/NULL);
		int32_t L_0 = (__this->___nextChar_2);
		String_t* L_1 = (__this->___source_1);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1158(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_001b:
	{
		String_t* L_3 = (__this->___source_1);
		int32_t L_4 = (__this->___nextChar_2);
		NullCheck(L_3);
		int32_t L_5 = String_IndexOf_m1192(L_3, ((int32_t)13), L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = (__this->___source_1);
		int32_t L_7 = (__this->___nextChar_2);
		NullCheck(L_6);
		int32_t L_8 = String_IndexOf_m1192(L_6, ((int32_t)10), L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		V_3 = 0;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.IO.StringReader::ReadToEnd() */, __this);
		return L_11;
	}

IL_0054:
	{
		int32_t L_12 = V_1;
		V_2 = L_12;
		goto IL_0070;
	}

IL_0058:
	{
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_14 = V_0;
		V_2 = L_14;
		goto IL_0070;
	}

IL_0060:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_17 = V_1;
		G_B11_0 = L_17;
		goto IL_0068;
	}

IL_0067:
	{
		int32_t L_18 = V_0;
		G_B11_0 = L_18;
	}

IL_0068:
	{
		V_2 = G_B11_0;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		V_3 = ((((int32_t)((int32_t)((int32_t)L_19+(int32_t)1))) == ((int32_t)L_20))? 1 : 0);
	}

IL_0070:
	{
		String_t* L_21 = (__this->___source_1);
		int32_t L_22 = (__this->___nextChar_2);
		int32_t L_23 = V_2;
		int32_t L_24 = (__this->___nextChar_2);
		NullCheck(L_21);
		String_t* L_25 = String_Substring_m1197(L_21, L_22, ((int32_t)((int32_t)L_23-(int32_t)L_24)), /*hidden argument*/NULL);
		V_4 = L_25;
		int32_t L_26 = V_2;
		bool L_27 = V_3;
		G_B13_0 = L_26;
		G_B13_1 = __this;
		if (!L_27)
		{
			G_B14_0 = L_26;
			G_B14_1 = __this;
			goto IL_0093;
		}
	}
	{
		G_B15_0 = 2;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_0094;
	}

IL_0093:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_0094:
	{
		NullCheck(G_B15_2);
		G_B15_2->___nextChar_2 = ((int32_t)((int32_t)G_B15_1+(int32_t)G_B15_0));
		String_t* L_28 = V_4;
		return L_28;
	}
}
// System.String System.IO.StringReader::ReadToEnd()
extern "C" String_t* StringReader_ReadToEnd_m5593 (StringReader_t330 * __this, const MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		StringReader_CheckObjectDisposedException_m5594(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___source_1);
		int32_t L_1 = (__this->___nextChar_2);
		int32_t L_2 = (__this->___sourceLength_3);
		int32_t L_3 = (__this->___nextChar_2);
		NullCheck(L_0);
		String_t* L_4 = String_Substring_m1197(L_0, L_1, ((int32_t)((int32_t)L_2-(int32_t)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = (__this->___sourceLength_3);
		__this->___nextChar_2 = L_5;
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Void System.IO.StringReader::CheckObjectDisposedException()
extern TypeInfo* ObjectDisposedException_t858_il2cpp_TypeInfo_var;
extern "C" void StringReader_CheckObjectDisposedException_m5594 (StringReader_t330 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1498);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___source_1);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m4424(NULL /*static, unused*/, (String_t*) &_stringLiteral1553, /*hidden argument*/NULL);
		ObjectDisposedException_t858 * L_2 = (ObjectDisposedException_t858 *)il2cpp_codegen_object_new (ObjectDisposedException_t858_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m7915(L_2, (String_t*) &_stringLiteral1552, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		return;
	}
}
// System.IO.TextReader/NullTextReader
#include "mscorlib_System_IO_TextReader_NullTextReader.h"
#ifndef _MSC_VER
#else
#endif
// System.IO.TextReader/NullTextReader
#include "mscorlib_System_IO_TextReader_NullTextReaderMethodDeclarations.h"



// System.Void System.IO.TextReader/NullTextReader::.ctor()
extern TypeInfo* TextReader_t972_il2cpp_TypeInfo_var;
extern "C" void NullTextReader__ctor_m5595 (NullTextReader_t1047 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextReader_t972_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1978);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextReader_t972_il2cpp_TypeInfo_var);
		TextReader__ctor_m5597(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.IO.TextReader/NullTextReader::ReadLine()
extern "C" String_t* NullTextReader_ReadLine_m5596 (NullTextReader_t1047 * __this, const MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IO.SynchronizedReader
#include "mscorlib_System_IO_SynchronizedReader.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
// System.IO.SynchronizedReader
#include "mscorlib_System_IO_SynchronizedReaderMethodDeclarations.h"


// System.Void System.IO.TextReader::.ctor()
extern "C" void TextReader__ctor_m5597 (TextReader_t972 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.TextReader::.cctor()
extern TypeInfo* NullTextReader_t1047_il2cpp_TypeInfo_var;
extern TypeInfo* TextReader_t972_il2cpp_TypeInfo_var;
extern "C" void TextReader__cctor_m5598 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullTextReader_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		TextReader_t972_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1978);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullTextReader_t1047 * L_0 = (NullTextReader_t1047 *)il2cpp_codegen_object_new (NullTextReader_t1047_il2cpp_TypeInfo_var);
		NullTextReader__ctor_m5595(L_0, /*hidden argument*/NULL);
		((TextReader_t972_StaticFields*)TextReader_t972_il2cpp_TypeInfo_var->static_fields)->___Null_0 = L_0;
		return;
	}
}
// System.Void System.IO.TextReader::Dispose()
extern "C" void TextReader_Dispose_m5599 (TextReader_t972 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void System.IO.TextReader::Dispose(System.Boolean) */, __this, 1);
		return;
	}
}
// System.Void System.IO.TextReader::Dispose(System.Boolean)
extern "C" void TextReader_Dispose_m5600 (TextReader_t972 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		GC_SuppressFinalize_m3502(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_0009:
	{
		return;
	}
}
// System.Int32 System.IO.TextReader::Peek()
extern "C" int32_t TextReader_Peek_m5601 (TextReader_t972 * __this, const MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.TextReader::Read()
extern "C" int32_t TextReader_Read_m5602 (TextReader_t972 * __this, const MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t TextReader_Read_m5603 (TextReader_t972 * __this, CharU5BU5D_t300* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_001c;
	}

IL_0004:
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, __this);
		int32_t L_1 = L_0;
		V_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_1;
		return L_2;
	}

IL_0011:
	{
		CharU5BU5D_t300* L_3 = ___buffer;
		int32_t L_4 = ___index;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)L_4+(int32_t)L_5)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, ((int32_t)((int32_t)L_4+(int32_t)L_5)))) = (uint16_t)(((uint16_t)L_6));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_001c:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ___count;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
// System.String System.IO.TextReader::ReadLine()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* TextReader_ReadLine_m5604 (TextReader_t972 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.String System.IO.TextReader::ReadToEnd()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* TextReader_ReadToEnd_m5605 (TextReader_t972 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.IO.TextReader System.IO.TextReader::Synchronized(System.IO.TextReader)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizedReader_t1048_il2cpp_TypeInfo_var;
extern "C" TextReader_t972 * TextReader_Synchronized_m5606 (Object_t * __this /* static, unused */, TextReader_t972 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		SynchronizedReader_t1048_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1982);
		s_Il2CppMethodIntialized = true;
	}
	{
		TextReader_t972 * L_0 = ___reader;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral1554, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		TextReader_t972 * L_2 = ___reader;
		if (!((SynchronizedReader_t1048 *)IsInst(L_2, SynchronizedReader_t1048_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		TextReader_t972 * L_3 = ___reader;
		return L_3;
	}

IL_0018:
	{
		TextReader_t972 * L_4 = ___reader;
		SynchronizedReader_t1048 * L_5 = (SynchronizedReader_t1048 *)il2cpp_codegen_object_new (SynchronizedReader_t1048_il2cpp_TypeInfo_var);
		SynchronizedReader__ctor_m5607(L_5, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.SynchronizedReader::.ctor(System.IO.TextReader)
extern TypeInfo* TextReader_t972_il2cpp_TypeInfo_var;
extern "C" void SynchronizedReader__ctor_m5607 (SynchronizedReader_t1048 * __this, TextReader_t972 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextReader_t972_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1978);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextReader_t972_il2cpp_TypeInfo_var);
		TextReader__ctor_m5597(__this, /*hidden argument*/NULL);
		TextReader_t972 * L_0 = ___reader;
		__this->___reader_1 = L_0;
		return;
	}
}
// System.Int32 System.IO.SynchronizedReader::Peek()
extern "C" int32_t SynchronizedReader_Peek_m5608 (SynchronizedReader_t1048 * __this, const MethodInfo* method)
{
	SynchronizedReader_t1048 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1048 * L_0 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t972 * L_1 = (__this->___reader_1);
			NullCheck(L_1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1048 * L_3 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.String System.IO.SynchronizedReader::ReadLine()
extern "C" String_t* SynchronizedReader_ReadLine_m5609 (SynchronizedReader_t1048 * __this, const MethodInfo* method)
{
	SynchronizedReader_t1048 * V_0 = {0};
	String_t* V_1 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1048 * L_0 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t972 * L_1 = (__this->___reader_1);
			NullCheck(L_1);
			String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.IO.TextReader::ReadLine() */, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1048 * L_3 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_001f:
	{
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.String System.IO.SynchronizedReader::ReadToEnd()
extern "C" String_t* SynchronizedReader_ReadToEnd_m5610 (SynchronizedReader_t1048 * __this, const MethodInfo* method)
{
	SynchronizedReader_t1048 * V_0 = {0};
	String_t* V_1 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1048 * L_0 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t972 * L_1 = (__this->___reader_1);
			NullCheck(L_1);
			String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.IO.TextReader::ReadToEnd() */, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1048 * L_3 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_001f:
	{
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Int32 System.IO.SynchronizedReader::Read()
extern "C" int32_t SynchronizedReader_Read_m5611 (SynchronizedReader_t1048 * __this, const MethodInfo* method)
{
	SynchronizedReader_t1048 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1048 * L_0 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t972 * L_1 = (__this->___reader_1);
			NullCheck(L_1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1048 * L_3 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Int32 System.IO.SynchronizedReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t SynchronizedReader_Read_m5612 (SynchronizedReader_t1048 * __this, CharU5BU5D_t300* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	SynchronizedReader_t1048 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1048 * L_0 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t972 * L_1 = (__this->___reader_1);
			CharU5BU5D_t300* L_2 = ___buffer;
			int32_t L_3 = ___index;
			int32_t L_4 = ___count;
			NullCheck(L_1);
			int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t300*, int32_t, int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32) */, L_1, L_2, L_3, L_4);
			V_1 = L_5;
			IL2CPP_LEAVE(0x22, FINALLY_001b);
		}

IL_0019:
		{
			IL2CPP_LEAVE(0x22, FINALLY_001b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1048 * L_6 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0022:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.IO.TextWriter/NullTextWriter
#include "mscorlib_System_IO_TextWriter_NullTextWriter.h"
#ifndef _MSC_VER
#else
#endif
// System.IO.TextWriter/NullTextWriter
#include "mscorlib_System_IO_TextWriter_NullTextWriterMethodDeclarations.h"



// System.Void System.IO.TextWriter/NullTextWriter::.ctor()
extern TypeInfo* TextWriter_t690_il2cpp_TypeInfo_var;
extern "C" void NullTextWriter__ctor_m5613 (NullTextWriter_t1049 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextWriter_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1980);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextWriter_t690_il2cpp_TypeInfo_var);
		TextWriter__ctor_m5617(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.String)
extern "C" void NullTextWriter_Write_m5614 (NullTextWriter_t1049 * __this, String_t* ___s, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char)
extern "C" void NullTextWriter_Write_m5615 (NullTextWriter_t1049 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void NullTextWriter_Write_m5616 (NullTextWriter_t1049 * __this, CharU5BU5D_t300* ___value, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	{
		return;
	}
}
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
#ifndef _MSC_VER
#else
#endif

// System.IO.SynchronizedWriter
#include "mscorlib_System_IO_SynchronizedWriter.h"
// System.IO.SynchronizedWriter
#include "mscorlib_System_IO_SynchronizedWriterMethodDeclarations.h"


// System.Void System.IO.TextWriter::.ctor()
extern "C" void TextWriter__ctor_m5617 (TextWriter_t690 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		String_t* L_0 = Environment_get_NewLine_m2445(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		CharU5BU5D_t300* L_1 = String_ToCharArray_m1256(L_0, /*hidden argument*/NULL);
		__this->___CoreNewLine_0 = L_1;
		return;
	}
}
// System.Void System.IO.TextWriter::.cctor()
extern TypeInfo* NullTextWriter_t1049_il2cpp_TypeInfo_var;
extern TypeInfo* TextWriter_t690_il2cpp_TypeInfo_var;
extern "C" void TextWriter__cctor_m5618 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullTextWriter_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1983);
		TextWriter_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1980);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullTextWriter_t1049 * L_0 = (NullTextWriter_t1049 *)il2cpp_codegen_object_new (NullTextWriter_t1049_il2cpp_TypeInfo_var);
		NullTextWriter__ctor_m5613(L_0, /*hidden argument*/NULL);
		((TextWriter_t690_StaticFields*)TextWriter_t690_il2cpp_TypeInfo_var->static_fields)->___Null_1 = L_0;
		return;
	}
}
// System.Void System.IO.TextWriter::Close()
extern "C" void TextWriter_Close_m5619 (TextWriter_t690 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void System.IO.TextWriter::Dispose(System.Boolean) */, __this, 1);
		return;
	}
}
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
extern "C" void TextWriter_Dispose_m5620 (TextWriter_t690 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		GC_SuppressFinalize_m3502(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_0009:
	{
		return;
	}
}
// System.Void System.IO.TextWriter::Dispose()
extern "C" void TextWriter_Dispose_m5621 (TextWriter_t690 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void System.IO.TextWriter::Dispose(System.Boolean) */, __this, 1);
		GC_SuppressFinalize_m3502(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.TextWriter::Flush()
extern "C" void TextWriter_Flush_m5622 (TextWriter_t690 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizedWriter_t1050_il2cpp_TypeInfo_var;
extern "C" TextWriter_t690 * TextWriter_Synchronized_m5623 (Object_t * __this /* static, unused */, TextWriter_t690 * ___writer, bool ___neverClose, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		SynchronizedWriter_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1984);
		s_Il2CppMethodIntialized = true;
	}
	{
		TextWriter_t690 * L_0 = ___writer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral1555, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		TextWriter_t690 * L_2 = ___writer;
		if (!((SynchronizedWriter_t1050 *)IsInst(L_2, SynchronizedWriter_t1050_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		TextWriter_t690 * L_3 = ___writer;
		return L_3;
	}

IL_0018:
	{
		TextWriter_t690 * L_4 = ___writer;
		bool L_5 = ___neverClose;
		SynchronizedWriter_t1050 * L_6 = (SynchronizedWriter_t1050 *)il2cpp_codegen_object_new (SynchronizedWriter_t1050_il2cpp_TypeInfo_var);
		SynchronizedWriter__ctor_m5630(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.IO.TextWriter::Write(System.Char)
extern "C" void TextWriter_Write_m5624 (TextWriter_t690 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter::Write(System.Char[])
extern "C" void TextWriter_Write_m5625 (TextWriter_t690 * __this, CharU5BU5D_t300* ___buffer, const MethodInfo* method)
{
	{
		CharU5BU5D_t300* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		CharU5BU5D_t300* L_1 = ___buffer;
		CharU5BU5D_t300* L_2 = ___buffer;
		NullCheck(L_2);
		VirtActionInvoker3< CharU5BU5D_t300*, int32_t, int32_t >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, __this, L_1, 0, (((int32_t)(((Array_t *)L_2)->max_length))));
		return;
	}
}
// System.Void System.IO.TextWriter::Write(System.String)
extern "C" void TextWriter_Write_m5626 (TextWriter_t690 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ___value;
		NullCheck(L_1);
		CharU5BU5D_t300* L_2 = String_ToCharArray_m1256(L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< CharU5BU5D_t300* >::Invoke(9 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, __this, L_2);
	}

IL_000f:
	{
		return;
	}
}
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern "C" void TextWriter_Write_m5627 (TextWriter_t690 * __this, CharU5BU5D_t300* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		CharU5BU5D_t300* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral903, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index;
		CharU5BU5D_t300* L_4 = ___buffer;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentOutOfRangeException_t343 * L_5 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_5, (String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = ___count;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_7 = ___index;
		CharU5BU5D_t300* L_8 = ___buffer;
		NullCheck(L_8);
		int32_t L_9 = ___count;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))-(int32_t)L_9)))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		ArgumentOutOfRangeException_t343 * L_10 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2385(L_10, (String_t*) &_stringLiteral344, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003a:
	{
		goto IL_0053;
	}

IL_003c:
	{
		CharU5BU5D_t300* L_11 = ___buffer;
		int32_t L_12 = ___index;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		VirtActionInvoker1< uint16_t >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, __this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_13)));
		int32_t L_14 = ___count;
		___count = ((int32_t)((int32_t)L_14-(int32_t)1));
		int32_t L_15 = ___index;
		___index = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_16 = ___count;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return;
	}
}
// System.Void System.IO.TextWriter::WriteLine()
extern "C" void TextWriter_WriteLine_m5628 (TextWriter_t690 * __this, const MethodInfo* method)
{
	{
		CharU5BU5D_t300* L_0 = (__this->___CoreNewLine_0);
		VirtActionInvoker1< CharU5BU5D_t300* >::Invoke(9 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, __this, L_0);
		return;
	}
}
// System.Void System.IO.TextWriter::WriteLine(System.String)
extern "C" void TextWriter_WriteLine_m5629 (TextWriter_t690 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, L_0);
		VirtActionInvoker0::Invoke(12 /* System.Void System.IO.TextWriter::WriteLine() */, __this);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern TypeInfo* TextWriter_t690_il2cpp_TypeInfo_var;
extern "C" void SynchronizedWriter__ctor_m5630 (SynchronizedWriter_t1050 * __this, TextWriter_t690 * ___writer, bool ___neverClose, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextWriter_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1980);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextWriter_t690_il2cpp_TypeInfo_var);
		TextWriter__ctor_m5617(__this, /*hidden argument*/NULL);
		TextWriter_t690 * L_0 = ___writer;
		__this->___writer_2 = L_0;
		bool L_1 = ___neverClose;
		__this->___neverClose_3 = L_1;
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Close()
extern "C" void SynchronizedWriter_Close_m5631 (SynchronizedWriter_t1050 * __this, const MethodInfo* method)
{
	SynchronizedWriter_t1050 * V_0 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___neverClose_3);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_0 = __this;
		SynchronizedWriter_t1050 * L_1 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		TextWriter_t690 * L_2 = (__this->___writer_2);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.TextWriter::Close() */, L_2);
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1050 * L_3 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0025:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Flush()
extern "C" void SynchronizedWriter_Flush_m5632 (SynchronizedWriter_t1050 * __this, const MethodInfo* method)
{
	SynchronizedWriter_t1050 * V_0 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1050 * L_0 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t690 * L_1 = (__this->___writer_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextWriter::Flush() */, L_1);
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1050 * L_2 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_001c:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern "C" void SynchronizedWriter_Write_m5633 (SynchronizedWriter_t1050 * __this, uint16_t ___value, const MethodInfo* method)
{
	SynchronizedWriter_t1050 * V_0 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1050 * L_0 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t690 * L_1 = (__this->___writer_2);
		uint16_t L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< uint16_t >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1050 * L_3 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern "C" void SynchronizedWriter_Write_m5634 (SynchronizedWriter_t1050 * __this, CharU5BU5D_t300* ___value, const MethodInfo* method)
{
	SynchronizedWriter_t1050 * V_0 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1050 * L_0 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t690 * L_1 = (__this->___writer_2);
		CharU5BU5D_t300* L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< CharU5BU5D_t300* >::Invoke(9 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1050 * L_3 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern "C" void SynchronizedWriter_Write_m5635 (SynchronizedWriter_t1050 * __this, String_t* ___value, const MethodInfo* method)
{
	SynchronizedWriter_t1050 * V_0 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1050 * L_0 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t690 * L_1 = (__this->___writer_2);
		String_t* L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1050 * L_3 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void SynchronizedWriter_Write_m5636 (SynchronizedWriter_t1050 * __this, CharU5BU5D_t300* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	SynchronizedWriter_t1050 * V_0 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1050 * L_0 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t690 * L_1 = (__this->___writer_2);
		CharU5BU5D_t300* L_2 = ___buffer;
		int32_t L_3 = ___index;
		int32_t L_4 = ___count;
		NullCheck(L_1);
		VirtActionInvoker3< CharU5BU5D_t300*, int32_t, int32_t >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_1, L_2, L_3, L_4);
		IL2CPP_LEAVE(0x1F, FINALLY_0018);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1050 * L_5 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_001f:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern "C" void SynchronizedWriter_WriteLine_m5637 (SynchronizedWriter_t1050 * __this, const MethodInfo* method)
{
	SynchronizedWriter_t1050 * V_0 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1050 * L_0 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t690 * L_1 = (__this->___writer_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(12 /* System.Void System.IO.TextWriter::WriteLine() */, L_1);
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1050 * L_2 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_001c:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern "C" void SynchronizedWriter_WriteLine_m5638 (SynchronizedWriter_t1050 * __this, String_t* ___value, const MethodInfo* method)
{
	SynchronizedWriter_t1050 * V_0 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1050 * L_0 = V_0;
		Monitor_Enter_m2405(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t690 * L_1 = (__this->___writer_2);
		String_t* L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1050 * L_3 = V_0;
		Monitor_Exit_m2406(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_001d:
	{
		return;
	}
}
// System.IO.UnexceptionalStreamReader
#include "mscorlib_System_IO_UnexceptionalStreamReader.h"
#ifndef _MSC_VER
#else
#endif
// System.IO.UnexceptionalStreamReader
#include "mscorlib_System_IO_UnexceptionalStreamReaderMethodDeclarations.h"



// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern TypeInfo* StreamReader_t1045_il2cpp_TypeInfo_var;
extern "C" void UnexceptionalStreamReader__ctor_m5639 (UnexceptionalStreamReader_t1051 * __this, Stream_t808 * ___stream, Encoding_t281 * ___encoding, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StreamReader_t1045_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1967);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stream_t808 * L_0 = ___stream;
		Encoding_t281 * L_1 = ___encoding;
		IL2CPP_RUNTIME_CLASS_INIT(StreamReader_t1045_il2cpp_TypeInfo_var);
		StreamReader__ctor_m5556(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
extern TypeInfo* BooleanU5BU5D_t525_il2cpp_TypeInfo_var;
extern TypeInfo* UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var;
extern "C" void UnexceptionalStreamReader__cctor_m5640 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BooleanU5BU5D_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(962);
		UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1985);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = Environment_get_NewLine_m2445(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1158(L_0, /*hidden argument*/NULL);
		((UnexceptionalStreamReader_t1051_StaticFields*)UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var->static_fields)->___newline_14 = ((BooleanU5BU5D_t525*)SZArrayNew(BooleanU5BU5D_t525_il2cpp_TypeInfo_var, L_1));
		String_t* L_2 = Environment_get_NewLine_m2445(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1158(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		uint16_t L_6 = String_get_Chars_m1306(L_5, 0, /*hidden argument*/NULL);
		((UnexceptionalStreamReader_t1051_StaticFields*)UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var->static_fields)->___newlineChar_15 = L_6;
	}

IL_002f:
	{
		return;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
extern TypeInfo* IOException_t872_il2cpp_TypeInfo_var;
extern "C" int32_t UnexceptionalStreamReader_Peek_m5641 (UnexceptionalStreamReader_t1051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IOException_t872_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1562);
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
			int32_t L_0 = StreamReader_Peek_m5565(__this, /*hidden argument*/NULL);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IOException_t872_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (-1);
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
extern TypeInfo* IOException_t872_il2cpp_TypeInfo_var;
extern "C" int32_t UnexceptionalStreamReader_Read_m5642 (UnexceptionalStreamReader_t1051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IOException_t872_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1562);
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
			int32_t L_0 = StreamReader_Read_m5566(__this, /*hidden argument*/NULL);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IOException_t872_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (-1);
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var;
extern TypeInfo* IOException_t872_il2cpp_TypeInfo_var;
extern "C" int32_t UnexceptionalStreamReader_Read_m5643 (UnexceptionalStreamReader_t1051 * __this, CharU5BU5D_t300* ___dest_buffer, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1985);
		IOException_t872_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1562);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		CharU5BU5D_t300* L_0 = ___dest_buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral1556, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_3 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1263(L_3, (String_t*) &_stringLiteral262, (String_t*) &_stringLiteral662, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int32_t L_4 = ___count;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_t343 * L_5 = (ArgumentOutOfRangeException_t343 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t343_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1263(L_5, (String_t*) &_stringLiteral344, (String_t*) &_stringLiteral662, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		int32_t L_6 = ___index;
		CharU5BU5D_t300* L_7 = ___dest_buffer;
		NullCheck(L_7);
		int32_t L_8 = ___count;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))-(int32_t)L_8)))))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t313 * L_9 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_9, (String_t*) &_stringLiteral1557, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0049:
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var);
		uint16_t L_10 = ((UnexceptionalStreamReader_t1051_StaticFields*)UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var->static_fields)->___newlineChar_15;
		V_1 = L_10;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0053:
		{
			int32_t L_11 = StreamReader_Read_m5566(__this, /*hidden argument*/NULL);
			V_2 = L_11;
			int32_t L_12 = V_2;
			if ((((int32_t)L_12) >= ((int32_t)0)))
			{
				goto IL_0060;
			}
		}

IL_005e:
		{
			goto IL_0097;
		}

IL_0060:
		{
			int32_t L_13 = V_0;
			V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
			int32_t L_14 = ___count;
			___count = ((int32_t)((int32_t)L_14-(int32_t)1));
			CharU5BU5D_t300* L_15 = ___dest_buffer;
			int32_t L_16 = ___index;
			int32_t L_17 = V_2;
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
			*((uint16_t*)(uint16_t*)SZArrayLdElema(L_15, L_16)) = (uint16_t)(((uint16_t)L_17));
			uint16_t L_18 = V_1;
			if (!L_18)
			{
				goto IL_007e;
			}
		}

IL_0073:
		{
			int32_t L_19 = V_2;
			uint16_t L_20 = V_1;
			if ((!(((uint32_t)(((uint16_t)L_19))) == ((uint32_t)L_20))))
			{
				goto IL_007c;
			}
		}

IL_0078:
		{
			int32_t L_21 = V_0;
			V_3 = L_21;
			goto IL_009e;
		}

IL_007c:
		{
			goto IL_008c;
		}

IL_007e:
		{
			int32_t L_22 = V_2;
			bool L_23 = UnexceptionalStreamReader_CheckEOL_m5644(__this, (((uint16_t)L_22)), /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_008c;
			}
		}

IL_0088:
		{
			int32_t L_24 = V_0;
			V_3 = L_24;
			goto IL_009e;
		}

IL_008c:
		{
			int32_t L_25 = ___index;
			___index = ((int32_t)((int32_t)L_25+(int32_t)1));
		}

IL_0093:
		{
			int32_t L_26 = ___count;
			if ((((int32_t)L_26) > ((int32_t)0)))
			{
				goto IL_0053;
			}
		}

IL_0097:
		{
			goto IL_009c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IOException_t872_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0099;
		throw e;
	}

CATCH_0099:
	{ // begin catch(System.IO.IOException)
		goto IL_009c;
	} // end catch (depth: 1)

IL_009c:
	{
		int32_t L_27 = V_0;
		return L_27;
	}

IL_009e:
	{
		int32_t L_28 = V_3;
		return L_28;
	}
}
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
extern TypeInfo* UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var;
extern "C" bool UnexceptionalStreamReader_CheckEOL_m5644 (UnexceptionalStreamReader_t1051 * __this, uint16_t ___current, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1985);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var);
		BooleanU5BU5D_t525* L_0 = ((UnexceptionalStreamReader_t1051_StaticFields*)UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var->static_fields)->___newline_14;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		if ((*(uint8_t*)(bool*)SZArrayLdElema(L_0, L_2)))
		{
			goto IL_0032;
		}
	}
	{
		uint16_t L_3 = ___current;
		String_t* L_4 = Environment_get_NewLine_m2445(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint16_t L_6 = String_get_Chars_m1306(L_4, L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_6))))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var);
		BooleanU5BU5D_t525* L_7 = ((UnexceptionalStreamReader_t1051_StaticFields*)UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var->static_fields)->___newline_14;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((bool*)(bool*)SZArrayLdElema(L_7, L_8)) = (bool)1;
		int32_t L_9 = V_0;
		BooleanU5BU5D_t525* L_10 = ((UnexceptionalStreamReader_t1051_StaticFields*)UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var->static_fields)->___newline_14;
		NullCheck(L_10);
		return ((((int32_t)L_9) == ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))-(int32_t)1))))? 1 : 0);
	}

IL_0030:
	{
		goto IL_0040;
	}

IL_0032:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0036:
	{
		int32_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var);
		BooleanU5BU5D_t525* L_13 = ((UnexceptionalStreamReader_t1051_StaticFields*)UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var->static_fields)->___newline_14;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0004;
		}
	}

IL_0040:
	{
		V_1 = 0;
		goto IL_0050;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var);
		BooleanU5BU5D_t525* L_14 = ((UnexceptionalStreamReader_t1051_StaticFields*)UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var->static_fields)->___newline_14;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		*((bool*)(bool*)SZArrayLdElema(L_14, L_15)) = (bool)0;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var);
		BooleanU5BU5D_t525* L_18 = ((UnexceptionalStreamReader_t1051_StaticFields*)UnexceptionalStreamReader_t1051_il2cpp_TypeInfo_var->static_fields)->___newline_14;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0044;
		}
	}
	{
		return 0;
	}
}
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
extern TypeInfo* IOException_t872_il2cpp_TypeInfo_var;
extern "C" String_t* UnexceptionalStreamReader_ReadLine_m5645 (UnexceptionalStreamReader_t1051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IOException_t872_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1562);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
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
			String_t* L_0 = StreamReader_ReadLine_m5569(__this, /*hidden argument*/NULL);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IOException_t872_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (String_t*)NULL;
	}

IL_0010:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String System.IO.UnexceptionalStreamReader::ReadToEnd()
extern TypeInfo* IOException_t872_il2cpp_TypeInfo_var;
extern "C" String_t* UnexceptionalStreamReader_ReadToEnd_m5646 (UnexceptionalStreamReader_t1051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IOException_t872_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1562);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
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
			String_t* L_0 = StreamReader_ReadToEnd_m5570(__this, /*hidden argument*/NULL);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IOException_t872_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (String_t*)NULL;
	}

IL_0010:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.IO.UnexceptionalStreamWriter
#include "mscorlib_System_IO_UnexceptionalStreamWriter.h"
#ifndef _MSC_VER
#else
#endif
// System.IO.UnexceptionalStreamWriter
#include "mscorlib_System_IO_UnexceptionalStreamWriterMethodDeclarations.h"



// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern TypeInfo* StreamWriter_t1046_il2cpp_TypeInfo_var;
extern "C" void UnexceptionalStreamWriter__ctor_m5647 (UnexceptionalStreamWriter_t1052 * __this, Stream_t808 * ___stream, Encoding_t281 * ___encoding, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StreamWriter_t1046_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1911);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stream_t808 * L_0 = ___stream;
		Encoding_t281 * L_1 = ___encoding;
		IL2CPP_RUNTIME_CLASS_INIT(StreamWriter_t1046_il2cpp_TypeInfo_var);
		StreamWriter__ctor_m5571(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern TypeInfo* Exception_t65_il2cpp_TypeInfo_var;
extern "C" void UnexceptionalStreamWriter_Flush_m5648 (UnexceptionalStreamWriter_t1052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
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
		StreamWriter_Flush_m5577(__this, /*hidden argument*/NULL);
		goto IL_000b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t65_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0008;
		throw e;
	}

CATCH_0008:
	{ // begin catch(System.Exception)
		goto IL_000b;
	} // end catch (depth: 1)

IL_000b:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern TypeInfo* Exception_t65_il2cpp_TypeInfo_var;
extern "C" void UnexceptionalStreamWriter_Write_m5649 (UnexceptionalStreamWriter_t1052 * __this, CharU5BU5D_t300* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
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
		CharU5BU5D_t300* L_0 = ___buffer;
		int32_t L_1 = ___index;
		int32_t L_2 = ___count;
		StreamWriter_Write_m5580(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		goto IL_000e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t65_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.Exception)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern TypeInfo* Exception_t65_il2cpp_TypeInfo_var;
extern "C" void UnexceptionalStreamWriter_Write_m5650 (UnexceptionalStreamWriter_t1052 * __this, uint16_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
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
		uint16_t L_0 = ___value;
		StreamWriter_Write_m5583(__this, L_0, /*hidden argument*/NULL);
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t65_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Exception)
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern TypeInfo* Exception_t65_il2cpp_TypeInfo_var;
extern "C" void UnexceptionalStreamWriter_Write_m5651 (UnexceptionalStreamWriter_t1052 * __this, CharU5BU5D_t300* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
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
		CharU5BU5D_t300* L_0 = ___value;
		StreamWriter_Write_m5584(__this, L_0, /*hidden argument*/NULL);
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t65_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Exception)
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern TypeInfo* Exception_t65_il2cpp_TypeInfo_var;
extern "C" void UnexceptionalStreamWriter_Write_m5652 (UnexceptionalStreamWriter_t1052 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
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
		String_t* L_0 = ___value;
		StreamWriter_Write_m5585(__this, L_0, /*hidden argument*/NULL);
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t65_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Exception)
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Reflection.Emit.AssemblyBuilder
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.AssemblyBuilder
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderMethodDeclarations.h"

// System.Reflection.Module
#include "mscorlib_System_Reflection_Module.h"
// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilder.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyName.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// Mono.Security.StrongName
#include "mscorlib_Mono_Security_StrongName.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// Mono.Security.StrongName
#include "mscorlib_Mono_Security_StrongNameMethodDeclarations.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyNameMethodDeclarations.h"


// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m5653 (AssemblyBuilder_t1054 * __this, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = AssemblyBuilder_not_supported_m5656(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern TypeInfo* ModuleU5BU5D_t1432_il2cpp_TypeInfo_var;
extern "C" ModuleU5BU5D_t1432* AssemblyBuilder_GetModulesInternal_m5654 (AssemblyBuilder_t1054 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ModuleU5BU5D_t1432_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1986);
		s_Il2CppMethodIntialized = true;
	}
	{
		ModuleBuilderU5BU5D_t1053* L_0 = (__this->___modules_10);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ModuleU5BU5D_t1432*)SZArrayNew(ModuleU5BU5D_t1432_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		ModuleBuilderU5BU5D_t1053* L_1 = (__this->___modules_10);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(20 /* System.Object System.Array::Clone() */, L_1);
		return ((ModuleU5BU5D_t1432*)Castclass(L_2, ModuleU5BU5D_t1432_il2cpp_TypeInfo_var));
	}
}
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m5655 (AssemblyBuilder_t1054 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___is_compiler_context_14);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" Exception_t65 * AssemblyBuilder_not_supported_m5656 (AssemblyBuilder_t1054 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*) &_stringLiteral1558, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1077 * AssemblyBuilder_UnprotectedGetName_m5657 (AssemblyBuilder_t1054 * __this, const MethodInfo* method)
{
	AssemblyName_t1077 * V_0 = {0};
	{
		AssemblyName_t1077 * L_0 = Assembly_UnprotectedGetName_m5888(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		StrongName_t966 * L_1 = (__this->___sn_13);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		AssemblyName_t1077 * L_2 = V_0;
		StrongName_t966 * L_3 = (__this->___sn_13);
		NullCheck(L_3);
		ByteU5BU5D_t102* L_4 = StrongName_get_PublicKey_m4870(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		AssemblyName_SetPublicKey_m5906(L_2, L_4, /*hidden argument*/NULL);
		AssemblyName_t1077 * L_5 = V_0;
		StrongName_t966 * L_6 = (__this->___sn_13);
		NullCheck(L_6);
		ByteU5BU5D_t102* L_7 = StrongName_get_PublicKeyToken_m4871(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		AssemblyName_SetPublicKeyToken_m5907(L_5, L_7, /*hidden argument*/NULL);
	}

IL_0031:
	{
		AssemblyName_t1077 * L_8 = V_0;
		return L_8;
	}
}
// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilder.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilderMethodDeclarations.h"

// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilder.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilder.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilderMethodDeclarations.h"
// System.Reflection.Module
#include "mscorlib_System_Reflection_ModuleMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.MonoCustomAttrs
#include "mscorlib_System_MonoCustomAttrsMethodDeclarations.h"


// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern "C" int32_t ConstructorBuilder_get_CallingConvention_m5658 (ConstructorBuilder_t1057 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___call_conv_4);
		return L_0;
	}
}
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C" TypeBuilder_t1055 * ConstructorBuilder_get_TypeBuilder_m5659 (ConstructorBuilder_t1057 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->___type_5);
		return L_0;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern "C" ParameterInfoU5BU5D_t369* ConstructorBuilder_GetParameters_m5660 (ConstructorBuilder_t1057 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m5857(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m5674(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t65 * L_3 = ConstructorBuilder_not_created_m5676(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ParameterInfoU5BU5D_t369* L_4 = ConstructorBuilder_GetParametersInternal_m5661(__this, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern TypeInfo* ParameterInfoU5BU5D_t369_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterInfo_t370_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t369* ConstructorBuilder_GetParametersInternal_m5661 (ConstructorBuilder_t1057 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParameterInfoU5BU5D_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1988);
		ParameterInfo_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1989);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t369* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	ParameterInfoU5BU5D_t369* G_B5_1 = {0};
	int32_t G_B4_0 = 0;
	ParameterInfoU5BU5D_t369* G_B4_1 = {0};
	ParameterBuilder_t1066 * G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	ParameterInfoU5BU5D_t369* G_B6_2 = {0};
	{
		TypeU5BU5D_t196* L_0 = (__this->___parameters_2);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ParameterInfoU5BU5D_t369*)SZArrayNew(ParameterInfoU5BU5D_t369_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		TypeU5BU5D_t196* L_1 = (__this->___parameters_2);
		NullCheck(L_1);
		V_0 = ((ParameterInfoU5BU5D_t369*)SZArrayNew(ParameterInfoU5BU5D_t369_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		ParameterInfoU5BU5D_t369* L_2 = V_0;
		int32_t L_3 = V_1;
		ParameterBuilderU5BU5D_t1056* L_4 = (__this->___pinfo_6);
		G_B4_0 = L_3;
		G_B4_1 = L_2;
		if (L_4)
		{
			G_B5_0 = L_3;
			G_B5_1 = L_2;
			goto IL_002e;
		}
	}
	{
		G_B6_0 = ((ParameterBuilder_t1066 *)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0038;
	}

IL_002e:
	{
		ParameterBuilderU5BU5D_t1056* L_5 = (__this->___pinfo_6);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)L_6+(int32_t)1)));
		int32_t L_7 = ((int32_t)((int32_t)L_6+(int32_t)1));
		G_B6_0 = (*(ParameterBuilder_t1066 **)(ParameterBuilder_t1066 **)SZArrayLdElema(L_5, L_7));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0038:
	{
		TypeU5BU5D_t196* L_8 = (__this->___parameters_2);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		int32_t L_11 = V_1;
		ParameterInfo_t370 * L_12 = (ParameterInfo_t370 *)il2cpp_codegen_object_new (ParameterInfo_t370_il2cpp_TypeInfo_var);
		ParameterInfo__ctor_m6115(L_12, G_B6_0, (*(Type_t **)(Type_t **)SZArrayLdElema(L_8, L_10)), __this, ((int32_t)((int32_t)L_11+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_12);
		*((ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (ParameterInfo_t370 *)L_12;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_14 = V_1;
		TypeU5BU5D_t196* L_15 = (__this->___parameters_2);
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		ParameterInfoU5BU5D_t369* L_16 = V_0;
		return L_16;
	}
}
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m5662 (ConstructorBuilder_t1057 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t376 * ___binder, ObjectU5BU5D_t200* ___parameters, CultureInfo_t342 * ___culture, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = ConstructorBuilder_not_supported_m5675(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m5663 (ConstructorBuilder_t1057 * __this, int32_t ___invokeAttr, Binder_t376 * ___binder, ObjectU5BU5D_t200* ___parameters, CultureInfo_t342 * ___culture, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = ConstructorBuilder_not_supported_m5675(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1387  ConstructorBuilder_get_MethodHandle_m5664 (ConstructorBuilder_t1057 * __this, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = ConstructorBuilder_not_supported_m5675(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern "C" int32_t ConstructorBuilder_get_Attributes_m5665 (ConstructorBuilder_t1057 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_3);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern "C" Type_t * ConstructorBuilder_get_ReflectedType_m5666 (ConstructorBuilder_t1057 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->___type_5);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern "C" Type_t * ConstructorBuilder_get_DeclaringType_m5667 (ConstructorBuilder_t1057 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->___type_5);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern TypeInfo* ConstructorInfo_t202_il2cpp_TypeInfo_var;
extern "C" String_t* ConstructorBuilder_get_Name_m5668 (ConstructorBuilder_t1057 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructorInfo_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		int32_t L_0 = (__this->___attrs_3);
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)16))))
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t202_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ConstructorInfo_t202_StaticFields*)ConstructorInfo_t202_il2cpp_TypeInfo_var->static_fields)->___TypeConstructorName_1;
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t202_il2cpp_TypeInfo_var);
		String_t* L_2 = ((ConstructorInfo_t202_StaticFields*)ConstructorInfo_t202_il2cpp_TypeInfo_var->static_fields)->___ConstructorName_0;
		G_B3_0 = L_2;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool ConstructorBuilder_IsDefined_m5669 (ConstructorBuilder_t1057 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = ConstructorBuilder_not_supported_m5675(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* ConstructorBuilder_GetCustomAttributes_m5670 (ConstructorBuilder_t1057 * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t1055 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m5857(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m5674(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_4 = MonoCustomAttrs_GetCustomAttributes_m7750(NULL /*static, unused*/, __this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001d:
	{
		Exception_t65 * L_5 = ConstructorBuilder_not_supported_m5675(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* ConstructorBuilder_GetCustomAttributes_m5671 (ConstructorBuilder_t1057 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t1055 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m5857(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m5674(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_3 = ___attributeType;
		bool L_4 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_5 = MonoCustomAttrs_GetCustomAttributes_m7749(NULL /*static, unused*/, __this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001e:
	{
		Exception_t65 * L_6 = ConstructorBuilder_not_supported_m5675(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern "C" Module_t1065 * ConstructorBuilder_get_Module_m5672 (ConstructorBuilder_t1057 * __this, const MethodInfo* method)
{
	{
		Module_t1065 * L_0 = MemberInfo_get_Module_m4390(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ConstructorBuilder_ToString_m5673 (ConstructorBuilder_t1057 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t1055 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Emit.TypeBuilder::get_Name() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m1179(NULL /*static, unused*/, (String_t*) &_stringLiteral1559, L_1, (String_t*) &_stringLiteral1560, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern TypeInfo* ModuleBuilder_t1064_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyBuilder_t1054_il2cpp_TypeInfo_var;
extern "C" bool ConstructorBuilder_get_IsCompilerContext_m5674 (ConstructorBuilder_t1057 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ModuleBuilder_t1064_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1990);
		AssemblyBuilder_t1054_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1991);
		s_Il2CppMethodIntialized = true;
	}
	ModuleBuilder_t1064 * V_0 = {0};
	AssemblyBuilder_t1054 * V_1 = {0};
	{
		TypeBuilder_t1055 * L_0 = ConstructorBuilder_get_TypeBuilder_m5659(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Module_t1065 * L_1 = (Module_t1065 *)VirtFuncInvoker0< Module_t1065 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_0);
		V_0 = ((ModuleBuilder_t1064 *)Castclass(L_1, ModuleBuilder_t1064_il2cpp_TypeInfo_var));
		ModuleBuilder_t1064 * L_2 = V_0;
		NullCheck(L_2);
		Assembly_t671 * L_3 = Module_get_Assembly_m5987(L_2, /*hidden argument*/NULL);
		V_1 = ((AssemblyBuilder_t1054 *)Castclass(L_3, AssemblyBuilder_t1054_il2cpp_TypeInfo_var));
		AssemblyBuilder_t1054 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = AssemblyBuilder_get_IsCompilerContext_m5655(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" Exception_t65 * ConstructorBuilder_not_supported_m5675 (ConstructorBuilder_t1057 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*) &_stringLiteral1558, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" Exception_t65 * ConstructorBuilder_not_created_m5676 (ConstructorBuilder_t1057 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*) &_stringLiteral1561, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.Emit.EnumBuilder
#include "mscorlib_System_Reflection_Emit_EnumBuilder.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.EnumBuilder
#include "mscorlib_System_Reflection_Emit_EnumBuilderMethodDeclarations.h"

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Reflection.EventInfo
#include "mscorlib_System_Reflection_EventInfo.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"


// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
extern "C" Assembly_t671 * EnumBuilder_get_Assembly_m5677 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Assembly_t671 * L_1 = (Assembly_t671 *)VirtFuncInvoker0< Assembly_t671 * >::Invoke(14 /* System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
extern "C" String_t* EnumBuilder_get_AssemblyQualifiedName_m5678 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName() */, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
extern "C" Type_t * EnumBuilder_get_BaseType_m5679 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.Emit.TypeBuilder::get_BaseType() */, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
extern "C" Type_t * EnumBuilder_get_DeclaringType_m5680 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
extern "C" String_t* EnumBuilder_get_FullName_m5681 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Reflection.Emit.TypeBuilder::get_FullName() */, L_0);
		return L_1;
	}
}
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
extern "C" Module_t1065 * EnumBuilder_get_Module_m5682 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Module_t1065 * L_1 = (Module_t1065 *)VirtFuncInvoker0< Module_t1065 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
extern "C" String_t* EnumBuilder_get_Name_m5683 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Emit.TypeBuilder::get_Name() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
extern "C" String_t* EnumBuilder_get_Namespace_m5684 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Reflection.Emit.TypeBuilder::get_Namespace() */, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
extern "C" Type_t * EnumBuilder_get_ReflectedType_m5685 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType() */, L_0);
		return L_1;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t885  EnumBuilder_get_TypeHandle_m5686 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		RuntimeTypeHandle_t885  L_1 = (RuntimeTypeHandle_t885 )VirtFuncInvoker0< RuntimeTypeHandle_t885  >::Invoke(35 /* System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle() */, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
extern "C" Type_t * EnumBuilder_get_UnderlyingSystemType_m5687 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____underlyingType_9);
		return L_0;
	}
}
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
extern "C" int32_t EnumBuilder_GetAttributeFlagsImpl_m5688 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___attrs_17);
		return L_1;
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t202 * EnumBuilder_GetConstructorImpl_m5689 (EnumBuilder_t1058 * __this, int32_t ___bindingAttr, Binder_t376 * ___binder, int32_t ___callConvention, TypeU5BU5D_t196* ___types, ParameterModifierU5BU5D_t377* ___modifiers, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		Binder_t376 * L_2 = ___binder;
		int32_t L_3 = ___callConvention;
		TypeU5BU5D_t196* L_4 = ___types;
		ParameterModifierU5BU5D_t377* L_5 = ___modifiers;
		NullCheck(L_0);
		ConstructorInfo_t202 * L_6 = (ConstructorInfo_t202 *)VirtFuncInvoker5< ConstructorInfo_t202 *, int32_t, Binder_t376 *, int32_t, TypeU5BU5D_t196*, ParameterModifierU5BU5D_t377* >::Invoke(69 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[]) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t368* EnumBuilder_GetConstructors_m5690 (EnumBuilder_t1058 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t368* L_2 = (ConstructorInfoU5BU5D_t368*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t368*, int32_t >::Invoke(71 /* System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t200* EnumBuilder_GetCustomAttributes_m5691 (EnumBuilder_t1058 * __this, bool ___inherit, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		bool L_1 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t200* L_2 = (ObjectU5BU5D_t200*)VirtFuncInvoker1< ObjectU5BU5D_t200*, bool >::Invoke(12 /* System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t200* EnumBuilder_GetCustomAttributes_m5692 (EnumBuilder_t1058 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t200* L_3 = (ObjectU5BU5D_t200*)VirtFuncInvoker2< ObjectU5BU5D_t200*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
extern "C" Type_t * EnumBuilder_GetElementType_m5693 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Reflection.Emit.TypeBuilder::GetElementType() */, L_0);
		return L_1;
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * EnumBuilder_GetEvent_m5694 (EnumBuilder_t1058 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		EventInfo_t * L_3 = (EventInfo_t *)VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(43 /* System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * EnumBuilder_GetField_m5695 (EnumBuilder_t1058 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		FieldInfo_t * L_3 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo[] System.Reflection.Emit.EnumBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t373* EnumBuilder_GetFields_m5696 (EnumBuilder_t1058 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		FieldInfoU5BU5D_t373* L_2 = (FieldInfoU5BU5D_t373*)VirtFuncInvoker1< FieldInfoU5BU5D_t373*, int32_t >::Invoke(45 /* System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t196* EnumBuilder_GetInterfaces_m5697 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		TypeU5BU5D_t196* L_1 = (TypeU5BU5D_t196*)VirtFuncInvoker0< TypeU5BU5D_t196* >::Invoke(39 /* System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces() */, L_0);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * EnumBuilder_GetMethodImpl_m5698 (EnumBuilder_t1058 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t376 * ___binder, int32_t ___callConvention, TypeU5BU5D_t196* ___types, ParameterModifierU5BU5D_t377* ___modifiers, const MethodInfo* method)
{
	{
		TypeU5BU5D_t196* L_0 = ___types;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		TypeBuilder_t1055 * L_1 = (__this->____tb_8);
		String_t* L_2 = ___name;
		int32_t L_3 = ___bindingAttr;
		NullCheck(L_1);
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_1, L_2, L_3);
		return L_4;
	}

IL_0012:
	{
		TypeBuilder_t1055 * L_5 = (__this->____tb_8);
		String_t* L_6 = ___name;
		int32_t L_7 = ___bindingAttr;
		Binder_t376 * L_8 = ___binder;
		int32_t L_9 = ___callConvention;
		TypeU5BU5D_t196* L_10 = ___types;
		ParameterModifierU5BU5D_t377* L_11 = ___modifiers;
		NullCheck(L_5);
		MethodInfo_t * L_12 = (MethodInfo_t *)VirtFuncInvoker6< MethodInfo_t *, String_t*, int32_t, Binder_t376 *, int32_t, TypeU5BU5D_t196*, ParameterModifierU5BU5D_t377* >::Invoke(49 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[]) */, L_5, L_6, L_7, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1091* EnumBuilder_GetMethods_m5699 (EnumBuilder_t1058 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		MethodInfoU5BU5D_t1091* L_2 = (MethodInfoU5BU5D_t1091*)VirtFuncInvoker1< MethodInfoU5BU5D_t1091*, int32_t >::Invoke(51 /* System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.PropertyInfo[] System.Reflection.Emit.EnumBuilder::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t372* EnumBuilder_GetProperties_m5700 (EnumBuilder_t1058 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t372* L_2 = (PropertyInfoU5BU5D_t372*)VirtFuncInvoker1< PropertyInfoU5BU5D_t372*, int32_t >::Invoke(52 /* System.Reflection.PropertyInfo[] System.Reflection.Emit.TypeBuilder::GetProperties(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * EnumBuilder_GetPropertyImpl_m5701 (EnumBuilder_t1058 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t376 * ___binder, Type_t * ___returnType, TypeU5BU5D_t196* ___types, ParameterModifierU5BU5D_t377* ___modifiers, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = EnumBuilder_CreateNotSupportedException_m5710(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
extern "C" bool EnumBuilder_HasElementTypeImpl_m5702 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Type::get_HasElementType() */, L_0);
		return L_1;
	}
}
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * EnumBuilder_InvokeMember_m5703 (EnumBuilder_t1058 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t376 * ___binder, Object_t * ___target, ObjectU5BU5D_t200* ___args, ParameterModifierU5BU5D_t377* ___modifiers, CultureInfo_t342 * ___culture, StringU5BU5D_t197* ___namedParameters, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___invokeAttr;
		Binder_t376 * L_3 = ___binder;
		Object_t * L_4 = ___target;
		ObjectU5BU5D_t200* L_5 = ___args;
		ParameterModifierU5BU5D_t377* L_6 = ___modifiers;
		CultureInfo_t342 * L_7 = ___culture;
		StringU5BU5D_t197* L_8 = ___namedParameters;
		NullCheck(L_0);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t376 *, Object_t *, ObjectU5BU5D_t200*, ParameterModifierU5BU5D_t377*, CultureInfo_t342 *, StringU5BU5D_t197* >::Invoke(72 /* System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
extern "C" bool EnumBuilder_IsArrayImpl_m5704 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
extern "C" bool EnumBuilder_IsByRefImpl_m5705 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
extern "C" bool EnumBuilder_IsPointerImpl_m5706 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
extern "C" bool EnumBuilder_IsPrimitiveImpl_m5707 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
extern "C" bool EnumBuilder_IsValueTypeImpl_m5708 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool EnumBuilder_IsDefined_m5709 (EnumBuilder_t1058 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->____tb_8);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(11 /* System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" Exception_t65 * EnumBuilder_CreateNotSupportedException_m5710 (EnumBuilder_t1058 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*) &_stringLiteral1558, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.Emit.FieldBuilder
#include "mscorlib_System_Reflection_Emit_FieldBuilder.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.FieldBuilder
#include "mscorlib_System_Reflection_Emit_FieldBuilderMethodDeclarations.h"

// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.Reflection.Emit.UnmanagedMarshal
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshal.h"


// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::get_Attributes()
extern "C" int32_t FieldBuilder_get_Attributes_m5711 (FieldBuilder_t1060 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_0);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_DeclaringType()
extern "C" Type_t * FieldBuilder_get_DeclaringType_m5712 (FieldBuilder_t1060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->___typeb_3);
		return L_0;
	}
}
// System.RuntimeFieldHandle System.Reflection.Emit.FieldBuilder::get_FieldHandle()
extern "C" RuntimeFieldHandle_t886  FieldBuilder_get_FieldHandle_m5713 (FieldBuilder_t1060 * __this, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = FieldBuilder_CreateNotSupportedException_m5724(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_FieldType()
extern "C" Type_t * FieldBuilder_get_FieldType_m5714 (FieldBuilder_t1060 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_1);
		return L_0;
	}
}
// System.String System.Reflection.Emit.FieldBuilder::get_Name()
extern "C" String_t* FieldBuilder_get_Name_m5715 (FieldBuilder_t1060 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_ReflectedType()
extern "C" Type_t * FieldBuilder_get_ReflectedType_m5716 (FieldBuilder_t1060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->___typeb_3);
		return L_0;
	}
}
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* FieldBuilder_GetCustomAttributes_m5717 (FieldBuilder_t1060 * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t1055 * L_0 = (__this->___typeb_3);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m5857(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_3 = MonoCustomAttrs_GetCustomAttributes_m7750(NULL /*static, unused*/, __this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		Exception_t65 * L_4 = FieldBuilder_CreateNotSupportedException_m5724(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* FieldBuilder_GetCustomAttributes_m5718 (FieldBuilder_t1060 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t1055 * L_0 = (__this->___typeb_3);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m5857(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_2 = ___attributeType;
		bool L_3 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_4 = MonoCustomAttrs_GetCustomAttributes_m7749(NULL /*static, unused*/, __this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0016:
	{
		Exception_t65 * L_5 = FieldBuilder_CreateNotSupportedException_m5724(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Object System.Reflection.Emit.FieldBuilder::GetValue(System.Object)
extern "C" Object_t * FieldBuilder_GetValue_m5719 (FieldBuilder_t1060 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = FieldBuilder_CreateNotSupportedException_m5724(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.FieldBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool FieldBuilder_IsDefined_m5720 (FieldBuilder_t1060 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = FieldBuilder_CreateNotSupportedException_m5724(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 System.Reflection.Emit.FieldBuilder::GetFieldOffset()
extern "C" int32_t FieldBuilder_GetFieldOffset_m5721 (FieldBuilder_t1060 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Reflection.Emit.FieldBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern "C" void FieldBuilder_SetValue_m5722 (FieldBuilder_t1060 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t376 * ___binder, CultureInfo_t342 * ___culture, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = FieldBuilder_CreateNotSupportedException_m5724(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::get_UMarshal()
extern "C" UnmanagedMarshal_t1059 * FieldBuilder_get_UMarshal_m5723 (FieldBuilder_t1060 * __this, const MethodInfo* method)
{
	{
		UnmanagedMarshal_t1059 * L_0 = (__this->___marshal_info_4);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.FieldBuilder::CreateNotSupportedException()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" Exception_t65 * FieldBuilder_CreateNotSupportedException_m5724 (FieldBuilder_t1060 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*) &_stringLiteral1558, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.Module System.Reflection.Emit.FieldBuilder::get_Module()
extern "C" Module_t1065 * FieldBuilder_get_Module_m5725 (FieldBuilder_t1060 * __this, const MethodInfo* method)
{
	{
		Module_t1065 * L_0 = MemberInfo_get_Module_m4390(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.Emit.GenericTypeParameterBuilder
#include "mscorlib_System_Reflection_Emit_GenericTypeParameterBuilder.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.GenericTypeParameterBuilder
#include "mscorlib_System_Reflection_Emit_GenericTypeParameterBuilderMethodDeclarations.h"

// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilder.h"
// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilderMethodDeclarations.h"


// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
extern TypeInfo* ModuleBuilder_t1064_il2cpp_TypeInfo_var;
extern "C" bool GenericTypeParameterBuilder_IsSubclassOf_m5726 (GenericTypeParameterBuilder_t1062 * __this, Type_t * ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ModuleBuilder_t1064_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1990);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B7_0 = 0;
	{
		TypeBuilder_t1055 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t1065 * L_1 = (Module_t1065 *)VirtFuncInvoker0< Module_t1065 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_0);
		NullCheck(((ModuleBuilder_t1064 *)Castclass(L_1, ModuleBuilder_t1064_il2cpp_TypeInfo_var)));
		AssemblyBuilder_t1054 * L_2 = (((ModuleBuilder_t1064 *)Castclass(L_1, ModuleBuilder_t1064_il2cpp_TypeInfo_var))->___assemblyb_10);
		NullCheck(L_2);
		bool L_3 = AssemblyBuilder_get_IsCompilerContext_m5655(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t65 * L_4 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType() */, __this);
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		return 0;
	}

IL_002d:
	{
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType() */, __this);
		Type_t * L_7 = ___c;
		if ((((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7)))
		{
			goto IL_0044;
		}
	}
	{
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType() */, __this);
		Type_t * L_9 = ___c;
		NullCheck(L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(38 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_8, L_9);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		return G_B7_0;
	}
}
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
extern TypeInfo* ModuleBuilder_t1064_il2cpp_TypeInfo_var;
extern "C" int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m5727 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ModuleBuilder_t1064_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1990);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t1055 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t1065 * L_1 = (Module_t1065 *)VirtFuncInvoker0< Module_t1065 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_0);
		NullCheck(((ModuleBuilder_t1064 *)Castclass(L_1, ModuleBuilder_t1064_il2cpp_TypeInfo_var)));
		AssemblyBuilder_t1054 * L_2 = (((ModuleBuilder_t1064 *)Castclass(L_1, ModuleBuilder_t1064_il2cpp_TypeInfo_var))->___assemblyb_10);
		NullCheck(L_2);
		bool L_3 = AssemblyBuilder_get_IsCompilerContext_m5655(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(1);
	}

IL_001e:
	{
		Exception_t65 * L_4 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t202 * GenericTypeParameterBuilder_GetConstructorImpl_m5728 (GenericTypeParameterBuilder_t1062 * __this, int32_t ___bindingAttr, Binder_t376 * ___binder, int32_t ___callConvention, TypeU5BU5D_t196* ___types, ParameterModifierU5BU5D_t377* ___modifiers, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t368* GenericTypeParameterBuilder_GetConstructors_m5729 (GenericTypeParameterBuilder_t1062 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * GenericTypeParameterBuilder_GetEvent_m5730 (GenericTypeParameterBuilder_t1062 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * GenericTypeParameterBuilder_GetField_m5731 (GenericTypeParameterBuilder_t1062 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.FieldInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t373* GenericTypeParameterBuilder_GetFields_m5732 (GenericTypeParameterBuilder_t1062 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t196* GenericTypeParameterBuilder_GetInterfaces_m5733 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1091* GenericTypeParameterBuilder_GetMethods_m5734 (GenericTypeParameterBuilder_t1062 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * GenericTypeParameterBuilder_GetMethodImpl_m5735 (GenericTypeParameterBuilder_t1062 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t376 * ___binder, int32_t ___callConvention, TypeU5BU5D_t196* ___types, ParameterModifierU5BU5D_t377* ___modifiers, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.PropertyInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t372* GenericTypeParameterBuilder_GetProperties_m5736 (GenericTypeParameterBuilder_t1062 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * GenericTypeParameterBuilder_GetPropertyImpl_m5737 (GenericTypeParameterBuilder_t1062 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t376 * ___binder, Type_t * ___returnType, TypeU5BU5D_t196* ___types, ParameterModifierU5BU5D_t377* ___modifiers, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
extern "C" bool GenericTypeParameterBuilder_HasElementTypeImpl_m5738 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
extern "C" bool GenericTypeParameterBuilder_IsAssignableFrom_m5739 (GenericTypeParameterBuilder_t1062 * __this, Type_t * ___c, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
extern "C" bool GenericTypeParameterBuilder_IsInstanceOfType_m5740 (GenericTypeParameterBuilder_t1062 * __this, Object_t * ___o, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
extern "C" bool GenericTypeParameterBuilder_IsArrayImpl_m5741 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
extern "C" bool GenericTypeParameterBuilder_IsByRefImpl_m5742 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
extern "C" bool GenericTypeParameterBuilder_IsPointerImpl_m5743 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
extern "C" bool GenericTypeParameterBuilder_IsPrimitiveImpl_m5744 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
extern "C" bool GenericTypeParameterBuilder_IsValueTypeImpl_m5745 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = (__this->___base_type_11);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___base_type_11);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * GenericTypeParameterBuilder_InvokeMember_m5746 (GenericTypeParameterBuilder_t1062 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t376 * ___binder, Object_t * ___target, ObjectU5BU5D_t200* ___args, ParameterModifierU5BU5D_t377* ___modifiers, CultureInfo_t342 * ___culture, StringU5BU5D_t197* ___namedParameters, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
extern "C" Type_t * GenericTypeParameterBuilder_GetElementType_m5747 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
extern "C" Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m5748 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
extern "C" Assembly_t671 * GenericTypeParameterBuilder_get_Assembly_m5749 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Assembly_t671 * L_1 = (Assembly_t671 *)VirtFuncInvoker0< Assembly_t671 * >::Invoke(14 /* System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
extern "C" String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m5750 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
extern "C" Type_t * GenericTypeParameterBuilder_get_BaseType_m5751 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___base_type_11);
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
extern "C" String_t* GenericTypeParameterBuilder_get_FullName_m5752 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool GenericTypeParameterBuilder_IsDefined_m5753 (GenericTypeParameterBuilder_t1062 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t200* GenericTypeParameterBuilder_GetCustomAttributes_m5754 (GenericTypeParameterBuilder_t1062 * __this, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t200* GenericTypeParameterBuilder_GetCustomAttributes_m5755 (GenericTypeParameterBuilder_t1062 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
extern "C" String_t* GenericTypeParameterBuilder_get_Name_m5756 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_10);
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
extern "C" String_t* GenericTypeParameterBuilder_get_Namespace_m5757 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
extern "C" Module_t1065 * GenericTypeParameterBuilder_get_Module_m5758 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t1065 * L_1 = (Module_t1065 *)VirtFuncInvoker0< Module_t1065 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
extern "C" Type_t * GenericTypeParameterBuilder_get_DeclaringType_m5759 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	Type_t * G_B3_0 = {0};
	{
		MethodBuilder_t1061 * L_0 = (__this->___mbuilder_9);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		MethodBuilder_t1061 * L_1 = (__this->___mbuilder_9);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType() */, L_1);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		TypeBuilder_t1055 * L_3 = (__this->___tbuilder_8);
		G_B3_0 = ((Type_t *)(L_3));
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
extern "C" Type_t * GenericTypeParameterBuilder_get_ReflectedType_m5760 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType() */, __this);
		return L_0;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t885  GenericTypeParameterBuilder_get_TypeHandle_m5761 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = GenericTypeParameterBuilder_not_supported_m5768(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t196* GenericTypeParameterBuilder_GetGenericArguments_m5762 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvalidOperationException_t665 * L_0 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2384(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m5763 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvalidOperationException_t665 * L_0 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2384(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
extern "C" bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m5764 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericParameter_m5765 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericType_m5766 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m5767 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" Exception_t65 * GenericTypeParameterBuilder_not_supported_m5768 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2424(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
extern "C" String_t* GenericTypeParameterBuilder_ToString_m5769 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_10);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
extern "C" bool GenericTypeParameterBuilder_Equals_m5770 (GenericTypeParameterBuilder_t1062 * __this, Object_t * ___o, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = Type_Equals_m4345(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
extern "C" int32_t GenericTypeParameterBuilder_GetHashCode_m5771 (GenericTypeParameterBuilder_t1062 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Type_GetHashCode_m4360(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * GenericTypeParameterBuilder_MakeGenericType_m5772 (GenericTypeParameterBuilder_t1062 * __this, TypeU5BU5D_t196* ___typeArguments, const MethodInfo* method)
{
	{
		TypeU5BU5D_t196* L_0 = ___typeArguments;
		Type_t * L_1 = Type_MakeGenericType_m4385(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" bool MethodBuilder_get_ContainsGenericParameters_m5773 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2424(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1387  MethodBuilder_get_MethodHandle_m5774 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = MethodBuilder_NotSupported_m5790(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
extern "C" Type_t * MethodBuilder_get_ReturnType_m5775 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___rtype_0);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
extern "C" Type_t * MethodBuilder_get_ReflectedType_m5776 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->___type_4);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
extern "C" Type_t * MethodBuilder_get_DeclaringType_m5777 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->___type_4);
		return L_0;
	}
}
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
extern "C" String_t* MethodBuilder_get_Name_m5778 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		return L_0;
	}
}
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
extern "C" int32_t MethodBuilder_get_Attributes_m5779 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_2);
		return L_0;
	}
}
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
extern "C" int32_t MethodBuilder_get_CallingConvention_m5780 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___call_conv_6);
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
extern "C" MethodInfo_t * MethodBuilder_GetBaseDefinition_m5781 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
extern TypeInfo* ParameterInfoU5BU5D_t369_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterInfo_t370_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t369* MethodBuilder_GetParameters_m5782 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParameterInfoU5BU5D_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1988);
		ParameterInfo_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1989);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t369* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B7_0 = 0;
	ParameterInfoU5BU5D_t369* G_B7_1 = {0};
	int32_t G_B6_0 = 0;
	ParameterInfoU5BU5D_t369* G_B6_1 = {0};
	ParameterBuilder_t1066 * G_B8_0 = {0};
	int32_t G_B8_1 = 0;
	ParameterInfoU5BU5D_t369* G_B8_2 = {0};
	{
		TypeBuilder_t1055 * L_0 = (__this->___type_4);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m5857(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		Exception_t65 * L_2 = MethodBuilder_NotSupported_m5790(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		TypeU5BU5D_t196* L_3 = (__this->___parameters_1);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (ParameterInfoU5BU5D_t369*)NULL;
	}

IL_001e:
	{
		TypeU5BU5D_t196* L_4 = (__this->___parameters_1);
		NullCheck(L_4);
		V_0 = ((ParameterInfoU5BU5D_t369*)SZArrayNew(ParameterInfoU5BU5D_t369_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_005d;
	}

IL_0030:
	{
		ParameterInfoU5BU5D_t369* L_5 = V_0;
		int32_t L_6 = V_1;
		ParameterBuilderU5BU5D_t1056* L_7 = (__this->___pinfo_5);
		G_B6_0 = L_6;
		G_B6_1 = L_5;
		if (L_7)
		{
			G_B7_0 = L_6;
			G_B7_1 = L_5;
			goto IL_003d;
		}
	}
	{
		G_B8_0 = ((ParameterBuilder_t1066 *)(NULL));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0047;
	}

IL_003d:
	{
		ParameterBuilderU5BU5D_t1056* L_8 = (__this->___pinfo_5);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9+(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9+(int32_t)1));
		G_B8_0 = (*(ParameterBuilder_t1066 **)(ParameterBuilder_t1066 **)SZArrayLdElema(L_8, L_10));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0047:
	{
		TypeU5BU5D_t196* L_11 = (__this->___parameters_1);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		int32_t L_14 = V_1;
		ParameterInfo_t370 * L_15 = (ParameterInfo_t370 *)il2cpp_codegen_object_new (ParameterInfo_t370_il2cpp_TypeInfo_var);
		ParameterInfo__ctor_m6115(L_15, G_B8_0, (*(Type_t **)(Type_t **)SZArrayLdElema(L_11, L_13)), __this, ((int32_t)((int32_t)L_14+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(G_B8_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B8_2, G_B8_1);
		ArrayElementTypeCheck (G_B8_2, L_15);
		*((ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(G_B8_2, G_B8_1)) = (ParameterInfo_t370 *)L_15;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_005d:
	{
		int32_t L_17 = V_1;
		TypeU5BU5D_t196* L_18 = (__this->___parameters_1);
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		ParameterInfoU5BU5D_t369* L_19 = V_0;
		return L_19;
	}
}
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MethodBuilder_Invoke_m5783 (MethodBuilder_t1061 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t376 * ___binder, ObjectU5BU5D_t200* ___parameters, CultureInfo_t342 * ___culture, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = MethodBuilder_NotSupported_m5790(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool MethodBuilder_IsDefined_m5784 (MethodBuilder_t1061 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = MethodBuilder_NotSupported_m5790(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* MethodBuilder_GetCustomAttributes_m5785 (MethodBuilder_t1061 * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t1055 * L_0 = (__this->___type_4);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m5857(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_3 = MonoCustomAttrs_GetCustomAttributes_m7750(NULL /*static, unused*/, __this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		Exception_t65 * L_4 = MethodBuilder_NotSupported_m5790(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* MethodBuilder_GetCustomAttributes_m5786 (MethodBuilder_t1061 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t1055 * L_0 = (__this->___type_4);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m5857(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_2 = ___attributeType;
		bool L_3 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_4 = MonoCustomAttrs_GetCustomAttributes_m7749(NULL /*static, unused*/, __this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0016:
	{
		Exception_t65 * L_5 = MethodBuilder_NotSupported_m5790(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.String System.Reflection.Emit.MethodBuilder::ToString()
extern TypeInfo* StringU5BU5D_t197_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MethodBuilder_ToString_m5787 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t197* L_0 = ((StringU5BU5D_t197*)SZArrayNew(StringU5BU5D_t197_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1562);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1562;
		StringU5BU5D_t197* L_1 = L_0;
		TypeBuilder_t1055 * L_2 = (__this->___type_4);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Emit.TypeBuilder::get_Name() */, L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_3);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)L_3;
		StringU5BU5D_t197* L_4 = L_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral328);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)(String_t*) &_stringLiteral328;
		StringU5BU5D_t197* L_5 = L_4;
		String_t* L_6 = (__this->___name_3);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, L_6);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 3)) = (String_t*)L_6;
		StringU5BU5D_t197* L_7 = L_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 4);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral189);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 4)) = (String_t*)(String_t*) &_stringLiteral189;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m1214(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
extern "C" bool MethodBuilder_Equals_m5788 (MethodBuilder_t1061 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		bool L_1 = Object_Equals_m1395(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
extern "C" int32_t MethodBuilder_GetHashCode_m5789 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" Exception_t65 * MethodBuilder_NotSupported_m5790 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*) &_stringLiteral1558, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
extern "C" MethodInfo_t * MethodBuilder_MakeGenericMethod_m5791 (MethodBuilder_t1061 * __this, TypeU5BU5D_t196* ___typeArguments, const MethodInfo* method)
{
	typedef MethodInfo_t * (*MethodBuilder_MakeGenericMethod_m5791_ftn) (MethodBuilder_t1061 *, TypeU5BU5D_t196*);
	static MethodBuilder_MakeGenericMethod_m5791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MethodBuilder_MakeGenericMethod_m5791_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])");
	return _il2cpp_icall_func(__this, ___typeArguments);
}
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
extern "C" bool MethodBuilder_get_IsGenericMethodDefinition_m5792 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1063* L_0 = (__this->___generic_params_7);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1063*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
extern "C" bool MethodBuilder_get_IsGenericMethod_m5793 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1063* L_0 = (__this->___generic_params_7);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1063*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t196_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t196* MethodBuilder_GetGenericArguments_m5794 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		TypeU5BU5D_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	TypeU5BU5D_t196* V_0 = {0};
	int32_t V_1 = 0;
	{
		GenericTypeParameterBuilderU5BU5D_t1063* L_0 = (__this->___generic_params_7);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t196* L_1 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		return L_1;
	}

IL_000e:
	{
		GenericTypeParameterBuilderU5BU5D_t1063* L_2 = (__this->___generic_params_7);
		NullCheck(L_2);
		V_0 = ((TypeU5BU5D_t196*)SZArrayNew(TypeU5BU5D_t196_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		V_1 = 0;
		goto IL_002f;
	}

IL_0020:
	{
		TypeU5BU5D_t196* L_3 = V_0;
		int32_t L_4 = V_1;
		GenericTypeParameterBuilderU5BU5D_t1063* L_5 = (__this->___generic_params_7);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		ArrayElementTypeCheck (L_3, (*(GenericTypeParameterBuilder_t1062 **)(GenericTypeParameterBuilder_t1062 **)SZArrayLdElema(L_5, L_7)));
		*((Type_t **)(Type_t **)SZArrayLdElema(L_3, L_4)) = (Type_t *)(*(GenericTypeParameterBuilder_t1062 **)(GenericTypeParameterBuilder_t1062 **)SZArrayLdElema(L_5, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_9 = V_1;
		GenericTypeParameterBuilderU5BU5D_t1063* L_10 = (__this->___generic_params_7);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		TypeU5BU5D_t196* L_11 = V_0;
		return L_11;
	}
}
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
extern "C" Module_t1065 * MethodBuilder_get_Module_m5795 (MethodBuilder_t1061 * __this, const MethodInfo* method)
{
	{
		Module_t1065 * L_0 = MemberInfo_get_Module_m4390(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilderMethodDeclarations.h"



// System.Void System.Reflection.Emit.ModuleBuilder::.cctor()
extern TypeInfo* CharU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* ModuleBuilder_t1064_il2cpp_TypeInfo_var;
extern "C" void ModuleBuilder__cctor_m5796 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(71);
		ModuleBuilder_t1064_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1990);
		s_Il2CppMethodIntialized = true;
	}
	{
		CharU5BU5D_t300* L_0 = ((CharU5BU5D_t300*)SZArrayNew(CharU5BU5D_t300_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)38);
		CharU5BU5D_t300* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)91);
		CharU5BU5D_t300* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 2)) = (uint16_t)((int32_t)42);
		((ModuleBuilder_t1064_StaticFields*)ModuleBuilder_t1064_il2cpp_TypeInfo_var->static_fields)->___type_modifiers_11 = L_2;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilderMethodDeclarations.h"

// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"


// System.Int32 System.Reflection.Emit.ParameterBuilder::get_Attributes()
extern "C" int32_t ParameterBuilder_get_Attributes_m5797 (ParameterBuilder_t1066 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_1);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ParameterBuilder::get_Name()
extern "C" String_t* ParameterBuilder_get_Name_m5798 (ParameterBuilder_t1066 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
// System.Int32 System.Reflection.Emit.ParameterBuilder::get_Position()
extern "C" int32_t ParameterBuilder_get_Position_m5799 (ParameterBuilder_t1066 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___position_2);
		return L_0;
	}
}
// System.Reflection.Emit.PropertyBuilder
#include "mscorlib_System_Reflection_Emit_PropertyBuilder.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.PropertyBuilder
#include "mscorlib_System_Reflection_Emit_PropertyBuilderMethodDeclarations.h"

// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"


// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::get_Attributes()
extern "C" int32_t PropertyBuilder_get_Attributes_m5800 (PropertyBuilder_t1067 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_0);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanRead()
extern "C" bool PropertyBuilder_get_CanRead_m5801 (PropertyBuilder_t1067 * __this, const MethodInfo* method)
{
	{
		MethodBuilder_t1061 * L_0 = (__this->___get_method_4);
		return ((((int32_t)((((Object_t*)(MethodBuilder_t1061 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanWrite()
extern "C" bool PropertyBuilder_get_CanWrite_m5802 (PropertyBuilder_t1067 * __this, const MethodInfo* method)
{
	{
		MethodBuilder_t1061 * L_0 = (__this->___set_method_3);
		return ((((int32_t)((((Object_t*)(MethodBuilder_t1061 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type System.Reflection.Emit.PropertyBuilder::get_DeclaringType()
extern "C" Type_t * PropertyBuilder_get_DeclaringType_m5803 (PropertyBuilder_t1067 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->___typeb_5);
		return L_0;
	}
}
// System.String System.Reflection.Emit.PropertyBuilder::get_Name()
extern "C" String_t* PropertyBuilder_get_Name_m5804 (PropertyBuilder_t1067 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_1);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.PropertyBuilder::get_PropertyType()
extern "C" Type_t * PropertyBuilder_get_PropertyType_m5805 (PropertyBuilder_t1067 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_2);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.PropertyBuilder::get_ReflectedType()
extern "C" Type_t * PropertyBuilder_get_ReflectedType_m5806 (PropertyBuilder_t1067 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t1055 * L_0 = (__this->___typeb_5);
		return L_0;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.PropertyBuilder::GetAccessors(System.Boolean)
extern "C" MethodInfoU5BU5D_t1091* PropertyBuilder_GetAccessors_m5807 (PropertyBuilder_t1067 * __this, bool ___nonPublic, const MethodInfo* method)
{
	{
		return (MethodInfoU5BU5D_t1091*)NULL;
	}
}
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t200* PropertyBuilder_GetCustomAttributes_m5808 (PropertyBuilder_t1067 * __this, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = PropertyBuilder_not_supported_m5819(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t200* PropertyBuilder_GetCustomAttributes_m5809 (PropertyBuilder_t1067 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = PropertyBuilder_not_supported_m5819(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetGetMethod(System.Boolean)
extern "C" MethodInfo_t * PropertyBuilder_GetGetMethod_m5810 (PropertyBuilder_t1067 * __this, bool ___nonPublic, const MethodInfo* method)
{
	{
		MethodBuilder_t1061 * L_0 = (__this->___get_method_4);
		return L_0;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.PropertyBuilder::GetIndexParameters()
extern "C" ParameterInfoU5BU5D_t369* PropertyBuilder_GetIndexParameters_m5811 (PropertyBuilder_t1067 * __this, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = PropertyBuilder_not_supported_m5819(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetSetMethod(System.Boolean)
extern "C" MethodInfo_t * PropertyBuilder_GetSetMethod_m5812 (PropertyBuilder_t1067 * __this, bool ___nonPublic, const MethodInfo* method)
{
	{
		MethodBuilder_t1061 * L_0 = (__this->___set_method_3);
		return L_0;
	}
}
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Object[])
extern "C" Object_t * PropertyBuilder_GetValue_m5813 (PropertyBuilder_t1067 * __this, Object_t * ___obj, ObjectU5BU5D_t200* ___index, const MethodInfo* method)
{
	{
		return NULL;
	}
}
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * PropertyBuilder_GetValue_m5814 (PropertyBuilder_t1067 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t376 * ___binder, ObjectU5BU5D_t200* ___index, CultureInfo_t342 * ___culture, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = PropertyBuilder_not_supported_m5819(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.PropertyBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool PropertyBuilder_IsDefined_m5815 (PropertyBuilder_t1067 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = PropertyBuilder_not_supported_m5819(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Object[])
extern "C" void PropertyBuilder_SetValue_m5816 (PropertyBuilder_t1067 * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t200* ___index, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" void PropertyBuilder_SetValue_m5817 (PropertyBuilder_t1067 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t376 * ___binder, ObjectU5BU5D_t200* ___index, CultureInfo_t342 * ___culture, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Reflection.Module System.Reflection.Emit.PropertyBuilder::get_Module()
extern "C" Module_t1065 * PropertyBuilder_get_Module_m5818 (PropertyBuilder_t1067 * __this, const MethodInfo* method)
{
	{
		Module_t1065 * L_0 = MemberInfo_get_Module_m4390(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.PropertyBuilder::not_supported()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" Exception_t65 * PropertyBuilder_not_supported_m5819 (PropertyBuilder_t1067 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*) &_stringLiteral1558, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.AmbiguousMatchException
#include "mscorlib_System_Reflection_AmbiguousMatchException.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Reflection.AmbiguousMatchException
#include "mscorlib_System_Reflection_AmbiguousMatchExceptionMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_BinderMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"


// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern "C" int32_t TypeBuilder_GetAttributeFlagsImpl_m5820 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_17);
		return L_0;
	}
}
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C" Assembly_t671 * TypeBuilder_get_Assembly_m5821 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		ModuleBuilder_t1064 * L_0 = (__this->___pmodule_18);
		NullCheck(L_0);
		Assembly_t671 * L_1 = Module_get_Assembly_m5987(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* TypeBuilder_get_AssemblyQualifiedName_m5822 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___fullname_21);
		Assembly_t671 * L_1 = (Assembly_t671 *)VirtFuncInvoker0< Assembly_t671 * >::Invoke(14 /* System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly() */, __this);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Reflection.Assembly::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1179(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral252, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C" Type_t * TypeBuilder_get_BaseType_m5823 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___parent_10);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C" Type_t * TypeBuilder_get_DeclaringType_m5824 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___nesting_type_11);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" Type_t * TypeBuilder_get_UnderlyingSystemType_m5825 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = TypeBuilder_get_is_created_m5857(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1 = (__this->___created_20);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(36 /* System.Type System.Type::get_UnderlyingSystemType() */, L_1);
		return L_2;
	}

IL_0014:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, __this);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		bool L_4 = TypeBuilder_get_IsCompilerContext_m5856(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_5 = (__this->___underlying_type_22);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_6 = (__this->___underlying_type_22);
		return L_6;
	}

IL_0033:
	{
		InvalidOperationException_t665 * L_7 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_7, (String_t*) &_stringLiteral1563, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003e:
	{
		return __this;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C" String_t* TypeBuilder_get_FullName_m5826 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___fullname_21);
		return L_0;
	}
}
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C" Module_t1065 * TypeBuilder_get_Module_m5827 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		ModuleBuilder_t1064 * L_0 = (__this->___pmodule_18);
		return L_0;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C" String_t* TypeBuilder_get_Name_m5828 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___tname_8);
		return L_0;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C" String_t* TypeBuilder_get_Namespace_m5829 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___nspace_9);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C" Type_t * TypeBuilder_get_ReflectedType_m5830 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___nesting_type_11);
		return L_0;
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* AmbiguousMatchException_t1072_il2cpp_TypeInfo_var;
extern TypeInfo* MethodBaseU5BU5D_t1433_il2cpp_TypeInfo_var;
extern TypeInfo* Binder_t376_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructorInfo_t202_il2cpp_TypeInfo_var;
extern "C" ConstructorInfo_t202 * TypeBuilder_GetConstructorImpl_m5831 (TypeBuilder_t1055 * __this, int32_t ___bindingAttr, Binder_t376 * ___binder, int32_t ___callConvention, TypeU5BU5D_t196* ___types, ParameterModifierU5BU5D_t377* ___modifiers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		AmbiguousMatchException_t1072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1992);
		MethodBaseU5BU5D_t1433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1993);
		Binder_t376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1995);
		ConstructorInfo_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorBuilder_t1057 * V_0 = {0};
	int32_t V_1 = 0;
	ConstructorBuilder_t1057 * V_2 = {0};
	ConstructorBuilderU5BU5D_t1069* V_3 = {0};
	int32_t V_4 = 0;
	MethodBaseU5BU5D_t1433* V_5 = {0};
	ConstructorInfo_t202 * V_6 = {0};
	ConstructorBuilderU5BU5D_t1069* V_7 = {0};
	int32_t V_8 = 0;
	{
		TypeBuilder_check_created_m5859(__this, /*hidden argument*/NULL);
		Type_t * L_0 = (__this->___created_20);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_00e1;
		}
	}
	{
		ConstructorBuilderU5BU5D_t1069* L_2 = (__this->___ctors_14);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		return (ConstructorInfo_t202 *)NULL;
	}

IL_0025:
	{
		V_0 = (ConstructorBuilder_t1057 *)NULL;
		V_1 = 0;
		ConstructorBuilderU5BU5D_t1069* L_3 = (__this->___ctors_14);
		V_3 = L_3;
		V_4 = 0;
		goto IL_0055;
	}

IL_0035:
	{
		ConstructorBuilderU5BU5D_t1069* L_4 = V_3;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_2 = (*(ConstructorBuilder_t1057 **)(ConstructorBuilder_t1057 **)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = ___callConvention;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		ConstructorBuilder_t1057 * L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention() */, L_8);
		int32_t L_10 = ___callConvention;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_004f;
	}

IL_0049:
	{
		ConstructorBuilder_t1057 * L_11 = V_2;
		V_0 = L_11;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_13 = V_4;
		V_4 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0055:
	{
		int32_t L_14 = V_4;
		ConstructorBuilderU5BU5D_t1069* L_15 = V_3;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_16 = V_1;
		if (L_16)
		{
			goto IL_0061;
		}
	}
	{
		return (ConstructorInfo_t202 *)NULL;
	}

IL_0061:
	{
		TypeU5BU5D_t196* L_17 = ___types;
		if (L_17)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		AmbiguousMatchException_t1072 * L_19 = (AmbiguousMatchException_t1072 *)il2cpp_codegen_object_new (AmbiguousMatchException_t1072_il2cpp_TypeInfo_var);
		AmbiguousMatchException__ctor_m5871(L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_006f:
	{
		ConstructorBuilder_t1057 * L_20 = V_0;
		return L_20;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		V_5 = ((MethodBaseU5BU5D_t1433*)SZArrayNew(MethodBaseU5BU5D_t1433_il2cpp_TypeInfo_var, L_21));
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		MethodBaseU5BU5D_t1433* L_23 = V_5;
		ConstructorBuilder_t1057 * L_24 = V_0;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 0);
		ArrayElementTypeCheck (L_23, L_24);
		*((MethodBase_t379 **)(MethodBase_t379 **)SZArrayLdElema(L_23, 0)) = (MethodBase_t379 *)L_24;
		goto IL_00c2;
	}

IL_0084:
	{
		V_1 = 0;
		ConstructorBuilderU5BU5D_t1069* L_25 = (__this->___ctors_14);
		V_7 = L_25;
		V_8 = 0;
		goto IL_00ba;
	}

IL_0093:
	{
		ConstructorBuilderU5BU5D_t1069* L_26 = V_7;
		int32_t L_27 = V_8;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		V_6 = (*(ConstructorBuilder_t1057 **)(ConstructorBuilder_t1057 **)SZArrayLdElema(L_26, L_28));
		int32_t L_29 = ___callConvention;
		if ((((int32_t)L_29) == ((int32_t)3)))
		{
			goto IL_00aa;
		}
	}
	{
		ConstructorInfo_t202 * L_30 = V_6;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_30);
		int32_t L_32 = ___callConvention;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_00aa;
		}
	}
	{
		goto IL_00b4;
	}

IL_00aa:
	{
		MethodBaseU5BU5D_t1433* L_33 = V_5;
		int32_t L_34 = V_1;
		int32_t L_35 = L_34;
		V_1 = ((int32_t)((int32_t)L_35+(int32_t)1));
		ConstructorInfo_t202 * L_36 = V_6;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_35);
		ArrayElementTypeCheck (L_33, L_36);
		*((MethodBase_t379 **)(MethodBase_t379 **)SZArrayLdElema(L_33, L_35)) = (MethodBase_t379 *)L_36;
	}

IL_00b4:
	{
		int32_t L_37 = V_8;
		V_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00ba:
	{
		int32_t L_38 = V_8;
		ConstructorBuilderU5BU5D_t1069* L_39 = V_7;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)(((Array_t *)L_39)->max_length))))))
		{
			goto IL_0093;
		}
	}

IL_00c2:
	{
		Binder_t376 * L_40 = ___binder;
		if (L_40)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t376_il2cpp_TypeInfo_var);
		Binder_t376 * L_41 = Binder_get_DefaultBinder_m5927(NULL /*static, unused*/, /*hidden argument*/NULL);
		___binder = L_41;
	}

IL_00ce:
	{
		Binder_t376 * L_42 = ___binder;
		int32_t L_43 = ___bindingAttr;
		MethodBaseU5BU5D_t1433* L_44 = V_5;
		TypeU5BU5D_t196* L_45 = ___types;
		ParameterModifierU5BU5D_t377* L_46 = ___modifiers;
		NullCheck(L_42);
		MethodBase_t379 * L_47 = (MethodBase_t379 *)VirtFuncInvoker4< MethodBase_t379 *, int32_t, MethodBaseU5BU5D_t1433*, TypeU5BU5D_t196*, ParameterModifierU5BU5D_t377* >::Invoke(7 /* System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[]) */, L_42, L_43, L_44, L_45, L_46);
		return ((ConstructorInfo_t202 *)Castclass(L_47, ConstructorInfo_t202_il2cpp_TypeInfo_var));
	}

IL_00e1:
	{
		Type_t * L_48 = (__this->___created_20);
		int32_t L_49 = ___bindingAttr;
		Binder_t376 * L_50 = ___binder;
		int32_t L_51 = ___callConvention;
		TypeU5BU5D_t196* L_52 = ___types;
		ParameterModifierU5BU5D_t377* L_53 = ___modifiers;
		NullCheck(L_48);
		ConstructorInfo_t202 * L_54 = (ConstructorInfo_t202 *)VirtFuncInvoker5< ConstructorInfo_t202 *, int32_t, Binder_t376 *, int32_t, TypeU5BU5D_t196*, ParameterModifierU5BU5D_t377* >::Invoke(69 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[]) */, L_48, L_49, L_50, L_51, L_52, L_53);
		return L_54;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" bool TypeBuilder_IsDefined_m5832 (TypeBuilder_t1055 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = TypeBuilder_get_is_created_m5857(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = TypeBuilder_get_IsCompilerContext_m5856(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		NotSupportedException_t667 * L_2 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2424(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		Type_t * L_3 = ___attributeType;
		bool L_4 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		bool L_5 = MonoCustomAttrs_IsDefined_m7751(NULL /*static, unused*/, __this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t200* TypeBuilder_GetCustomAttributes_m5833 (TypeBuilder_t1055 * __this, bool ___inherit, const MethodInfo* method)
{
	{
		TypeBuilder_check_created_m5859(__this, /*hidden argument*/NULL);
		Type_t * L_0 = (__this->___created_20);
		bool L_1 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t200* L_2 = (ObjectU5BU5D_t200*)VirtFuncInvoker1< ObjectU5BU5D_t200*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t200* TypeBuilder_GetCustomAttributes_m5834 (TypeBuilder_t1055 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		TypeBuilder_check_created_m5859(__this, /*hidden argument*/NULL);
		Type_t * L_0 = (__this->___created_20);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t200* L_3 = (ObjectU5BU5D_t200*)VirtFuncInvoker2< ObjectU5BU5D_t200*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" ConstructorInfoU5BU5D_t368* TypeBuilder_GetConstructors_m5835 (TypeBuilder_t1055 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = TypeBuilder_get_is_created_m5857(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___created_20);
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_1);
		ConstructorInfoU5BU5D_t368* L_3 = (ConstructorInfoU5BU5D_t368*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t368*, int32_t >::Invoke(71 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags) */, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		bool L_4 = TypeBuilder_get_IsCompilerContext_m5856(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		NotSupportedException_t667 * L_5 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2424(L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = ___bindingAttr;
		ConstructorInfoU5BU5D_t368* L_7 = TypeBuilder_GetConstructorsInternal_m5836(__this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern TypeInfo* ConstructorInfoU5BU5D_t368_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t491_il2cpp_TypeInfo_var;
extern "C" ConstructorInfoU5BU5D_t368* TypeBuilder_GetConstructorsInternal_m5836 (TypeBuilder_t1055 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructorInfoU5BU5D_t368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1996);
		ArrayList_t491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(931);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t491 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	ConstructorBuilder_t1057 * V_3 = {0};
	ConstructorBuilderU5BU5D_t1069* V_4 = {0};
	int32_t V_5 = 0;
	ConstructorInfoU5BU5D_t368* V_6 = {0};
	{
		ConstructorBuilderU5BU5D_t1069* L_0 = (__this->___ctors_14);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ConstructorInfoU5BU5D_t368*)SZArrayNew(ConstructorInfoU5BU5D_t368_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		ArrayList_t491 * L_1 = (ArrayList_t491 *)il2cpp_codegen_object_new (ArrayList_t491_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2388(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		ConstructorBuilderU5BU5D_t1069* L_2 = (__this->___ctors_14);
		V_4 = L_2;
		V_5 = 0;
		goto IL_0079;
	}

IL_0022:
	{
		ConstructorBuilderU5BU5D_t1069* L_3 = V_4;
		int32_t L_4 = V_5;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = (*(ConstructorBuilder_t1057 **)(ConstructorBuilder_t1057 **)SZArrayLdElema(L_3, L_5));
		V_1 = 0;
		ConstructorBuilder_t1057 * L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes() */, L_6);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_9 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_9&(int32_t)((int32_t)16))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 1;
	}

IL_003f:
	{
		goto IL_0049;
	}

IL_0041:
	{
		int32_t L_10 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_10&(int32_t)((int32_t)32))))
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 1;
	}

IL_0049:
	{
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0073;
	}

IL_004e:
	{
		V_1 = 0;
		int32_t L_12 = V_2;
		if (!((int32_t)((int32_t)L_12&(int32_t)((int32_t)16))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_13 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_13&(int32_t)8)))
		{
			goto IL_005d;
		}
	}
	{
		V_1 = 1;
	}

IL_005d:
	{
		goto IL_0066;
	}

IL_005f:
	{
		int32_t L_14 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_14&(int32_t)4)))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 1;
	}

IL_0066:
	{
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0073;
	}

IL_006b:
	{
		ArrayList_t491 * L_16 = V_0;
		ConstructorBuilder_t1057 * L_17 = V_3;
		NullCheck(L_16);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(23 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
	}

IL_0073:
	{
		int32_t L_18 = V_5;
		V_5 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_19 = V_5;
		ConstructorBuilderU5BU5D_t1069* L_20 = V_4;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		ArrayList_t491 * L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_21);
		V_6 = ((ConstructorInfoU5BU5D_t368*)SZArrayNew(ConstructorInfoU5BU5D_t368_il2cpp_TypeInfo_var, L_22));
		ArrayList_t491 * L_23 = V_0;
		ConstructorInfoU5BU5D_t368* L_24 = V_6;
		NullCheck(L_23);
		VirtActionInvoker1< Array_t * >::Invoke(33 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_23, (Array_t *)(Array_t *)L_24);
		ConstructorInfoU5BU5D_t368* L_25 = V_6;
		return L_25;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" Type_t * TypeBuilder_GetElementType_m5837 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2424(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * TypeBuilder_GetEvent_m5838 (TypeBuilder_t1055 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		TypeBuilder_check_created_m5859(__this, /*hidden argument*/NULL);
		Type_t * L_0 = (__this->___created_20);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		EventInfo_t * L_3 = (EventInfo_t *)VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(43 /* System.Reflection.EventInfo System.Type::GetEvent(System.String,System.Reflection.BindingFlags) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" FieldInfo_t * TypeBuilder_GetField_m5839 (TypeBuilder_t1055 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = {0};
	FieldInfo_t * V_2 = {0};
	FieldBuilderU5BU5D_t1071* V_3 = {0};
	int32_t V_4 = 0;
	{
		Type_t * L_0 = (__this->___created_20);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_1 = (__this->___created_20);
		String_t* L_2 = ___name;
		int32_t L_3 = ___bindingAttr;
		NullCheck(L_1);
		FieldInfo_t * L_4 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, L_3);
		return L_4;
	}

IL_0016:
	{
		FieldBuilderU5BU5D_t1071* L_5 = (__this->___fields_16);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return (FieldInfo_t *)NULL;
	}

IL_0020:
	{
		FieldBuilderU5BU5D_t1071* L_6 = (__this->___fields_16);
		V_3 = L_6;
		V_4 = 0;
		goto IL_0094;
	}

IL_002f:
	{
		FieldBuilderU5BU5D_t1071* L_7 = V_3;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (*(FieldBuilder_t1060 **)(FieldBuilder_t1060 **)SZArrayLdElema(L_7, L_9));
		FieldInfo_t * L_10 = V_2;
		if (L_10)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_008e;
	}

IL_0039:
	{
		FieldInfo_t * L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
		String_t* L_13 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Inequality_m2415(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0049;
		}
	}
	{
		goto IL_008e;
	}

IL_0049:
	{
		V_0 = 0;
		FieldInfo_t * L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, L_15);
		V_1 = L_16;
		int32_t L_17 = V_1;
		if ((!(((uint32_t)((int32_t)((int32_t)L_17&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_18 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_18&(int32_t)((int32_t)16))))
		{
			goto IL_0060;
		}
	}
	{
		V_0 = 1;
	}

IL_0060:
	{
		goto IL_006a;
	}

IL_0062:
	{
		int32_t L_19 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_19&(int32_t)((int32_t)32))))
		{
			goto IL_006a;
		}
	}
	{
		V_0 = 1;
	}

IL_006a:
	{
		bool L_20 = V_0;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_008e;
	}

IL_006f:
	{
		V_0 = 0;
		int32_t L_21 = V_1;
		if (!((int32_t)((int32_t)L_21&(int32_t)((int32_t)16))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_22 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_22&(int32_t)8)))
		{
			goto IL_007e;
		}
	}
	{
		V_0 = 1;
	}

IL_007e:
	{
		goto IL_0087;
	}

IL_0080:
	{
		int32_t L_23 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_23&(int32_t)4)))
		{
			goto IL_0087;
		}
	}
	{
		V_0 = 1;
	}

IL_0087:
	{
		bool L_24 = V_0;
		if (L_24)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_008e;
	}

IL_008c:
	{
		FieldInfo_t * L_25 = V_2;
		return L_25;
	}

IL_008e:
	{
		int32_t L_26 = V_4;
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0094:
	{
		int32_t L_27 = V_4;
		FieldBuilderU5BU5D_t1071* L_28 = V_3;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((Array_t *)L_28)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (FieldInfo_t *)NULL;
	}
}
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern TypeInfo* FieldInfoU5BU5D_t373_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t491_il2cpp_TypeInfo_var;
extern "C" FieldInfoU5BU5D_t373* TypeBuilder_GetFields_m5840 (TypeBuilder_t1055 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FieldInfoU5BU5D_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1997);
		ArrayList_t491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(931);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t491 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	FieldInfo_t * V_3 = {0};
	FieldBuilderU5BU5D_t1071* V_4 = {0};
	int32_t V_5 = 0;
	FieldInfoU5BU5D_t373* V_6 = {0};
	{
		Type_t * L_0 = (__this->___created_20);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___created_20);
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_1);
		FieldInfoU5BU5D_t373* L_3 = (FieldInfoU5BU5D_t373*)VirtFuncInvoker1< FieldInfoU5BU5D_t373*, int32_t >::Invoke(45 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		FieldBuilderU5BU5D_t1071* L_4 = (__this->___fields_16);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return ((FieldInfoU5BU5D_t373*)SZArrayNew(FieldInfoU5BU5D_t373_il2cpp_TypeInfo_var, 0));
	}

IL_0024:
	{
		ArrayList_t491 * L_5 = (ArrayList_t491 *)il2cpp_codegen_object_new (ArrayList_t491_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2388(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
		FieldBuilderU5BU5D_t1071* L_6 = (__this->___fields_16);
		V_4 = L_6;
		V_5 = 0;
		goto IL_0096;
	}

IL_003a:
	{
		FieldBuilderU5BU5D_t1071* L_7 = V_4;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_3 = (*(FieldBuilder_t1060 **)(FieldBuilder_t1060 **)SZArrayLdElema(L_7, L_9));
		FieldInfo_t * L_10 = V_3;
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		goto IL_0090;
	}

IL_0045:
	{
		V_1 = 0;
		FieldInfo_t * L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, L_11);
		V_2 = L_12;
		int32_t L_13 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_13&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_14 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_14&(int32_t)((int32_t)16))))
		{
			goto IL_005c;
		}
	}
	{
		V_1 = 1;
	}

IL_005c:
	{
		goto IL_0066;
	}

IL_005e:
	{
		int32_t L_15 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_15&(int32_t)((int32_t)32))))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 1;
	}

IL_0066:
	{
		bool L_16 = V_1;
		if (L_16)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0090;
	}

IL_006b:
	{
		V_1 = 0;
		int32_t L_17 = V_2;
		if (!((int32_t)((int32_t)L_17&(int32_t)((int32_t)16))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_18 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_18&(int32_t)8)))
		{
			goto IL_007a;
		}
	}
	{
		V_1 = 1;
	}

IL_007a:
	{
		goto IL_0083;
	}

IL_007c:
	{
		int32_t L_19 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_19&(int32_t)4)))
		{
			goto IL_0083;
		}
	}
	{
		V_1 = 1;
	}

IL_0083:
	{
		bool L_20 = V_1;
		if (L_20)
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0090;
	}

IL_0088:
	{
		ArrayList_t491 * L_21 = V_0;
		FieldInfo_t * L_22 = V_3;
		NullCheck(L_21);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(23 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_21, L_22);
	}

IL_0090:
	{
		int32_t L_23 = V_5;
		V_5 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0096:
	{
		int32_t L_24 = V_5;
		FieldBuilderU5BU5D_t1071* L_25 = V_4;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		ArrayList_t491 * L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_26);
		V_6 = ((FieldInfoU5BU5D_t373*)SZArrayNew(FieldInfoU5BU5D_t373_il2cpp_TypeInfo_var, L_27));
		ArrayList_t491 * L_28 = V_0;
		FieldInfoU5BU5D_t373* L_29 = V_6;
		NullCheck(L_28);
		VirtActionInvoker1< Array_t * >::Invoke(33 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_28, (Array_t *)(Array_t *)L_29);
		FieldInfoU5BU5D_t373* L_30 = V_6;
		return L_30;
	}
}
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern TypeInfo* TypeU5BU5D_t196_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t196* TypeBuilder_GetInterfaces_m5841 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	TypeU5BU5D_t196* V_0 = {0};
	{
		bool L_0 = TypeBuilder_get_is_created_m5857(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1 = (__this->___created_20);
		NullCheck(L_1);
		TypeU5BU5D_t196* L_2 = (TypeU5BU5D_t196*)VirtFuncInvoker0< TypeU5BU5D_t196* >::Invoke(39 /* System.Type[] System.Type::GetInterfaces() */, L_1);
		return L_2;
	}

IL_0014:
	{
		TypeU5BU5D_t196* L_3 = (__this->___interfaces_12);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		TypeU5BU5D_t196* L_4 = (__this->___interfaces_12);
		NullCheck(L_4);
		V_0 = ((TypeU5BU5D_t196*)SZArrayNew(TypeU5BU5D_t196_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		TypeU5BU5D_t196* L_5 = (__this->___interfaces_12);
		TypeU5BU5D_t196* L_6 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(7 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_5, (Array_t *)(Array_t *)L_6, 0);
		TypeU5BU5D_t196* L_7 = V_0;
		return L_7;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t196* L_8 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		return L_8;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern TypeInfo* ArrayList_t491_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfoU5BU5D_t1091_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" MethodInfoU5BU5D_t1091* TypeBuilder_GetMethodsByName_m5842 (TypeBuilder_t1055 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(931);
		MethodInfoU5BU5D_t1091_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfoU5BU5D_t1091* V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	MethodInfoU5BU5D_t1091* V_3 = {0};
	ArrayList_t491 * V_4 = {0};
	bool V_5 = false;
	int32_t V_6 = 0;
	MethodInfo_t * V_7 = {0};
	ArrayList_t491 * V_8 = {0};
	MethodInfo_t * V_9 = {0};
	MethodInfoU5BU5D_t1091* V_10 = {0};
	int32_t V_11 = 0;
	MethodInfoU5BU5D_t1091* V_12 = {0};
	int32_t V_13 = {0};
	{
		int32_t L_0 = ___bindingAttr;
		if (((int32_t)((int32_t)L_0&(int32_t)2)))
		{
			goto IL_011e;
		}
	}
	{
		Type_t * L_1 = (__this->___parent_10);
		if (!L_1)
		{
			goto IL_011e;
		}
	}
	{
		Type_t * L_2 = (__this->___parent_10);
		int32_t L_3 = ___bindingAttr;
		NullCheck(L_2);
		MethodInfoU5BU5D_t1091* L_4 = (MethodInfoU5BU5D_t1091*)VirtFuncInvoker1< MethodInfoU5BU5D_t1091*, int32_t >::Invoke(51 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_2, L_3);
		V_3 = L_4;
		MethodInfoU5BU5D_t1091* L_5 = V_3;
		NullCheck(L_5);
		ArrayList_t491 * L_6 = (ArrayList_t491 *)il2cpp_codegen_object_new (ArrayList_t491_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2505(L_6, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		V_4 = L_6;
		int32_t L_7 = ___bindingAttr;
		V_5 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_6 = 0;
		goto IL_00c1;
	}

IL_003e:
	{
		MethodInfoU5BU5D_t1091* L_8 = V_3;
		int32_t L_9 = V_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_7 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_8, L_10));
		MethodInfo_t * L_11 = V_7;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, L_11);
		V_2 = L_12;
		MethodInfo_t * L_13 = V_7;
		NullCheck(L_13);
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_13);
		if (!L_14)
		{
			goto IL_005b;
		}
	}
	{
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		goto IL_00bb;
	}

IL_005b:
	{
		int32_t L_16 = V_2;
		V_13 = ((int32_t)((int32_t)L_16&(int32_t)7));
		int32_t L_17 = V_13;
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 0)
		{
			goto IL_009d;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 1)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 2)
		{
			goto IL_0090;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 3)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 4)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 5)
		{
			goto IL_0083;
		}
	}
	{
		goto IL_00a1;
	}

IL_0083:
	{
		int32_t L_18 = ___bindingAttr;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_0090:
	{
		int32_t L_19 = ___bindingAttr;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_009d:
	{
		V_1 = 0;
		goto IL_00ae;
	}

IL_00a1:
	{
		int32_t L_20 = ___bindingAttr;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_00ae:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_00bb;
		}
	}
	{
		ArrayList_t491 * L_22 = V_4;
		MethodInfo_t * L_23 = V_7;
		NullCheck(L_22);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(23 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_22, L_23);
	}

IL_00bb:
	{
		int32_t L_24 = V_6;
		V_6 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00c1:
	{
		int32_t L_25 = V_6;
		MethodInfoU5BU5D_t1091* L_26 = V_3;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		MethodBuilderU5BU5D_t1068* L_27 = (__this->___methods_13);
		if (L_27)
		{
			goto IL_00ea;
		}
	}
	{
		ArrayList_t491 * L_28 = V_4;
		NullCheck(L_28);
		int32_t L_29 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_28);
		V_0 = ((MethodInfoU5BU5D_t1091*)SZArrayNew(MethodInfoU5BU5D_t1091_il2cpp_TypeInfo_var, L_29));
		ArrayList_t491 * L_30 = V_4;
		MethodInfoU5BU5D_t1091* L_31 = V_0;
		NullCheck(L_30);
		VirtActionInvoker1< Array_t * >::Invoke(33 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_30, (Array_t *)(Array_t *)L_31);
		goto IL_011c;
	}

IL_00ea:
	{
		MethodBuilderU5BU5D_t1068* L_32 = (__this->___methods_13);
		NullCheck(L_32);
		ArrayList_t491 * L_33 = V_4;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_33);
		V_0 = ((MethodInfoU5BU5D_t1091*)SZArrayNew(MethodInfoU5BU5D_t1091_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))+(int32_t)L_34))));
		ArrayList_t491 * L_35 = V_4;
		MethodInfoU5BU5D_t1091* L_36 = V_0;
		NullCheck(L_35);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(34 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_35, (Array_t *)(Array_t *)L_36, 0);
		MethodBuilderU5BU5D_t1068* L_37 = (__this->___methods_13);
		MethodInfoU5BU5D_t1091* L_38 = V_0;
		ArrayList_t491 * L_39 = V_4;
		NullCheck(L_39);
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_39);
		NullCheck(L_37);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(7 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_37, (Array_t *)(Array_t *)L_38, L_40);
	}

IL_011c:
	{
		goto IL_0125;
	}

IL_011e:
	{
		MethodBuilderU5BU5D_t1068* L_41 = (__this->___methods_13);
		V_0 = (MethodInfoU5BU5D_t1091*)L_41;
	}

IL_0125:
	{
		MethodInfoU5BU5D_t1091* L_42 = V_0;
		if (L_42)
		{
			goto IL_012f;
		}
	}
	{
		return ((MethodInfoU5BU5D_t1091*)SZArrayNew(MethodInfoU5BU5D_t1091_il2cpp_TypeInfo_var, 0));
	}

IL_012f:
	{
		ArrayList_t491 * L_43 = (ArrayList_t491 *)il2cpp_codegen_object_new (ArrayList_t491_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2388(L_43, /*hidden argument*/NULL);
		V_8 = L_43;
		MethodInfoU5BU5D_t1091* L_44 = V_0;
		V_10 = L_44;
		V_11 = 0;
		goto IL_01ba;
	}

IL_0141:
	{
		MethodInfoU5BU5D_t1091* L_45 = V_10;
		int32_t L_46 = V_11;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		V_9 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_45, L_47));
		MethodInfo_t * L_48 = V_9;
		if (L_48)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_01b4;
	}

IL_0151:
	{
		String_t* L_49 = ___name;
		if (!L_49)
		{
			goto IL_0166;
		}
	}
	{
		MethodInfo_t * L_50 = V_9;
		NullCheck(L_50);
		String_t* L_51 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_50);
		String_t* L_52 = ___name;
		bool L_53 = ___ignoreCase;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_54 = String_Compare_m3921(NULL /*static, unused*/, L_51, L_52, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01b4;
	}

IL_0166:
	{
		V_1 = 0;
		MethodInfo_t * L_55 = V_9;
		NullCheck(L_55);
		int32_t L_56 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_57&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_58 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_58&(int32_t)((int32_t)16))))
		{
			goto IL_017e;
		}
	}
	{
		V_1 = 1;
	}

IL_017e:
	{
		goto IL_0188;
	}

IL_0180:
	{
		int32_t L_59 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_59&(int32_t)((int32_t)32))))
		{
			goto IL_0188;
		}
	}
	{
		V_1 = 1;
	}

IL_0188:
	{
		bool L_60 = V_1;
		if (L_60)
		{
			goto IL_018d;
		}
	}
	{
		goto IL_01b4;
	}

IL_018d:
	{
		V_1 = 0;
		int32_t L_61 = V_2;
		if (!((int32_t)((int32_t)L_61&(int32_t)((int32_t)16))))
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_62 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_62&(int32_t)8)))
		{
			goto IL_019c;
		}
	}
	{
		V_1 = 1;
	}

IL_019c:
	{
		goto IL_01a5;
	}

IL_019e:
	{
		int32_t L_63 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_63&(int32_t)4)))
		{
			goto IL_01a5;
		}
	}
	{
		V_1 = 1;
	}

IL_01a5:
	{
		bool L_64 = V_1;
		if (L_64)
		{
			goto IL_01aa;
		}
	}
	{
		goto IL_01b4;
	}

IL_01aa:
	{
		ArrayList_t491 * L_65 = V_8;
		MethodInfo_t * L_66 = V_9;
		NullCheck(L_65);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(23 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_65, L_66);
	}

IL_01b4:
	{
		int32_t L_67 = V_11;
		V_11 = ((int32_t)((int32_t)L_67+(int32_t)1));
	}

IL_01ba:
	{
		int32_t L_68 = V_11;
		MethodInfoU5BU5D_t1091* L_69 = V_10;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)(((int32_t)(((Array_t *)L_69)->max_length))))))
		{
			goto IL_0141;
		}
	}
	{
		ArrayList_t491 * L_70 = V_8;
		NullCheck(L_70);
		int32_t L_71 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_70);
		V_12 = ((MethodInfoU5BU5D_t1091*)SZArrayNew(MethodInfoU5BU5D_t1091_il2cpp_TypeInfo_var, L_71));
		ArrayList_t491 * L_72 = V_8;
		MethodInfoU5BU5D_t1091* L_73 = V_12;
		NullCheck(L_72);
		VirtActionInvoker1< Array_t * >::Invoke(33 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_72, (Array_t *)(Array_t *)L_73);
		MethodInfoU5BU5D_t1091* L_74 = V_12;
		return L_74;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1091* TypeBuilder_GetMethods_m5843 (TypeBuilder_t1055 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		int32_t L_0 = ___bindingAttr;
		MethodInfoU5BU5D_t1091* L_1 = TypeBuilder_GetMethodsByName_m5842(__this, (String_t*)NULL, L_0, 0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern TypeInfo* MethodBaseU5BU5D_t1433_il2cpp_TypeInfo_var;
extern TypeInfo* Binder_t376_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * TypeBuilder_GetMethodImpl_m5844 (TypeBuilder_t1055 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t376 * ___binder, int32_t ___callConvention, TypeU5BU5D_t196* ___types, ParameterModifierU5BU5D_t377* ___modifiers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodBaseU5BU5D_t1433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1993);
		Binder_t376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1995);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(755);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	MethodInfoU5BU5D_t1091* V_1 = {0};
	MethodInfo_t * V_2 = {0};
	MethodBaseU5BU5D_t1433* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	MethodInfo_t * V_6 = {0};
	MethodInfoU5BU5D_t1091* V_7 = {0};
	int32_t V_8 = 0;
	MethodInfo_t * V_9 = {0};
	MethodInfoU5BU5D_t1091* V_10 = {0};
	int32_t V_11 = 0;
	int32_t G_B3_0 = 0;
	{
		TypeBuilder_check_created_m5859(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___bindingAttr;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		bool L_3 = V_0;
		MethodInfoU5BU5D_t1091* L_4 = TypeBuilder_GetMethodsByName_m5842(__this, L_1, L_2, L_3, __this, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = (MethodInfo_t *)NULL;
		TypeU5BU5D_t196* L_5 = ___types;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		TypeU5BU5D_t196* L_6 = ___types;
		NullCheck(L_6);
		G_B3_0 = (((int32_t)(((Array_t *)L_6)->max_length)));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_4 = G_B3_0;
		V_5 = 0;
		MethodInfoU5BU5D_t1091* L_7 = V_1;
		V_7 = L_7;
		V_8 = 0;
		goto IL_0060;
	}

IL_0035:
	{
		MethodInfoU5BU5D_t1091* L_8 = V_7;
		int32_t L_9 = V_8;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_6 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = ___callConvention;
		if ((((int32_t)L_11) == ((int32_t)3)))
		{
			goto IL_0051;
		}
	}
	{
		MethodInfo_t * L_12 = V_6;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_12);
		int32_t L_14 = ___callConvention;
		int32_t L_15 = ___callConvention;
		if ((((int32_t)((int32_t)((int32_t)L_13&(int32_t)L_14))) == ((int32_t)L_15)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_005a;
	}

IL_0051:
	{
		MethodInfo_t * L_16 = V_6;
		V_2 = L_16;
		int32_t L_17 = V_5;
		V_5 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_18 = V_8;
		V_8 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0060:
	{
		int32_t L_19 = V_8;
		MethodInfoU5BU5D_t1091* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_21 = V_5;
		if (L_21)
		{
			goto IL_006e;
		}
	}
	{
		return (MethodInfo_t *)NULL;
	}

IL_006e:
	{
		int32_t L_22 = V_5;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_23 = V_4;
		if (L_23)
		{
			goto IL_0079;
		}
	}
	{
		MethodInfo_t * L_24 = V_2;
		return L_24;
	}

IL_0079:
	{
		int32_t L_25 = V_5;
		V_3 = ((MethodBaseU5BU5D_t1433*)SZArrayNew(MethodBaseU5BU5D_t1433_il2cpp_TypeInfo_var, L_25));
		int32_t L_26 = V_5;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_008c;
		}
	}
	{
		MethodBaseU5BU5D_t1433* L_27 = V_3;
		MethodInfo_t * L_28 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		ArrayElementTypeCheck (L_27, L_28);
		*((MethodBase_t379 **)(MethodBase_t379 **)SZArrayLdElema(L_27, 0)) = (MethodBase_t379 *)L_28;
		goto IL_00cc;
	}

IL_008c:
	{
		V_5 = 0;
		MethodInfoU5BU5D_t1091* L_29 = V_1;
		V_10 = L_29;
		V_11 = 0;
		goto IL_00c4;
	}

IL_0097:
	{
		MethodInfoU5BU5D_t1091* L_30 = V_10;
		int32_t L_31 = V_11;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = L_31;
		V_9 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_30, L_32));
		int32_t L_33 = ___callConvention;
		if ((((int32_t)L_33) == ((int32_t)3)))
		{
			goto IL_00b3;
		}
	}
	{
		MethodInfo_t * L_34 = V_9;
		NullCheck(L_34);
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_34);
		int32_t L_36 = ___callConvention;
		int32_t L_37 = ___callConvention;
		if ((((int32_t)((int32_t)((int32_t)L_35&(int32_t)L_36))) == ((int32_t)L_37)))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_00be;
	}

IL_00b3:
	{
		MethodBaseU5BU5D_t1433* L_38 = V_3;
		int32_t L_39 = V_5;
		int32_t L_40 = L_39;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
		MethodInfo_t * L_41 = V_9;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_40);
		ArrayElementTypeCheck (L_38, L_41);
		*((MethodBase_t379 **)(MethodBase_t379 **)SZArrayLdElema(L_38, L_40)) = (MethodBase_t379 *)L_41;
	}

IL_00be:
	{
		int32_t L_42 = V_11;
		V_11 = ((int32_t)((int32_t)L_42+(int32_t)1));
	}

IL_00c4:
	{
		int32_t L_43 = V_11;
		MethodInfoU5BU5D_t1091* L_44 = V_10;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)(((int32_t)(((Array_t *)L_44)->max_length))))))
		{
			goto IL_0097;
		}
	}

IL_00cc:
	{
		TypeU5BU5D_t196* L_45 = ___types;
		if (L_45)
		{
			goto IL_00dc;
		}
	}
	{
		MethodBaseU5BU5D_t1433* L_46 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t376_il2cpp_TypeInfo_var);
		MethodBase_t379 * L_47 = Binder_FindMostDerivedMatch_m5930(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		return ((MethodInfo_t *)Castclass(L_47, MethodInfo_t_il2cpp_TypeInfo_var));
	}

IL_00dc:
	{
		Binder_t376 * L_48 = ___binder;
		if (L_48)
		{
			goto IL_00e8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t376_il2cpp_TypeInfo_var);
		Binder_t376 * L_49 = Binder_get_DefaultBinder_m5927(NULL /*static, unused*/, /*hidden argument*/NULL);
		___binder = L_49;
	}

IL_00e8:
	{
		Binder_t376 * L_50 = ___binder;
		int32_t L_51 = ___bindingAttr;
		MethodBaseU5BU5D_t1433* L_52 = V_3;
		TypeU5BU5D_t196* L_53 = ___types;
		ParameterModifierU5BU5D_t377* L_54 = ___modifiers;
		NullCheck(L_50);
		MethodBase_t379 * L_55 = (MethodBase_t379 *)VirtFuncInvoker4< MethodBase_t379 *, int32_t, MethodBaseU5BU5D_t1433*, TypeU5BU5D_t196*, ParameterModifierU5BU5D_t377* >::Invoke(7 /* System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[]) */, L_50, L_51, L_52, L_53, L_54);
		return ((MethodInfo_t *)Castclass(L_55, MethodInfo_t_il2cpp_TypeInfo_var));
	}
}
// System.Reflection.PropertyInfo[] System.Reflection.Emit.TypeBuilder::GetProperties(System.Reflection.BindingFlags)
extern TypeInfo* PropertyInfoU5BU5D_t372_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t491_il2cpp_TypeInfo_var;
extern "C" PropertyInfoU5BU5D_t372* TypeBuilder_GetProperties_m5845 (TypeBuilder_t1055 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyInfoU5BU5D_t372_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1999);
		ArrayList_t491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(931);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t491 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	MethodInfo_t * V_3 = {0};
	PropertyInfo_t * V_4 = {0};
	PropertyBuilderU5BU5D_t1070* V_5 = {0};
	int32_t V_6 = 0;
	PropertyInfoU5BU5D_t372* V_7 = {0};
	{
		bool L_0 = TypeBuilder_get_is_created_m5857(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___created_20);
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_1);
		PropertyInfoU5BU5D_t372* L_3 = (PropertyInfoU5BU5D_t372*)VirtFuncInvoker1< PropertyInfoU5BU5D_t372*, int32_t >::Invoke(52 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		PropertyBuilderU5BU5D_t1070* L_4 = (__this->___properties_15);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return ((PropertyInfoU5BU5D_t372*)SZArrayNew(PropertyInfoU5BU5D_t372_il2cpp_TypeInfo_var, 0));
	}

IL_0024:
	{
		ArrayList_t491 * L_5 = (ArrayList_t491 *)il2cpp_codegen_object_new (ArrayList_t491_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2388(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
		PropertyBuilderU5BU5D_t1070* L_6 = (__this->___properties_15);
		V_5 = L_6;
		V_6 = 0;
		goto IL_00ad;
	}

IL_003a:
	{
		PropertyBuilderU5BU5D_t1070* L_7 = V_5;
		int32_t L_8 = V_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_4 = (*(PropertyBuilder_t1067 **)(PropertyBuilder_t1067 **)SZArrayLdElema(L_7, L_9));
		V_1 = 0;
		PropertyInfo_t * L_10 = V_4;
		NullCheck(L_10);
		MethodInfo_t * L_11 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_10, 1);
		V_3 = L_11;
		MethodInfo_t * L_12 = V_3;
		if (L_12)
		{
			goto IL_0058;
		}
	}
	{
		PropertyInfo_t * L_13 = V_4;
		NullCheck(L_13);
		MethodInfo_t * L_14 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_13, 1);
		V_3 = L_14;
	}

IL_0058:
	{
		MethodInfo_t * L_15 = V_3;
		if (L_15)
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00a7;
	}

IL_005d:
	{
		MethodInfo_t * L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, L_16);
		V_2 = L_17;
		int32_t L_18 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_18&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_19 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_19&(int32_t)((int32_t)16))))
		{
			goto IL_0072;
		}
	}
	{
		V_1 = 1;
	}

IL_0072:
	{
		goto IL_007c;
	}

IL_0074:
	{
		int32_t L_20 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_20&(int32_t)((int32_t)32))))
		{
			goto IL_007c;
		}
	}
	{
		V_1 = 1;
	}

IL_007c:
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		goto IL_00a7;
	}

IL_0081:
	{
		V_1 = 0;
		int32_t L_22 = V_2;
		if (!((int32_t)((int32_t)L_22&(int32_t)((int32_t)16))))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_23 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_23&(int32_t)8)))
		{
			goto IL_0090;
		}
	}
	{
		V_1 = 1;
	}

IL_0090:
	{
		goto IL_0099;
	}

IL_0092:
	{
		int32_t L_24 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_24&(int32_t)4)))
		{
			goto IL_0099;
		}
	}
	{
		V_1 = 1;
	}

IL_0099:
	{
		bool L_25 = V_1;
		if (L_25)
		{
			goto IL_009e;
		}
	}
	{
		goto IL_00a7;
	}

IL_009e:
	{
		ArrayList_t491 * L_26 = V_0;
		PropertyInfo_t * L_27 = V_4;
		NullCheck(L_26);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(23 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_26, L_27);
	}

IL_00a7:
	{
		int32_t L_28 = V_6;
		V_6 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00ad:
	{
		int32_t L_29 = V_6;
		PropertyBuilderU5BU5D_t1070* L_30 = V_5;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((Array_t *)L_30)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		ArrayList_t491 * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_31);
		V_7 = ((PropertyInfoU5BU5D_t372*)SZArrayNew(PropertyInfoU5BU5D_t372_il2cpp_TypeInfo_var, L_32));
		ArrayList_t491 * L_33 = V_0;
		PropertyInfoU5BU5D_t372* L_34 = V_7;
		NullCheck(L_33);
		VirtActionInvoker1< Array_t * >::Invoke(33 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_33, (Array_t *)(Array_t *)L_34);
		PropertyInfoU5BU5D_t372* L_35 = V_7;
		return L_35;
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * TypeBuilder_GetPropertyImpl_m5846 (TypeBuilder_t1055 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t376 * ___binder, Type_t * ___returnType, TypeU5BU5D_t196* ___types, ParameterModifierU5BU5D_t377* ___modifiers, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = TypeBuilder_not_supported_m5858(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern "C" bool TypeBuilder_HasElementTypeImpl_m5847 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m5857(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		Type_t * L_1 = (__this->___created_20);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Type::get_HasElementType() */, L_1);
		return L_2;
	}
}
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeBuilder_InvokeMember_m5848 (TypeBuilder_t1055 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t376 * ___binder, Object_t * ___target, ObjectU5BU5D_t200* ___args, ParameterModifierU5BU5D_t377* ___modifiers, CultureInfo_t342 * ___culture, StringU5BU5D_t197* ___namedParameters, const MethodInfo* method)
{
	{
		TypeBuilder_check_created_m5859(__this, /*hidden argument*/NULL);
		Type_t * L_0 = (__this->___created_20);
		String_t* L_1 = ___name;
		int32_t L_2 = ___invokeAttr;
		Binder_t376 * L_3 = ___binder;
		Object_t * L_4 = ___target;
		ObjectU5BU5D_t200* L_5 = ___args;
		ParameterModifierU5BU5D_t377* L_6 = ___modifiers;
		CultureInfo_t342 * L_7 = ___culture;
		StringU5BU5D_t197* L_8 = ___namedParameters;
		NullCheck(L_0);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t376 *, Object_t *, ObjectU5BU5D_t200*, ParameterModifierU5BU5D_t377*, CultureInfo_t342 *, StringU5BU5D_t197* >::Invoke(72 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern "C" bool TypeBuilder_IsArrayImpl_m5849 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern "C" bool TypeBuilder_IsByRefImpl_m5850 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern "C" bool TypeBuilder_IsPointerImpl_m5851 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern "C" bool TypeBuilder_IsPrimitiveImpl_m5852 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern const Il2CppType* ValueType_t414_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool TypeBuilder_IsValueTypeImpl_m5853 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ValueType_t414_0_0_0_var = il2cpp_codegen_type_from_index(268);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		ModuleBuilder_t1064 * L_0 = (__this->___pmodule_18);
		NullCheck(L_0);
		AssemblyBuilder_t1054 * L_1 = (L_0->___assemblyb_10);
		NullCheck(L_1);
		Type_t * L_2 = (L_1->___corlib_value_type_11);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3 = Type_type_is_subtype_of_m4355(NULL /*static, unused*/, __this, L_2, 0, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(ValueType_t414_0_0_0_var), /*hidden argument*/NULL);
		bool L_5 = Type_type_is_subtype_of_m4355(NULL /*static, unused*/, __this, L_4, 0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0057;
		}
	}

IL_002c:
	{
		ModuleBuilder_t1064 * L_6 = (__this->___pmodule_18);
		NullCheck(L_6);
		AssemblyBuilder_t1054 * L_7 = (L_6->___assemblyb_10);
		NullCheck(L_7);
		Type_t * L_8 = (L_7->___corlib_value_type_11);
		if ((((Object_t*)(TypeBuilder_t1055 *)__this) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_0057;
		}
	}
	{
		ModuleBuilder_t1064 * L_9 = (__this->___pmodule_18);
		NullCheck(L_9);
		AssemblyBuilder_t1054 * L_10 = (L_9->___assemblyb_10);
		NullCheck(L_10);
		Type_t * L_11 = (L_10->___corlib_enum_type_12);
		G_B5_0 = ((((int32_t)((((Object_t*)(TypeBuilder_t1055 *)__this) == ((Object_t*)(Type_t *)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B5_0 = 0;
	}

IL_0058:
	{
		return G_B5_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * TypeBuilder_MakeGenericType_m5854 (TypeBuilder_t1055 * __this, TypeU5BU5D_t196* ___typeArguments, const MethodInfo* method)
{
	{
		TypeU5BU5D_t196* L_0 = ___typeArguments;
		Type_t * L_1 = Type_MakeGenericType_m4385(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t885  TypeBuilder_get_TypeHandle_m5855 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_check_created_m5859(__this, /*hidden argument*/NULL);
		Type_t * L_0 = (__this->___created_20);
		NullCheck(L_0);
		RuntimeTypeHandle_t885  L_1 = (RuntimeTypeHandle_t885 )VirtFuncInvoker0< RuntimeTypeHandle_t885  >::Invoke(35 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C" bool TypeBuilder_get_IsCompilerContext_m5856 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		ModuleBuilder_t1064 * L_0 = (__this->___pmodule_18);
		NullCheck(L_0);
		AssemblyBuilder_t1054 * L_1 = (L_0->___assemblyb_10);
		NullCheck(L_1);
		bool L_2 = AssemblyBuilder_get_IsCompilerContext_m5655(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C" bool TypeBuilder_get_is_created_m5857 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___created_20);
		return ((((int32_t)((((Object_t*)(Type_t *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" Exception_t65 * TypeBuilder_not_supported_m5858 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*) &_stringLiteral1558, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C" void TypeBuilder_check_created_m5859 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m5857(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Exception_t65 * L_1 = TypeBuilder_not_supported_m5858(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		return;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern "C" String_t* TypeBuilder_ToString_m5860 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Reflection.Emit.TypeBuilder::get_FullName() */, __this);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern "C" bool TypeBuilder_IsAssignableFrom_m5861 (TypeBuilder_t1055 * __this, Type_t * ___c, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___c;
		bool L_1 = Type_IsAssignableFrom_m4358(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern "C" bool TypeBuilder_IsSubclassOf_m5862 (TypeBuilder_t1055 * __this, Type_t * ___c, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___c;
		bool L_1 = Type_IsSubclassOf_m4357(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool TypeBuilder_IsAssignableTo_m5863 (TypeBuilder_t1055 * __this, Type_t * ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	TypeU5BU5D_t196* V_1 = {0};
	int32_t V_2 = 0;
	{
		Type_t * L_0 = ___c;
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(TypeBuilder_t1055 *)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		Type_t * L_1 = ___c;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_1);
		if (!L_2)
		{
			goto IL_0066;
		}
	}
	{
		Type_t * L_3 = (__this->___parent_10);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		bool L_4 = TypeBuilder_get_is_created_m5857(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_5 = ___c;
		Type_t * L_6 = (__this->___parent_10);
		NullCheck(L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_5, L_6);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		TypeU5BU5D_t196* L_8 = (__this->___interfaces_12);
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		return 0;
	}

IL_0038:
	{
		TypeU5BU5D_t196* L_9 = (__this->___interfaces_12);
		V_1 = L_9;
		V_2 = 0;
		goto IL_0056;
	}

IL_0043:
	{
		TypeU5BU5D_t196* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_10, L_12));
		Type_t * L_13 = ___c;
		Type_t * L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_13, L_14);
		if (!L_15)
		{
			goto IL_0052;
		}
	}
	{
		return 1;
	}

IL_0052:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0056:
	{
		int32_t L_17 = V_2;
		TypeU5BU5D_t196* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		bool L_19 = TypeBuilder_get_is_created_m5857(__this, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0066;
		}
	}
	{
		return 0;
	}

IL_0066:
	{
		Type_t * L_20 = (__this->___parent_10);
		if (L_20)
		{
			goto IL_007c;
		}
	}
	{
		Type_t * L_21 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		return ((((Object_t*)(Type_t *)L_21) == ((Object_t*)(Type_t *)L_22))? 1 : 0);
	}

IL_007c:
	{
		Type_t * L_23 = ___c;
		Type_t * L_24 = (__this->___parent_10);
		NullCheck(L_23);
		bool L_25 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_23, L_24);
		return L_25;
	}
}
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern TypeInfo* TypeU5BU5D_t196_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t196* TypeBuilder_GetGenericArguments_m5864 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	TypeU5BU5D_t196* V_0 = {0};
	{
		GenericTypeParameterBuilderU5BU5D_t1063* L_0 = (__this->___generic_params_19);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (TypeU5BU5D_t196*)NULL;
	}

IL_000a:
	{
		GenericTypeParameterBuilderU5BU5D_t1063* L_1 = (__this->___generic_params_19);
		NullCheck(L_1);
		V_0 = ((TypeU5BU5D_t196*)SZArrayNew(TypeU5BU5D_t196_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		GenericTypeParameterBuilderU5BU5D_t1063* L_2 = (__this->___generic_params_19);
		TypeU5BU5D_t196* L_3 = V_0;
		NullCheck(L_2);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(7 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_2, (Array_t *)(Array_t *)L_3, 0);
		TypeU5BU5D_t196* L_4 = V_0;
		return L_4;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" Type_t * TypeBuilder_GetGenericTypeDefinition_m5865 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		GenericTypeParameterBuilderU5BU5D_t1063* L_0 = (__this->___generic_params_19);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t665 * L_1 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_1, (String_t*) &_stringLiteral1564, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return __this;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern "C" bool TypeBuilder_get_ContainsGenericParameters_m5866 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1063* L_0 = (__this->___generic_params_19);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1063*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern "C" bool TypeBuilder_get_IsGenericParameter_m5867 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	typedef bool (*TypeBuilder_get_IsGenericParameter_m5867_ftn) (TypeBuilder_t1055 *);
	static TypeBuilder_get_IsGenericParameter_m5867_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TypeBuilder_get_IsGenericParameter_m5867_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C" bool TypeBuilder_get_IsGenericTypeDefinition_m5868 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1063* L_0 = (__this->___generic_params_19);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1063*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern "C" bool TypeBuilder_get_IsGenericType_m5869 (TypeBuilder_t1055 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(75 /* System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition() */, __this);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.UnmanagedMarshal
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshalMethodDeclarations.h"

// System.Runtime.InteropServices.MarshalAsAttribute
#include "mscorlib_System_Runtime_InteropServices_MarshalAsAttribute.h"
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.Runtime.InteropServices.MarshalAsAttribute
#include "mscorlib_System_Runtime_InteropServices_MarshalAsAttributeMethodDeclarations.h"


// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.Emit.UnmanagedMarshal::ToMarshalAsAttribute()
extern TypeInfo* MarshalAsAttribute_t889_il2cpp_TypeInfo_var;
extern "C" MarshalAsAttribute_t889 * UnmanagedMarshal_ToMarshalAsAttribute_m5870 (UnmanagedMarshal_t1059 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalAsAttribute_t889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2000);
		s_Il2CppMethodIntialized = true;
	}
	MarshalAsAttribute_t889 * V_0 = {0};
	{
		int32_t L_0 = (__this->___t_1);
		MarshalAsAttribute_t889 * L_1 = (MarshalAsAttribute_t889 *)il2cpp_codegen_object_new (MarshalAsAttribute_t889_il2cpp_TypeInfo_var);
		MarshalAsAttribute__ctor_m4406(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MarshalAsAttribute_t889 * L_2 = V_0;
		int32_t L_3 = (__this->___tbase_2);
		NullCheck(L_2);
		L_2->___ArraySubType_1 = L_3;
		MarshalAsAttribute_t889 * L_4 = V_0;
		String_t* L_5 = (__this->___mcookie_4);
		NullCheck(L_4);
		L_4->___MarshalCookie_2 = L_5;
		MarshalAsAttribute_t889 * L_6 = V_0;
		String_t* L_7 = (__this->___marshaltype_5);
		NullCheck(L_6);
		L_6->___MarshalType_3 = L_7;
		MarshalAsAttribute_t889 * L_8 = V_0;
		Type_t * L_9 = (__this->___marshaltyperef_6);
		NullCheck(L_8);
		L_8->___MarshalTypeRef_4 = L_9;
		int32_t L_10 = (__this->___count_0);
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		MarshalAsAttribute_t889 * L_11 = V_0;
		NullCheck(L_11);
		L_11->___SizeConst_5 = 0;
		goto IL_005a;
	}

IL_004e:
	{
		MarshalAsAttribute_t889 * L_12 = V_0;
		int32_t L_13 = (__this->___count_0);
		NullCheck(L_12);
		L_12->___SizeConst_5 = L_13;
	}

IL_005a:
	{
		int32_t L_14 = (__this->___param_num_7);
		if ((!(((uint32_t)L_14) == ((uint32_t)(-1)))))
		{
			goto IL_006c;
		}
	}
	{
		MarshalAsAttribute_t889 * L_15 = V_0;
		NullCheck(L_15);
		L_15->___SizeParamIndex_6 = 0;
		goto IL_0079;
	}

IL_006c:
	{
		MarshalAsAttribute_t889 * L_16 = V_0;
		int32_t L_17 = (__this->___param_num_7);
		NullCheck(L_16);
		L_16->___SizeParamIndex_6 = (((int16_t)L_17));
	}

IL_0079:
	{
		MarshalAsAttribute_t889 * L_18 = V_0;
		return L_18;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"


// System.Void System.Reflection.AmbiguousMatchException::.ctor()
extern "C" void AmbiguousMatchException__ctor_m5871 (AmbiguousMatchException_t1072 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m2521(__this, (String_t*) &_stringLiteral1565, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.AmbiguousMatchException::.ctor(System.String)
extern "C" void AmbiguousMatchException__ctor_m5872 (AmbiguousMatchException_t1072 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m2521(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.AmbiguousMatchException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AmbiguousMatchException__ctor_m5873 (AmbiguousMatchException_t1072 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t310 * L_0 = ___info;
		StreamingContext_t311  L_1 = ___context;
		SystemException__ctor_m7952(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.Assembly/ResolveEventHolder
#include "mscorlib_System_Reflection_Assembly_ResolveEventHolder.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Assembly/ResolveEventHolder
#include "mscorlib_System_Reflection_Assembly_ResolveEventHolderMethodDeclarations.h"



// System.Void System.Reflection.Assembly/ResolveEventHolder::.ctor()
extern "C" void ResolveEventHolder__ctor_m5874 (ResolveEventHolder_t1073 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AppDomain
#include "mscorlib_System_AppDomain.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"


// System.Void System.Reflection.Assembly::.ctor()
extern TypeInfo* ResolveEventHolder_t1073_il2cpp_TypeInfo_var;
extern "C" void Assembly__ctor_m5875 (Assembly_t671 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ResolveEventHolder_t1073_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2001);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		ResolveEventHolder_t1073 * L_0 = (ResolveEventHolder_t1073 *)il2cpp_codegen_object_new (ResolveEventHolder_t1073_il2cpp_TypeInfo_var);
		ResolveEventHolder__ctor_m5874(L_0, /*hidden argument*/NULL);
		__this->___resolve_event_holder_1 = L_0;
		return;
	}
}
// System.String System.Reflection.Assembly::get_fullname()
extern "C" String_t* Assembly_get_fullname_m5876 (Assembly_t671 * __this, const MethodInfo* method)
{
	typedef String_t* (*Assembly_get_fullname_m5876_ftn) (Assembly_t671 *);
	static Assembly_get_fullname_m5876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_get_fullname_m5876_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_fullname()");
	return _il2cpp_icall_func(__this);
}
// System.String System.Reflection.Assembly::get_location()
extern "C" String_t* Assembly_get_location_m5877 (Assembly_t671 * __this, const MethodInfo* method)
{
	typedef String_t* (*Assembly_get_location_m5877_ftn) (Assembly_t671 *);
	static Assembly_get_location_m5877_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_get_location_m5877_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_location()");
	return _il2cpp_icall_func(__this);
}
// System.String System.Reflection.Assembly::get_FullName()
extern "C" String_t* Assembly_get_FullName_m5878 (Assembly_t671 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Reflection.Assembly::ToString() */, __this);
		return L_0;
	}
}
// System.String System.Reflection.Assembly::get_Location()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Assembly_get_Location_m5879 (Assembly_t671 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		bool L_0 = (__this->___fromByteArray_8);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000e:
	{
		String_t* L_2 = Assembly_get_location_m5877(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" bool Assembly_IsDefined_m5880 (Assembly_t671 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		bool L_2 = MonoCustomAttrs_IsDefined_m7751(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* Assembly_GetCustomAttributes_m5881 (Assembly_t671 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_2 = MonoCustomAttrs_GetCustomAttributes_m7749(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern "C" IntPtr_t Assembly_GetManifestResourceInternal_m5882 (Assembly_t671 * __this, String_t* ___name, int32_t* ___size, Module_t1065 ** ___module, const MethodInfo* method)
{
	typedef IntPtr_t (*Assembly_GetManifestResourceInternal_m5882_ftn) (Assembly_t671 *, String_t*, int32_t*, Module_t1065 **);
	static Assembly_GetManifestResourceInternal_m5882_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_GetManifestResourceInternal_m5882_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)");
	return _il2cpp_icall_func(__this, ___name, ___size, ___module);
}
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern "C" Type_t * Assembly_GetType_m5883 (Assembly_t671 * __this, String_t* ___name, bool ___throwOnError, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		bool L_1 = ___throwOnError;
		Type_t * L_2 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(12 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean) */, __this, L_0, L_1, 0);
		return L_2;
	}
}
// System.Type System.Reflection.Assembly::GetType(System.String)
extern "C" Type_t * Assembly_GetType_m5884 (Assembly_t671 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Type_t * L_1 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(12 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean) */, __this, L_0, 0, 0);
		return L_1;
	}
}
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_InternalGetType_m5885 (Assembly_t671 * __this, Module_t1065 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method)
{
	typedef Type_t * (*Assembly_InternalGetType_m5885_ftn) (Assembly_t671 *, Module_t1065 *, String_t*, bool, bool);
	static Assembly_InternalGetType_m5885_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_InternalGetType_m5885_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(__this, ___module, ___name, ___throwOnError, ___ignoreCase);
}
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" Type_t * Assembly_GetType_m5886 (Assembly_t671 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___name;
		ArgumentNullException_t341 * L_2 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000a:
	{
		String_t* L_3 = ___name;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1158(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t313 * L_5 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2383(L_5, (String_t*) &_stringLiteral138, (String_t*) &_stringLiteral1566, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0022:
	{
		String_t* L_6 = ___name;
		bool L_7 = ___throwOnError;
		bool L_8 = ___ignoreCase;
		Type_t * L_9 = Assembly_InternalGetType_m5885(__this, (Module_t1065 *)NULL, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C" void Assembly_FillName_m5887 (Object_t * __this /* static, unused */, Assembly_t671 * ___ass, AssemblyName_t1077 * ___aname, const MethodInfo* method)
{
	typedef void (*Assembly_FillName_m5887_ftn) (Assembly_t671 *, AssemblyName_t1077 *);
	static Assembly_FillName_m5887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_FillName_m5887_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)");
	_il2cpp_icall_func(___ass, ___aname);
}
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern TypeInfo* AssemblyName_t1077_il2cpp_TypeInfo_var;
extern "C" AssemblyName_t1077 * Assembly_UnprotectedGetName_m5888 (Assembly_t671 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyName_t1077_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2002);
		s_Il2CppMethodIntialized = true;
	}
	AssemblyName_t1077 * V_0 = {0};
	{
		AssemblyName_t1077 * L_0 = (AssemblyName_t1077 *)il2cpp_codegen_object_new (AssemblyName_t1077_il2cpp_TypeInfo_var);
		AssemblyName__ctor_m5895(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		AssemblyName_t1077 * L_1 = V_0;
		Assembly_FillName_m5887(NULL /*static, unused*/, __this, L_1, /*hidden argument*/NULL);
		AssemblyName_t1077 * L_2 = V_0;
		return L_2;
	}
}
// System.String System.Reflection.Assembly::ToString()
extern "C" String_t* Assembly_ToString_m5889 (Assembly_t671 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___assemblyName_9);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___assemblyName_9);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = Assembly_get_fullname_m5876(__this, /*hidden argument*/NULL);
		__this->___assemblyName_9 = L_2;
		String_t* L_3 = (__this->___assemblyName_9);
		return L_3;
	}
}
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C" Assembly_t671 * Assembly_Load_m5890 (Object_t * __this /* static, unused */, String_t* ___assemblyString, const MethodInfo* method)
{
	{
		AppDomain_t1327 * L_0 = AppDomain_get_CurrentDomain_m7273(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___assemblyString;
		NullCheck(L_0);
		Assembly_t671 * L_2 = AppDomain_Load_m7275(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Module_t1065 * Assembly_GetModule_m5891 (Assembly_t671 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	ModuleU5BU5D_t1432* V_0 = {0};
	Module_t1065 * V_1 = {0};
	ModuleU5BU5D_t1432* V_2 = {0};
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral138, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___name;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1158(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_t313 * L_4 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_4, (String_t*) &_stringLiteral1567, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		ModuleU5BU5D_t1432* L_5 = (ModuleU5BU5D_t1432*)VirtFuncInvoker1< ModuleU5BU5D_t1432*, bool >::Invoke(16 /* System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean) */, __this, 1);
		V_0 = L_5;
		ModuleU5BU5D_t1432* L_6 = V_0;
		V_2 = L_6;
		V_3 = 0;
		goto IL_0047;
	}

IL_002f:
	{
		ModuleU5BU5D_t1432* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_1 = (*(Module_t1065 **)(Module_t1065 **)SZArrayLdElema(L_7, L_9));
		Module_t1065 * L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = Module_get_ScopeName_m5988(L_10, /*hidden argument*/NULL);
		String_t* L_12 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m1163(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		Module_t1065 * L_14 = V_1;
		return L_14;
	}

IL_0043:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		ModuleU5BU5D_t1432* L_17 = V_2;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (Module_t1065 *)NULL;
	}
}
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C" ModuleU5BU5D_t1432* Assembly_GetModulesInternal_m5892 (Assembly_t671 * __this, const MethodInfo* method)
{
	typedef ModuleU5BU5D_t1432* (*Assembly_GetModulesInternal_m5892_ftn) (Assembly_t671 *);
	static Assembly_GetModulesInternal_m5892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_GetModulesInternal_m5892_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetModulesInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern const Il2CppType* Module_t1065_0_0_0_var;
extern TypeInfo* ArrayList_t491_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ModuleU5BU5D_t1432_il2cpp_TypeInfo_var;
extern "C" ModuleU5BU5D_t1432* Assembly_GetModules_m5893 (Assembly_t671 * __this, bool ___getResourceModules, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Module_t1065_0_0_0_var = il2cpp_codegen_type_from_index(1987);
		ArrayList_t491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(931);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		ModuleU5BU5D_t1432_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1986);
		s_Il2CppMethodIntialized = true;
	}
	ModuleU5BU5D_t1432* V_0 = {0};
	ArrayList_t491 * V_1 = {0};
	Module_t1065 * V_2 = {0};
	ModuleU5BU5D_t1432* V_3 = {0};
	int32_t V_4 = 0;
	{
		ModuleU5BU5D_t1432* L_0 = (ModuleU5BU5D_t1432*)VirtFuncInvoker0< ModuleU5BU5D_t1432* >::Invoke(15 /* System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal() */, __this);
		V_0 = L_0;
		bool L_1 = ___getResourceModules;
		if (L_1)
		{
			goto IL_0052;
		}
	}
	{
		ModuleU5BU5D_t1432* L_2 = V_0;
		NullCheck(L_2);
		ArrayList_t491 * L_3 = (ArrayList_t491 *)il2cpp_codegen_object_new (ArrayList_t491_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2505(L_3, (((int32_t)(((Array_t *)L_2)->max_length))), /*hidden argument*/NULL);
		V_1 = L_3;
		ModuleU5BU5D_t1432* L_4 = V_0;
		V_3 = L_4;
		V_4 = 0;
		goto IL_0035;
	}

IL_001a:
	{
		ModuleU5BU5D_t1432* L_5 = V_3;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_2 = (*(Module_t1065 **)(Module_t1065 **)SZArrayLdElema(L_5, L_7));
		Module_t1065 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9 = Module_IsResource_m5992(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_002f;
		}
	}
	{
		ArrayList_t491 * L_10 = V_1;
		Module_t1065 * L_11 = V_2;
		NullCheck(L_10);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(23 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_10, L_11);
	}

IL_002f:
	{
		int32_t L_12 = V_4;
		V_4 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_13 = V_4;
		ModuleU5BU5D_t1432* L_14 = V_3;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		ArrayList_t491 * L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Module_t1065_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		Array_t * L_17 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(41 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_15, L_16);
		return ((ModuleU5BU5D_t1432*)Castclass(L_17, ModuleU5BU5D_t1432_il2cpp_TypeInfo_var));
	}

IL_0052:
	{
		ModuleU5BU5D_t1432* L_18 = V_0;
		return L_18;
	}
}
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern "C" Assembly_t671 * Assembly_GetExecutingAssembly_m5894 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Assembly_t671 * (*Assembly_GetExecutingAssembly_m5894_ftn) ();
	static Assembly_GetExecutingAssembly_m5894_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_GetExecutingAssembly_m5894_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetExecutingAssembly()");
	return _il2cpp_icall_func();
}
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void System.Reflection.AssemblyCompanyAttribute::.ctor(System.String)
extern "C" void AssemblyCompanyAttribute__ctor_m2559 (AssemblyCompanyAttribute_t698 * __this, String_t* ___company, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___company;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyCopyrightAttribute::.ctor(System.String)
extern "C" void AssemblyCopyrightAttribute__ctor_m2557 (AssemblyCopyrightAttribute_t696 * __this, String_t* ___copyright, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___copyright;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyDefaultAliasAttribute
#include "mscorlib_System_Reflection_AssemblyDefaultAliasAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.AssemblyDefaultAliasAttribute
#include "mscorlib_System_Reflection_AssemblyDefaultAliasAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyDefaultAliasAttribute::.ctor(System.String)
extern "C" void AssemblyDefaultAliasAttribute__ctor_m2560 (AssemblyDefaultAliasAttribute_t699 * __this, String_t* ___defaultAlias, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___defaultAlias;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyDelaySignAttribute::.ctor(System.Boolean)
extern "C" void AssemblyDelaySignAttribute__ctor_m2566 (AssemblyDelaySignAttribute_t705 * __this, bool ___delaySign, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		bool L_0 = ___delaySign;
		__this->___delay_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyDescriptionAttribute::.ctor(System.String)
extern "C" void AssemblyDescriptionAttribute__ctor_m2561 (AssemblyDescriptionAttribute_t700 * __this, String_t* ___description, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___description;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyFileVersionAttribute
#include "mscorlib_System_Reflection_AssemblyFileVersionAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.AssemblyFileVersionAttribute
#include "mscorlib_System_Reflection_AssemblyFileVersionAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyFileVersionAttribute::.ctor(System.String)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" void AssemblyFileVersionAttribute__ctor_m2568 (AssemblyFileVersionAttribute_t707 * __this, String_t* ___version, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___version;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral322, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		String_t* L_2 = ___version;
		__this->___name_0 = L_2;
		return;
	}
}
// System.Reflection.AssemblyInformationalVersionAttribute
#include "mscorlib_System_Reflection_AssemblyInformationalVersionAttri.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.AssemblyInformationalVersionAttribute
#include "mscorlib_System_Reflection_AssemblyInformationalVersionAttriMethodDeclarations.h"



// System.Void System.Reflection.AssemblyInformationalVersionAttribute::.ctor(System.String)
extern "C" void AssemblyInformationalVersionAttribute__ctor_m2555 (AssemblyInformationalVersionAttribute_t694 * __this, String_t* ___informationalVersion, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___informationalVersion;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyKeyFileAttribute::.ctor(System.String)
extern "C" void AssemblyKeyFileAttribute__ctor_m2567 (AssemblyKeyFileAttribute_t706 * __this, String_t* ___keyFile, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___keyFile;
		__this->___name_0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Version
#include "mscorlib_System_Version.h"
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
// System.Configuration.Assemblies.AssemblyVersionCompatibility
#include "mscorlib_System_Configuration_Assemblies_AssemblyVersionComp.h"
// System.Configuration.Assemblies.AssemblyHashAlgorithm
#include "mscorlib_System_Configuration_Assemblies_AssemblyHashAlgorit.h"
// System.Reflection.StrongNameKeyPair
#include "mscorlib_System_Reflection_StrongNameKeyPair.h"
// System.Security.SecurityException
#include "mscorlib_System_Security_SecurityException.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
// System.Security.Cryptography.SHA1
#include "mscorlib_System_Security_Cryptography_SHA1.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
// System.Byte
#include "mscorlib_System_ByteMethodDeclarations.h"
// Mono.Security.Cryptography.CryptoConvert
#include "mscorlib_Mono_Security_Cryptography_CryptoConvertMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Security.SecurityException
#include "mscorlib_System_Security_SecurityExceptionMethodDeclarations.h"
// System.Security.Cryptography.SHA1
#include "mscorlib_System_Security_Cryptography_SHA1MethodDeclarations.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithmMethodDeclarations.h"


// System.Void System.Reflection.AssemblyName::.ctor()
extern "C" void AssemblyName__ctor_m5895 (AssemblyName_t1077 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		__this->___versioncompat_12 = 1;
		return;
	}
}
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* Version_t512_0_0_0_var;
extern const Il2CppType* ByteU5BU5D_t102_0_0_0_var;
extern const Il2CppType* AssemblyHashAlgorithm_t997_0_0_0_var;
extern const Il2CppType* StrongNameKeyPair_t1076_0_0_0_var;
extern const Il2CppType* AssemblyVersionCompatibility_t998_0_0_0_var;
extern const Il2CppType* AssemblyNameFlags_t1078_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Version_t512_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t102_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t320_il2cpp_TypeInfo_var;
extern TypeInfo* StrongNameKeyPair_t1076_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t342_il2cpp_TypeInfo_var;
extern "C" void AssemblyName__ctor_m5896 (AssemblyName_t1077 * __this, SerializationInfo_t310 * ___si, StreamingContext_t311  ___sc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t512_0_0_0_var = il2cpp_codegen_type_from_index(949);
		ByteU5BU5D_t102_0_0_0_var = il2cpp_codegen_type_from_index(78);
		AssemblyHashAlgorithm_t997_0_0_0_var = il2cpp_codegen_type_from_index(2003);
		StrongNameKeyPair_t1076_0_0_0_var = il2cpp_codegen_type_from_index(2004);
		AssemblyVersionCompatibility_t998_0_0_0_var = il2cpp_codegen_type_from_index(2005);
		AssemblyNameFlags_t1078_0_0_0_var = il2cpp_codegen_type_from_index(2006);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		Version_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(949);
		ByteU5BU5D_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		Int32_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		StrongNameKeyPair_t1076_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2004);
		CultureInfo_t342_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_0 = ___si;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m2399(L_0, (String_t*) &_stringLiteral1574, /*hidden argument*/NULL);
		__this->___name_0 = L_1;
		SerializationInfo_t310 * L_2 = ___si;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m2399(L_2, (String_t*) &_stringLiteral1575, /*hidden argument*/NULL);
		__this->___codebase_1 = L_3;
		SerializationInfo_t310 * L_4 = ___si;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Version_t512_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		Object_t * L_6 = SerializationInfo_GetValue_m2392(L_4, (String_t*) &_stringLiteral1576, L_5, /*hidden argument*/NULL);
		__this->___version_13 = ((Version_t512 *)Castclass(L_6, Version_t512_il2cpp_TypeInfo_var));
		SerializationInfo_t310 * L_7 = ___si;
		Type_t * L_8 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(ByteU5BU5D_t102_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		Object_t * L_9 = SerializationInfo_GetValue_m2392(L_7, (String_t*) &_stringLiteral1577, L_8, /*hidden argument*/NULL);
		__this->___publicKey_10 = ((ByteU5BU5D_t102*)Castclass(L_9, ByteU5BU5D_t102_il2cpp_TypeInfo_var));
		SerializationInfo_t310 * L_10 = ___si;
		Type_t * L_11 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(ByteU5BU5D_t102_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		Object_t * L_12 = SerializationInfo_GetValue_m2392(L_10, (String_t*) &_stringLiteral1578, L_11, /*hidden argument*/NULL);
		__this->___keyToken_11 = ((ByteU5BU5D_t102*)Castclass(L_12, ByteU5BU5D_t102_il2cpp_TypeInfo_var));
		SerializationInfo_t310 * L_13 = ___si;
		Type_t * L_14 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(AssemblyHashAlgorithm_t997_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		Object_t * L_15 = SerializationInfo_GetValue_m2392(L_13, (String_t*) &_stringLiteral1579, L_14, /*hidden argument*/NULL);
		__this->___hashalg_8 = ((*(int32_t*)((int32_t*)UnBox (L_15, Int32_t320_il2cpp_TypeInfo_var))));
		SerializationInfo_t310 * L_16 = ___si;
		Type_t * L_17 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(StrongNameKeyPair_t1076_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		Object_t * L_18 = SerializationInfo_GetValue_m2392(L_16, (String_t*) &_stringLiteral1580, L_17, /*hidden argument*/NULL);
		__this->___keypair_9 = ((StrongNameKeyPair_t1076 *)Castclass(L_18, StrongNameKeyPair_t1076_il2cpp_TypeInfo_var));
		SerializationInfo_t310 * L_19 = ___si;
		Type_t * L_20 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(AssemblyVersionCompatibility_t998_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		Object_t * L_21 = SerializationInfo_GetValue_m2392(L_19, (String_t*) &_stringLiteral1581, L_20, /*hidden argument*/NULL);
		__this->___versioncompat_12 = ((*(int32_t*)((int32_t*)UnBox (L_21, Int32_t320_il2cpp_TypeInfo_var))));
		SerializationInfo_t310 * L_22 = ___si;
		Type_t * L_23 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(AssemblyNameFlags_t1078_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_22);
		Object_t * L_24 = SerializationInfo_GetValue_m2392(L_22, (String_t*) &_stringLiteral1582, L_23, /*hidden argument*/NULL);
		__this->___flags_7 = ((*(int32_t*)((int32_t*)UnBox (L_24, Int32_t320_il2cpp_TypeInfo_var))));
		SerializationInfo_t310 * L_25 = ___si;
		NullCheck(L_25);
		int32_t L_26 = SerializationInfo_GetInt32_m2401(L_25, (String_t*) &_stringLiteral1583, /*hidden argument*/NULL);
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)(-1))))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_28 = V_0;
		CultureInfo_t342 * L_29 = (CultureInfo_t342 *)il2cpp_codegen_object_new (CultureInfo_t342_il2cpp_TypeInfo_var);
		CultureInfo__ctor_m5212(L_29, L_28, /*hidden argument*/NULL);
		__this->___cultureinfo_6 = L_29;
	}

IL_0124:
	{
		return;
	}
}
// System.String System.Reflection.AssemblyName::get_Name()
extern "C" String_t* AssemblyName_get_Name_m5897 (AssemblyName_t1077 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
extern "C" int32_t AssemblyName_get_Flags_m5898 (AssemblyName_t1077 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_7);
		return L_0;
	}
}
// System.String System.Reflection.AssemblyName::get_FullName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t301_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t342_il2cpp_TypeInfo_var;
extern "C" String_t* AssemblyName_get_FullName_m5899 (AssemblyName_t1077 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		StringBuilder_t301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		CultureInfo_t342_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t301 * V_0 = {0};
	ByteU5BU5D_t102* V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = (__this->___name_0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000e:
	{
		StringBuilder_t301 * L_2 = (StringBuilder_t301 *)il2cpp_codegen_object_new (StringBuilder_t301_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2410(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		StringBuilder_t301 * L_3 = V_0;
		String_t* L_4 = (__this->___name_0);
		NullCheck(L_3);
		StringBuilder_Append_m1262(L_3, L_4, /*hidden argument*/NULL);
		Version_t512 * L_5 = AssemblyName_get_Version_m5900(__this, /*hidden argument*/NULL);
		bool L_6 = Version_op_Inequality_m8044(NULL /*static, unused*/, L_5, (Version_t512 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		StringBuilder_t301 * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_m1262(L_7, (String_t*) &_stringLiteral1568, /*hidden argument*/NULL);
		StringBuilder_t301 * L_8 = V_0;
		Version_t512 * L_9 = AssemblyName_get_Version_m5900(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Version::ToString() */, L_9);
		NullCheck(L_8);
		StringBuilder_Append_m1262(L_8, L_10, /*hidden argument*/NULL);
	}

IL_004d:
	{
		CultureInfo_t342 * L_11 = (__this->___cultureinfo_6);
		if (!L_11)
		{
			goto IL_0098;
		}
	}
	{
		StringBuilder_t301 * L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_Append_m1262(L_12, (String_t*) &_stringLiteral1569, /*hidden argument*/NULL);
		CultureInfo_t342 * L_13 = (__this->___cultureinfo_6);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Globalization.CultureInfo::get_LCID() */, L_13);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t342_il2cpp_TypeInfo_var);
		CultureInfo_t342 * L_15 = CultureInfo_get_InvariantCulture_m1260(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Globalization.CultureInfo::get_LCID() */, L_15);
		if ((!(((uint32_t)L_14) == ((uint32_t)L_16))))
		{
			goto IL_0086;
		}
	}
	{
		StringBuilder_t301 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m1262(L_17, (String_t*) &_stringLiteral1570, /*hidden argument*/NULL);
		goto IL_0098;
	}

IL_0086:
	{
		StringBuilder_t301 * L_18 = V_0;
		CultureInfo_t342 * L_19 = (__this->___cultureinfo_6);
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Globalization.CultureInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m1262(L_18, L_20, /*hidden argument*/NULL);
	}

IL_0098:
	{
		ByteU5BU5D_t102* L_21 = AssemblyName_InternalGetPublicKeyToken_m5904(__this, /*hidden argument*/NULL);
		V_1 = L_21;
		ByteU5BU5D_t102* L_22 = V_1;
		if (!L_22)
		{
			goto IL_00e7;
		}
	}
	{
		ByteU5BU5D_t102* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)(((Array_t *)L_23)->max_length))))
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t301 * L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_Append_m1262(L_24, (String_t*) &_stringLiteral1571, /*hidden argument*/NULL);
		goto IL_00e7;
	}

IL_00b5:
	{
		StringBuilder_t301 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m1262(L_25, (String_t*) &_stringLiteral1572, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_00e1;
	}

IL_00c5:
	{
		StringBuilder_t301 * L_26 = V_0;
		ByteU5BU5D_t102* L_27 = V_1;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		String_t* L_29 = Byte_ToString_m2461(((uint8_t*)(uint8_t*)SZArrayLdElema(L_27, L_28)), (String_t*) &_stringLiteral448, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m1262(L_26, L_29, /*hidden argument*/NULL);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00e1:
	{
		int32_t L_31 = V_2;
		ByteU5BU5D_t102* L_32 = V_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_00e7:
	{
		int32_t L_33 = AssemblyName_get_Flags_m5898(__this, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_33&(int32_t)((int32_t)256))))
		{
			goto IL_0101;
		}
	}
	{
		StringBuilder_t301 * L_34 = V_0;
		NullCheck(L_34);
		StringBuilder_Append_m1262(L_34, (String_t*) &_stringLiteral1573, /*hidden argument*/NULL);
	}

IL_0101:
	{
		StringBuilder_t301 * L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_35);
		return L_36;
	}
}
// System.Version System.Reflection.AssemblyName::get_Version()
extern "C" Version_t512 * AssemblyName_get_Version_m5900 (AssemblyName_t1077 * __this, const MethodInfo* method)
{
	{
		Version_t512 * L_0 = (__this->___version_13);
		return L_0;
	}
}
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
extern "C" void AssemblyName_set_Version_m5901 (AssemblyName_t1077 * __this, Version_t512 * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Version_t512 * L_0 = ___value;
		__this->___version_13 = L_0;
		Version_t512 * L_1 = ___value;
		bool L_2 = Version_op_Equality_m8043(NULL /*static, unused*/, L_1, (Version_t512 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = 0;
		V_0 = L_3;
		__this->___revision_5 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->___build_4 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___minor_3 = L_7;
		int32_t L_8 = V_0;
		__this->___major_2 = L_8;
		goto IL_0064;
	}

IL_0034:
	{
		Version_t512 * L_9 = ___value;
		NullCheck(L_9);
		int32_t L_10 = Version_get_Major_m8033(L_9, /*hidden argument*/NULL);
		__this->___major_2 = L_10;
		Version_t512 * L_11 = ___value;
		NullCheck(L_11);
		int32_t L_12 = Version_get_Minor_m8034(L_11, /*hidden argument*/NULL);
		__this->___minor_3 = L_12;
		Version_t512 * L_13 = ___value;
		NullCheck(L_13);
		int32_t L_14 = Version_get_Build_m8032(L_13, /*hidden argument*/NULL);
		__this->___build_4 = L_14;
		Version_t512 * L_15 = ___value;
		NullCheck(L_15);
		int32_t L_16 = Version_get_Revision_m8035(L_15, /*hidden argument*/NULL);
		__this->___revision_5 = L_16;
	}

IL_0064:
	{
		return;
	}
}
// System.String System.Reflection.AssemblyName::ToString()
extern "C" String_t* AssemblyName_ToString_m5902 (AssemblyName_t1077 * __this, const MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* G_B3_0 = {0};
	{
		String_t* L_0 = AssemblyName_get_FullName_m5899(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_2 = V_0;
		G_B3_0 = L_2;
		goto IL_0013;
	}

IL_000d:
	{
		String_t* L_3 = Object_ToString_m1224(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
extern TypeInfo* CryptographicException_t678_il2cpp_TypeInfo_var;
extern "C" bool AssemblyName_get_IsPublicKeyValid_m5903 (AssemblyName_t1077 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CryptographicException_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(977);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	bool V_3 = false;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ByteU5BU5D_t102* L_0 = (__this->___publicKey_10);
		NullCheck(L_0);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0032;
		}
	}
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0012:
	{
		int32_t L_1 = V_1;
		ByteU5BU5D_t102* L_2 = (__this->___publicKey_10);
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_4);
		int32_t L_5 = L_4;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_5))));
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		ByteU5BU5D_t102* L_7 = (__this->___publicKey_10);
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)4))))
		{
			goto IL_0032;
		}
	}
	{
		return 1;
	}

IL_0032:
	{
		ByteU5BU5D_t102* L_9 = (__this->___publicKey_10);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		V_2 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10));
		uint8_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)6)))
		{
			goto IL_007a;
		}
	}
	{
		uint8_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)7)))
		{
			goto IL_0091;
		}
	}
	{
		uint8_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0093;
	}

IL_0049:
	{
		ByteU5BU5D_t102* L_14 = (__this->___publicKey_10);
		NullCheck(L_14);
		if ((((int32_t)(((int32_t)(((Array_t *)L_14)->max_length)))) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_t102* L_15 = (__this->___publicKey_10);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)12));
		int32_t L_16 = ((int32_t)12);
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_16))) == ((uint32_t)6))))
		{
			goto IL_0078;
		}
	}

IL_0061:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t102* L_17 = (__this->___publicKey_10);
			CryptoConvert_FromCapiPublicKeyBlob_m4628(NULL /*static, unused*/, L_17, ((int32_t)12), /*hidden argument*/NULL);
			V_3 = 1;
			goto IL_0095;
		}

IL_0073:
		{
			goto IL_0078;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (CryptographicException_t678_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0075;
		throw e;
	}

CATCH_0075:
	{ // begin catch(System.Security.Cryptography.CryptographicException)
		goto IL_0078;
	} // end catch (depth: 1)

IL_0078:
	{
		goto IL_0093;
	}

IL_007a:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t102* L_18 = (__this->___publicKey_10);
			CryptoConvert_FromCapiPublicKeyBlob_m4627(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			V_3 = 1;
			goto IL_0095;
		}

IL_008a:
		{
			goto IL_008f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (CryptographicException_t678_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_008c;
		throw e;
	}

CATCH_008c:
	{ // begin catch(System.Security.Cryptography.CryptographicException)
		goto IL_008f;
	} // end catch (depth: 1)

IL_008f:
	{
		goto IL_0093;
	}

IL_0091:
	{
		goto IL_0093;
	}

IL_0093:
	{
		return 0;
	}

IL_0095:
	{
		bool L_19 = V_3;
		return L_19;
	}
}
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
extern TypeInfo* ByteU5BU5D_t102_il2cpp_TypeInfo_var;
extern TypeInfo* SecurityException_t1284_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t102* AssemblyName_InternalGetPublicKeyToken_m5904 (AssemblyName_t1077 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		SecurityException_t1284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1953);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t102* L_0 = (__this->___keyToken_11);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_t102* L_1 = (__this->___keyToken_11);
		return L_1;
	}

IL_000f:
	{
		ByteU5BU5D_t102* L_2 = (__this->___publicKey_10);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return (ByteU5BU5D_t102*)NULL;
	}

IL_0019:
	{
		ByteU5BU5D_t102* L_3 = (__this->___publicKey_10);
		NullCheck(L_3);
		if ((((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		return ((ByteU5BU5D_t102*)SZArrayNew(ByteU5BU5D_t102_il2cpp_TypeInfo_var, 0));
	}

IL_002a:
	{
		bool L_4 = AssemblyName_get_IsPublicKeyValid_m5903(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		SecurityException_t1284 * L_5 = (SecurityException_t1284 *)il2cpp_codegen_object_new (SecurityException_t1284_il2cpp_TypeInfo_var);
		SecurityException__ctor_m6946(L_5, (String_t*) &_stringLiteral1584, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003d:
	{
		ByteU5BU5D_t102* L_6 = AssemblyName_ComputePublicKeyToken_m5905(__this, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
extern TypeInfo* ByteU5BU5D_t102_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t102* AssemblyName_ComputePublicKeyToken_m5905 (AssemblyName_t1077 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		s_Il2CppMethodIntialized = true;
	}
	HashAlgorithm_t755 * V_0 = {0};
	ByteU5BU5D_t102* V_1 = {0};
	ByteU5BU5D_t102* V_2 = {0};
	{
		SHA1_t687 * L_0 = SHA1_Create_m2515(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		HashAlgorithm_t755 * L_1 = V_0;
		ByteU5BU5D_t102* L_2 = (__this->___publicKey_10);
		NullCheck(L_1);
		ByteU5BU5D_t102* L_3 = HashAlgorithm_ComputeHash_m2516(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = ((ByteU5BU5D_t102*)SZArrayNew(ByteU5BU5D_t102_il2cpp_TypeInfo_var, 8));
		ByteU5BU5D_t102* L_4 = V_1;
		ByteU5BU5D_t102* L_5 = V_1;
		NullCheck(L_5);
		ByteU5BU5D_t102* L_6 = V_2;
		Array_Copy_m4287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))-(int32_t)8)), (Array_t *)(Array_t *)L_6, 0, 8, /*hidden argument*/NULL);
		ByteU5BU5D_t102* L_7 = V_2;
		Array_Reverse_m3525(NULL /*static, unused*/, (Array_t *)(Array_t *)L_7, 0, 8, /*hidden argument*/NULL);
		ByteU5BU5D_t102* L_8 = V_2;
		return L_8;
	}
}
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
extern "C" void AssemblyName_SetPublicKey_m5906 (AssemblyName_t1077 * __this, ByteU5BU5D_t102* ___publicKey, const MethodInfo* method)
{
	{
		ByteU5BU5D_t102* L_0 = ___publicKey;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = (__this->___flags_7);
		__this->___flags_7 = ((int32_t)((int32_t)L_1^(int32_t)1));
		goto IL_0021;
	}

IL_0013:
	{
		int32_t L_2 = (__this->___flags_7);
		__this->___flags_7 = ((int32_t)((int32_t)L_2|(int32_t)1));
	}

IL_0021:
	{
		ByteU5BU5D_t102* L_3 = ___publicKey;
		__this->___publicKey_10 = L_3;
		return;
	}
}
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
extern "C" void AssemblyName_SetPublicKeyToken_m5907 (AssemblyName_t1077 * __this, ByteU5BU5D_t102* ___publicKeyToken, const MethodInfo* method)
{
	{
		ByteU5BU5D_t102* L_0 = ___publicKeyToken;
		__this->___keyToken_11 = L_0;
		return;
	}
}
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyHashAlgorithm_t997_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyVersionCompatibility_t998_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyNameFlags_t1078_il2cpp_TypeInfo_var;
extern "C" void AssemblyName_GetObjectData_m5908 (AssemblyName_t1077 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		AssemblyHashAlgorithm_t997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2003);
		AssemblyVersionCompatibility_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2005);
		AssemblyNameFlags_t1078_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2006);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B4_0 = {0};
	SerializationInfo_t310 * G_B4_1 = {0};
	String_t* G_B3_0 = {0};
	SerializationInfo_t310 * G_B3_1 = {0};
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = {0};
	SerializationInfo_t310 * G_B5_2 = {0};
	{
		SerializationInfo_t310 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral269, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t310 * L_2 = ___info;
		String_t* L_3 = (__this->___name_0);
		NullCheck(L_2);
		SerializationInfo_AddValue_m2402(L_2, (String_t*) &_stringLiteral1574, L_3, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_4 = ___info;
		ByteU5BU5D_t102* L_5 = (__this->___publicKey_10);
		NullCheck(L_4);
		SerializationInfo_AddValue_m2402(L_4, (String_t*) &_stringLiteral1577, (Object_t *)(Object_t *)L_5, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_6 = ___info;
		ByteU5BU5D_t102* L_7 = (__this->___keyToken_11);
		NullCheck(L_6);
		SerializationInfo_AddValue_m2402(L_6, (String_t*) &_stringLiteral1578, (Object_t *)(Object_t *)L_7, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_8 = ___info;
		CultureInfo_t342 * L_9 = (__this->___cultureinfo_6);
		G_B3_0 = (String_t*) &_stringLiteral1583;
		G_B3_1 = L_8;
		if (!L_9)
		{
			G_B4_0 = (String_t*) &_stringLiteral1583;
			G_B4_1 = L_8;
			goto IL_005c;
		}
	}
	{
		CultureInfo_t342 * L_10 = (__this->___cultureinfo_6);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Globalization.CultureInfo::get_LCID() */, L_10);
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = (-1);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_005d:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m2391(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_12 = ___info;
		String_t* L_13 = (__this->___codebase_1);
		NullCheck(L_12);
		SerializationInfo_AddValue_m2402(L_12, (String_t*) &_stringLiteral1575, L_13, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_14 = ___info;
		Version_t512 * L_15 = AssemblyName_get_Version_m5900(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		SerializationInfo_AddValue_m2402(L_14, (String_t*) &_stringLiteral1576, L_15, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_16 = ___info;
		int32_t L_17 = (__this->___hashalg_8);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(AssemblyHashAlgorithm_t997_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		SerializationInfo_AddValue_m2402(L_16, (String_t*) &_stringLiteral1579, L_19, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_20 = ___info;
		int32_t L_21 = 0;
		Object_t * L_22 = Box(AssemblyHashAlgorithm_t997_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_20);
		SerializationInfo_AddValue_m2402(L_20, (String_t*) &_stringLiteral1585, L_22, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_23 = ___info;
		StrongNameKeyPair_t1076 * L_24 = (__this->___keypair_9);
		NullCheck(L_23);
		SerializationInfo_AddValue_m2402(L_23, (String_t*) &_stringLiteral1580, L_24, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_25 = ___info;
		int32_t L_26 = (__this->___versioncompat_12);
		int32_t L_27 = L_26;
		Object_t * L_28 = Box(AssemblyVersionCompatibility_t998_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		SerializationInfo_AddValue_m2402(L_25, (String_t*) &_stringLiteral1581, L_28, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_29 = ___info;
		int32_t L_30 = (__this->___flags_7);
		int32_t L_31 = L_30;
		Object_t * L_32 = Box(AssemblyNameFlags_t1078_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		SerializationInfo_AddValue_m2402(L_29, (String_t*) &_stringLiteral1582, L_32, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_33 = ___info;
		NullCheck(L_33);
		SerializationInfo_AddValue_m2402(L_33, (String_t*) &_stringLiteral1586, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
extern "C" void AssemblyName_OnDeserialization_m5909 (AssemblyName_t1077 * __this, Object_t * ___sender, const MethodInfo* method)
{
	{
		Version_t512 * L_0 = (__this->___version_13);
		AssemblyName_set_Version_m5901(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlagsMethodDeclarations.h"



// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyProductAttribute::.ctor(System.String)
extern "C" void AssemblyProductAttribute__ctor_m2558 (AssemblyProductAttribute_t697 * __this, String_t* ___product, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___product;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyTitleAttribute::.ctor(System.String)
extern "C" void AssemblyTitleAttribute__ctor_m2563 (AssemblyTitleAttribute_t702 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___title;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.Binder/Default
#include "mscorlib_System_Reflection_Binder_Default.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Binder/Default
#include "mscorlib_System_Reflection_Binder_DefaultMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
struct Array_t;
struct TypeU5BU5D_t196;
struct Type_t;
struct Array_t;
struct ObjectU5BU5D_t200;
struct Object_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
extern "C" int32_t Array_IndexOf_TisObject_t_m8094_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t200* p0, Object_t * p1, const MethodInfo* method);
#define Array_IndexOf_TisObject_t_m8094(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t200*, Object_t *, const MethodInfo*))Array_IndexOf_TisObject_t_m8094_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Int32 System.Array::IndexOf<System.Type>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Type>(!!0[],!!0)
#define Array_IndexOf_TisType_t_m8093(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, TypeU5BU5D_t196*, Type_t *, const MethodInfo*))Array_IndexOf_TisObject_t_m8094_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void System.Reflection.Binder/Default::.ctor()
extern TypeInfo* Binder_t376_il2cpp_TypeInfo_var;
extern "C" void Default__ctor_m5910 (Default_t1079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Binder_t376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1995);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t376_il2cpp_TypeInfo_var);
		Binder__ctor_m5925(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t196_il2cpp_TypeInfo_var;
extern "C" MethodBase_t379 * Default_BindToMethod_m5911 (Default_t1079 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1433* ___match, ObjectU5BU5D_t200** ___args, ParameterModifierU5BU5D_t377* ___modifiers, CultureInfo_t342 * ___culture, StringU5BU5D_t197* ___names, Object_t ** ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		TypeU5BU5D_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	TypeU5BU5D_t196* V_0 = {0};
	int32_t V_1 = 0;
	MethodBase_t379 * V_2 = {0};
	{
		ObjectU5BU5D_t200** L_0 = ___args;
		if ((*((ObjectU5BU5D_t200**)L_0)))
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t196* L_1 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		V_0 = L_1;
		goto IL_0037;
	}

IL_000c:
	{
		ObjectU5BU5D_t200** L_2 = ___args;
		NullCheck((*((ObjectU5BU5D_t200**)L_2)));
		V_0 = ((TypeU5BU5D_t196*)SZArrayNew(TypeU5BU5D_t196_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t200**)L_2)))->max_length)))));
		V_1 = 0;
		goto IL_0030;
	}

IL_001a:
	{
		ObjectU5BU5D_t200** L_3 = ___args;
		int32_t L_4 = V_1;
		NullCheck((*((ObjectU5BU5D_t200**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ObjectU5BU5D_t200**)L_3)), L_4);
		int32_t L_5 = L_4;
		if (!(*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t200**)L_3)), L_5)))
		{
			goto IL_002c;
		}
	}
	{
		TypeU5BU5D_t196* L_6 = V_0;
		int32_t L_7 = V_1;
		ObjectU5BU5D_t200** L_8 = ___args;
		int32_t L_9 = V_1;
		NullCheck((*((ObjectU5BU5D_t200**)L_8)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ObjectU5BU5D_t200**)L_8)), L_9);
		int32_t L_10 = L_9;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t200**)L_8)), L_10)));
		Type_t * L_11 = Object_GetType_m1176((*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t200**)L_8)), L_10)), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		ArrayElementTypeCheck (L_6, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, L_7)) = (Type_t *)L_11;
	}

IL_002c:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_13 = V_1;
		ObjectU5BU5D_t200** L_14 = ___args;
		NullCheck((*((ObjectU5BU5D_t200**)L_14)));
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)(*((ObjectU5BU5D_t200**)L_14)))->max_length))))))
		{
			goto IL_001a;
		}
	}

IL_0037:
	{
		int32_t L_15 = ___bindingAttr;
		MethodBaseU5BU5D_t1433* L_16 = ___match;
		TypeU5BU5D_t196* L_17 = V_0;
		ParameterModifierU5BU5D_t377* L_18 = ___modifiers;
		MethodBase_t379 * L_19 = Default_SelectMethod_m5919(__this, L_15, L_16, L_17, L_18, 1, /*hidden argument*/NULL);
		V_2 = L_19;
		Object_t ** L_20 = ___state;
		*((Object_t **)(L_20)) = (Object_t *)NULL;
		StringU5BU5D_t197* L_21 = ___names;
		if (!L_21)
		{
			goto IL_0056;
		}
	}
	{
		StringU5BU5D_t197* L_22 = ___names;
		ObjectU5BU5D_t200** L_23 = ___args;
		MethodBase_t379 * L_24 = V_2;
		Default_ReorderParameters_m5912(__this, L_22, L_23, L_24, /*hidden argument*/NULL);
	}

IL_0056:
	{
		MethodBase_t379 * L_25 = V_2;
		return L_25;
	}
}
// System.Void System.Reflection.Binder/Default::ReorderParameters(System.String[],System.Object[]&,System.Reflection.MethodBase)
extern TypeInfo* ObjectU5BU5D_t200_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Default_ReorderParameters_m5912 (Default_t1079 * __this, StringU5BU5D_t197* ___names, ObjectU5BU5D_t200** ___args, MethodBase_t379 * ___selected, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t200_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t200* V_0 = {0};
	ParameterInfoU5BU5D_t369* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ObjectU5BU5D_t200** L_0 = ___args;
		NullCheck((*((ObjectU5BU5D_t200**)L_0)));
		V_0 = ((ObjectU5BU5D_t200*)SZArrayNew(ObjectU5BU5D_t200_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t200**)L_0)))->max_length)))));
		ObjectU5BU5D_t200** L_1 = ___args;
		ObjectU5BU5D_t200* L_2 = V_0;
		ObjectU5BU5D_t200** L_3 = ___args;
		NullCheck((*((ObjectU5BU5D_t200**)L_3)));
		Array_Copy_m2537(NULL /*static, unused*/, (Array_t *)(Array_t *)(*((ObjectU5BU5D_t200**)L_1)), (Array_t *)(Array_t *)L_2, (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t200**)L_3)))->max_length))), /*hidden argument*/NULL);
		MethodBase_t379 * L_4 = ___selected;
		NullCheck(L_4);
		ParameterInfoU5BU5D_t369* L_5 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		V_3 = 0;
		goto IL_0044;
	}

IL_0025:
	{
		StringU5BU5D_t197* L_6 = ___names;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		ParameterInfoU5BU5D_t369* L_9 = V_1;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_9, L_11)));
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_9, L_11)));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m1163(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_6, L_8)), L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		ObjectU5BU5D_t200* L_14 = V_0;
		int32_t L_15 = V_3;
		ObjectU5BU5D_t200** L_16 = ___args;
		int32_t L_17 = V_2;
		NullCheck((*((ObjectU5BU5D_t200**)L_16)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ObjectU5BU5D_t200**)L_16)), L_17);
		int32_t L_18 = L_17;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		ArrayElementTypeCheck (L_14, (*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t200**)L_16)), L_18)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, L_15)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t200**)L_16)), L_18));
		goto IL_004a;
	}

IL_0040:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0044:
	{
		int32_t L_20 = V_3;
		ParameterInfoU5BU5D_t369* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)(((Array_t *)L_21)->max_length))))))
		{
			goto IL_0025;
		}
	}

IL_004a:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_23 = V_2;
		StringU5BU5D_t197* L_24 = ___names;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		ObjectU5BU5D_t200* L_25 = V_0;
		ObjectU5BU5D_t200** L_26 = ___args;
		ObjectU5BU5D_t200** L_27 = ___args;
		NullCheck((*((ObjectU5BU5D_t200**)L_27)));
		Array_Copy_m2537(NULL /*static, unused*/, (Array_t *)(Array_t *)L_25, (Array_t *)(Array_t *)(*((ObjectU5BU5D_t200**)L_26)), (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t200**)L_27)))->max_length))), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Reflection.Binder/Default::IsArrayAssignable(System.Type,System.Type)
extern "C" bool Default_IsArrayAssignable_m5913 (Object_t * __this /* static, unused */, Type_t * ___object_type, Type_t * ___target_type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___object_type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_0);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Type_t * L_2 = ___target_type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_2);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Type_t * L_4 = ___object_type;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_4);
		Type_t * L_6 = ___target_type;
		NullCheck(L_6);
		Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_6);
		bool L_8 = Default_IsArrayAssignable_m5913(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0022:
	{
		Type_t * L_9 = ___target_type;
		Type_t * L_10 = ___object_type;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_002d;
		}
	}
	{
		return 1;
	}

IL_002d:
	{
		return 0;
	}
}
// System.Object System.Reflection.Binder/Default::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
extern const Il2CppType* Char_t424_0_0_0_var;
extern const Il2CppType* Double_t344_0_0_0_var;
extern const Il2CppType* Single_t321_0_0_0_var;
extern const Il2CppType* IntPtr_t_0_0_0_var;
extern TypeInfo* Enum_t305_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t424_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t344_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t321_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t335_il2cpp_TypeInfo_var;
extern "C" Object_t * Default_ChangeType_m5914 (Default_t1079 * __this, Object_t * ___value, Type_t * ___type, CultureInfo_t342 * ___culture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t424_0_0_0_var = il2cpp_codegen_type_from_index(72);
		Double_t344_0_0_0_var = il2cpp_codegen_type_from_index(139);
		Single_t321_0_0_0_var = il2cpp_codegen_type_from_index(33);
		IntPtr_t_0_0_0_var = il2cpp_codegen_type_from_index(24);
		Enum_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(176);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		Char_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Double_t344_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		Single_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		Convert_t335_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return NULL;
	}

IL_0005:
	{
		Object_t * L_1 = ___value;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m1176(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_3);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_5 = ___type;
		NullCheck(L_5);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_5);
		___type = L_6;
	}

IL_001e:
	{
		Type_t * L_7 = V_0;
		Type_t * L_8 = ___type;
		if ((((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_002b;
		}
	}
	{
		Type_t * L_9 = ___type;
		Object_t * L_10 = ___value;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(41 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_002d;
		}
	}

IL_002b:
	{
		Object_t * L_12 = ___value;
		return L_12;
	}

IL_002d:
	{
		Type_t * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_13);
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		Type_t * L_15 = ___type;
		NullCheck(L_15);
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_15);
		if (!L_16)
		{
			goto IL_0052;
		}
	}
	{
		Type_t * L_17 = V_0;
		NullCheck(L_17);
		Type_t * L_18 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_17);
		Type_t * L_19 = ___type;
		NullCheck(L_19);
		Type_t * L_20 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_19);
		bool L_21 = Default_IsArrayAssignable_m5913(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0052;
		}
	}
	{
		Object_t * L_22 = ___value;
		return L_22;
	}

IL_0052:
	{
		Type_t * L_23 = V_0;
		Type_t * L_24 = ___type;
		bool L_25 = Default_check_type_m5916(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ce;
		}
	}
	{
		Type_t * L_26 = ___type;
		NullCheck(L_26);
		bool L_27 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_26);
		if (!L_27)
		{
			goto IL_006e;
		}
	}
	{
		Type_t * L_28 = ___type;
		Object_t * L_29 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t305_il2cpp_TypeInfo_var);
		Object_t * L_30 = Enum_ToObject_m4212(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_006e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Char_t424_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32))))
		{
			goto IL_00af;
		}
	}
	{
		Type_t * L_33 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Double_t344_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_33) == ((Object_t*)(Type_t *)L_34))))
		{
			goto IL_0095;
		}
	}
	{
		Object_t * L_35 = ___value;
		double L_36 = (((double)((*(uint16_t*)((uint16_t*)UnBox (L_35, Char_t424_il2cpp_TypeInfo_var))))));
		Object_t * L_37 = Box(Double_t344_il2cpp_TypeInfo_var, &L_36);
		return L_37;
	}

IL_0095:
	{
		Type_t * L_38 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_39 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Single_t321_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_38) == ((Object_t*)(Type_t *)L_39))))
		{
			goto IL_00af;
		}
	}
	{
		Object_t * L_40 = ___value;
		float L_41 = (((float)((*(uint16_t*)((uint16_t*)UnBox (L_40, Char_t424_il2cpp_TypeInfo_var))))));
		Object_t * L_42 = Box(Single_t321_il2cpp_TypeInfo_var, &L_41);
		return L_42;
	}

IL_00af:
	{
		Type_t * L_43 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(IntPtr_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_43) == ((Object_t*)(Type_t *)L_44))))
		{
			goto IL_00c6;
		}
	}
	{
		Type_t * L_45 = ___type;
		NullCheck(L_45);
		bool L_46 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Type::get_IsPointer() */, L_45);
		if (!L_46)
		{
			goto IL_00c6;
		}
	}
	{
		Object_t * L_47 = ___value;
		return L_47;
	}

IL_00c6:
	{
		Object_t * L_48 = ___value;
		Type_t * L_49 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t335_il2cpp_TypeInfo_var);
		Object_t * L_50 = Convert_ChangeType_m7523(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
		return L_50;
	}

IL_00ce:
	{
		return NULL;
	}
}
// System.Void System.Reflection.Binder/Default::ReorderArgumentArray(System.Object[]&,System.Object)
extern "C" void Default_ReorderArgumentArray_m5915 (Default_t1079 * __this, ObjectU5BU5D_t200** ___args, Object_t * ___state, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Reflection.Binder/Default::check_type(System.Type,System.Type)
extern const Il2CppType* Nullable_1_t1444_0_0_0_var;
extern const Il2CppType* Object_t_0_0_0_var;
extern const Il2CppType* Enum_t305_0_0_0_var;
extern const Il2CppType* IntPtr_t_0_0_0_var;
extern TypeInfo* Enum_t305_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Default_check_type_m5916 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t1444_0_0_0_var = il2cpp_codegen_type_from_index(2007);
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Enum_t305_0_0_0_var = il2cpp_codegen_type_from_index(176);
		IntPtr_t_0_0_0_var = il2cpp_codegen_type_from_index(24);
		Enum_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(176);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	int32_t G_B28_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B78_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B89_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B95_0 = 0;
	{
		Type_t * L_0 = ___from;
		Type_t * L_1 = ___to;
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		Type_t * L_2 = ___from;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		Type_t * L_3 = ___to;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_3);
		Type_t * L_5 = ___from;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_5);
		if ((((int32_t)L_4) == ((int32_t)L_6)))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}

IL_001b:
	{
		Type_t * L_7 = ___to;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_7);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		Type_t * L_9 = ___to;
		Type_t * L_10 = ___from;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_9, L_10);
		return L_11;
	}

IL_002b:
	{
		Type_t * L_12 = ___to;
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_12);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		Type_t * L_14 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t305_il2cpp_TypeInfo_var);
		Type_t * L_15 = Enum_GetUnderlyingType_m4204(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		___to = L_15;
		Type_t * L_16 = ___from;
		Type_t * L_17 = ___to;
		if ((!(((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)L_17))))
		{
			goto IL_0043;
		}
	}
	{
		return 1;
	}

IL_0043:
	{
		Type_t * L_18 = ___to;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(77 /* System.Boolean System.Type::get_IsGenericType() */, L_18);
		if (!L_19)
		{
			goto IL_006a;
		}
	}
	{
		Type_t * L_20 = ___to;
		NullCheck(L_20);
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(76 /* System.Type System.Type::GetGenericTypeDefinition() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Nullable_1_t1444_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_21) == ((Object_t*)(Type_t *)L_22))))
		{
			goto IL_006a;
		}
	}
	{
		Type_t * L_23 = ___to;
		NullCheck(L_23);
		TypeU5BU5D_t196* L_24 = (TypeU5BU5D_t196*)VirtFuncInvoker0< TypeU5BU5D_t196* >::Invoke(73 /* System.Type[] System.Type::GetGenericArguments() */, L_23);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		int32_t L_25 = 0;
		Type_t * L_26 = ___from;
		if ((!(((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_24, L_25))) == ((Object_t*)(Type_t *)L_26))))
		{
			goto IL_006a;
		}
	}
	{
		return 1;
	}

IL_006a:
	{
		Type_t * L_27 = ___from;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_28 = Type_GetTypeCode_m4353(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		Type_t * L_29 = ___to;
		int32_t L_30 = Type_GetTypeCode_m4353(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		V_1 = L_30;
		int32_t L_31 = V_0;
		V_2 = L_31;
		int32_t L_32 = V_2;
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 0)
		{
			goto IL_00af;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 1)
		{
			goto IL_014a;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 2)
		{
			goto IL_00e7;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 3)
		{
			goto IL_01f1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 4)
		{
			goto IL_01a1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 5)
		{
			goto IL_0289;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 6)
		{
			goto IL_0241;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 7)
		{
			goto IL_02d1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 8)
		{
			goto IL_02d1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 9)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0320;
	}

IL_00af:
	{
		int32_t L_33 = V_1;
		V_3 = L_33;
		int32_t L_34 = V_3;
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 0)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 1)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 2)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 3)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 4)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 5)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 6)
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_00d9;
	}

IL_00d7:
	{
		return 1;
	}

IL_00d9:
	{
		Type_t * L_35 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		return ((((Object_t*)(Type_t *)L_35) == ((Object_t*)(Type_t *)L_36))? 1 : 0);
	}

IL_00e7:
	{
		int32_t L_37 = V_1;
		V_3 = L_37;
		int32_t L_38 = V_3;
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 0)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 1)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 2)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 3)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 4)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 5)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 6)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 7)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 8)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 9)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 10)
		{
			goto IL_011f;
		}
	}
	{
		goto IL_0121;
	}

IL_011f:
	{
		return 1;
	}

IL_0121:
	{
		Type_t * L_39 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_40 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_39) == ((Object_t*)(Type_t *)L_40)))
		{
			goto IL_0148;
		}
	}
	{
		Type_t * L_41 = ___from;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_41);
		if (!L_42)
		{
			goto IL_0145;
		}
	}
	{
		Type_t * L_43 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Enum_t305_0_0_0_var), /*hidden argument*/NULL);
		G_B28_0 = ((((Object_t*)(Type_t *)L_43) == ((Object_t*)(Type_t *)L_44))? 1 : 0);
		goto IL_0146;
	}

IL_0145:
	{
		G_B28_0 = 0;
	}

IL_0146:
	{
		G_B30_0 = G_B28_0;
		goto IL_0149;
	}

IL_0148:
	{
		G_B30_0 = 1;
	}

IL_0149:
	{
		return G_B30_0;
	}

IL_014a:
	{
		int32_t L_45 = V_1;
		V_3 = L_45;
		int32_t L_46 = V_3;
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 0)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 1)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 2)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 3)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 4)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 5)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 6)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 7)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_0178;
	}

IL_0176:
	{
		return 1;
	}

IL_0178:
	{
		Type_t * L_47 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_48 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_47) == ((Object_t*)(Type_t *)L_48)))
		{
			goto IL_019f;
		}
	}
	{
		Type_t * L_49 = ___from;
		NullCheck(L_49);
		bool L_50 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_49);
		if (!L_50)
		{
			goto IL_019c;
		}
	}
	{
		Type_t * L_51 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_52 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Enum_t305_0_0_0_var), /*hidden argument*/NULL);
		G_B38_0 = ((((Object_t*)(Type_t *)L_51) == ((Object_t*)(Type_t *)L_52))? 1 : 0);
		goto IL_019d;
	}

IL_019c:
	{
		G_B38_0 = 0;
	}

IL_019d:
	{
		G_B40_0 = G_B38_0;
		goto IL_01a0;
	}

IL_019f:
	{
		G_B40_0 = 1;
	}

IL_01a0:
	{
		return G_B40_0;
	}

IL_01a1:
	{
		int32_t L_53 = V_1;
		V_3 = L_53;
		int32_t L_54 = V_3;
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_01c6;
		}
	}
	{
		goto IL_01c8;
	}

IL_01c6:
	{
		return 1;
	}

IL_01c8:
	{
		Type_t * L_55 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_55) == ((Object_t*)(Type_t *)L_56)))
		{
			goto IL_01ef;
		}
	}
	{
		Type_t * L_57 = ___from;
		NullCheck(L_57);
		bool L_58 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_57);
		if (!L_58)
		{
			goto IL_01ec;
		}
	}
	{
		Type_t * L_59 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_60 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Enum_t305_0_0_0_var), /*hidden argument*/NULL);
		G_B48_0 = ((((Object_t*)(Type_t *)L_59) == ((Object_t*)(Type_t *)L_60))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B48_0 = 0;
	}

IL_01ed:
	{
		G_B50_0 = G_B48_0;
		goto IL_01f0;
	}

IL_01ef:
	{
		G_B50_0 = 1;
	}

IL_01f0:
	{
		return G_B50_0;
	}

IL_01f1:
	{
		int32_t L_61 = V_1;
		V_3 = L_61;
		int32_t L_62 = V_3;
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0218;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0218;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_0216;
		}
	}
	{
		goto IL_0218;
	}

IL_0216:
	{
		return 1;
	}

IL_0218:
	{
		Type_t * L_63 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_64 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_63) == ((Object_t*)(Type_t *)L_64)))
		{
			goto IL_023f;
		}
	}
	{
		Type_t * L_65 = ___from;
		NullCheck(L_65);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_65);
		if (!L_66)
		{
			goto IL_023c;
		}
	}
	{
		Type_t * L_67 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_68 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Enum_t305_0_0_0_var), /*hidden argument*/NULL);
		G_B58_0 = ((((Object_t*)(Type_t *)L_67) == ((Object_t*)(Type_t *)L_68))? 1 : 0);
		goto IL_023d;
	}

IL_023c:
	{
		G_B58_0 = 0;
	}

IL_023d:
	{
		G_B60_0 = G_B58_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B60_0 = 1;
	}

IL_0240:
	{
		return G_B60_0;
	}

IL_0241:
	{
		int32_t L_69 = V_1;
		V_3 = L_69;
		int32_t L_70 = V_3;
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_025e;
		}
	}
	{
		goto IL_0260;
	}

IL_025e:
	{
		return 1;
	}

IL_0260:
	{
		Type_t * L_71 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_72 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_71) == ((Object_t*)(Type_t *)L_72)))
		{
			goto IL_0287;
		}
	}
	{
		Type_t * L_73 = ___from;
		NullCheck(L_73);
		bool L_74 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_73);
		if (!L_74)
		{
			goto IL_0284;
		}
	}
	{
		Type_t * L_75 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_76 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Enum_t305_0_0_0_var), /*hidden argument*/NULL);
		G_B68_0 = ((((Object_t*)(Type_t *)L_75) == ((Object_t*)(Type_t *)L_76))? 1 : 0);
		goto IL_0285;
	}

IL_0284:
	{
		G_B68_0 = 0;
	}

IL_0285:
	{
		G_B70_0 = G_B68_0;
		goto IL_0288;
	}

IL_0287:
	{
		G_B70_0 = 1;
	}

IL_0288:
	{
		return G_B70_0;
	}

IL_0289:
	{
		int32_t L_77 = V_1;
		V_3 = L_77;
		int32_t L_78 = V_3;
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_02a6;
		}
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_02a8;
		}
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_02a6;
		}
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_02a6;
		}
	}
	{
		goto IL_02a8;
	}

IL_02a6:
	{
		return 1;
	}

IL_02a8:
	{
		Type_t * L_79 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_80 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_79) == ((Object_t*)(Type_t *)L_80)))
		{
			goto IL_02cf;
		}
	}
	{
		Type_t * L_81 = ___from;
		NullCheck(L_81);
		bool L_82 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_81);
		if (!L_82)
		{
			goto IL_02cc;
		}
	}
	{
		Type_t * L_83 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_84 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Enum_t305_0_0_0_var), /*hidden argument*/NULL);
		G_B78_0 = ((((Object_t*)(Type_t *)L_83) == ((Object_t*)(Type_t *)L_84))? 1 : 0);
		goto IL_02cd;
	}

IL_02cc:
	{
		G_B78_0 = 0;
	}

IL_02cd:
	{
		G_B80_0 = G_B78_0;
		goto IL_02d0;
	}

IL_02cf:
	{
		G_B80_0 = 1;
	}

IL_02d0:
	{
		return G_B80_0;
	}

IL_02d1:
	{
		int32_t L_85 = V_1;
		V_3 = L_85;
		int32_t L_86 = V_3;
		if ((((int32_t)L_86) == ((int32_t)((int32_t)13))))
		{
			goto IL_02df;
		}
	}
	{
		int32_t L_87 = V_3;
		if ((((int32_t)L_87) == ((int32_t)((int32_t)14))))
		{
			goto IL_02df;
		}
	}
	{
		goto IL_02e1;
	}

IL_02df:
	{
		return 1;
	}

IL_02e1:
	{
		Type_t * L_88 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_89 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_88) == ((Object_t*)(Type_t *)L_89)))
		{
			goto IL_0308;
		}
	}
	{
		Type_t * L_90 = ___from;
		NullCheck(L_90);
		bool L_91 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_90);
		if (!L_91)
		{
			goto IL_0305;
		}
	}
	{
		Type_t * L_92 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_93 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Enum_t305_0_0_0_var), /*hidden argument*/NULL);
		G_B89_0 = ((((Object_t*)(Type_t *)L_92) == ((Object_t*)(Type_t *)L_93))? 1 : 0);
		goto IL_0306;
	}

IL_0305:
	{
		G_B89_0 = 0;
	}

IL_0306:
	{
		G_B91_0 = G_B89_0;
		goto IL_0309;
	}

IL_0308:
	{
		G_B91_0 = 1;
	}

IL_0309:
	{
		return G_B91_0;
	}

IL_030a:
	{
		int32_t L_94 = V_1;
		if ((((int32_t)L_94) == ((int32_t)((int32_t)14))))
		{
			goto IL_031e;
		}
	}
	{
		Type_t * L_95 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_96 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		G_B95_0 = ((((Object_t*)(Type_t *)L_95) == ((Object_t*)(Type_t *)L_96))? 1 : 0);
		goto IL_031f;
	}

IL_031e:
	{
		G_B95_0 = 1;
	}

IL_031f:
	{
		return G_B95_0;
	}

IL_0320:
	{
		Type_t * L_97 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_98 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_97) == ((Object_t*)(Type_t *)L_98))))
		{
			goto IL_0337;
		}
	}
	{
		Type_t * L_99 = ___from;
		NullCheck(L_99);
		bool L_100 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_99);
		if (!L_100)
		{
			goto IL_0337;
		}
	}
	{
		return 1;
	}

IL_0337:
	{
		Type_t * L_101 = ___to;
		NullCheck(L_101);
		bool L_102 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Type::get_IsPointer() */, L_101);
		if (!L_102)
		{
			goto IL_034e;
		}
	}
	{
		Type_t * L_103 = ___from;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_104 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(IntPtr_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_103) == ((Object_t*)(Type_t *)L_104))))
		{
			goto IL_034e;
		}
	}
	{
		return 1;
	}

IL_034e:
	{
		Type_t * L_105 = ___to;
		Type_t * L_106 = ___from;
		NullCheck(L_105);
		bool L_107 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_105, L_106);
		return L_107;
	}
}
// System.Boolean System.Reflection.Binder/Default::check_arguments(System.Type[],System.Reflection.ParameterInfo[],System.Boolean)
extern "C" bool Default_check_arguments_m5917 (Object_t * __this /* static, unused */, TypeU5BU5D_t196* ___types, ParameterInfoU5BU5D_t369* ___args, bool ___allowByRefMatch, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Type_t * V_2 = {0};
	{
		V_0 = 0;
		goto IL_0044;
	}

IL_0004:
	{
		TypeU5BU5D_t196* L_0 = ___types;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		ParameterInfoU5BU5D_t369* L_3 = ___args;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_3, L_5)));
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_3, L_5)));
		bool L_7 = Default_check_type_m5916(NULL /*static, unused*/, (*(Type_t **)(Type_t **)SZArrayLdElema(L_0, L_2)), L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		bool L_9 = ___allowByRefMatch;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		ParameterInfoU5BU5D_t369* L_10 = ___args;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_10, L_12)));
		Type_t * L_13 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_10, L_12)));
		V_2 = L_13;
		Type_t * L_14 = V_2;
		NullCheck(L_14);
		bool L_15 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_14);
		if (!L_15)
		{
			goto IL_003b;
		}
	}
	{
		TypeU5BU5D_t196* L_16 = ___types;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Type_t * L_19 = V_2;
		NullCheck(L_19);
		Type_t * L_20 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_19);
		bool L_21 = Default_check_type_m5916(NULL /*static, unused*/, (*(Type_t **)(Type_t **)SZArrayLdElema(L_16, L_18)), L_20, /*hidden argument*/NULL);
		V_1 = L_21;
	}

IL_003b:
	{
		bool L_22 = V_1;
		if (L_22)
		{
			goto IL_0040;
		}
	}
	{
		return 0;
	}

IL_0040:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0044:
	{
		int32_t L_24 = V_0;
		TypeU5BU5D_t196* L_25 = ___types;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodBase_t379 * Default_SelectMethod_m5918 (Default_t1079 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1433* ___match, TypeU5BU5D_t196* ___types, ParameterModifierU5BU5D_t377* ___modifiers, const MethodInfo* method)
{
	{
		int32_t L_0 = ___bindingAttr;
		MethodBaseU5BU5D_t1433* L_1 = ___match;
		TypeU5BU5D_t196* L_2 = ___types;
		ParameterModifierU5BU5D_t377* L_3 = ___modifiers;
		MethodBase_t379 * L_4 = Default_SelectMethod_m5919(__this, L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[],System.Boolean)
extern const Il2CppType* ParamArrayAttribute_t384_0_0_0_var;
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodBase_t379 * Default_SelectMethod_m5919 (Default_t1079 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1433* ___match, TypeU5BU5D_t196* ___types, ParameterModifierU5BU5D_t377* ___modifiers, bool ___allowByRefMatch, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t384_0_0_0_var = il2cpp_codegen_type_from_index(227);
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t379 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ParameterInfoU5BU5D_t369* V_3 = {0};
	bool V_4 = false;
	Type_t * V_5 = {0};
	ParameterInfoU5BU5D_t369* V_6 = {0};
	MethodBase_t379 * V_7 = {0};
	ParameterInfoU5BU5D_t369* V_8 = {0};
	{
		MethodBaseU5BU5D_t1433* L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral1096, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		V_1 = 0;
		goto IL_0050;
	}

IL_0012:
	{
		MethodBaseU5BU5D_t1433* L_2 = ___match;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(MethodBase_t379 **)(MethodBase_t379 **)SZArrayLdElema(L_2, L_4));
		MethodBase_t379 * L_5 = V_0;
		NullCheck(L_5);
		ParameterInfoU5BU5D_t369* L_6 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_5);
		V_3 = L_6;
		ParameterInfoU5BU5D_t369* L_7 = V_3;
		NullCheck(L_7);
		TypeU5BU5D_t196* L_8 = ___types;
		NullCheck(L_8);
		if ((((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_004c;
	}

IL_0027:
	{
		V_2 = 0;
		goto IL_003e;
	}

IL_002b:
	{
		TypeU5BU5D_t196* L_9 = ___types;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		ParameterInfoU5BU5D_t369* L_12 = V_3;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_12, L_14)));
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_12, L_14)));
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_9, L_11))) == ((Object_t*)(Type_t *)L_15)))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0044;
	}

IL_003a:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_17 = V_2;
		TypeU5BU5D_t196* L_18 = ___types;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_002b;
		}
	}

IL_0044:
	{
		int32_t L_19 = V_2;
		TypeU5BU5D_t196* L_20 = ___types;
		NullCheck(L_20);
		if ((!(((uint32_t)L_19) == ((uint32_t)(((int32_t)(((Array_t *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		MethodBase_t379 * L_21 = V_0;
		return L_21;
	}

IL_004c:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_23 = V_1;
		MethodBaseU5BU5D_t1433* L_24 = ___match;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_4 = 0;
		V_5 = (Type_t *)NULL;
		V_1 = 0;
		goto IL_0102;
	}

IL_0063:
	{
		MethodBaseU5BU5D_t1433* L_25 = ___match;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = L_26;
		V_0 = (*(MethodBase_t379 **)(MethodBase_t379 **)SZArrayLdElema(L_25, L_27));
		MethodBase_t379 * L_28 = V_0;
		NullCheck(L_28);
		ParameterInfoU5BU5D_t369* L_29 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_28);
		V_6 = L_29;
		ParameterInfoU5BU5D_t369* L_30 = V_6;
		NullCheck(L_30);
		TypeU5BU5D_t196* L_31 = ___types;
		NullCheck(L_31);
		if ((((int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))) <= ((int32_t)(((int32_t)(((Array_t *)L_31)->max_length))))))
		{
			goto IL_007d;
		}
	}
	{
		goto IL_00fe;
	}

IL_007d:
	{
		ParameterInfoU5BU5D_t369* L_32 = V_6;
		NullCheck(L_32);
		if ((((int32_t)(((Array_t *)L_32)->max_length))))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_00fe;
	}

IL_0088:
	{
		ParameterInfoU5BU5D_t369* L_33 = V_6;
		ParameterInfoU5BU5D_t369* L_34 = V_6;
		NullCheck(L_34);
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))-(int32_t)1)));
		int32_t L_35 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(ParamArrayAttribute_t384_0_0_0_var), /*hidden argument*/NULL);
		bool L_37 = Attribute_IsDefined_m3629(NULL /*static, unused*/, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_33, L_35)), L_36, /*hidden argument*/NULL);
		V_4 = L_37;
		bool L_38 = V_4;
		if (L_38)
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_00fe;
	}

IL_00a8:
	{
		ParameterInfoU5BU5D_t369* L_39 = V_6;
		ParameterInfoU5BU5D_t369* L_40 = V_6;
		NullCheck(L_40);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_40)->max_length)))-(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_40)->max_length)))-(int32_t)1));
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_39, L_41)));
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_39, L_41)));
		NullCheck(L_42);
		Type_t * L_43 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_42);
		V_5 = L_43;
		V_2 = 0;
		goto IL_00f0;
	}

IL_00c1:
	{
		int32_t L_44 = V_2;
		ParameterInfoU5BU5D_t369* L_45 = V_6;
		NullCheck(L_45);
		if ((((int32_t)L_44) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_45)->max_length)))-(int32_t)1)))))
		{
			goto IL_00da;
		}
	}
	{
		TypeU5BU5D_t196* L_46 = ___types;
		int32_t L_47 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		ParameterInfoU5BU5D_t369* L_49 = V_6;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = L_50;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_49, L_51)));
		Type_t * L_52 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_49, L_51)));
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_46, L_48))) == ((Object_t*)(Type_t *)L_52)))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_00f6;
	}

IL_00da:
	{
		int32_t L_53 = V_2;
		ParameterInfoU5BU5D_t369* L_54 = V_6;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_54)->max_length)))-(int32_t)1)))))
		{
			goto IL_00ec;
		}
	}
	{
		TypeU5BU5D_t196* L_55 = ___types;
		int32_t L_56 = V_2;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		int32_t L_57 = L_56;
		Type_t * L_58 = V_5;
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_55, L_57))) == ((Object_t*)(Type_t *)L_58)))
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_00f6;
	}

IL_00ec:
	{
		int32_t L_59 = V_2;
		V_2 = ((int32_t)((int32_t)L_59+(int32_t)1));
	}

IL_00f0:
	{
		int32_t L_60 = V_2;
		TypeU5BU5D_t196* L_61 = ___types;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)(((int32_t)(((Array_t *)L_61)->max_length))))))
		{
			goto IL_00c1;
		}
	}

IL_00f6:
	{
		int32_t L_62 = V_2;
		TypeU5BU5D_t196* L_63 = ___types;
		NullCheck(L_63);
		if ((!(((uint32_t)L_62) == ((uint32_t)(((int32_t)(((Array_t *)L_63)->max_length)))))))
		{
			goto IL_00fe;
		}
	}
	{
		MethodBase_t379 * L_64 = V_0;
		return L_64;
	}

IL_00fe:
	{
		int32_t L_65 = V_1;
		V_1 = ((int32_t)((int32_t)L_65+(int32_t)1));
	}

IL_0102:
	{
		int32_t L_66 = V_1;
		MethodBaseU5BU5D_t1433* L_67 = ___match;
		NullCheck(L_67);
		if ((((int32_t)L_66) < ((int32_t)(((int32_t)(((Array_t *)L_67)->max_length))))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_68 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_68&(int32_t)((int32_t)65536))))
		{
			goto IL_0116;
		}
	}
	{
		return (MethodBase_t379 *)NULL;
	}

IL_0116:
	{
		V_7 = (MethodBase_t379 *)NULL;
		V_1 = 0;
		goto IL_015b;
	}

IL_011d:
	{
		MethodBaseU5BU5D_t1433* L_69 = ___match;
		int32_t L_70 = V_1;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		int32_t L_71 = L_70;
		V_0 = (*(MethodBase_t379 **)(MethodBase_t379 **)SZArrayLdElema(L_69, L_71));
		MethodBase_t379 * L_72 = V_0;
		NullCheck(L_72);
		ParameterInfoU5BU5D_t369* L_73 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_72);
		V_8 = L_73;
		ParameterInfoU5BU5D_t369* L_74 = V_8;
		NullCheck(L_74);
		TypeU5BU5D_t196* L_75 = ___types;
		NullCheck(L_75);
		if ((((int32_t)(((int32_t)(((Array_t *)L_74)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_75)->max_length))))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0157;
	}

IL_0134:
	{
		TypeU5BU5D_t196* L_76 = ___types;
		ParameterInfoU5BU5D_t369* L_77 = V_8;
		bool L_78 = ___allowByRefMatch;
		bool L_79 = Default_check_arguments_m5917(NULL /*static, unused*/, L_76, L_77, L_78, /*hidden argument*/NULL);
		if (L_79)
		{
			goto IL_0142;
		}
	}
	{
		goto IL_0157;
	}

IL_0142:
	{
		MethodBase_t379 * L_80 = V_7;
		if (!L_80)
		{
			goto IL_0154;
		}
	}
	{
		MethodBase_t379 * L_81 = V_7;
		MethodBase_t379 * L_82 = V_0;
		TypeU5BU5D_t196* L_83 = ___types;
		MethodBase_t379 * L_84 = Default_GetBetterMethod_m5920(__this, L_81, L_82, L_83, /*hidden argument*/NULL);
		V_7 = L_84;
		goto IL_0157;
	}

IL_0154:
	{
		MethodBase_t379 * L_85 = V_0;
		V_7 = L_85;
	}

IL_0157:
	{
		int32_t L_86 = V_1;
		V_1 = ((int32_t)((int32_t)L_86+(int32_t)1));
	}

IL_015b:
	{
		int32_t L_87 = V_1;
		MethodBaseU5BU5D_t1433* L_88 = ___match;
		NullCheck(L_88);
		if ((((int32_t)L_87) < ((int32_t)(((int32_t)(((Array_t *)L_88)->max_length))))))
		{
			goto IL_011d;
		}
	}
	{
		MethodBase_t379 * L_89 = V_7;
		return L_89;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::GetBetterMethod(System.Reflection.MethodBase,System.Reflection.MethodBase,System.Type[])
extern TypeInfo* AmbiguousMatchException_t1072_il2cpp_TypeInfo_var;
extern "C" MethodBase_t379 * Default_GetBetterMethod_m5920 (Default_t1079 * __this, MethodBase_t379 * ___m1, MethodBase_t379 * ___m2, TypeU5BU5D_t196* ___types, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AmbiguousMatchException_t1072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1992);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t369* V_0 = {0};
	ParameterInfoU5BU5D_t369* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Type_t * V_5 = {0};
	Type_t * V_6 = {0};
	bool V_7 = false;
	bool V_8 = false;
	MethodBase_t379 * G_B19_0 = {0};
	{
		MethodBase_t379 * L_0 = ___m1;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition() */, L_0);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		MethodBase_t379 * L_2 = ___m2;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition() */, L_2);
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		MethodBase_t379 * L_4 = ___m2;
		return L_4;
	}

IL_0012:
	{
		MethodBase_t379 * L_5 = ___m2;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition() */, L_5);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		MethodBase_t379 * L_7 = ___m1;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition() */, L_7);
		if (L_8)
		{
			goto IL_0024;
		}
	}
	{
		MethodBase_t379 * L_9 = ___m1;
		return L_9;
	}

IL_0024:
	{
		MethodBase_t379 * L_10 = ___m1;
		NullCheck(L_10);
		ParameterInfoU5BU5D_t369* L_11 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
		V_0 = L_11;
		MethodBase_t379 * L_12 = ___m2;
		NullCheck(L_12);
		ParameterInfoU5BU5D_t369* L_13 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_12);
		V_1 = L_13;
		V_2 = 0;
		V_3 = 0;
		goto IL_006d;
	}

IL_0038:
	{
		ParameterInfoU5BU5D_t369* L_14 = V_0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_14, L_16)));
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_14, L_16)));
		ParameterInfoU5BU5D_t369* L_18 = V_1;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_18, L_20)));
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_18, L_20)));
		int32_t L_22 = Default_CompareCloserType_m5921(__this, L_17, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		int32_t L_23 = V_4;
		if (!L_23)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_24 = V_2;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_4;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}
	{
		AmbiguousMatchException_t1072 * L_27 = (AmbiguousMatchException_t1072 *)il2cpp_codegen_object_new (AmbiguousMatchException_t1072_il2cpp_TypeInfo_var);
		AmbiguousMatchException__ctor_m5871(L_27, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}

IL_0062:
	{
		int32_t L_28 = V_4;
		if (!L_28)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_29 = V_4;
		V_2 = L_29;
	}

IL_0069:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_006d:
	{
		int32_t L_31 = V_3;
		ParameterInfoU5BU5D_t369* L_32 = V_0;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_33 = V_2;
		if (!L_33)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_34 = V_2;
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		MethodBase_t379 * L_35 = ___m2;
		G_B19_0 = L_35;
		goto IL_007e;
	}

IL_007d:
	{
		MethodBase_t379 * L_36 = ___m1;
		G_B19_0 = L_36;
	}

IL_007e:
	{
		return G_B19_0;
	}

IL_007f:
	{
		MethodBase_t379 * L_37 = ___m1;
		NullCheck(L_37);
		Type_t * L_38 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_37);
		V_5 = L_38;
		MethodBase_t379 * L_39 = ___m2;
		NullCheck(L_39);
		Type_t * L_40 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_39);
		V_6 = L_40;
		Type_t * L_41 = V_5;
		Type_t * L_42 = V_6;
		if ((((Object_t*)(Type_t *)L_41) == ((Object_t*)(Type_t *)L_42)))
		{
			goto IL_00af;
		}
	}
	{
		Type_t * L_43 = V_5;
		Type_t * L_44 = V_6;
		NullCheck(L_43);
		bool L_45 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(38 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_43, L_44);
		if (!L_45)
		{
			goto IL_00a2;
		}
	}
	{
		MethodBase_t379 * L_46 = ___m1;
		return L_46;
	}

IL_00a2:
	{
		Type_t * L_47 = V_6;
		Type_t * L_48 = V_5;
		NullCheck(L_47);
		bool L_49 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(38 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_47, L_48);
		if (!L_49)
		{
			goto IL_00af;
		}
	}
	{
		MethodBase_t379 * L_50 = ___m2;
		return L_50;
	}

IL_00af:
	{
		MethodBase_t379 * L_51 = ___m1;
		NullCheck(L_51);
		int32_t L_52 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_51);
		V_7 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_52&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		MethodBase_t379 * L_53 = ___m2;
		NullCheck(L_53);
		int32_t L_54 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_53);
		V_8 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_54&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_55 = V_7;
		if (!L_55)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_00d9;
		}
	}
	{
		MethodBase_t379 * L_57 = ___m2;
		return L_57;
	}

IL_00d9:
	{
		bool L_58 = V_8;
		if (!L_58)
		{
			goto IL_00e3;
		}
	}
	{
		bool L_59 = V_7;
		if (L_59)
		{
			goto IL_00e3;
		}
	}
	{
		MethodBase_t379 * L_60 = ___m1;
		return L_60;
	}

IL_00e3:
	{
		AmbiguousMatchException_t1072 * L_61 = (AmbiguousMatchException_t1072 *)il2cpp_codegen_object_new (AmbiguousMatchException_t1072_il2cpp_TypeInfo_var);
		AmbiguousMatchException__ctor_m5871(L_61, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_61);
	}
}
// System.Int32 System.Reflection.Binder/Default::CompareCloserType(System.Type,System.Type)
extern const MethodInfo* Array_IndexOf_TisType_t_m8093_MethodInfo_var;
extern "C" int32_t Default_CompareCloserType_m5921 (Default_t1079 * __this, Type_t * ___t1, Type_t * ___t2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Array_IndexOf_TisType_t_m8093_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483739);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___t1;
		Type_t * L_1 = ___t2;
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		Type_t * L_2 = ___t1;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(79 /* System.Boolean System.Type::get_IsGenericParameter() */, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Type_t * L_4 = ___t2;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(79 /* System.Boolean System.Type::get_IsGenericParameter() */, L_4);
		if (L_5)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		Type_t * L_6 = ___t1;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(79 /* System.Boolean System.Type::get_IsGenericParameter() */, L_6);
		if (L_7)
		{
			goto IL_002a;
		}
	}
	{
		Type_t * L_8 = ___t2;
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(79 /* System.Boolean System.Type::get_IsGenericParameter() */, L_8);
		if (!L_9)
		{
			goto IL_002a;
		}
	}
	{
		return (-1);
	}

IL_002a:
	{
		Type_t * L_10 = ___t1;
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Type::get_HasElementType() */, L_10);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		Type_t * L_12 = ___t2;
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Type::get_HasElementType() */, L_12);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		Type_t * L_14 = ___t1;
		NullCheck(L_14);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_14);
		Type_t * L_16 = ___t2;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_16);
		int32_t L_18 = Default_CompareCloserType_m5921(__this, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_004d:
	{
		Type_t * L_19 = ___t1;
		Type_t * L_20 = ___t2;
		NullCheck(L_19);
		bool L_21 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(38 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_19, L_20);
		if (!L_21)
		{
			goto IL_0058;
		}
	}
	{
		return (-1);
	}

IL_0058:
	{
		Type_t * L_22 = ___t2;
		Type_t * L_23 = ___t1;
		NullCheck(L_22);
		bool L_24 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(38 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_22, L_23);
		if (!L_24)
		{
			goto IL_0063;
		}
	}
	{
		return 1;
	}

IL_0063:
	{
		Type_t * L_25 = ___t1;
		NullCheck(L_25);
		bool L_26 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_25);
		if (!L_26)
		{
			goto IL_007c;
		}
	}
	{
		Type_t * L_27 = ___t2;
		NullCheck(L_27);
		TypeU5BU5D_t196* L_28 = (TypeU5BU5D_t196*)VirtFuncInvoker0< TypeU5BU5D_t196* >::Invoke(39 /* System.Type[] System.Type::GetInterfaces() */, L_27);
		Type_t * L_29 = ___t1;
		int32_t L_30 = Array_IndexOf_TisType_t_m8093(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/Array_IndexOf_TisType_t_m8093_MethodInfo_var);
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		return 1;
	}

IL_007c:
	{
		Type_t * L_31 = ___t2;
		NullCheck(L_31);
		bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_31);
		if (!L_32)
		{
			goto IL_0095;
		}
	}
	{
		Type_t * L_33 = ___t1;
		NullCheck(L_33);
		TypeU5BU5D_t196* L_34 = (TypeU5BU5D_t196*)VirtFuncInvoker0< TypeU5BU5D_t196* >::Invoke(39 /* System.Type[] System.Type::GetInterfaces() */, L_33);
		Type_t * L_35 = ___t2;
		int32_t L_36 = Array_IndexOf_TisType_t_m8093(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/Array_IndexOf_TisType_t_m8093_MethodInfo_var);
		if ((((int32_t)L_36) < ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		return (-1);
	}

IL_0095:
	{
		return 0;
	}
}
// System.Reflection.PropertyInfo System.Reflection.Binder/Default::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* Binder_t376_il2cpp_TypeInfo_var;
extern TypeInfo* AmbiguousMatchException_t1072_il2cpp_TypeInfo_var;
extern "C" PropertyInfo_t * Default_SelectProperty_m5922 (Default_t1079 * __this, int32_t ___bindingAttr, PropertyInfoU5BU5D_t372* ___match, Type_t * ___returnType, TypeU5BU5D_t196* ___indexes, ParameterModifierU5BU5D_t377* ___modifiers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Binder_t376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1995);
		AmbiguousMatchException_t1072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1992);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	PropertyInfo_t * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	PropertyInfo_t * V_7 = {0};
	ParameterInfoU5BU5D_t369* V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B6_0 = 0;
	{
		PropertyInfoU5BU5D_t372* L_0 = ___match;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		PropertyInfoU5BU5D_t372* L_1 = ___match;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_0018;
		}
	}

IL_0008:
	{
		ArgumentException_t313 * L_2 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2383(L_2, (String_t*) &_stringLiteral1587, (String_t*) &_stringLiteral1096, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		Type_t * L_3 = ___returnType;
		V_0 = ((((int32_t)((((Object_t*)(Type_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		TypeU5BU5D_t196* L_4 = ___indexes;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		TypeU5BU5D_t196* L_5 = ___indexes;
		NullCheck(L_5);
		G_B6_0 = (((int32_t)(((Array_t *)L_5)->max_length)));
		goto IL_002b;
	}

IL_002a:
	{
		G_B6_0 = (-1);
	}

IL_002b:
	{
		V_1 = G_B6_0;
		V_2 = (PropertyInfo_t *)NULL;
		V_4 = ((int32_t)2147483646);
		V_5 = ((int32_t)2147483647);
		V_6 = 0;
		PropertyInfoU5BU5D_t372* L_6 = ___match;
		NullCheck(L_6);
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))-(int32_t)1));
		goto IL_00d6;
	}

IL_004a:
	{
		PropertyInfoU5BU5D_t372* L_7 = ___match;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_7 = (*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_7, L_9));
		PropertyInfo_t * L_10 = V_7;
		NullCheck(L_10);
		ParameterInfoU5BU5D_t369* L_11 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(20 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_10);
		V_8 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_13 = V_1;
		ParameterInfoU5BU5D_t369* L_14 = V_8;
		NullCheck(L_14);
		if ((((int32_t)L_13) == ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0068;
		}
	}
	{
		goto IL_00d2;
	}

IL_0068:
	{
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_0077;
		}
	}
	{
		PropertyInfo_t * L_16 = V_7;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_16);
		Type_t * L_18 = ___returnType;
		if ((((Object_t*)(Type_t *)L_17) == ((Object_t*)(Type_t *)L_18)))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_00d2;
	}

IL_0077:
	{
		V_9 = ((int32_t)2147483646);
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		TypeU5BU5D_t196* L_20 = ___indexes;
		ParameterInfoU5BU5D_t369* L_21 = V_8;
		int32_t L_22 = Default_check_arguments_with_score_m5923(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		V_9 = L_22;
		int32_t L_23 = V_9;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0094;
		}
	}
	{
		goto IL_00d2;
	}

IL_0094:
	{
		PropertyInfo_t * L_24 = V_7;
		NullCheck(L_24);
		Type_t * L_25 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t376_il2cpp_TypeInfo_var);
		int32_t L_26 = Binder_GetDerivedLevel_m5929(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		V_10 = L_26;
		PropertyInfo_t * L_27 = V_2;
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_9;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00d2;
	}

IL_00ad:
	{
		int32_t L_30 = V_4;
		int32_t L_31 = V_9;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_32 = V_6;
		int32_t L_33 = V_10;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_34 = V_9;
		V_5 = L_34;
		goto IL_00d2;
	}

IL_00bf:
	{
		int32_t L_35 = V_6;
		int32_t L_36 = V_10;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00d2;
	}

IL_00c7:
	{
		PropertyInfo_t * L_37 = V_7;
		V_2 = L_37;
		int32_t L_38 = V_9;
		V_4 = L_38;
		int32_t L_39 = V_10;
		V_6 = L_39;
	}

IL_00d2:
	{
		int32_t L_40 = V_3;
		V_3 = ((int32_t)((int32_t)L_40-(int32_t)1));
	}

IL_00d6:
	{
		int32_t L_41 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_42 = V_5;
		int32_t L_43 = V_4;
		if ((((int32_t)L_42) > ((int32_t)L_43)))
		{
			goto IL_00e9;
		}
	}
	{
		AmbiguousMatchException_t1072 * L_44 = (AmbiguousMatchException_t1072 *)il2cpp_codegen_object_new (AmbiguousMatchException_t1072_il2cpp_TypeInfo_var);
		AmbiguousMatchException__ctor_m5871(L_44, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_44);
	}

IL_00e9:
	{
		PropertyInfo_t * L_45 = V_2;
		return L_45;
	}
}
// System.Int32 System.Reflection.Binder/Default::check_arguments_with_score(System.Type[],System.Reflection.ParameterInfo[])
extern "C" int32_t Default_check_arguments_with_score_m5923 (Object_t * __this /* static, unused */, TypeU5BU5D_t196* ___types, ParameterInfoU5BU5D_t369* ___args, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_0027;
	}

IL_0006:
	{
		TypeU5BU5D_t196* L_0 = ___types;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		ParameterInfoU5BU5D_t369* L_3 = ___args;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_3, L_5)));
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_3, L_5)));
		int32_t L_7 = Default_check_type_with_score_m5924(NULL /*static, unused*/, (*(Type_t **)(Type_t **)SZArrayLdElema(L_0, L_2)), L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		return (-1);
	}

IL_001d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_11 = V_2;
		V_0 = L_11;
	}

IL_0023:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_13 = V_1;
		TypeU5BU5D_t196* L_14 = ___types;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 System.Reflection.Binder/Default::check_type_with_score(System.Type,System.Type)
extern const Il2CppType* Object_t_0_0_0_var;
extern const Il2CppType* Enum_t305_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" int32_t Default_check_type_with_score_m5924 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Enum_t305_0_0_0_var = il2cpp_codegen_type_from_index(176);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B63_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B76_0 = 0;
	int32_t G_B80_0 = 0;
	{
		Type_t * L_0 = ___from;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Type_t * L_1 = ___to;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_1);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_000f;
	}

IL_000e:
	{
		G_B4_0 = 0;
	}

IL_000f:
	{
		return G_B4_0;
	}

IL_0010:
	{
		Type_t * L_3 = ___from;
		Type_t * L_4 = ___to;
		if ((!(((Object_t*)(Type_t *)L_3) == ((Object_t*)(Type_t *)L_4))))
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		Type_t * L_5 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_5) == ((Object_t*)(Type_t *)L_6))))
		{
			goto IL_0025;
		}
	}
	{
		return 4;
	}

IL_0025:
	{
		Type_t * L_7 = ___from;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_8 = Type_GetTypeCode_m4353(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Type_t * L_9 = ___to;
		int32_t L_10 = Type_GetTypeCode_m4353(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_0;
		V_2 = L_11;
		int32_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 0)
		{
			goto IL_006a;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 1)
		{
			goto IL_00ec;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 2)
		{
			goto IL_0098;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 3)
		{
			goto IL_0175;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 4)
		{
			goto IL_0134;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 5)
		{
			goto IL_01ef;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 6)
		{
			goto IL_01b6;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 7)
		{
			goto IL_0228;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 8)
		{
			goto IL_0228;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 9)
		{
			goto IL_0252;
		}
	}
	{
		goto IL_025c;
	}

IL_006a:
	{
		int32_t L_13 = V_1;
		V_3 = L_13;
		int32_t L_14 = V_3;
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 0)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 1)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 2)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 3)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 4)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 5)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 6)
		{
			goto IL_0094;
		}
	}
	{
		goto IL_0096;
	}

IL_0092:
	{
		return 0;
	}

IL_0094:
	{
		return 2;
	}

IL_0096:
	{
		return (-1);
	}

IL_0098:
	{
		int32_t L_15 = V_1;
		V_3 = L_15;
		int32_t L_16 = V_3;
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 0)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 1)
		{
			goto IL_00d2;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 2)
		{
			goto IL_00d2;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 3)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 4)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 5)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 6)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 7)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 8)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 9)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 10)
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_00d2;
	}

IL_00d0:
	{
		return 2;
	}

IL_00d2:
	{
		Type_t * L_17 = ___from;
		NullCheck(L_17);
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_17);
		if (!L_18)
		{
			goto IL_00ea;
		}
	}
	{
		Type_t * L_19 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Enum_t305_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_19) == ((Object_t*)(Type_t *)L_20))))
		{
			goto IL_00ea;
		}
	}
	{
		G_B23_0 = 1;
		goto IL_00eb;
	}

IL_00ea:
	{
		G_B23_0 = (-1);
	}

IL_00eb:
	{
		return G_B23_0;
	}

IL_00ec:
	{
		int32_t L_21 = V_1;
		V_3 = L_21;
		int32_t L_22 = V_3;
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 0)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 1)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 2)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 3)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 4)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 5)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 6)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 7)
		{
			goto IL_0118;
		}
	}
	{
		goto IL_011a;
	}

IL_0118:
	{
		return 2;
	}

IL_011a:
	{
		Type_t * L_23 = ___from;
		NullCheck(L_23);
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_23);
		if (!L_24)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_25 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Enum_t305_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_25) == ((Object_t*)(Type_t *)L_26))))
		{
			goto IL_0132;
		}
	}
	{
		G_B31_0 = 1;
		goto IL_0133;
	}

IL_0132:
	{
		G_B31_0 = (-1);
	}

IL_0133:
	{
		return G_B31_0;
	}

IL_0134:
	{
		int32_t L_27 = V_1;
		V_3 = L_27;
		int32_t L_28 = V_3;
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_015b;
	}

IL_0159:
	{
		return 2;
	}

IL_015b:
	{
		Type_t * L_29 = ___from;
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_29);
		if (!L_30)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_31 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Enum_t305_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32))))
		{
			goto IL_0173;
		}
	}
	{
		G_B39_0 = 1;
		goto IL_0174;
	}

IL_0173:
	{
		G_B39_0 = (-1);
	}

IL_0174:
	{
		return G_B39_0;
	}

IL_0175:
	{
		int32_t L_33 = V_1;
		V_3 = L_33;
		int32_t L_34 = V_3;
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_019c;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_019c;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_019a;
		}
	}
	{
		goto IL_019c;
	}

IL_019a:
	{
		return 2;
	}

IL_019c:
	{
		Type_t * L_35 = ___from;
		NullCheck(L_35);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_35);
		if (!L_36)
		{
			goto IL_01b4;
		}
	}
	{
		Type_t * L_37 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Enum_t305_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_37) == ((Object_t*)(Type_t *)L_38))))
		{
			goto IL_01b4;
		}
	}
	{
		G_B47_0 = 1;
		goto IL_01b5;
	}

IL_01b4:
	{
		G_B47_0 = (-1);
	}

IL_01b5:
	{
		return G_B47_0;
	}

IL_01b6:
	{
		int32_t L_39 = V_1;
		V_3 = L_39;
		int32_t L_40 = V_3;
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_01d3;
		}
	}
	{
		goto IL_01d5;
	}

IL_01d3:
	{
		return 2;
	}

IL_01d5:
	{
		Type_t * L_41 = ___from;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_41);
		if (!L_42)
		{
			goto IL_01ed;
		}
	}
	{
		Type_t * L_43 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Enum_t305_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_43) == ((Object_t*)(Type_t *)L_44))))
		{
			goto IL_01ed;
		}
	}
	{
		G_B55_0 = 1;
		goto IL_01ee;
	}

IL_01ed:
	{
		G_B55_0 = (-1);
	}

IL_01ee:
	{
		return G_B55_0;
	}

IL_01ef:
	{
		int32_t L_45 = V_1;
		V_3 = L_45;
		int32_t L_46 = V_3;
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_020c;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_020e;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_020c;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_020e;
	}

IL_020c:
	{
		return 2;
	}

IL_020e:
	{
		Type_t * L_47 = ___from;
		NullCheck(L_47);
		bool L_48 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_47);
		if (!L_48)
		{
			goto IL_0226;
		}
	}
	{
		Type_t * L_49 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Enum_t305_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_49) == ((Object_t*)(Type_t *)L_50))))
		{
			goto IL_0226;
		}
	}
	{
		G_B63_0 = 1;
		goto IL_0227;
	}

IL_0226:
	{
		G_B63_0 = (-1);
	}

IL_0227:
	{
		return G_B63_0;
	}

IL_0228:
	{
		int32_t L_51 = V_1;
		V_3 = L_51;
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)13))))
		{
			goto IL_0236;
		}
	}
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)14))))
		{
			goto IL_0236;
		}
	}
	{
		goto IL_0238;
	}

IL_0236:
	{
		return 2;
	}

IL_0238:
	{
		Type_t * L_54 = ___from;
		NullCheck(L_54);
		bool L_55 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_54);
		if (!L_55)
		{
			goto IL_0250;
		}
	}
	{
		Type_t * L_56 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_57 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Enum_t305_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_56) == ((Object_t*)(Type_t *)L_57))))
		{
			goto IL_0250;
		}
	}
	{
		G_B72_0 = 1;
		goto IL_0251;
	}

IL_0250:
	{
		G_B72_0 = (-1);
	}

IL_0251:
	{
		return G_B72_0;
	}

IL_0252:
	{
		int32_t L_58 = V_1;
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_025a;
		}
	}
	{
		G_B76_0 = 2;
		goto IL_025b;
	}

IL_025a:
	{
		G_B76_0 = (-1);
	}

IL_025b:
	{
		return G_B76_0;
	}

IL_025c:
	{
		Type_t * L_59 = ___to;
		Type_t * L_60 = ___from;
		NullCheck(L_59);
		bool L_61 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_59, L_60);
		if (!L_61)
		{
			goto IL_0268;
		}
	}
	{
		G_B80_0 = 3;
		goto IL_0269;
	}

IL_0268:
	{
		G_B80_0 = (-1);
	}

IL_0269:
	{
		return G_B80_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountException.h"
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountExceptionMethodDeclarations.h"


// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m5925 (Binder_t376 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Binder::.cctor()
extern TypeInfo* Default_t1079_il2cpp_TypeInfo_var;
extern TypeInfo* Binder_t376_il2cpp_TypeInfo_var;
extern "C" void Binder__cctor_m5926 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Default_t1079_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2008);
		Binder_t376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1995);
		s_Il2CppMethodIntialized = true;
	}
	{
		Default_t1079 * L_0 = (Default_t1079 *)il2cpp_codegen_object_new (Default_t1079_il2cpp_TypeInfo_var);
		Default__ctor_m5910(L_0, /*hidden argument*/NULL);
		((Binder_t376_StaticFields*)Binder_t376_il2cpp_TypeInfo_var->static_fields)->___default_binder_0 = L_0;
		return;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
// System.Object System.Reflection.Binder::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
// System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object)
// System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.PropertyInfo System.Reflection.Binder::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern TypeInfo* Binder_t376_il2cpp_TypeInfo_var;
extern "C" Binder_t376 * Binder_get_DefaultBinder_m5927 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Binder_t376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1995);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t376_il2cpp_TypeInfo_var);
		Binder_t376 * L_0 = ((Binder_t376_StaticFields*)Binder_t376_il2cpp_TypeInfo_var->static_fields)->___default_binder_0;
		return L_0;
	}
}
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern TypeInfo* TargetParameterCountException_t1106_il2cpp_TypeInfo_var;
extern "C" bool Binder_ConvertArgs_m5928 (Object_t * __this /* static, unused */, Binder_t376 * ___binder, ObjectU5BU5D_t200* ___args, ParameterInfoU5BU5D_t369* ___pinfo, CultureInfo_t342 * ___culture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TargetParameterCountException_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2009);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		ObjectU5BU5D_t200* L_0 = ___args;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ParameterInfoU5BU5D_t369* L_1 = ___pinfo;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		TargetParameterCountException_t1106 * L_2 = (TargetParameterCountException_t1106 *)il2cpp_codegen_object_new (TargetParameterCountException_t1106_il2cpp_TypeInfo_var);
		TargetParameterCountException__ctor_m6146(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0010:
	{
		ParameterInfoU5BU5D_t369* L_3 = ___pinfo;
		NullCheck(L_3);
		ObjectU5BU5D_t200* L_4 = ___args;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		TargetParameterCountException_t1106 * L_5 = (TargetParameterCountException_t1106 *)il2cpp_codegen_object_new (TargetParameterCountException_t1106_il2cpp_TypeInfo_var);
		TargetParameterCountException__ctor_m6146(L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001e:
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0022:
	{
		Binder_t376 * L_6 = ___binder;
		ObjectU5BU5D_t200* L_7 = ___args;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		ParameterInfoU5BU5D_t369* L_10 = ___pinfo;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_10, L_12)));
		Type_t * L_13 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_10, L_12)));
		CultureInfo_t342 * L_14 = ___culture;
		NullCheck(L_6);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, Type_t *, CultureInfo_t342 * >::Invoke(5 /* System.Object System.Reflection.Binder::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo) */, L_6, (*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), L_13, L_14);
		V_1 = L_15;
		Object_t * L_16 = V_1;
		if (L_16)
		{
			goto IL_003f;
		}
	}
	{
		ObjectU5BU5D_t200* L_17 = ___args;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		if (!(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)))
		{
			goto IL_003f;
		}
	}
	{
		return 0;
	}

IL_003f:
	{
		ObjectU5BU5D_t200* L_20 = ___args;
		int32_t L_21 = V_0;
		Object_t * L_22 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		ArrayElementTypeCheck (L_20, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, L_21)) = (Object_t *)L_22;
		int32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_24 = V_0;
		ObjectU5BU5D_t200* L_25 = ___args;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}
}
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m5929 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	Type_t * V_0 = {0};
	int32_t V_1 = 0;
	{
		Type_t * L_0 = ___type;
		V_0 = L_0;
		V_1 = 1;
		goto IL_0011;
	}

IL_0006:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)1));
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_2);
		V_0 = L_3;
	}

IL_0011:
	{
		Type_t * L_4 = V_0;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_4);
		if (L_5)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern TypeInfo* Binder_t376_il2cpp_TypeInfo_var;
extern TypeInfo* AmbiguousMatchException_t1072_il2cpp_TypeInfo_var;
extern "C" MethodBase_t379 * Binder_FindMostDerivedMatch_m5930 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1433* ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Binder_t376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1995);
		AmbiguousMatchException_t1072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1992);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	MethodBase_t379 * V_4 = {0};
	int32_t V_5 = 0;
	ParameterInfoU5BU5D_t369* V_6 = {0};
	ParameterInfoU5BU5D_t369* V_7 = {0};
	bool V_8 = false;
	int32_t V_9 = 0;
	{
		V_0 = 0;
		V_1 = (-1);
		MethodBaseU5BU5D_t1433* L_0 = ___match;
		NullCheck(L_0);
		V_2 = (((int32_t)(((Array_t *)L_0)->max_length)));
		V_3 = 0;
		goto IL_009c;
	}

IL_000f:
	{
		MethodBaseU5BU5D_t1433* L_1 = ___match;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_4 = (*(MethodBase_t379 **)(MethodBase_t379 **)SZArrayLdElema(L_1, L_3));
		MethodBase_t379 * L_4 = V_4;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t376_il2cpp_TypeInfo_var);
		int32_t L_6 = Binder_GetDerivedLevel_m5929(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_5 = L_6;
		int32_t L_7 = V_5;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_002d;
		}
	}
	{
		AmbiguousMatchException_t1072 * L_9 = (AmbiguousMatchException_t1072 *)il2cpp_codegen_object_new (AmbiguousMatchException_t1072_il2cpp_TypeInfo_var);
		AmbiguousMatchException__ctor_m5871(L_9, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_002d:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		MethodBase_t379 * L_11 = V_4;
		NullCheck(L_11);
		ParameterInfoU5BU5D_t369* L_12 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_11);
		V_6 = L_12;
		MethodBaseU5BU5D_t1433* L_13 = ___match;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		NullCheck((*(MethodBase_t379 **)(MethodBase_t379 **)SZArrayLdElema(L_13, L_15)));
		ParameterInfoU5BU5D_t369* L_16 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, (*(MethodBase_t379 **)(MethodBase_t379 **)SZArrayLdElema(L_13, L_15)));
		V_7 = L_16;
		V_8 = 1;
		ParameterInfoU5BU5D_t369* L_17 = V_6;
		NullCheck(L_17);
		ParameterInfoU5BU5D_t369* L_18 = V_7;
		NullCheck(L_18);
		if ((((int32_t)(((int32_t)(((Array_t *)L_17)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0056;
		}
	}
	{
		V_8 = 0;
		goto IL_0084;
	}

IL_0056:
	{
		V_9 = 0;
		goto IL_007c;
	}

IL_005b:
	{
		ParameterInfoU5BU5D_t369* L_19 = V_6;
		int32_t L_20 = V_9;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_19, L_21)));
		Type_t * L_22 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_19, L_21)));
		ParameterInfoU5BU5D_t369* L_23 = V_7;
		int32_t L_24 = V_9;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_23, L_25)));
		Type_t * L_26 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_23, L_25)));
		if ((((Object_t*)(Type_t *)L_22) == ((Object_t*)(Type_t *)L_26)))
		{
			goto IL_0076;
		}
	}
	{
		V_8 = 0;
		goto IL_0084;
	}

IL_0076:
	{
		int32_t L_27 = V_9;
		V_9 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_28 = V_9;
		ParameterInfoU5BU5D_t369* L_29 = V_6;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)(((Array_t *)L_29)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_0084:
	{
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_008e;
		}
	}
	{
		AmbiguousMatchException_t1072 * L_31 = (AmbiguousMatchException_t1072 *)il2cpp_codegen_object_new (AmbiguousMatchException_t1072_il2cpp_TypeInfo_var);
		AmbiguousMatchException__ctor_m5871(L_31, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_008e:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_0;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_34 = V_5;
		V_0 = L_34;
		int32_t L_35 = V_3;
		V_1 = L_35;
	}

IL_0098:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_009c:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_000f;
		}
	}
	{
		MethodBaseU5BU5D_t1433* L_39 = ___match;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = L_40;
		return (*(MethodBase_t379 **)(MethodBase_t379 **)SZArrayLdElema(L_39, L_41));
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventionsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"


// System.Void System.Reflection.ConstructorInfo::.ctor()
extern "C" void ConstructorInfo__ctor_m5931 (ConstructorInfo_t202 * __this, const MethodInfo* method)
{
	{
		MethodBase__ctor_m5960(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.ConstructorInfo::.cctor()
extern TypeInfo* ConstructorInfo_t202_il2cpp_TypeInfo_var;
extern "C" void ConstructorInfo__cctor_m5932 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructorInfo_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ConstructorInfo_t202_StaticFields*)ConstructorInfo_t202_il2cpp_TypeInfo_var->static_fields)->___ConstructorName_0 = (String_t*) &_stringLiteral1588;
		((ConstructorInfo_t202_StaticFields*)ConstructorInfo_t202_il2cpp_TypeInfo_var->static_fields)->___TypeConstructorName_1 = (String_t*) &_stringLiteral1589;
		return;
	}
}
// System.Reflection.MemberTypes System.Reflection.ConstructorInfo::get_MemberType()
extern "C" int32_t ConstructorInfo_get_MemberType_m5933 (ConstructorInfo_t202 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
extern TypeInfo* ObjectU5BU5D_t200_il2cpp_TypeInfo_var;
extern "C" Object_t * ConstructorInfo_Invoke_m1293 (ConstructorInfo_t202 * __this, ObjectU5BU5D_t200* ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t200_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t200* L_0 = ___parameters;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		___parameters = ((ObjectU5BU5D_t200*)SZArrayNew(ObjectU5BU5D_t200_il2cpp_TypeInfo_var, 0));
	}

IL_000d:
	{
		ObjectU5BU5D_t200* L_1 = ___parameters;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker4< Object_t *, int32_t, Binder_t376 *, ObjectU5BU5D_t200*, CultureInfo_t342 * >::Invoke(27 /* System.Object System.Reflection.ConstructorInfo::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, __this, ((int32_t)512), (Binder_t376 *)NULL, L_1, (CultureInfo_t342 *)NULL);
		return L_2;
	}
}
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributes.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributesMethodDeclarations.h"



// System.Reflection.EventInfo/AddEventAdapter
#include "mscorlib_System_Reflection_EventInfo_AddEventAdapter.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.EventInfo/AddEventAdapter
#include "mscorlib_System_Reflection_EventInfo_AddEventAdapterMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"


// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
extern "C" void AddEventAdapter__ctor_m5934 (AddEventAdapter_t1083 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
extern "C" void AddEventAdapter_Invoke_m5935 (AddEventAdapter_t1083 * __this, Object_t * ____this, Delegate_t332 * ___dele, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AddEventAdapter_Invoke_m5935((AddEventAdapter_t1083 *)__this->___prev_9,____this, ___dele, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ____this, Delegate_t332 * ___dele, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,____this, ___dele,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ____this, Delegate_t332 * ___dele, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,____this, ___dele,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Delegate_t332 * ___dele, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(____this, ___dele,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AddEventAdapter_t1083(Il2CppObject* delegate, Object_t * ____this, Delegate_t332 * ___dele)
{
	// Marshaling of parameter '____this' to native representation
	Object_t * _____this_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
extern "C" Object_t * AddEventAdapter_BeginInvoke_m5936 (AddEventAdapter_t1083 * __this, Object_t * ____this, Delegate_t332 * ___dele, AsyncCallback_t45 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ____this;
	__d_args[1] = ___dele;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
extern "C" void AddEventAdapter_EndInvoke_m5937 (AddEventAdapter_t1083 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.EventInfo
#include "mscorlib_System_Reflection_EventInfoMethodDeclarations.h"



// System.Void System.Reflection.EventInfo::.ctor()
extern "C" void EventInfo__ctor_m5938 (EventInfo_t * __this, const MethodInfo* method)
{
	{
		MemberInfo__ctor_m4389(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.EventAttributes System.Reflection.EventInfo::get_Attributes()
// System.Type System.Reflection.EventInfo::get_EventHandlerType()
extern "C" Type_t * EventInfo_get_EventHandlerType_m5939 (EventInfo_t * __this, const MethodInfo* method)
{
	ParameterInfoU5BU5D_t369* V_0 = {0};
	MethodInfo_t * V_1 = {0};
	Type_t * V_2 = {0};
	{
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(16 /* System.Reflection.MethodInfo System.Reflection.EventInfo::GetAddMethod(System.Boolean) */, __this, 1);
		V_1 = L_0;
		MethodInfo_t * L_1 = V_1;
		NullCheck(L_1);
		ParameterInfoU5BU5D_t369* L_2 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t369* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ParameterInfoU5BU5D_t369* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_4, L_5)));
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_4, L_5)));
		V_2 = L_6;
		Type_t * L_7 = V_2;
		return L_7;
	}

IL_0020:
	{
		return (Type_t *)NULL;
	}
}
// System.Reflection.MemberTypes System.Reflection.EventInfo::get_MemberType()
extern "C" int32_t EventInfo_get_MemberType_m5940 (EventInfo_t * __this, const MethodInfo* method)
{
	{
		return (int32_t)(2);
	}
}
// System.Reflection.MethodInfo System.Reflection.EventInfo::GetAddMethod(System.Boolean)
#ifndef _MSC_VER
#else
#endif
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttribute.h"
// System.Runtime.InteropServices.FieldOffsetAttribute
#include "mscorlib_System_Runtime_InteropServices_FieldOffsetAttribute.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandleMethodDeclarations.h"
// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.FieldOffsetAttribute
#include "mscorlib_System_Runtime_InteropServices_FieldOffsetAttributeMethodDeclarations.h"


// System.Void System.Reflection.FieldInfo::.ctor()
extern "C" void FieldInfo__ctor_m5941 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		MemberInfo__ctor_m4389(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes()
// System.RuntimeFieldHandle System.Reflection.FieldInfo::get_FieldHandle()
// System.Type System.Reflection.FieldInfo::get_FieldType()
// System.Object System.Reflection.FieldInfo::GetValue(System.Object)
// System.Reflection.MemberTypes System.Reflection.FieldInfo::get_MemberType()
extern "C" int32_t FieldInfo_get_MemberType_m5942 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		return (int32_t)(4);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
extern "C" bool FieldInfo_get_IsLiteral_m5943 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
extern "C" bool FieldInfo_get_IsStatic_m5944 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
extern "C" bool FieldInfo_get_IsInitOnly_m5945 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
extern "C" bool FieldInfo_get_IsPublic_m5946 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized()
extern "C" bool FieldInfo_get_IsNotSerialized_m5947 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C" void FieldInfo_SetValue_m5948 (FieldInfo_t * __this, Object_t * ___obj, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = ___value;
		VirtActionInvoker5< Object_t *, Object_t *, int32_t, Binder_t376 *, CultureInfo_t342 * >::Invoke(23 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo) */, __this, L_0, L_1, 0, (Binder_t376 *)NULL, (CultureInfo_t342 *)NULL);
		return;
	}
}
// System.Reflection.FieldInfo System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)
extern "C" FieldInfo_t * FieldInfo_internal_from_handle_type_m5949 (Object_t * __this /* static, unused */, IntPtr_t ___field_handle, IntPtr_t ___type_handle, const MethodInfo* method)
{
	typedef FieldInfo_t * (*FieldInfo_internal_from_handle_type_m5949_ftn) (IntPtr_t, IntPtr_t);
	static FieldInfo_internal_from_handle_type_m5949_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FieldInfo_internal_from_handle_type_m5949_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(___field_handle, ___type_handle);
}
// System.Reflection.FieldInfo System.Reflection.FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" FieldInfo_t * FieldInfo_GetFieldFromHandle_m5950 (Object_t * __this /* static, unused */, RuntimeFieldHandle_t886  ___handle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = RuntimeFieldHandle_get_Value_m4394((&___handle), /*hidden argument*/NULL);
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_2 = IntPtr_op_Equality_m1319(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentException_t313 * L_3 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_3, (String_t*) &_stringLiteral1590, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		IntPtr_t L_4 = RuntimeFieldHandle_get_Value_m4394((&___handle), /*hidden argument*/NULL);
		IntPtr_t L_5 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		FieldInfo_t * L_6 = FieldInfo_internal_from_handle_type_m5949(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int32 System.Reflection.FieldInfo::GetFieldOffset()
extern TypeInfo* SystemException_t688_il2cpp_TypeInfo_var;
extern "C" int32_t FieldInfo_GetFieldOffset_m5951 (FieldInfo_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SystemException_t688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1017);
		s_Il2CppMethodIntialized = true;
	}
	{
		SystemException_t688 * L_0 = (SystemException_t688 *)il2cpp_codegen_object_new (SystemException_t688_il2cpp_TypeInfo_var);
		SystemException__ctor_m2521(L_0, (String_t*) &_stringLiteral1591, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::GetUnmanagedMarshal()
extern "C" UnmanagedMarshal_t1059 * FieldInfo_GetUnmanagedMarshal_m5952 (FieldInfo_t * __this, const MethodInfo* method)
{
	typedef UnmanagedMarshal_t1059 * (*FieldInfo_GetUnmanagedMarshal_m5952_ftn) (FieldInfo_t *);
	static FieldInfo_GetUnmanagedMarshal_m5952_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FieldInfo_GetUnmanagedMarshal_m5952_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::GetUnmanagedMarshal()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::get_UMarshal()
extern "C" UnmanagedMarshal_t1059 * FieldInfo_get_UMarshal_m5953 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		UnmanagedMarshal_t1059 * L_0 = FieldInfo_GetUnmanagedMarshal_m5952(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Object[] System.Reflection.FieldInfo::GetPseudoCustomAttributes()
extern TypeInfo* ObjectU5BU5D_t200_il2cpp_TypeInfo_var;
extern TypeInfo* NonSerializedAttribute_t1379_il2cpp_TypeInfo_var;
extern TypeInfo* FieldOffsetAttribute_t896_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* FieldInfo_GetPseudoCustomAttributes_m5954 (FieldInfo_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t200_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		NonSerializedAttribute_t1379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2010);
		FieldOffsetAttribute_t896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2011);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	UnmanagedMarshal_t1059 * V_1 = {0};
	ObjectU5BU5D_t200* V_2 = {0};
	{
		V_0 = 0;
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized() */, __this);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_000e:
	{
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, __this);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Type::get_IsExplicitLayout() */, L_2);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_001f:
	{
		UnmanagedMarshal_t1059 * L_5 = (UnmanagedMarshal_t1059 *)VirtFuncInvoker0< UnmanagedMarshal_t1059 * >::Invoke(26 /* System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::get_UMarshal() */, __this);
		V_1 = L_5;
		UnmanagedMarshal_t1059 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		return (ObjectU5BU5D_t200*)NULL;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_2 = ((ObjectU5BU5D_t200*)SZArrayNew(ObjectU5BU5D_t200_il2cpp_TypeInfo_var, L_9));
		V_0 = 0;
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized() */, __this);
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		ObjectU5BU5D_t200* L_11 = V_2;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
		NonSerializedAttribute_t1379 * L_14 = (NonSerializedAttribute_t1379 *)il2cpp_codegen_object_new (NonSerializedAttribute_t1379_il2cpp_TypeInfo_var);
		NonSerializedAttribute__ctor_m7811(L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, L_13)) = (Object_t *)L_14;
	}

IL_004f:
	{
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, __this);
		NullCheck(L_15);
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Type::get_IsExplicitLayout() */, L_15);
		if (!L_16)
		{
			goto IL_006e;
		}
	}
	{
		ObjectU5BU5D_t200* L_17 = V_2;
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 System.Reflection.FieldInfo::GetFieldOffset() */, __this);
		FieldOffsetAttribute_t896 * L_21 = (FieldOffsetAttribute_t896 *)il2cpp_codegen_object_new (FieldOffsetAttribute_t896_il2cpp_TypeInfo_var);
		FieldOffsetAttribute__ctor_m4414(L_21, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_19);
		ArrayElementTypeCheck (L_17, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)) = (Object_t *)L_21;
	}

IL_006e:
	{
		UnmanagedMarshal_t1059 * L_22 = V_1;
		if (!L_22)
		{
			goto IL_007e;
		}
	}
	{
		ObjectU5BU5D_t200* L_23 = V_2;
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)1));
		UnmanagedMarshal_t1059 * L_26 = V_1;
		NullCheck(L_26);
		MarshalAsAttribute_t889 * L_27 = UnmanagedMarshal_ToMarshalAsAttribute_m5870(L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_25);
		ArrayElementTypeCheck (L_23, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, L_25)) = (Object_t *)L_27;
	}

IL_007e:
	{
		ObjectU5BU5D_t200* L_28 = V_2;
		return L_28;
	}
}
// System.Reflection.MemberInfoSerializationHolder
#include "mscorlib_System_Reflection_MemberInfoSerializationHolder.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MemberInfoSerializationHolder
#include "mscorlib_System_Reflection_MemberInfoSerializationHolderMethodDeclarations.h"

// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationException.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationExceptionMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"


// System.Void System.Reflection.MemberInfoSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* SerializationException_t666_il2cpp_TypeInfo_var;
extern "C" void MemberInfoSerializationHolder__ctor_m5955 (MemberInfoSerializationHolder_t1085 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationException_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(935);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Assembly_t671 * V_2 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_0 = ___info;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m2399(L_0, (String_t*) &_stringLiteral1592, /*hidden argument*/NULL);
		V_0 = L_1;
		SerializationInfo_t310 * L_2 = ___info;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m2399(L_2, (String_t*) &_stringLiteral1120, /*hidden argument*/NULL);
		V_1 = L_3;
		SerializationInfo_t310 * L_4 = ___info;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m2399(L_4, (String_t*) &_stringLiteral1593, /*hidden argument*/NULL);
		__this->____memberName_0 = L_5;
		SerializationInfo_t310 * L_6 = ___info;
		NullCheck(L_6);
		String_t* L_7 = SerializationInfo_GetString_m2399(L_6, (String_t*) &_stringLiteral507, /*hidden argument*/NULL);
		__this->____memberSignature_1 = L_7;
		SerializationInfo_t310 * L_8 = ___info;
		NullCheck(L_8);
		int32_t L_9 = SerializationInfo_GetInt32_m2401(L_8, (String_t*) &_stringLiteral1594, /*hidden argument*/NULL);
		__this->____memberType_2 = L_9;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		__this->____genericArguments_4 = (TypeU5BU5D_t196*)NULL;
		goto IL_005d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SerializationException_t666_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_005a;
		throw e;
	}

CATCH_005a:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		goto IL_005d;
	} // end catch (depth: 1)

IL_005d:
	{
		String_t* L_10 = V_0;
		Assembly_t671 * L_11 = Assembly_Load_m5890(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		Assembly_t671 * L_12 = V_2;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		Type_t * L_14 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(12 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean) */, L_12, L_13, 1, 1);
		__this->____reflectedType_3 = L_14;
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes)
extern "C" void MemberInfoSerializationHolder_Serialize_m5956 (Object_t * __this /* static, unused */, SerializationInfo_t310 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, const MethodInfo* method)
{
	{
		SerializationInfo_t310 * L_0 = ___info;
		String_t* L_1 = ___name;
		Type_t * L_2 = ___klass;
		String_t* L_3 = ___signature;
		int32_t L_4 = ___type;
		MemberInfoSerializationHolder_Serialize_m5957(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, (TypeU5BU5D_t196*)(TypeU5BU5D_t196*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes,System.Type[])
extern const Il2CppType* MemberInfoSerializationHolder_t1085_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* TypeU5BU5D_t196_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void MemberInfoSerializationHolder_Serialize_m5957 (Object_t * __this /* static, unused */, SerializationInfo_t310 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, TypeU5BU5D_t196* ___genericArguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemberInfoSerializationHolder_t1085_0_0_0_var = il2cpp_codegen_type_from_index(2012);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(15);
		TypeU5BU5D_t196_0_0_0_var = il2cpp_codegen_type_from_index(164);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t310 * L_0 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(MemberInfoSerializationHolder_t1085_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m6565(L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_2 = ___info;
		Type_t * L_3 = ___klass;
		NullCheck(L_3);
		Module_t1065 * L_4 = (Module_t1065 *)VirtFuncInvoker0< Module_t1065 * >::Invoke(10 /* System.Reflection.Module System.Type::get_Module() */, L_3);
		NullCheck(L_4);
		Assembly_t671 * L_5 = Module_get_Assembly_m5987(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Reflection.Assembly::get_FullName() */, L_5);
		Type_t * L_7 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		SerializationInfo_AddValue_m2389(L_2, (String_t*) &_stringLiteral1592, L_6, L_7, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_8 = ___info;
		Type_t * L_9 = ___klass;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_9);
		Type_t * L_11 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_AddValue_m2389(L_8, (String_t*) &_stringLiteral1120, L_10, L_11, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_12 = ___info;
		String_t* L_13 = ___name;
		Type_t * L_14 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_12);
		SerializationInfo_AddValue_m2389(L_12, (String_t*) &_stringLiteral1593, L_13, L_14, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_15 = ___info;
		String_t* L_16 = ___signature;
		Type_t * L_17 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m2389(L_15, (String_t*) &_stringLiteral507, L_16, L_17, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_18 = ___info;
		int32_t L_19 = ___type;
		NullCheck(L_18);
		SerializationInfo_AddValue_m2391(L_18, (String_t*) &_stringLiteral1594, L_19, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_20 = ___info;
		TypeU5BU5D_t196* L_21 = ___genericArguments;
		Type_t * L_22 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(TypeU5BU5D_t196_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		SerializationInfo_AddValue_m2389(L_20, (String_t*) &_stringLiteral1595, (Object_t *)(Object_t *)L_21, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" void MemberInfoSerializationHolder_GetObjectData_m5958 (MemberInfoSerializationHolder_t1085 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2424(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object System.Reflection.MemberInfoSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t666_il2cpp_TypeInfo_var;
extern TypeInfo* MemberTypes_t1086_il2cpp_TypeInfo_var;
extern "C" Object_t * MemberInfoSerializationHolder_GetRealObject_m5959 (MemberInfoSerializationHolder_t1085 * __this, StreamingContext_t311  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		SerializationException_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(935);
		MemberTypes_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2013);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorInfoU5BU5D_t368* V_0 = {0};
	int32_t V_1 = 0;
	MethodInfoU5BU5D_t1091* V_2 = {0};
	int32_t V_3 = 0;
	MethodInfo_t * V_4 = {0};
	FieldInfo_t * V_5 = {0};
	PropertyInfo_t * V_6 = {0};
	EventInfo_t * V_7 = {0};
	int32_t V_8 = {0};
	{
		int32_t L_0 = (__this->____memberType_2);
		V_8 = L_0;
		int32_t L_1 = V_8;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_003f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_019e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_012e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_0090;
		}
	}

IL_0031:
	{
		int32_t L_2 = V_8;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01d6;
	}

IL_003f:
	{
		Type_t * L_3 = (__this->____reflectedType_3);
		NullCheck(L_3);
		ConstructorInfoU5BU5D_t368* L_4 = (ConstructorInfoU5BU5D_t368*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t368*, int32_t >::Invoke(71 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags) */, L_3, ((int32_t)60));
		V_0 = L_4;
		V_1 = 0;
		goto IL_006e;
	}

IL_0051:
	{
		ConstructorInfoU5BU5D_t368* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(ConstructorInfo_t202 **)(ConstructorInfo_t202 **)SZArrayLdElema(L_5, L_7)));
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*(ConstructorInfo_t202 **)(ConstructorInfo_t202 **)SZArrayLdElema(L_5, L_7)));
		String_t* L_9 = (__this->____memberSignature_1);
		NullCheck(L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_8, L_9);
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		ConstructorInfoU5BU5D_t368* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		return (*(ConstructorInfo_t202 **)(ConstructorInfo_t202 **)SZArrayLdElema(L_11, L_13));
	}

IL_006a:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_15 = V_1;
		ConstructorInfoU5BU5D_t368* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_17 = (__this->____memberSignature_1);
		Type_t * L_18 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m3946(NULL /*static, unused*/, (String_t*) &_stringLiteral1596, L_17, L_18, /*hidden argument*/NULL);
		SerializationException_t666 * L_20 = (SerializationException_t666 *)il2cpp_codegen_object_new (SerializationException_t666_il2cpp_TypeInfo_var);
		SerializationException__ctor_m2393(L_20, L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0090:
	{
		Type_t * L_21 = (__this->____reflectedType_3);
		NullCheck(L_21);
		MethodInfoU5BU5D_t1091* L_22 = (MethodInfoU5BU5D_t1091*)VirtFuncInvoker1< MethodInfoU5BU5D_t1091*, int32_t >::Invoke(51 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_21, ((int32_t)60));
		V_2 = L_22;
		V_3 = 0;
		goto IL_010c;
	}

IL_00a2:
	{
		MethodInfoU5BU5D_t1091* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_23, L_25)));
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_23, L_25)));
		String_t* L_27 = (__this->____memberSignature_1);
		NullCheck(L_26);
		bool L_28 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_26, L_27);
		if (!L_28)
		{
			goto IL_00bb;
		}
	}
	{
		MethodInfoU5BU5D_t1091* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		return (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_29, L_31));
	}

IL_00bb:
	{
		TypeU5BU5D_t196* L_32 = (__this->____genericArguments_4);
		if (!L_32)
		{
			goto IL_0108;
		}
	}
	{
		MethodInfoU5BU5D_t1091* L_33 = V_2;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = L_34;
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_33, L_35)));
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod() */, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_33, L_35)));
		if (!L_36)
		{
			goto IL_0108;
		}
	}
	{
		MethodInfoU5BU5D_t1091* L_37 = V_2;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = L_38;
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_37, L_39)));
		TypeU5BU5D_t196* L_40 = (TypeU5BU5D_t196*)VirtFuncInvoker0< TypeU5BU5D_t196* >::Invoke(23 /* System.Type[] System.Reflection.MethodInfo::GetGenericArguments() */, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_37, L_39)));
		NullCheck(L_40);
		TypeU5BU5D_t196* L_41 = (__this->____genericArguments_4);
		NullCheck(L_41);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_40)->max_length)))) == ((uint32_t)(((int32_t)(((Array_t *)L_41)->max_length)))))))
		{
			goto IL_0108;
		}
	}
	{
		MethodInfoU5BU5D_t1091* L_42 = V_2;
		int32_t L_43 = V_3;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		int32_t L_44 = L_43;
		TypeU5BU5D_t196* L_45 = (__this->____genericArguments_4);
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_42, L_44)));
		MethodInfo_t * L_46 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t196* >::Invoke(29 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_42, L_44)), L_45);
		V_4 = L_46;
		MethodInfo_t * L_47 = V_4;
		NullCheck(L_47);
		String_t* L_48 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_47);
		String_t* L_49 = (__this->____memberSignature_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_50 = String_op_Equality_m1163(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0108;
		}
	}
	{
		MethodInfo_t * L_51 = V_4;
		return L_51;
	}

IL_0108:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)((int32_t)L_52+(int32_t)1));
	}

IL_010c:
	{
		int32_t L_53 = V_3;
		MethodInfoU5BU5D_t1091* L_54 = V_2;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)(((Array_t *)L_54)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		String_t* L_55 = (__this->____memberSignature_1);
		Type_t * L_56 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_57 = String_Format_m3946(NULL /*static, unused*/, (String_t*) &_stringLiteral1597, L_55, L_56, /*hidden argument*/NULL);
		SerializationException_t666 * L_58 = (SerializationException_t666 *)il2cpp_codegen_object_new (SerializationException_t666_il2cpp_TypeInfo_var);
		SerializationException__ctor_m2393(L_58, L_57, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_58);
	}

IL_012e:
	{
		Type_t * L_59 = (__this->____reflectedType_3);
		String_t* L_60 = (__this->____memberName_0);
		NullCheck(L_59);
		FieldInfo_t * L_61 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_59, L_60, ((int32_t)60));
		V_5 = L_61;
		FieldInfo_t * L_62 = V_5;
		if (!L_62)
		{
			goto IL_014a;
		}
	}
	{
		FieldInfo_t * L_63 = V_5;
		return L_63;
	}

IL_014a:
	{
		String_t* L_64 = (__this->____memberName_0);
		Type_t * L_65 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_66 = String_Format_m3946(NULL /*static, unused*/, (String_t*) &_stringLiteral1598, L_64, L_65, /*hidden argument*/NULL);
		SerializationException_t666 * L_67 = (SerializationException_t666 *)il2cpp_codegen_object_new (SerializationException_t666_il2cpp_TypeInfo_var);
		SerializationException__ctor_m2393(L_67, L_66, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_67);
	}

IL_0166:
	{
		Type_t * L_68 = (__this->____reflectedType_3);
		String_t* L_69 = (__this->____memberName_0);
		NullCheck(L_68);
		PropertyInfo_t * L_70 = (PropertyInfo_t *)VirtFuncInvoker2< PropertyInfo_t *, String_t*, int32_t >::Invoke(53 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags) */, L_68, L_69, ((int32_t)60));
		V_6 = L_70;
		PropertyInfo_t * L_71 = V_6;
		if (!L_71)
		{
			goto IL_0182;
		}
	}
	{
		PropertyInfo_t * L_72 = V_6;
		return L_72;
	}

IL_0182:
	{
		String_t* L_73 = (__this->____memberName_0);
		Type_t * L_74 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_75 = String_Format_m3946(NULL /*static, unused*/, (String_t*) &_stringLiteral1599, L_73, L_74, /*hidden argument*/NULL);
		SerializationException_t666 * L_76 = (SerializationException_t666 *)il2cpp_codegen_object_new (SerializationException_t666_il2cpp_TypeInfo_var);
		SerializationException__ctor_m2393(L_76, L_75, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_76);
	}

IL_019e:
	{
		Type_t * L_77 = (__this->____reflectedType_3);
		String_t* L_78 = (__this->____memberName_0);
		NullCheck(L_77);
		EventInfo_t * L_79 = (EventInfo_t *)VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(43 /* System.Reflection.EventInfo System.Type::GetEvent(System.String,System.Reflection.BindingFlags) */, L_77, L_78, ((int32_t)60));
		V_7 = L_79;
		EventInfo_t * L_80 = V_7;
		if (!L_80)
		{
			goto IL_01ba;
		}
	}
	{
		EventInfo_t * L_81 = V_7;
		return L_81;
	}

IL_01ba:
	{
		String_t* L_82 = (__this->____memberName_0);
		Type_t * L_83 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_84 = String_Format_m3946(NULL /*static, unused*/, (String_t*) &_stringLiteral1600, L_82, L_83, /*hidden argument*/NULL);
		SerializationException_t666 * L_85 = (SerializationException_t666 *)il2cpp_codegen_object_new (SerializationException_t666_il2cpp_TypeInfo_var);
		SerializationException__ctor_m2393(L_85, L_84, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_85);
	}

IL_01d6:
	{
		int32_t L_86 = (__this->____memberType_2);
		int32_t L_87 = L_86;
		Object_t * L_88 = Box(MemberTypes_t1086_il2cpp_TypeInfo_var, &L_87);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_89 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1601, L_88, /*hidden argument*/NULL);
		SerializationException_t666 * L_90 = (SerializationException_t666 *)il2cpp_codegen_object_new (SerializationException_t666_il2cpp_TypeInfo_var);
		SerializationException__ctor_m2393(L_90, L_89, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_90);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandleMethodDeclarations.h"


// System.Void System.Reflection.MethodBase::.ctor()
extern "C" void MethodBase__ctor_m5960 (MethodBase_t379 * __this, const MethodInfo* method)
{
	{
		MemberInfo__ctor_m4389(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" MethodBase_t379 * MethodBase_GetMethodFromHandleNoGenericCheck_m5961 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t1387  ___handle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = RuntimeMethodHandle_get_Value_m7934((&___handle), /*hidden argument*/NULL);
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		MethodBase_t379 * L_2 = MethodBase_GetMethodFromIntPtr_m5962(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" MethodBase_t379 * MethodBase_GetMethodFromIntPtr_m5962 (Object_t * __this /* static, unused */, IntPtr_t ___handle, IntPtr_t ___declaringType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t379 * V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_2 = IntPtr_op_Equality_m1319(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t313 * L_3 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_3, (String_t*) &_stringLiteral1590, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		IntPtr_t L_4 = ___handle;
		IntPtr_t L_5 = ___declaringType;
		MethodBase_t379 * L_6 = MethodBase_GetMethodFromHandleInternalType_m5964(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		MethodBase_t379 * L_7 = V_0;
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_t313 * L_8 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_8, (String_t*) &_stringLiteral1590, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_002e:
	{
		MethodBase_t379 * L_9 = V_0;
		return L_9;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" MethodBase_t379 * MethodBase_GetMethodFromHandle_m5963 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t1387  ___handle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t379 * V_0 = {0};
	Type_t * V_1 = {0};
	{
		IntPtr_t L_0 = RuntimeMethodHandle_get_Value_m7934((&___handle), /*hidden argument*/NULL);
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		MethodBase_t379 * L_2 = MethodBase_GetMethodFromIntPtr_m5962(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		MethodBase_t379 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_3);
		V_1 = L_4;
		Type_t * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(77 /* System.Boolean System.Type::get_IsGenericType() */, L_5);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		Type_t * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(75 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_7);
		if (!L_8)
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		ArgumentException_t313 * L_9 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_9, (String_t*) &_stringLiteral1602, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0034:
	{
		MethodBase_t379 * L_10 = V_0;
		return L_10;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t379 * MethodBase_GetMethodFromHandleInternalType_m5964 (Object_t * __this /* static, unused */, IntPtr_t ___method_handle, IntPtr_t ___type_handle, const MethodInfo* method)
{
	typedef MethodBase_t379 * (*MethodBase_GetMethodFromHandleInternalType_m5964_ftn) (IntPtr_t, IntPtr_t);
	static MethodBase_GetMethodFromHandleInternalType_m5964_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MethodBase_GetMethodFromHandleInternalType_m5964_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(___method_handle, ___type_handle);
}
// System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters()
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C" Object_t * MethodBase_Invoke_m5965 (MethodBase_t379 * __this, Object_t * ___obj, ObjectU5BU5D_t200* ___parameters, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		ObjectU5BU5D_t200* L_1 = ___parameters;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t376 *, ObjectU5BU5D_t200*, CultureInfo_t342 * >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, __this, L_0, 0, (Binder_t376 *)NULL, L_1, (CultureInfo_t342 *)NULL);
		return L_2;
	}
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.RuntimeMethodHandle System.Reflection.MethodBase::get_MethodHandle()
// System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes()
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
extern "C" int32_t MethodBase_get_CallingConvention_m5966 (MethodBase_t379 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C" bool MethodBase_get_IsPublic_m5967 (MethodBase_t379 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C" bool MethodBase_get_IsStatic_m5968 (MethodBase_t379 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern "C" bool MethodBase_get_IsVirtual_m5969 (MethodBase_t379 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t196* MethodBase_GetGenericArguments_m5970 (MethodBase_t379 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2424(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
extern "C" bool MethodBase_get_ContainsGenericParameters_m5971 (MethodBase_t379 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
extern "C" bool MethodBase_get_IsGenericMethodDefinition_m5972 (MethodBase_t379 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
extern "C" bool MethodBase_get_IsGenericMethod_m5973 (MethodBase_t379 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributes.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.MethodInfo::.ctor()
extern "C" void MethodInfo__ctor_m5974 (MethodInfo_t * __this, const MethodInfo* method)
{
	{
		MethodBase__ctor_m5960(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition()
// System.Reflection.MemberTypes System.Reflection.MethodInfo::get_MemberType()
extern "C" int32_t MethodInfo_get_MemberType_m5975 (MethodInfo_t * __this, const MethodInfo* method)
{
	{
		return (int32_t)(8);
	}
}
// System.Type System.Reflection.MethodInfo::get_ReturnType()
extern "C" Type_t * MethodInfo_get_ReturnType_m5976 (MethodInfo_t * __this, const MethodInfo* method)
{
	{
		return (Type_t *)NULL;
	}
}
// System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[])
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * MethodInfo_MakeGenericMethod_m5977 (MethodInfo_t * __this, TypeU5BU5D_t196* ___typeArguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = Object_GetType_m1176(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_0);
		NotSupportedException_t667 * L_2 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}
}
// System.Type[] System.Reflection.MethodInfo::GetGenericArguments()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t196* MethodInfo_GetGenericArguments_m5978 (MethodInfo_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t196* L_0 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		return L_0;
	}
}
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod()
extern "C" bool MethodInfo_get_IsGenericMethod_m5979 (MethodInfo_t * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethodDefinition()
extern "C" bool MethodInfo_get_IsGenericMethodDefinition_m5980 (MethodInfo_t * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodInfo::get_ContainsGenericParameters()
extern "C" bool MethodInfo_get_ContainsGenericParameters_m5981 (MethodInfo_t * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Reflection.Missing
#include "mscorlib_System_Reflection_Missing.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Missing
#include "mscorlib_System_Reflection_MissingMethodDeclarations.h"



// System.Void System.Reflection.Missing::.ctor()
extern "C" void Missing__ctor_m5982 (Missing_t1089 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Missing::.cctor()
extern TypeInfo* Missing_t1089_il2cpp_TypeInfo_var;
extern "C" void Missing__cctor_m5983 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Missing_t1089_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1873);
		s_Il2CppMethodIntialized = true;
	}
	{
		Missing_t1089 * L_0 = (Missing_t1089 *)il2cpp_codegen_object_new (Missing_t1089_il2cpp_TypeInfo_var);
		Missing__ctor_m5982(L_0, /*hidden argument*/NULL);
		((Missing_t1089_StaticFields*)Missing_t1089_il2cpp_TypeInfo_var->static_fields)->___Value_0 = L_0;
		return;
	}
}
// System.Void System.Reflection.Missing::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Missing_System_Runtime_Serialization_ISerializable_GetObjectData_m5984 (Missing_t1089 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilter.h"
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilterMethodDeclarations.h"
// System.UnitySerializationHolder
#include "mscorlib_System_UnitySerializationHolderMethodDeclarations.h"


// System.Void System.Reflection.Module::.ctor()
extern "C" void Module__ctor_m5985 (Module_t1065 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Module::.cctor()
extern TypeInfo* TypeFilter_t1090_il2cpp_TypeInfo_var;
extern TypeInfo* Module_t1065_il2cpp_TypeInfo_var;
extern const MethodInfo* Module_filter_by_type_name_m5994_MethodInfo_var;
extern const MethodInfo* Module_filter_by_type_name_ignore_case_m5995_MethodInfo_var;
extern "C" void Module__cctor_m5986 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeFilter_t1090_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2014);
		Module_t1065_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1987);
		Module_filter_by_type_name_m5994_MethodInfo_var = il2cpp_codegen_method_info_from_index(92);
		Module_filter_by_type_name_ignore_case_m5995_MethodInfo_var = il2cpp_codegen_method_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)Module_filter_by_type_name_m5994_MethodInfo_var };
		TypeFilter_t1090 * L_1 = (TypeFilter_t1090 *)il2cpp_codegen_object_new (TypeFilter_t1090_il2cpp_TypeInfo_var);
		TypeFilter__ctor_m8062(L_1, NULL, L_0, /*hidden argument*/NULL);
		((Module_t1065_StaticFields*)Module_t1065_il2cpp_TypeInfo_var->static_fields)->___FilterTypeName_1 = L_1;
		IntPtr_t L_2 = { (void*)Module_filter_by_type_name_ignore_case_m5995_MethodInfo_var };
		TypeFilter_t1090 * L_3 = (TypeFilter_t1090 *)il2cpp_codegen_object_new (TypeFilter_t1090_il2cpp_TypeInfo_var);
		TypeFilter__ctor_m8062(L_3, NULL, L_2, /*hidden argument*/NULL);
		((Module_t1065_StaticFields*)Module_t1065_il2cpp_TypeInfo_var->static_fields)->___FilterTypeNameIgnoreCase_2 = L_3;
		return;
	}
}
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C" Assembly_t671 * Module_get_Assembly_m5987 (Module_t1065 * __this, const MethodInfo* method)
{
	{
		Assembly_t671 * L_0 = (__this->___assembly_4);
		return L_0;
	}
}
// System.String System.Reflection.Module::get_ScopeName()
extern "C" String_t* Module_get_ScopeName_m5988 (Module_t1065 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___scopename_7);
		return L_0;
	}
}
// System.Object[] System.Reflection.Module::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* Module_GetCustomAttributes_m5989 (Module_t1065 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_2 = MonoCustomAttrs_GetCustomAttributes_m7749(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Reflection.Module::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" void Module_GetObjectData_m5990 (Module_t1065 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t310 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral269, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t310 * L_2 = ___info;
		StreamingContext_t311  L_3 = ___context;
		UnitySerializationHolder_GetModuleData_m8025(NULL /*static, unused*/, __this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Reflection.Module::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" bool Module_IsDefined_m5991 (Module_t1065 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		bool L_2 = MonoCustomAttrs_IsDefined_m7751(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Reflection.Module::IsResource()
extern "C" bool Module_IsResource_m5992 (Module_t1065 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___is_resource_8);
		return L_0;
	}
}
// System.String System.Reflection.Module::ToString()
extern "C" String_t* Module_ToString_m5993 (Module_t1065 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_6);
		return L_0;
	}
}
// System.Boolean System.Reflection.Module::filter_by_type_name(System.Type,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Module_filter_by_type_name_m5994 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___filterCriteria;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_EndsWith_m1307(L_1, (String_t*) &_stringLiteral577, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_3 = ___m;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5 = V_0;
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m1158(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_8 = String_Substring_m1197(L_5, 0, ((int32_t)((int32_t)L_7-(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_9 = String_StartsWith_m1207(L_4, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_002f:
	{
		Type_t * L_10 = ___m;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		String_t* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m1163(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Boolean System.Reflection.Module::filter_by_type_name_ignore_case(System.Type,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Module_filter_by_type_name_ignore_case_m5995 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___filterCriteria;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_EndsWith_m1307(L_1, (String_t*) &_stringLiteral577, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		Type_t * L_3 = ___m;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		NullCheck(L_4);
		String_t* L_5 = String_ToLower_m2534(L_4, /*hidden argument*/NULL);
		String_t* L_6 = V_0;
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m1158(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_9 = String_Substring_m1197(L_6, 0, ((int32_t)((int32_t)L_8-(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = String_ToLower_m2534(L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_11 = String_StartsWith_m1207(L_5, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0039:
	{
		Type_t * L_12 = ___m;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_15 = String_Compare_m3921(NULL /*static, unused*/, L_13, L_14, 1, /*hidden argument*/NULL);
		return ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
	}
}
// System.Reflection.MonoEventInfo
#include "mscorlib_System_Reflection_MonoEventInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoEventInfo
#include "mscorlib_System_Reflection_MonoEventInfoMethodDeclarations.h"

// System.Reflection.MonoEvent
#include "mscorlib_System_Reflection_MonoEvent.h"


// System.Void System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)
extern "C" void MonoEventInfo_get_event_info_m5996 (Object_t * __this /* static, unused */, MonoEvent_t * ___ev, MonoEventInfo_t1092 * ___info, const MethodInfo* method)
{
	typedef void (*MonoEventInfo_get_event_info_m5996_ftn) (MonoEvent_t *, MonoEventInfo_t1092 *);
	static MonoEventInfo_get_event_info_m5996_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoEventInfo_get_event_info_m5996_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)");
	_il2cpp_icall_func(___ev, ___info);
}
// System.Reflection.MonoEventInfo System.Reflection.MonoEventInfo::GetEventInfo(System.Reflection.MonoEvent)
extern "C" MonoEventInfo_t1092  MonoEventInfo_GetEventInfo_m5997 (Object_t * __this /* static, unused */, MonoEvent_t * ___ev, const MethodInfo* method)
{
	MonoEventInfo_t1092  V_0 = {0};
	{
		MonoEvent_t * L_0 = ___ev;
		MonoEventInfo_get_event_info_m5996(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		MonoEventInfo_t1092  L_1 = V_0;
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoEvent
#include "mscorlib_System_Reflection_MonoEventMethodDeclarations.h"



// System.Void System.Reflection.MonoEvent::.ctor()
extern "C" void MonoEvent__ctor_m5998 (MonoEvent_t * __this, const MethodInfo* method)
{
	{
		EventInfo__ctor_m5938(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.EventAttributes System.Reflection.MonoEvent::get_Attributes()
extern "C" int32_t MonoEvent_get_Attributes_m5999 (MonoEvent_t * __this, const MethodInfo* method)
{
	MonoEventInfo_t1092  V_0 = {0};
	{
		MonoEventInfo_t1092  L_0 = MonoEventInfo_GetEventInfo_m5997(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ((&V_0)->___attrs_6);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoEvent::GetAddMethod(System.Boolean)
extern "C" MethodInfo_t * MonoEvent_GetAddMethod_m6000 (MonoEvent_t * __this, bool ___nonPublic, const MethodInfo* method)
{
	MonoEventInfo_t1092  V_0 = {0};
	{
		MonoEventInfo_t1092  L_0 = MonoEventInfo_GetEventInfo_m5997(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = ___nonPublic;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		MethodInfo_t * L_2 = ((&V_0)->___add_method_3);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		MethodInfo_t * L_3 = ((&V_0)->___add_method_3);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_3);
		if (!L_4)
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		MethodInfo_t * L_5 = ((&V_0)->___add_method_3);
		return L_5;
	}

IL_0029:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Type System.Reflection.MonoEvent::get_DeclaringType()
extern "C" Type_t * MonoEvent_get_DeclaringType_m6001 (MonoEvent_t * __this, const MethodInfo* method)
{
	MonoEventInfo_t1092  V_0 = {0};
	{
		MonoEventInfo_t1092  L_0 = MonoEventInfo_GetEventInfo_m5997(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = ((&V_0)->___declaring_type_0);
		return L_1;
	}
}
// System.Type System.Reflection.MonoEvent::get_ReflectedType()
extern "C" Type_t * MonoEvent_get_ReflectedType_m6002 (MonoEvent_t * __this, const MethodInfo* method)
{
	MonoEventInfo_t1092  V_0 = {0};
	{
		MonoEventInfo_t1092  L_0 = MonoEventInfo_GetEventInfo_m5997(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = ((&V_0)->___reflected_type_1);
		return L_1;
	}
}
// System.String System.Reflection.MonoEvent::get_Name()
extern "C" String_t* MonoEvent_get_Name_m6003 (MonoEvent_t * __this, const MethodInfo* method)
{
	MonoEventInfo_t1092  V_0 = {0};
	{
		MonoEventInfo_t1092  L_0 = MonoEventInfo_GetEventInfo_m5997(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ((&V_0)->___name_2);
		return L_1;
	}
}
// System.String System.Reflection.MonoEvent::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoEvent_ToString_m6004 (MonoEvent_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(15 /* System.Type System.Reflection.EventInfo::get_EventHandlerType() */, __this);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoEvent::get_Name() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m2396(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral18, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoEvent::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" bool MonoEvent_IsDefined_m6005 (MonoEvent_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		bool L_2 = MonoCustomAttrs_IsDefined_m7751(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* MonoEvent_GetCustomAttributes_m6006 (MonoEvent_t * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_1 = MonoCustomAttrs_GetCustomAttributes_m7750(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* MonoEvent_GetCustomAttributes_m6007 (MonoEvent_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_2 = MonoCustomAttrs_GetCustomAttributes_m7749(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Reflection.MonoEvent::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoEvent_GetObjectData_m6008 (MonoEvent_t * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t310 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoEvent::get_Name() */, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MonoEvent::get_ReflectedType() */, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Reflection.MonoEvent::ToString() */, __this);
		MemberInfoSerializationHolder_Serialize_m5956(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MonoField
#include "mscorlib_System_Reflection_MonoField.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoField
#include "mscorlib_System_Reflection_MonoFieldMethodDeclarations.h"

// System.Reflection.TargetException
#include "mscorlib_System_Reflection_TargetException.h"
// System.FieldAccessException
#include "mscorlib_System_FieldAccessException.h"
// System.Reflection.TargetException
#include "mscorlib_System_Reflection_TargetExceptionMethodDeclarations.h"
// System.FieldAccessException
#include "mscorlib_System_FieldAccessExceptionMethodDeclarations.h"


// System.Void System.Reflection.MonoField::.ctor()
extern "C" void MonoField__ctor_m6009 (MonoField_t * __this, const MethodInfo* method)
{
	{
		FieldInfo__ctor_m5941(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.FieldAttributes System.Reflection.MonoField::get_Attributes()
extern "C" int32_t MonoField_get_Attributes_m6010 (MonoField_t * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_4);
		return L_0;
	}
}
// System.RuntimeFieldHandle System.Reflection.MonoField::get_FieldHandle()
extern "C" RuntimeFieldHandle_t886  MonoField_get_FieldHandle_m6011 (MonoField_t * __this, const MethodInfo* method)
{
	{
		RuntimeFieldHandle_t886  L_0 = (__this->___fhandle_1);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::get_FieldType()
extern "C" Type_t * MonoField_get_FieldType_m6012 (MonoField_t * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_3);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::GetParentType(System.Boolean)
extern "C" Type_t * MonoField_GetParentType_m6013 (MonoField_t * __this, bool ___declaring, const MethodInfo* method)
{
	typedef Type_t * (*MonoField_GetParentType_m6013_ftn) (MonoField_t *, bool);
	static MonoField_GetParentType_m6013_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetParentType_m6013_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetParentType(System.Boolean)");
	return _il2cpp_icall_func(__this, ___declaring);
}
// System.Type System.Reflection.MonoField::get_ReflectedType()
extern "C" Type_t * MonoField_get_ReflectedType_m6014 (MonoField_t * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = MonoField_GetParentType_m6013(__this, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::get_DeclaringType()
extern "C" Type_t * MonoField_get_DeclaringType_m6015 (MonoField_t * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = MonoField_GetParentType_m6013(__this, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Reflection.MonoField::get_Name()
extern "C" String_t* MonoField_get_Name_m6016 (MonoField_t * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return L_0;
	}
}
// System.Boolean System.Reflection.MonoField::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" bool MonoField_IsDefined_m6017 (MonoField_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		bool L_2 = MonoCustomAttrs_IsDefined_m7751(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* MonoField_GetCustomAttributes_m6018 (MonoField_t * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_1 = MonoCustomAttrs_GetCustomAttributes_m7750(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* MonoField_GetCustomAttributes_m6019 (MonoField_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_2 = MonoCustomAttrs_GetCustomAttributes_m7749(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Reflection.MonoField::GetFieldOffset()
extern "C" int32_t MonoField_GetFieldOffset_m6020 (MonoField_t * __this, const MethodInfo* method)
{
	typedef int32_t (*MonoField_GetFieldOffset_m6020_ftn) (MonoField_t *);
	static MonoField_GetFieldOffset_m6020_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetFieldOffset_m6020_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetFieldOffset()");
	return _il2cpp_icall_func(__this);
}
// System.Object System.Reflection.MonoField::GetValueInternal(System.Object)
extern "C" Object_t * MonoField_GetValueInternal_m6021 (MonoField_t * __this, Object_t * ___obj, const MethodInfo* method)
{
	typedef Object_t * (*MonoField_GetValueInternal_m6021_ftn) (MonoField_t *, Object_t *);
	static MonoField_GetValueInternal_m6021_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetValueInternal_m6021_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetValueInternal(System.Object)");
	return _il2cpp_icall_func(__this, ___obj);
}
// System.Object System.Reflection.MonoField::GetValue(System.Object)
extern TypeInfo* TargetException_t1104_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoField_GetValue_m6022 (MonoField_t * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TargetException_t1104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2015);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Object_t * L_1 = ___obj;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		TargetException_t1104 * L_2 = (TargetException_t1104 *)il2cpp_codegen_object_new (TargetException_t1104_il2cpp_TypeInfo_var);
		TargetException__ctor_m6142(L_2, (String_t*) &_stringLiteral1603, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.FieldInfo::get_IsLiteral() */, __this);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		MonoField_CheckGeneric_m6027(__this, /*hidden argument*/NULL);
	}

IL_0024:
	{
		Object_t * L_4 = ___obj;
		Object_t * L_5 = MonoField_GetValueInternal_m6021(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String System.Reflection.MonoField::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoField_ToString_m6023 (MonoField_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->___type_3);
		String_t* L_1 = (__this->___name_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m3946(NULL /*static, unused*/, (String_t*) &_stringLiteral1604, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)
extern "C" void MonoField_SetValueInternal_m6024 (Object_t * __this /* static, unused */, FieldInfo_t * ___fi, Object_t * ___obj, Object_t * ___value, const MethodInfo* method)
{
	typedef void (*MonoField_SetValueInternal_m6024_ftn) (FieldInfo_t *, Object_t *, Object_t *);
	static MonoField_SetValueInternal_m6024_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_SetValueInternal_m6024_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)");
	_il2cpp_icall_func(___fi, ___obj, ___value);
}
// System.Void System.Reflection.MonoField::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern TypeInfo* TargetException_t1104_il2cpp_TypeInfo_var;
extern TypeInfo* FieldAccessException_t1363_il2cpp_TypeInfo_var;
extern TypeInfo* Binder_t376_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t200_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" void MonoField_SetValue_m6025 (MonoField_t * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t376 * ___binder, CultureInfo_t342 * ___culture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TargetException_t1104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2015);
		FieldAccessException_t1363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2016);
		Binder_t376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1995);
		ObjectU5BU5D_t200_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Object_t * L_1 = ___obj;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		TargetException_t1104 * L_2 = (TargetException_t1104 *)il2cpp_codegen_object_new (TargetException_t1104_il2cpp_TypeInfo_var);
		TargetException__ctor_m6142(L_2, (String_t*) &_stringLiteral1603, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.FieldInfo::get_IsLiteral() */, __this);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		FieldAccessException_t1363 * L_4 = (FieldAccessException_t1363 *)il2cpp_codegen_object_new (FieldAccessException_t1363_il2cpp_TypeInfo_var);
		FieldAccessException__ctor_m7680(L_4, (String_t*) &_stringLiteral1605, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Binder_t376 * L_5 = ___binder;
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t376_il2cpp_TypeInfo_var);
		Binder_t376 * L_6 = Binder_get_DefaultBinder_m5927(NULL /*static, unused*/, /*hidden argument*/NULL);
		___binder = L_6;
	}

IL_0036:
	{
		MonoField_CheckGeneric_m6027(__this, /*hidden argument*/NULL);
		Object_t * L_7 = ___val;
		if (!L_7)
		{
			goto IL_0090;
		}
	}
	{
		Binder_t376 * L_8 = ___binder;
		Object_t * L_9 = ___val;
		Type_t * L_10 = (__this->___type_3);
		CultureInfo_t342 * L_11 = ___culture;
		NullCheck(L_8);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, Type_t *, CultureInfo_t342 * >::Invoke(5 /* System.Object System.Reflection.Binder::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo) */, L_8, L_9, L_10, L_11);
		V_0 = L_12;
		Object_t * L_13 = V_0;
		if (L_13)
		{
			goto IL_008b;
		}
	}
	{
		ObjectU5BU5D_t200* L_14 = ((ObjectU5BU5D_t200*)SZArrayNew(ObjectU5BU5D_t200_il2cpp_TypeInfo_var, 4));
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral1606);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 0)) = (Object_t *)(String_t*) &_stringLiteral1606;
		ObjectU5BU5D_t200* L_15 = L_14;
		Object_t * L_16 = ___val;
		NullCheck(L_16);
		Type_t * L_17 = Object_GetType_m1176(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		ArrayElementTypeCheck (L_15, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 1)) = (Object_t *)L_17;
		ObjectU5BU5D_t200* L_18 = L_15;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 2);
		ArrayElementTypeCheck (L_18, (String_t*) &_stringLiteral1607);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 2)) = (Object_t *)(String_t*) &_stringLiteral1607;
		ObjectU5BU5D_t200* L_19 = L_18;
		Type_t * L_20 = (__this->___type_3);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		ArrayElementTypeCheck (L_19, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 3)) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1177(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		ArgumentException_t313 * L_22 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2383(L_22, L_21, (String_t*) &_stringLiteral1608, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_008b:
	{
		Object_t * L_23 = V_0;
		___val = L_23;
	}

IL_0090:
	{
		Object_t * L_24 = ___obj;
		Object_t * L_25 = ___val;
		MonoField_SetValueInternal_m6024(NULL /*static, unused*/, __this, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.MonoField::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoField_GetObjectData_m6026 (MonoField_t * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t310 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoField::get_Name() */, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MonoField::get_ReflectedType() */, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Reflection.MonoField::ToString() */, __this);
		MemberInfoSerializationHolder_Serialize_m5956(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.MonoField::CheckGeneric()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" void MonoField_CheckGeneric_m6027 (MonoField_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoField::get_DeclaringType() */, __this);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(74 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t665 * L_2 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_2, (String_t*) &_stringLiteral1609, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		return;
	}
}
// System.Reflection.MonoGenericMethod
#include "mscorlib_System_Reflection_MonoGenericMethod.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoGenericMethod
#include "mscorlib_System_Reflection_MonoGenericMethodMethodDeclarations.h"

// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"


// System.Void System.Reflection.MonoGenericMethod::.ctor()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" void MonoGenericMethod__ctor_m6028 (MonoGenericMethod_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoMethod__ctor_m6040(__this, /*hidden argument*/NULL);
		InvalidOperationException_t665 * L_0 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2384(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.MonoGenericMethod::get_ReflectedType()
extern "C" Type_t * MonoGenericMethod_get_ReflectedType_m6029 (MonoGenericMethod_t * __this, const MethodInfo* method)
{
	typedef Type_t * (*MonoGenericMethod_get_ReflectedType_m6029_ftn) (MonoGenericMethod_t *);
	static MonoGenericMethod_get_ReflectedType_m6029_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoGenericMethod_get_ReflectedType_m6029_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MonoGenericCMethod
#include "mscorlib_System_Reflection_MonoGenericCMethod.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoGenericCMethod
#include "mscorlib_System_Reflection_MonoGenericCMethodMethodDeclarations.h"

// System.Reflection.MonoCMethod
#include "mscorlib_System_Reflection_MonoCMethodMethodDeclarations.h"


// System.Void System.Reflection.MonoGenericCMethod::.ctor()
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern "C" void MonoGenericCMethod__ctor_m6030 (MonoGenericCMethod_t1093 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoCMethod__ctor_m6068(__this, /*hidden argument*/NULL);
		InvalidOperationException_t665 * L_0 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2384(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.MonoGenericCMethod::get_ReflectedType()
extern "C" Type_t * MonoGenericCMethod_get_ReflectedType_m6031 (MonoGenericCMethod_t1093 * __this, const MethodInfo* method)
{
	typedef Type_t * (*MonoGenericCMethod_get_ReflectedType_m6031_ftn) (MonoGenericCMethod_t1093 *);
	static MonoGenericCMethod_get_ReflectedType_m6031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoGenericCMethod_get_ReflectedType_m6031_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericCMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfoMethodDeclarations.h"



// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
extern "C" void MonoMethodInfo_get_method_info_m6032 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MonoMethodInfo_t1095 * ___info, const MethodInfo* method)
{
	typedef void (*MonoMethodInfo_get_method_info_m6032_ftn) (IntPtr_t, MonoMethodInfo_t1095 *);
	static MonoMethodInfo_get_method_info_m6032_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethodInfo_get_method_info_m6032_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)");
	_il2cpp_icall_func(___handle, ___info);
}
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
extern "C" MonoMethodInfo_t1095  MonoMethodInfo_GetMethodInfo_m6033 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	MonoMethodInfo_t1095  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_get_method_info_m6032(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		MonoMethodInfo_t1095  L_1 = V_0;
		return L_1;
	}
}
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
extern "C" Type_t * MonoMethodInfo_GetDeclaringType_m6034 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	MonoMethodInfo_t1095  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t1095  L_1 = MonoMethodInfo_GetMethodInfo_m6033(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = ((&V_0)->___parent_0);
		return L_2;
	}
}
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
extern "C" Type_t * MonoMethodInfo_GetReturnType_m6035 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	MonoMethodInfo_t1095  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t1095  L_1 = MonoMethodInfo_GetMethodInfo_m6033(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = ((&V_0)->___ret_1);
		return L_2;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
extern "C" int32_t MonoMethodInfo_GetAttributes_m6036 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	MonoMethodInfo_t1095  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t1095  L_1 = MonoMethodInfo_GetMethodInfo_m6033(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->___attrs_2);
		return L_2;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
extern "C" int32_t MonoMethodInfo_GetCallingConvention_m6037 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	MonoMethodInfo_t1095  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t1095  L_1 = MonoMethodInfo_GetMethodInfo_m6033(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->___callconv_4);
		return L_2;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
extern "C" ParameterInfoU5BU5D_t369* MonoMethodInfo_get_parameter_info_m6038 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, const MethodInfo* method)
{
	typedef ParameterInfoU5BU5D_t369* (*MonoMethodInfo_get_parameter_info_m6038_ftn) (IntPtr_t, MemberInfo_t *);
	static MonoMethodInfo_get_parameter_info_m6038_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethodInfo_get_parameter_info_m6038_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)");
	return _il2cpp_icall_func(___handle, ___member);
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
extern "C" ParameterInfoU5BU5D_t369* MonoMethodInfo_GetParametersInfo_m6039 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___handle;
		MemberInfo_t * L_1 = ___member;
		ParameterInfoU5BU5D_t369* L_2 = MonoMethodInfo_get_parameter_info_m6038(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
#ifndef _MSC_VER
#else
#endif

// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationException.h"
// System.Runtime.InteropServices.DllImportAttribute
#include "mscorlib_System_Runtime_InteropServices_DllImportAttribute.h"
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationExceptionMethodDeclarations.h"
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttributeMethodDeclarations.h"


// System.Void System.Reflection.MonoMethod::.ctor()
extern "C" void MonoMethod__ctor_m6040 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		MethodInfo__ctor_m5974(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
extern "C" String_t* MonoMethod_get_name_m6041 (Object_t * __this /* static, unused */, MethodBase_t379 * ___method, const MethodInfo* method)
{
	typedef String_t* (*MonoMethod_get_name_m6041_ftn) (MethodBase_t379 *);
	static MonoMethod_get_name_m6041_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_name_m6041_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)");
	return _il2cpp_icall_func(___method);
}
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
extern "C" MonoMethod_t * MonoMethod_get_base_definition_m6042 (Object_t * __this /* static, unused */, MonoMethod_t * ___method, const MethodInfo* method)
{
	typedef MonoMethod_t * (*MonoMethod_get_base_definition_m6042_ftn) (MonoMethod_t *);
	static MonoMethod_get_base_definition_m6042_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_base_definition_m6042_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)");
	return _il2cpp_icall_func(___method);
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
extern "C" MethodInfo_t * MonoMethod_GetBaseDefinition_m6043 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = MonoMethod_get_base_definition_m6042(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Type System.Reflection.MonoMethod::get_ReturnType()
extern "C" Type_t * MonoMethod_get_ReturnType_m6044 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		Type_t * L_1 = MonoMethodInfo_GetReturnType_m6035(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
extern TypeInfo* ParameterInfoU5BU5D_t369_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t369* MonoMethod_GetParameters_m6045 (MonoMethod_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParameterInfoU5BU5D_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1988);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t369* V_0 = {0};
	ParameterInfoU5BU5D_t369* V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		ParameterInfoU5BU5D_t369* L_1 = MonoMethodInfo_GetParametersInfo_m6039(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		ParameterInfoU5BU5D_t369* L_2 = V_0;
		NullCheck(L_2);
		V_1 = ((ParameterInfoU5BU5D_t369*)SZArrayNew(ParameterInfoU5BU5D_t369_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		ParameterInfoU5BU5D_t369* L_3 = V_0;
		ParameterInfoU5BU5D_t369* L_4 = V_1;
		NullCheck(L_3);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(7 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_3, (Array_t *)(Array_t *)L_4, 0);
		ParameterInfoU5BU5D_t369* L_5 = V_1;
		return L_5;
	}
}
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoMethod_InternalInvoke_m6046 (MonoMethod_t * __this, Object_t * ___obj, ObjectU5BU5D_t200* ___parameters, Exception_t65 ** ___exc, const MethodInfo* method)
{
	typedef Object_t * (*MonoMethod_InternalInvoke_m6046_ftn) (MonoMethod_t *, Object_t *, ObjectU5BU5D_t200*, Exception_t65 **);
	static MonoMethod_InternalInvoke_m6046_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_InternalInvoke_m6046_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, ___obj, ___parameters, ___exc);
}
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern TypeInfo* Binder_t376_il2cpp_TypeInfo_var;
extern TypeInfo* TargetParameterCountException_t1106_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t665_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadAbortException_t1320_il2cpp_TypeInfo_var;
extern TypeInfo* MethodAccessException_t1369_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t65_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t1105_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoMethod_Invoke_m6047 (MonoMethod_t * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t376 * ___binder, ObjectU5BU5D_t200* ___parameters, CultureInfo_t342 * ___culture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Binder_t376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1995);
		TargetParameterCountException_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2009);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		InvalidOperationException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		ThreadAbortException_t1320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2017);
		MethodAccessException_t1369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2018);
		Exception_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		TargetInvocationException_t1105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2019);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t369* V_0 = {0};
	int32_t V_1 = 0;
	Exception_t65 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t65 * V_4 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Binder_t376 * L_0 = ___binder;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t376_il2cpp_TypeInfo_var);
		Binder_t376 * L_1 = Binder_get_DefaultBinder_m5927(NULL /*static, unused*/, /*hidden argument*/NULL);
		___binder = L_1;
	}

IL_000c:
	{
		IntPtr_t L_2 = (__this->___mhandle_0);
		ParameterInfoU5BU5D_t369* L_3 = MonoMethodInfo_GetParametersInfo_m6039(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		ObjectU5BU5D_t200* L_4 = ___parameters;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ParameterInfoU5BU5D_t369* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)(((Array_t *)L_5)->max_length))))
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		ObjectU5BU5D_t200* L_6 = ___parameters;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_t200* L_7 = ___parameters;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t369* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		TargetParameterCountException_t1106 * L_9 = (TargetParameterCountException_t1106 *)il2cpp_codegen_object_new (TargetParameterCountException_t1106_il2cpp_TypeInfo_var);
		TargetParameterCountException__ctor_m6147(L_9, (String_t*) &_stringLiteral1610, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_003a:
	{
		int32_t L_10 = ___invokeAttr;
		if (((int32_t)((int32_t)L_10&(int32_t)((int32_t)65536))))
		{
			goto IL_005d;
		}
	}
	{
		Binder_t376 * L_11 = ___binder;
		ObjectU5BU5D_t200* L_12 = ___parameters;
		ParameterInfoU5BU5D_t369* L_13 = V_0;
		CultureInfo_t342 * L_14 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t376_il2cpp_TypeInfo_var);
		bool L_15 = Binder_ConvertArgs_m5928(NULL /*static, unused*/, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_t313 * L_16 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_16, (String_t*) &_stringLiteral1611, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_005b:
	{
		goto IL_0089;
	}

IL_005d:
	{
		V_1 = 0;
		goto IL_0083;
	}

IL_0061:
	{
		ObjectU5BU5D_t200* L_17 = ___parameters;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)));
		Type_t * L_20 = Object_GetType_m1176((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), /*hidden argument*/NULL);
		ParameterInfoU5BU5D_t369* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_21, L_23)));
		Type_t * L_24 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_21, L_23)));
		if ((((Object_t*)(Type_t *)L_20) == ((Object_t*)(Type_t *)L_24)))
		{
			goto IL_007f;
		}
	}
	{
		ArgumentException_t313 * L_25 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_25, (String_t*) &_stringLiteral1610, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_007f:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_27 = V_1;
		ParameterInfoU5BU5D_t369* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((Array_t *)L_28)->max_length))))))
		{
			goto IL_0061;
		}
	}

IL_0089:
	{
		bool L_29 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters() */, __this);
		if (!L_29)
		{
			goto IL_009c;
		}
	}
	{
		InvalidOperationException_t665 * L_30 = (InvalidOperationException_t665 *)il2cpp_codegen_object_new (InvalidOperationException_t665_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2378(L_30, (String_t*) &_stringLiteral1612, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_009c:
	{
		V_3 = NULL;
	}

IL_009e:
	try
	{ // begin try (depth: 1)
		Object_t * L_31 = ___obj;
		ObjectU5BU5D_t200* L_32 = ___parameters;
		Object_t * L_33 = MonoMethod_InternalInvoke_m6046(__this, L_31, L_32, (&V_2), /*hidden argument*/NULL);
		V_3 = L_33;
		goto IL_00c2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ThreadAbortException_t1320_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00ac;
		if(il2cpp_codegen_class_is_assignable_from (MethodAccessException_t1369_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00b1;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t65_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00b6;
		throw e;
	}

CATCH_00ac:
	{ // begin catch(System.Threading.ThreadAbortException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00c2;
	} // end catch (depth: 1)

CATCH_00b1:
	{ // begin catch(System.MethodAccessException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00c2;
	} // end catch (depth: 1)

CATCH_00b6:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t65 *)__exception_local);
		Exception_t65 * L_34 = V_4;
		TargetInvocationException_t1105 * L_35 = (TargetInvocationException_t1105 *)il2cpp_codegen_object_new (TargetInvocationException_t1105_il2cpp_TypeInfo_var);
		TargetInvocationException__ctor_m6144(L_35, L_34, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_35);
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00c2:
	{
		Exception_t65 * L_36 = V_2;
		if (!L_36)
		{
			goto IL_00c7;
		}
	}
	{
		Exception_t65 * L_37 = V_2;
		il2cpp_codegen_raise_exception(L_37);
	}

IL_00c7:
	{
		Object_t * L_38 = V_3;
		return L_38;
	}
}
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1387  MonoMethod_get_MethodHandle_m6048 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		RuntimeMethodHandle_t1387  L_1 = {0};
		RuntimeMethodHandle__ctor_m7932(&L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
extern "C" int32_t MonoMethod_get_Attributes_m6049 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		int32_t L_1 = MonoMethodInfo_GetAttributes_m6036(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
extern "C" int32_t MonoMethod_get_CallingConvention_m6050 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		int32_t L_1 = MonoMethodInfo_GetCallingConvention_m6037(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
extern "C" Type_t * MonoMethod_get_ReflectedType_m6051 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___reftype_2);
		return L_0;
	}
}
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
extern "C" Type_t * MonoMethod_get_DeclaringType_m6052 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		Type_t * L_1 = MonoMethodInfo_GetDeclaringType_m6034(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Reflection.MonoMethod::get_Name()
extern "C" String_t* MonoMethod_get_Name_m6053 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_1);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___name_1);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = MonoMethod_get_name_m6041(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" bool MonoMethod_IsDefined_m6054 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		bool L_2 = MonoCustomAttrs_IsDefined_m7751(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* MonoMethod_GetCustomAttributes_m6055 (MonoMethod_t * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_1 = MonoCustomAttrs_GetCustomAttributes_m7750(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* MonoMethod_GetCustomAttributes_m6056 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_2 = MonoCustomAttrs_GetCustomAttributes_m7749(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
extern "C" DllImportAttribute_t888 * MonoMethod_GetDllImportAttribute_m6057 (Object_t * __this /* static, unused */, IntPtr_t ___mhandle, const MethodInfo* method)
{
	typedef DllImportAttribute_t888 * (*MonoMethod_GetDllImportAttribute_m6057_ftn) (IntPtr_t);
	static MonoMethod_GetDllImportAttribute_m6057_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_GetDllImportAttribute_m6057_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)");
	return _il2cpp_icall_func(___mhandle);
}
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
extern TypeInfo* ObjectU5BU5D_t200_il2cpp_TypeInfo_var;
extern TypeInfo* PreserveSigAttribute_t1130_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* MonoMethod_GetPseudoCustomAttributes_m6058 (MonoMethod_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t200_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		PreserveSigAttribute_t1130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2020);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	MonoMethodInfo_t1095  V_1 = {0};
	ObjectU5BU5D_t200* V_2 = {0};
	DllImportAttribute_t888 * V_3 = {0};
	{
		V_0 = 0;
		IntPtr_t L_0 = (__this->___mhandle_0);
		MonoMethodInfo_t1095  L_1 = MonoMethodInfo_GetMethodInfo_m6033(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)128))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_4 = ((&V_1)->___attrs_2);
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)8192))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0039;
		}
	}
	{
		return (ObjectU5BU5D_t200*)NULL;
	}

IL_0039:
	{
		int32_t L_7 = V_0;
		V_2 = ((ObjectU5BU5D_t200*)SZArrayNew(ObjectU5BU5D_t200_il2cpp_TypeInfo_var, L_7));
		V_0 = 0;
		int32_t L_8 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_8&(int32_t)((int32_t)128))))
		{
			goto IL_005d;
		}
	}
	{
		ObjectU5BU5D_t200* L_9 = V_2;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		PreserveSigAttribute_t1130 * L_12 = (PreserveSigAttribute_t1130 *)il2cpp_codegen_object_new (PreserveSigAttribute_t1130_il2cpp_TypeInfo_var);
		PreserveSigAttribute__ctor_m6173(L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_11);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)) = (Object_t *)L_12;
	}

IL_005d:
	{
		int32_t L_13 = ((&V_1)->___attrs_2);
		if (!((int32_t)((int32_t)L_13&(int32_t)((int32_t)8192))))
		{
			goto IL_0096;
		}
	}
	{
		IntPtr_t L_14 = (__this->___mhandle_0);
		DllImportAttribute_t888 * L_15 = MonoMethod_GetDllImportAttribute_m6057(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		int32_t L_16 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_16&(int32_t)((int32_t)128))))
		{
			goto IL_008e;
		}
	}
	{
		DllImportAttribute_t888 * L_17 = V_3;
		NullCheck(L_17);
		L_17->___PreserveSig_5 = 1;
	}

IL_008e:
	{
		ObjectU5BU5D_t200* L_18 = V_2;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		DllImportAttribute_t888 * L_21 = V_3;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, L_20)) = (Object_t *)L_21;
	}

IL_0096:
	{
		ObjectU5BU5D_t200* L_22 = V_2;
		return L_22;
	}
}
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
extern "C" bool MonoMethod_ShouldPrintFullName_m6059 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Type::get_IsClass() */, L_0);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Type::get_IsPointer() */, L_2);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_4 = ___type;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_4);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_5);
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_7 = ___type;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_7);
		NullCheck(L_8);
		bool L_9 = Type_get_IsNested_m4387(L_8, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B5_0 = 0;
	}

IL_002e:
	{
		G_B7_0 = G_B5_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B7_0 = 1;
	}

IL_0031:
	{
		G_B9_0 = G_B7_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B9_0 = 0;
	}

IL_0034:
	{
		return G_B9_0;
	}
}
// System.String System.Reflection.MonoMethod::ToString()
extern TypeInfo* StringBuilder_t301_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethod_ToString_m6060 (MonoMethod_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t301 * V_0 = {0};
	Type_t * V_1 = {0};
	TypeU5BU5D_t196* V_2 = {0};
	int32_t V_3 = 0;
	ParameterInfoU5BU5D_t369* V_4 = {0};
	int32_t V_5 = 0;
	Type_t * V_6 = {0};
	bool V_7 = false;
	{
		StringBuilder_t301 * L_0 = (StringBuilder_t301 *)il2cpp_codegen_object_new (StringBuilder_t301_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2410(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(28 /* System.Type System.Reflection.MonoMethod::get_ReturnType() */, __this);
		V_1 = L_1;
		Type_t * L_2 = V_1;
		bool L_3 = MonoMethod_ShouldPrintFullName_m6059(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		StringBuilder_t301 * L_4 = V_0;
		Type_t * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_5);
		NullCheck(L_4);
		StringBuilder_Append_m1262(L_4, L_6, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0024:
	{
		StringBuilder_t301 * L_7 = V_0;
		Type_t * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		NullCheck(L_7);
		StringBuilder_Append_m1262(L_7, L_9, /*hidden argument*/NULL);
	}

IL_0031:
	{
		StringBuilder_t301 * L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_Append_m1262(L_10, (String_t*) &_stringLiteral18, /*hidden argument*/NULL);
		StringBuilder_t301 * L_11 = V_0;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoMethod::get_Name() */, __this);
		NullCheck(L_11);
		StringBuilder_Append_m1262(L_11, L_12, /*hidden argument*/NULL);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod() */, __this);
		if (!L_13)
		{
			goto IL_009e;
		}
	}
	{
		TypeU5BU5D_t196* L_14 = (TypeU5BU5D_t196*)VirtFuncInvoker0< TypeU5BU5D_t196* >::Invoke(23 /* System.Type[] System.Reflection.MonoMethod::GetGenericArguments() */, __this);
		V_2 = L_14;
		StringBuilder_t301 * L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_Append_m1262(L_15, (String_t*) &_stringLiteral188, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_008c;
	}

IL_0069:
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		StringBuilder_t301 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m1262(L_17, (String_t*) &_stringLiteral186, /*hidden argument*/NULL);
	}

IL_0079:
	{
		StringBuilder_t301 * L_18 = V_0;
		TypeU5BU5D_t196* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		NullCheck((*(Type_t **)(Type_t **)SZArrayLdElema(L_19, L_21)));
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (*(Type_t **)(Type_t **)SZArrayLdElema(L_19, L_21)));
		NullCheck(L_18);
		StringBuilder_Append_m1262(L_18, L_22, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_24 = V_3;
		TypeU5BU5D_t196* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0069;
		}
	}
	{
		StringBuilder_t301 * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m1262(L_26, (String_t*) &_stringLiteral189, /*hidden argument*/NULL);
	}

IL_009e:
	{
		StringBuilder_t301 * L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_Append_m1262(L_27, (String_t*) &_stringLiteral251, /*hidden argument*/NULL);
		ParameterInfoU5BU5D_t369* L_28 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters() */, __this);
		V_4 = L_28;
		V_5 = 0;
		goto IL_0127;
	}

IL_00b7:
	{
		int32_t L_29 = V_5;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		StringBuilder_t301 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_Append_m1262(L_30, (String_t*) &_stringLiteral252, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		ParameterInfoU5BU5D_t369* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_31, L_33)));
		V_6 = L_34;
		Type_t * L_35 = V_6;
		NullCheck(L_35);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_35);
		V_7 = L_36;
		bool L_37 = V_7;
		if (!L_37)
		{
			goto IL_00ea;
		}
	}
	{
		Type_t * L_38 = V_6;
		NullCheck(L_38);
		Type_t * L_39 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_38);
		V_6 = L_39;
	}

IL_00ea:
	{
		Type_t * L_40 = V_6;
		bool L_41 = MonoMethod_ShouldPrintFullName_m6059(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0103;
		}
	}
	{
		StringBuilder_t301 * L_42 = V_0;
		Type_t * L_43 = V_6;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_43);
		NullCheck(L_42);
		StringBuilder_Append_m1262(L_42, L_44, /*hidden argument*/NULL);
		goto IL_0111;
	}

IL_0103:
	{
		StringBuilder_t301 * L_45 = V_0;
		Type_t * L_46 = V_6;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_46);
		NullCheck(L_45);
		StringBuilder_Append_m1262(L_45, L_47, /*hidden argument*/NULL);
	}

IL_0111:
	{
		bool L_48 = V_7;
		if (!L_48)
		{
			goto IL_0121;
		}
	}
	{
		StringBuilder_t301 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m1262(L_49, (String_t*) &_stringLiteral1302, /*hidden argument*/NULL);
	}

IL_0121:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)((int32_t)L_50+(int32_t)1));
	}

IL_0127:
	{
		int32_t L_51 = V_5;
		ParameterInfoU5BU5D_t369* L_52 = V_4;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)(((int32_t)(((Array_t *)L_52)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_53 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention() */, __this);
		if (!((int32_t)((int32_t)L_53&(int32_t)2)))
		{
			goto IL_0158;
		}
	}
	{
		ParameterInfoU5BU5D_t369* L_54 = V_4;
		NullCheck(L_54);
		if ((((int32_t)(((int32_t)(((Array_t *)L_54)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_014c;
		}
	}
	{
		StringBuilder_t301 * L_55 = V_0;
		NullCheck(L_55);
		StringBuilder_Append_m1262(L_55, (String_t*) &_stringLiteral252, /*hidden argument*/NULL);
	}

IL_014c:
	{
		StringBuilder_t301 * L_56 = V_0;
		NullCheck(L_56);
		StringBuilder_Append_m1262(L_56, (String_t*) &_stringLiteral1613, /*hidden argument*/NULL);
	}

IL_0158:
	{
		StringBuilder_t301 * L_57 = V_0;
		NullCheck(L_57);
		StringBuilder_Append_m1262(L_57, (String_t*) &_stringLiteral250, /*hidden argument*/NULL);
		StringBuilder_t301 * L_58 = V_0;
		NullCheck(L_58);
		String_t* L_59 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_58);
		return L_59;
	}
}
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoMethod_GetObjectData_m6061 (MonoMethod_t * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	TypeU5BU5D_t196* V_0 = {0};
	TypeU5BU5D_t196* G_B4_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod() */, __this);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition() */, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		TypeU5BU5D_t196* L_2 = (TypeU5BU5D_t196*)VirtFuncInvoker0< TypeU5BU5D_t196* >::Invoke(23 /* System.Type[] System.Reflection.MonoMethod::GetGenericArguments() */, __this);
		G_B4_0 = L_2;
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = ((TypeU5BU5D_t196*)(NULL));
	}

IL_0019:
	{
		V_0 = G_B4_0;
		SerializationInfo_t310 * L_3 = ___info;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoMethod::get_Name() */, __this);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MonoMethod::get_ReflectedType() */, __this);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Reflection.MonoMethod::ToString() */, __this);
		TypeU5BU5D_t196* L_7 = V_0;
		MemberInfoSerializationHolder_Serialize_m5957(NULL /*static, unused*/, L_3, L_4, L_5, L_6, 8, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t320_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * MonoMethod_MakeGenericMethod_m6062 (MonoMethod_t * __this, TypeU5BU5D_t196* ___methodInstantiation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		Int32_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	TypeU5BU5D_t196* V_1 = {0};
	int32_t V_2 = 0;
	MethodInfo_t * V_3 = {0};
	{
		TypeU5BU5D_t196* L_0 = ___methodInstantiation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral1614, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		TypeU5BU5D_t196* L_2 = ___methodInstantiation;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		TypeU5BU5D_t196* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_3, L_5));
		Type_t * L_6 = V_0;
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t341 * L_7 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7294(L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0021:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_9 = V_2;
		TypeU5BU5D_t196* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		TypeU5BU5D_t196* L_11 = ___methodInstantiation;
		MethodInfo_t * L_12 = MonoMethod_MakeGenericMethod_impl_m6063(__this, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		MethodInfo_t * L_13 = V_3;
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		TypeU5BU5D_t196* L_14 = (TypeU5BU5D_t196*)VirtFuncInvoker0< TypeU5BU5D_t196* >::Invoke(23 /* System.Type[] System.Reflection.MonoMethod::GetGenericArguments() */, __this);
		NullCheck(L_14);
		int32_t L_15 = (((int32_t)(((Array_t *)L_14)->max_length)));
		Object_t * L_16 = Box(Int32_t320_il2cpp_TypeInfo_var, &L_15);
		TypeU5BU5D_t196* L_17 = ___methodInstantiation;
		NullCheck(L_17);
		int32_t L_18 = (((int32_t)(((Array_t *)L_17)->max_length)));
		Object_t * L_19 = Box(Int32_t320_il2cpp_TypeInfo_var, &L_18);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Format_m3946(NULL /*static, unused*/, (String_t*) &_stringLiteral1615, L_16, L_19, /*hidden argument*/NULL);
		ArgumentException_t313 * L_21 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_21, L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_005b:
	{
		MethodInfo_t * L_22 = V_3;
		return L_22;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
extern "C" MethodInfo_t * MonoMethod_MakeGenericMethod_impl_m6063 (MonoMethod_t * __this, TypeU5BU5D_t196* ___types, const MethodInfo* method)
{
	typedef MethodInfo_t * (*MonoMethod_MakeGenericMethod_impl_m6063_ftn) (MonoMethod_t *, TypeU5BU5D_t196*);
	static MonoMethod_MakeGenericMethod_impl_m6063_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_MakeGenericMethod_impl_m6063_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])");
	return _il2cpp_icall_func(__this, ___types);
}
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
extern "C" TypeU5BU5D_t196* MonoMethod_GetGenericArguments_m6064 (MonoMethod_t * __this, const MethodInfo* method)
{
	typedef TypeU5BU5D_t196* (*MonoMethod_GetGenericArguments_m6064_ftn) (MonoMethod_t *);
	static MonoMethod_GetGenericArguments_m6064_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_GetGenericArguments_m6064_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
extern "C" bool MonoMethod_get_IsGenericMethodDefinition_m6065 (MonoMethod_t * __this, const MethodInfo* method)
{
	typedef bool (*MonoMethod_get_IsGenericMethodDefinition_m6065_ftn) (MonoMethod_t *);
	static MonoMethod_get_IsGenericMethodDefinition_m6065_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_IsGenericMethodDefinition_m6065_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethodDefinition()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
extern "C" bool MonoMethod_get_IsGenericMethod_m6066 (MonoMethod_t * __this, const MethodInfo* method)
{
	typedef bool (*MonoMethod_get_IsGenericMethod_m6066_ftn) (MonoMethod_t *);
	static MonoMethod_get_IsGenericMethod_m6066_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_IsGenericMethod_m6066_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethod()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
extern "C" bool MonoMethod_get_ContainsGenericParameters_m6067 (MonoMethod_t * __this, const MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t196* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod() */, __this);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		TypeU5BU5D_t196* L_1 = (TypeU5BU5D_t196*)VirtFuncInvoker0< TypeU5BU5D_t196* >::Invoke(23 /* System.Type[] System.Reflection.MonoMethod::GetGenericArguments() */, __this);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0025;
	}

IL_0013:
	{
		TypeU5BU5D_t196* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_2, L_4));
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(74 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_5);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_8 = V_2;
		TypeU5BU5D_t196* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0013;
		}
	}

IL_002b:
	{
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoMethod::get_DeclaringType() */, __this);
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(74 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_10);
		return L_11;
	}
}
// System.Reflection.MonoCMethod
#include "mscorlib_System_Reflection_MonoCMethod.h"
#ifndef _MSC_VER
#else
#endif

// System.MemberAccessException
#include "mscorlib_System_MemberAccessException.h"
// System.MemberAccessException
#include "mscorlib_System_MemberAccessExceptionMethodDeclarations.h"


// System.Void System.Reflection.MonoCMethod::.ctor()
extern TypeInfo* ConstructorInfo_t202_il2cpp_TypeInfo_var;
extern "C" void MonoCMethod__ctor_m6068 (MonoCMethod_t1094 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructorInfo_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t202_il2cpp_TypeInfo_var);
		ConstructorInfo__ctor_m5931(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t369* MonoCMethod_GetParameters_m6069 (MonoCMethod_t1094 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		ParameterInfoU5BU5D_t369* L_1 = MonoMethodInfo_GetParametersInfo_m6039(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoCMethod_InternalInvoke_m6070 (MonoCMethod_t1094 * __this, Object_t * ___obj, ObjectU5BU5D_t200* ___parameters, Exception_t65 ** ___exc, const MethodInfo* method)
{
	typedef Object_t * (*MonoCMethod_InternalInvoke_m6070_ftn) (MonoCMethod_t1094 *, Object_t *, ObjectU5BU5D_t200*, Exception_t65 **);
	static MonoCMethod_InternalInvoke_m6070_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoCMethod_InternalInvoke_m6070_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, ___obj, ___parameters, ___exc);
}
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern TypeInfo* Binder_t376_il2cpp_TypeInfo_var;
extern TypeInfo* TargetParameterCountException_t1106_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* MemberAccessException_t1364_il2cpp_TypeInfo_var;
extern TypeInfo* MethodAccessException_t1369_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t65_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t1105_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoCMethod_Invoke_m6071 (MonoCMethod_t1094 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t376 * ___binder, ObjectU5BU5D_t200* ___parameters, CultureInfo_t342 * ___culture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Binder_t376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1995);
		TargetParameterCountException_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2009);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		MemberAccessException_t1364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2021);
		MethodAccessException_t1369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2018);
		Exception_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		TargetInvocationException_t1105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2019);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t369* V_0 = {0};
	int32_t V_1 = 0;
	Exception_t65 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t65 * V_4 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Object_t * G_B31_0 = {0};
	{
		Binder_t376 * L_0 = ___binder;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t376_il2cpp_TypeInfo_var);
		Binder_t376 * L_1 = Binder_get_DefaultBinder_m5927(NULL /*static, unused*/, /*hidden argument*/NULL);
		___binder = L_1;
	}

IL_000c:
	{
		ParameterInfoU5BU5D_t369* L_2 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters() */, __this);
		V_0 = L_2;
		ObjectU5BU5D_t200* L_3 = ___parameters;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		ParameterInfoU5BU5D_t369* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((Array_t *)L_4)->max_length))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		ObjectU5BU5D_t200* L_5 = ___parameters;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		ObjectU5BU5D_t200* L_6 = ___parameters;
		NullCheck(L_6);
		ParameterInfoU5BU5D_t369* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		TargetParameterCountException_t1106 * L_8 = (TargetParameterCountException_t1106 *)il2cpp_codegen_object_new (TargetParameterCountException_t1106_il2cpp_TypeInfo_var);
		TargetParameterCountException__ctor_m6147(L_8, (String_t*) &_stringLiteral1610, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0034:
	{
		int32_t L_9 = ___invokeAttr;
		if (((int32_t)((int32_t)L_9&(int32_t)((int32_t)65536))))
		{
			goto IL_0057;
		}
	}
	{
		Binder_t376 * L_10 = ___binder;
		ObjectU5BU5D_t200* L_11 = ___parameters;
		ParameterInfoU5BU5D_t369* L_12 = V_0;
		CultureInfo_t342 * L_13 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t376_il2cpp_TypeInfo_var);
		bool L_14 = Binder_ConvertArgs_m5928(NULL /*static, unused*/, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		ArgumentException_t313 * L_15 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_15, (String_t*) &_stringLiteral1611, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0055:
	{
		goto IL_0083;
	}

IL_0057:
	{
		V_1 = 0;
		goto IL_007d;
	}

IL_005b:
	{
		ObjectU5BU5D_t200* L_16 = ___parameters;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)));
		Type_t * L_19 = Object_GetType_m1176((*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), /*hidden argument*/NULL);
		ParameterInfoU5BU5D_t369* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_20, L_22)));
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_20, L_22)));
		if ((((Object_t*)(Type_t *)L_19) == ((Object_t*)(Type_t *)L_23)))
		{
			goto IL_0079;
		}
	}
	{
		ArgumentException_t313 * L_24 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_24, (String_t*) &_stringLiteral1610, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0079:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_007d:
	{
		int32_t L_26 = V_1;
		ParameterInfoU5BU5D_t369* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_0083:
	{
		Object_t * L_28 = ___obj;
		if (L_28)
		{
			goto IL_00ae;
		}
	}
	{
		Type_t * L_29 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoCMethod::get_DeclaringType() */, __this);
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(74 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_29);
		if (!L_30)
		{
			goto IL_00ae;
		}
	}
	{
		Type_t * L_31 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoCMethod::get_DeclaringType() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m2396(NULL /*static, unused*/, (String_t*) &_stringLiteral1616, L_31, (String_t*) &_stringLiteral1617, /*hidden argument*/NULL);
		MemberAccessException_t1364 * L_33 = (MemberAccessException_t1364 *)il2cpp_codegen_object_new (MemberAccessException_t1364_il2cpp_TypeInfo_var);
		MemberAccessException__ctor_m7720(L_33, L_32, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_00ae:
	{
		int32_t L_34 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_34&(int32_t)((int32_t)512))))
		{
			goto IL_00da;
		}
	}
	{
		Type_t * L_35 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoCMethod::get_DeclaringType() */, __this);
		NullCheck(L_35);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Type::get_IsAbstract() */, L_35);
		if (!L_36)
		{
			goto IL_00da;
		}
	}
	{
		Type_t * L_37 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoCMethod::get_DeclaringType() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = String_Format_m2456(NULL /*static, unused*/, (String_t*) &_stringLiteral1618, L_37, /*hidden argument*/NULL);
		MemberAccessException_t1364 * L_39 = (MemberAccessException_t1364 *)il2cpp_codegen_object_new (MemberAccessException_t1364_il2cpp_TypeInfo_var);
		MemberAccessException__ctor_m7720(L_39, L_38, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_39);
	}

IL_00da:
	{
		V_2 = (Exception_t65 *)NULL;
		V_3 = NULL;
	}

IL_00de:
	try
	{ // begin try (depth: 1)
		Object_t * L_40 = ___obj;
		ObjectU5BU5D_t200* L_41 = ___parameters;
		Object_t * L_42 = MonoCMethod_InternalInvoke_m6070(__this, L_40, L_41, (&V_2), /*hidden argument*/NULL);
		V_3 = L_42;
		goto IL_00fd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (MethodAccessException_t1369_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00ec;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t65_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00f1;
		throw e;
	}

CATCH_00ec:
	{ // begin catch(System.MethodAccessException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00fd;
	} // end catch (depth: 1)

CATCH_00f1:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t65 *)__exception_local);
		Exception_t65 * L_43 = V_4;
		TargetInvocationException_t1105 * L_44 = (TargetInvocationException_t1105 *)il2cpp_codegen_object_new (TargetInvocationException_t1105_il2cpp_TypeInfo_var);
		TargetInvocationException__ctor_m6144(L_44, L_43, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_44);
		goto IL_00fd;
	} // end catch (depth: 1)

IL_00fd:
	{
		Exception_t65 * L_45 = V_2;
		if (!L_45)
		{
			goto IL_0102;
		}
	}
	{
		Exception_t65 * L_46 = V_2;
		il2cpp_codegen_raise_exception(L_46);
	}

IL_0102:
	{
		Object_t * L_47 = ___obj;
		if (L_47)
		{
			goto IL_0108;
		}
	}
	{
		Object_t * L_48 = V_3;
		G_B31_0 = L_48;
		goto IL_0109;
	}

IL_0108:
	{
		G_B31_0 = NULL;
	}

IL_0109:
	{
		return G_B31_0;
	}
}
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m6072 (MonoCMethod_t1094 * __this, int32_t ___invokeAttr, Binder_t376 * ___binder, ObjectU5BU5D_t200* ___parameters, CultureInfo_t342 * ___culture, const MethodInfo* method)
{
	{
		int32_t L_0 = ___invokeAttr;
		Binder_t376 * L_1 = ___binder;
		ObjectU5BU5D_t200* L_2 = ___parameters;
		CultureInfo_t342 * L_3 = ___culture;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t376 *, ObjectU5BU5D_t200*, CultureInfo_t342 * >::Invoke(16 /* System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, __this, NULL, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1387  MonoCMethod_get_MethodHandle_m6073 (MonoCMethod_t1094 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		RuntimeMethodHandle_t1387  L_1 = {0};
		RuntimeMethodHandle__ctor_m7932(&L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern "C" int32_t MonoCMethod_get_Attributes_m6074 (MonoCMethod_t1094 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		int32_t L_1 = MonoMethodInfo_GetAttributes_m6036(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C" int32_t MonoCMethod_get_CallingConvention_m6075 (MonoCMethod_t1094 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		int32_t L_1 = MonoMethodInfo_GetCallingConvention_m6037(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C" Type_t * MonoCMethod_get_ReflectedType_m6076 (MonoCMethod_t1094 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___reftype_4);
		return L_0;
	}
}
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C" Type_t * MonoCMethod_get_DeclaringType_m6077 (MonoCMethod_t1094 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		Type_t * L_1 = MonoMethodInfo_GetDeclaringType_m6034(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C" String_t* MonoCMethod_get_Name_m6078 (MonoCMethod_t1094 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___name_3);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = MonoMethod_get_name_m6041(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" bool MonoCMethod_IsDefined_m6079 (MonoCMethod_t1094 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		bool L_2 = MonoCustomAttrs_IsDefined_m7751(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* MonoCMethod_GetCustomAttributes_m6080 (MonoCMethod_t1094 * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_1 = MonoCustomAttrs_GetCustomAttributes_m7750(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* MonoCMethod_GetCustomAttributes_m6081 (MonoCMethod_t1094 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_2 = MonoCustomAttrs_GetCustomAttributes_m7749(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Reflection.MonoCMethod::ToString()
extern TypeInfo* StringBuilder_t301_il2cpp_TypeInfo_var;
extern "C" String_t* MonoCMethod_ToString_m6082 (MonoCMethod_t1094 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t301 * V_0 = {0};
	ParameterInfoU5BU5D_t369* V_1 = {0};
	int32_t V_2 = 0;
	{
		StringBuilder_t301 * L_0 = (StringBuilder_t301 *)il2cpp_codegen_object_new (StringBuilder_t301_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2410(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t301 * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_Append_m1262(L_1, (String_t*) &_stringLiteral1619, /*hidden argument*/NULL);
		StringBuilder_t301 * L_2 = V_0;
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoCMethod::get_Name() */, __this);
		NullCheck(L_2);
		StringBuilder_Append_m1262(L_2, L_3, /*hidden argument*/NULL);
		StringBuilder_t301 * L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_Append_m1262(L_4, (String_t*) &_stringLiteral251, /*hidden argument*/NULL);
		ParameterInfoU5BU5D_t369* L_5 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters() */, __this);
		V_1 = L_5;
		V_2 = 0;
		goto IL_005e;
	}

IL_0036:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		StringBuilder_t301 * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_m1262(L_7, (String_t*) &_stringLiteral252, /*hidden argument*/NULL);
	}

IL_0046:
	{
		StringBuilder_t301 * L_8 = V_0;
		ParameterInfoU5BU5D_t369* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_9, L_11)));
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_9, L_11)));
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		NullCheck(L_8);
		StringBuilder_Append_m1262(L_8, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_15 = V_2;
		ParameterInfoU5BU5D_t369* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention() */, __this);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_0079;
		}
	}
	{
		StringBuilder_t301 * L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_Append_m1262(L_18, (String_t*) &_stringLiteral1620, /*hidden argument*/NULL);
	}

IL_0079:
	{
		StringBuilder_t301 * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m1262(L_19, (String_t*) &_stringLiteral250, /*hidden argument*/NULL);
		StringBuilder_t301 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_20);
		return L_21;
	}
}
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoCMethod_GetObjectData_m6083 (MonoCMethod_t1094 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t310 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoCMethod::get_Name() */, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MonoCMethod::get_ReflectedType() */, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Reflection.MonoCMethod::ToString() */, __this);
		MemberInfoSerializationHolder_Serialize_m5956(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfoMethodDeclarations.h"

// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoProperty.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"


// System.Void System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)
extern "C" void MonoPropertyInfo_get_property_info_m6084 (Object_t * __this /* static, unused */, MonoProperty_t * ___prop, MonoPropertyInfo_t1096 * ___info, int32_t ___req_info, const MethodInfo* method)
{
	typedef void (*MonoPropertyInfo_get_property_info_m6084_ftn) (MonoProperty_t *, MonoPropertyInfo_t1096 *, int32_t);
	static MonoPropertyInfo_get_property_info_m6084_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoPropertyInfo_get_property_info_m6084_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)");
	_il2cpp_icall_func(___prop, ___info, ___req_info);
}
// System.Type[] System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)
extern "C" TypeU5BU5D_t196* MonoPropertyInfo_GetTypeModifiers_m6085 (Object_t * __this /* static, unused */, MonoProperty_t * ___prop, bool ___optional, const MethodInfo* method)
{
	typedef TypeU5BU5D_t196* (*MonoPropertyInfo_GetTypeModifiers_m6085_ftn) (MonoProperty_t *, bool);
	static MonoPropertyInfo_GetTypeModifiers_m6085_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoPropertyInfo_GetTypeModifiers_m6085_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)");
	return _il2cpp_icall_func(___prop, ___optional);
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfoMethodDeclarations.h"



// System.Reflection.MonoProperty/GetterAdapter
#include "mscorlib_System_Reflection_MonoProperty_GetterAdapter.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoProperty/GetterAdapter
#include "mscorlib_System_Reflection_MonoProperty_GetterAdapterMethodDeclarations.h"



// System.Void System.Reflection.MonoProperty/GetterAdapter::.ctor(System.Object,System.IntPtr)
extern "C" void GetterAdapter__ctor_m6086 (GetterAdapter_t1098 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object System.Reflection.MonoProperty/GetterAdapter::Invoke(System.Object)
extern "C" Object_t * GetterAdapter_Invoke_m6087 (GetterAdapter_t1098 * __this, Object_t * ____this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetterAdapter_Invoke_m6087((GetterAdapter_t1098 *)__this->___prev_9,____this, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ____this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ____this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetterAdapter_t1098(Il2CppObject* delegate, Object_t * ____this)
{
	// Marshaling of parameter '____this' to native representation
	Object_t * _____this_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Reflection.MonoProperty/GetterAdapter::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * GetterAdapter_BeginInvoke_m6088 (GetterAdapter_t1098 * __this, Object_t * ____this, AsyncCallback_t45 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____this;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object System.Reflection.MonoProperty/GetterAdapter::EndInvoke(System.IAsyncResult)
extern "C" Object_t * GetterAdapter_EndInvoke_m6089 (GetterAdapter_t1098 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoPropertyMethodDeclarations.h"

// System.MethodAccessException
#include "mscorlib_System_MethodAccessException.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.MethodAccessException
#include "mscorlib_System_MethodAccessExceptionMethodDeclarations.h"


// System.Void System.Reflection.MonoProperty::.ctor()
extern "C" void MonoProperty__ctor_m6090 (MonoProperty_t * __this, const MethodInfo* method)
{
	{
		PropertyInfo__ctor_m6132(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
extern "C" void MonoProperty_CachePropertyInfo_m6091 (MonoProperty_t * __this, int32_t ___flags, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___cached_3);
		int32_t L_1 = ___flags;
		int32_t L_2 = ___flags;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2)))
		{
			goto IL_0026;
		}
	}
	{
		MonoPropertyInfo_t1096 * L_3 = &(__this->___info_2);
		int32_t L_4 = ___flags;
		MonoPropertyInfo_get_property_info_m6084(NULL /*static, unused*/, __this, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___cached_3);
		int32_t L_6 = ___flags;
		__this->___cached_3 = ((int32_t)((int32_t)L_5|(int32_t)L_6));
	}

IL_0026:
	{
		return;
	}
}
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
extern "C" int32_t MonoProperty_get_Attributes_m6092 (MonoProperty_t * __this, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m6091(__this, 1, /*hidden argument*/NULL);
		MonoPropertyInfo_t1096 * L_0 = &(__this->___info_2);
		int32_t L_1 = (L_0->___attrs_4);
		return L_1;
	}
}
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
extern "C" bool MonoProperty_get_CanRead_m6093 (MonoProperty_t * __this, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m6091(__this, 2, /*hidden argument*/NULL);
		MonoPropertyInfo_t1096 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		return ((((int32_t)((((Object_t*)(MethodInfo_t *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
extern "C" bool MonoProperty_get_CanWrite_m6094 (MonoProperty_t * __this, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m6091(__this, 4, /*hidden argument*/NULL);
		MonoPropertyInfo_t1096 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		return ((((int32_t)((((Object_t*)(MethodInfo_t *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type System.Reflection.MonoProperty::get_PropertyType()
extern "C" Type_t * MonoProperty_get_PropertyType_m6095 (MonoProperty_t * __this, const MethodInfo* method)
{
	ParameterInfoU5BU5D_t369* V_0 = {0};
	{
		MonoProperty_CachePropertyInfo_m6091(__this, 6, /*hidden argument*/NULL);
		MonoPropertyInfo_t1096 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		MonoPropertyInfo_t1096 * L_2 = &(__this->___info_2);
		MethodInfo_t * L_3 = (L_2->___get_method_2);
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(28 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_3);
		return L_4;
	}

IL_0025:
	{
		MonoPropertyInfo_t1096 * L_5 = &(__this->___info_2);
		MethodInfo_t * L_6 = (L_5->___set_method_3);
		NullCheck(L_6);
		ParameterInfoU5BU5D_t369* L_7 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
		V_0 = L_7;
		ParameterInfoU5BU5D_t369* L_8 = V_0;
		ParameterInfoU5BU5D_t369* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)1));
		NullCheck((*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_8, L_10)));
		Type_t * L_11 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_8, L_10)));
		return L_11;
	}
}
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
extern "C" Type_t * MonoProperty_get_ReflectedType_m6096 (MonoProperty_t * __this, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m6091(__this, 8, /*hidden argument*/NULL);
		MonoPropertyInfo_t1096 * L_0 = &(__this->___info_2);
		Type_t * L_1 = (L_0->___parent_0);
		return L_1;
	}
}
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
extern "C" Type_t * MonoProperty_get_DeclaringType_m6097 (MonoProperty_t * __this, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m6091(__this, ((int32_t)16), /*hidden argument*/NULL);
		MonoPropertyInfo_t1096 * L_0 = &(__this->___info_2);
		Type_t * L_1 = (L_0->___parent_0);
		return L_1;
	}
}
// System.String System.Reflection.MonoProperty::get_Name()
extern "C" String_t* MonoProperty_get_Name_m6098 (MonoProperty_t * __this, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m6091(__this, ((int32_t)32), /*hidden argument*/NULL);
		MonoPropertyInfo_t1096 * L_0 = &(__this->___info_2);
		String_t* L_1 = (L_0->___name_1);
		return L_1;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
extern TypeInfo* MethodInfoU5BU5D_t1091_il2cpp_TypeInfo_var;
extern "C" MethodInfoU5BU5D_t1091* MonoProperty_GetAccessors_m6099 (MonoProperty_t * __this, bool ___nonPublic, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodInfoU5BU5D_t1091_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MethodInfoU5BU5D_t1091* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		MonoProperty_CachePropertyInfo_m6091(__this, 6, /*hidden argument*/NULL);
		MonoPropertyInfo_t1096 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		MonoPropertyInfo_t1096 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___set_method_3);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_4);
		if (!L_5)
		{
			goto IL_002f;
		}
	}

IL_002d:
	{
		V_1 = 1;
	}

IL_002f:
	{
		MonoPropertyInfo_t1096 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___get_method_2);
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		bool L_8 = ___nonPublic;
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		MonoPropertyInfo_t1096 * L_9 = &(__this->___info_2);
		MethodInfo_t * L_10 = (L_9->___get_method_2);
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_10);
		if (!L_11)
		{
			goto IL_0053;
		}
	}

IL_0051:
	{
		V_0 = 1;
	}

IL_0053:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		V_2 = ((MethodInfoU5BU5D_t1091*)SZArrayNew(MethodInfoU5BU5D_t1091_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_12+(int32_t)L_13))));
		V_3 = 0;
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		MethodInfoU5BU5D_t1091* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
		MonoPropertyInfo_t1096 * L_18 = &(__this->___info_2);
		MethodInfo_t * L_19 = (L_18->___set_method_3);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_17);
		ArrayElementTypeCheck (L_15, L_19);
		*((MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_15, L_17)) = (MethodInfo_t *)L_19;
	}

IL_0073:
	{
		int32_t L_20 = V_0;
		if (!L_20)
		{
			goto IL_0088;
		}
	}
	{
		MethodInfoU5BU5D_t1091* L_21 = V_2;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
		MonoPropertyInfo_t1096 * L_24 = &(__this->___info_2);
		MethodInfo_t * L_25 = (L_24->___get_method_2);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_23);
		ArrayElementTypeCheck (L_21, L_25);
		*((MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_21, L_23)) = (MethodInfo_t *)L_25;
	}

IL_0088:
	{
		MethodInfoU5BU5D_t1091* L_26 = V_2;
		return L_26;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetGetMethod_m6100 (MonoProperty_t * __this, bool ___nonPublic, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m6091(__this, 2, /*hidden argument*/NULL);
		MonoPropertyInfo_t1096 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		MonoPropertyInfo_t1096 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___get_method_2);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		MonoPropertyInfo_t1096 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___get_method_2);
		return L_7;
	}

IL_0035:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
extern TypeInfo* ParameterInfoU5BU5D_t369_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterInfo_t370_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t369* MonoProperty_GetIndexParameters_m6101 (MonoProperty_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParameterInfoU5BU5D_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1988);
		ParameterInfo_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1989);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t369* V_0 = {0};
	ParameterInfoU5BU5D_t369* V_1 = {0};
	int32_t V_2 = 0;
	ParameterInfo_t370 * V_3 = {0};
	{
		MonoProperty_CachePropertyInfo_m6091(__this, 6, /*hidden argument*/NULL);
		MonoPropertyInfo_t1096 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		MonoPropertyInfo_t1096 * L_2 = &(__this->___info_2);
		MethodInfo_t * L_3 = (L_2->___get_method_2);
		NullCheck(L_3);
		ParameterInfoU5BU5D_t369* L_4 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_3);
		V_0 = L_4;
		goto IL_0063;
	}

IL_0027:
	{
		MonoPropertyInfo_t1096 * L_5 = &(__this->___info_2);
		MethodInfo_t * L_6 = (L_5->___set_method_3);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		MonoPropertyInfo_t1096 * L_7 = &(__this->___info_2);
		MethodInfo_t * L_8 = (L_7->___set_method_3);
		NullCheck(L_8);
		ParameterInfoU5BU5D_t369* L_9 = (ParameterInfoU5BU5D_t369*)VirtFuncInvoker0< ParameterInfoU5BU5D_t369* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_8);
		V_1 = L_9;
		ParameterInfoU5BU5D_t369* L_10 = V_1;
		NullCheck(L_10);
		V_0 = ((ParameterInfoU5BU5D_t369*)SZArrayNew(ParameterInfoU5BU5D_t369_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))-(int32_t)1))));
		ParameterInfoU5BU5D_t369* L_11 = V_1;
		ParameterInfoU5BU5D_t369* L_12 = V_0;
		ParameterInfoU5BU5D_t369* L_13 = V_0;
		NullCheck(L_13);
		Array_Copy_m2537(NULL /*static, unused*/, (Array_t *)(Array_t *)L_11, (Array_t *)(Array_t *)L_12, (((int32_t)(((Array_t *)L_13)->max_length))), /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_005c:
	{
		return ((ParameterInfoU5BU5D_t369*)SZArrayNew(ParameterInfoU5BU5D_t369_il2cpp_TypeInfo_var, 0));
	}

IL_0063:
	{
		V_2 = 0;
		goto IL_0079;
	}

IL_0067:
	{
		ParameterInfoU5BU5D_t369* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		V_3 = (*(ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_14, L_16));
		ParameterInfoU5BU5D_t369* L_17 = V_0;
		int32_t L_18 = V_2;
		ParameterInfo_t370 * L_19 = V_3;
		ParameterInfo_t370 * L_20 = (ParameterInfo_t370 *)il2cpp_codegen_object_new (ParameterInfo_t370_il2cpp_TypeInfo_var);
		ParameterInfo__ctor_m6116(L_20, L_19, __this, /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		ArrayElementTypeCheck (L_17, L_20);
		*((ParameterInfo_t370 **)(ParameterInfo_t370 **)SZArrayLdElema(L_17, L_18)) = (ParameterInfo_t370 *)L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_22 = V_2;
		ParameterInfoU5BU5D_t369* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((Array_t *)L_23)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		ParameterInfoU5BU5D_t369* L_24 = V_0;
		return L_24;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetSetMethod_m6102 (MonoProperty_t * __this, bool ___nonPublic, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m6091(__this, 4, /*hidden argument*/NULL);
		MonoPropertyInfo_t1096 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		MonoPropertyInfo_t1096 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___set_method_3);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		MonoPropertyInfo_t1096 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___set_method_3);
		return L_7;
	}

IL_0035:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" bool MonoProperty_IsDefined_m6103 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		bool L_1 = MonoCustomAttrs_IsDefined_m7751(NULL /*static, unused*/, __this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* MonoProperty_GetCustomAttributes_m6104 (MonoProperty_t * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_0 = MonoCustomAttrs_GetCustomAttributes_m7750(NULL /*static, unused*/, __this, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* MonoProperty_GetCustomAttributes_m6105 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_1 = MonoCustomAttrs_GetCustomAttributes_m7749(NULL /*static, unused*/, __this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
extern const Il2CppType* StaticGetter_1_t1445_0_0_0_var;
extern const Il2CppType* Getter_2_t1446_0_0_0_var;
extern const Il2CppType* MonoProperty_t_0_0_0_var;
extern const Il2CppType* GetterAdapter_t1098_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t196_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* MethodAccessException_t1369_il2cpp_TypeInfo_var;
extern TypeInfo* GetterAdapter_t1098_il2cpp_TypeInfo_var;
extern "C" GetterAdapter_t1098 * MonoProperty_CreateGetterDelegate_m6106 (Object_t * __this /* static, unused */, MethodInfo_t * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StaticGetter_1_t1445_0_0_0_var = il2cpp_codegen_type_from_index(2022);
		Getter_2_t1446_0_0_0_var = il2cpp_codegen_type_from_index(2023);
		MonoProperty_t_0_0_0_var = il2cpp_codegen_type_from_index(2024);
		GetterAdapter_t1098_0_0_0_var = il2cpp_codegen_type_from_index(2025);
		TypeU5BU5D_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		MethodAccessException_t1369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2018);
		GetterAdapter_t1098_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2025);
		s_Il2CppMethodIntialized = true;
	}
	TypeU5BU5D_t196* V_0 = {0};
	Type_t * V_1 = {0};
	Object_t * V_2 = {0};
	MethodInfo_t * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		MethodInfo_t * L_0 = ___method;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_0);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		TypeU5BU5D_t196* L_2 = ((TypeU5BU5D_t196*)SZArrayNew(TypeU5BU5D_t196_il2cpp_TypeInfo_var, 1));
		MethodInfo_t * L_3 = ___method;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(28 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_4;
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(StaticGetter_1_t1445_0_0_0_var), /*hidden argument*/NULL);
		V_4 = L_5;
		V_5 = (String_t*) &_stringLiteral1621;
		goto IL_0059;
	}

IL_002d:
	{
		TypeU5BU5D_t196* L_6 = ((TypeU5BU5D_t196*)SZArrayNew(TypeU5BU5D_t196_il2cpp_TypeInfo_var, 2));
		MethodInfo_t * L_7 = ___method;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_8);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 0)) = (Type_t *)L_8;
		TypeU5BU5D_t196* L_9 = L_6;
		MethodInfo_t * L_10 = ___method;
		NullCheck(L_10);
		Type_t * L_11 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(28 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_10);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		ArrayElementTypeCheck (L_9, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_9, 1)) = (Type_t *)L_11;
		V_0 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Getter_2_t1446_0_0_0_var), /*hidden argument*/NULL);
		V_4 = L_12;
		V_5 = (String_t*) &_stringLiteral1622;
	}

IL_0059:
	{
		Type_t * L_13 = V_4;
		TypeU5BU5D_t196* L_14 = V_0;
		NullCheck(L_13);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t196* >::Invoke(78 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_13, L_14);
		V_1 = L_15;
		Type_t * L_16 = V_1;
		MethodInfo_t * L_17 = ___method;
		Delegate_t332 * L_18 = Delegate_CreateDelegate_m4183(NULL /*static, unused*/, L_16, L_17, 0, /*hidden argument*/NULL);
		V_2 = L_18;
		Object_t * L_19 = V_2;
		if (L_19)
		{
			goto IL_0074;
		}
	}
	{
		MethodAccessException_t1369 * L_20 = (MethodAccessException_t1369 *)il2cpp_codegen_object_new (MethodAccessException_t1369_il2cpp_TypeInfo_var);
		MethodAccessException__ctor_m7722(L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(MonoProperty_t_0_0_0_var), /*hidden argument*/NULL);
		String_t* L_22 = V_5;
		NullCheck(L_21);
		MethodInfo_t * L_23 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_21, L_22, ((int32_t)40));
		V_3 = L_23;
		MethodInfo_t * L_24 = V_3;
		TypeU5BU5D_t196* L_25 = V_0;
		NullCheck(L_24);
		MethodInfo_t * L_26 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t196* >::Invoke(29 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_24, L_25);
		V_3 = L_26;
		Type_t * L_27 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(GetterAdapter_t1098_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_28 = V_2;
		MethodInfo_t * L_29 = V_3;
		Delegate_t332 * L_30 = Delegate_CreateDelegate_m4181(NULL /*static, unused*/, L_27, L_28, L_29, 1, /*hidden argument*/NULL);
		return ((GetterAdapter_t1098 *)Castclass(L_30, GetterAdapter_t1098_il2cpp_TypeInfo_var));
	}
}
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
extern "C" Object_t * MonoProperty_GetValue_m6107 (MonoProperty_t * __this, Object_t * ___obj, ObjectU5BU5D_t200* ___index, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t200* L_0 = ___index;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t200* L_1 = ___index;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_0008;
		}
	}

IL_0008:
	{
		Object_t * L_2 = ___obj;
		ObjectU5BU5D_t200* L_3 = ___index;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t376 *, ObjectU5BU5D_t200*, CultureInfo_t342 * >::Invoke(23 /* System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, __this, L_2, 0, (Binder_t376 *)NULL, L_3, (CultureInfo_t342 *)NULL);
		return L_4;
	}
}
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* SecurityException_t1284_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t1105_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoProperty_GetValue_m6108 (MonoProperty_t * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t376 * ___binder, ObjectU5BU5D_t200* ___index, CultureInfo_t342 * ___culture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		SecurityException_t1284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1953);
		TargetInvocationException_t1105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2019);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	SecurityException_t1284 * V_2 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = NULL;
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean) */, __this, 1);
		V_1 = L_0;
		MethodInfo_t * L_1 = V_1;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoProperty::get_Name() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1179(NULL /*static, unused*/, (String_t*) &_stringLiteral1623, L_2, (String_t*) &_stringLiteral82, /*hidden argument*/NULL);
		ArgumentException_t313 * L_4 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_4, L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t200* L_5 = ___index;
			if (!L_5)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			ObjectU5BU5D_t200* L_6 = ___index;
			NullCheck(L_6);
			if ((((int32_t)(((Array_t *)L_6)->max_length))))
			{
				goto IL_0041;
			}
		}

IL_0032:
		{
			MethodInfo_t * L_7 = V_1;
			Object_t * L_8 = ___obj;
			int32_t L_9 = ___invokeAttr;
			Binder_t376 * L_10 = ___binder;
			CultureInfo_t342 * L_11 = ___culture;
			NullCheck(L_7);
			Object_t * L_12 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t376 *, ObjectU5BU5D_t200*, CultureInfo_t342 * >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_7, L_8, L_9, L_10, (ObjectU5BU5D_t200*)(ObjectU5BU5D_t200*)NULL, L_11);
			V_0 = L_12;
			goto IL_004f;
		}

IL_0041:
		{
			MethodInfo_t * L_13 = V_1;
			Object_t * L_14 = ___obj;
			int32_t L_15 = ___invokeAttr;
			Binder_t376 * L_16 = ___binder;
			ObjectU5BU5D_t200* L_17 = ___index;
			CultureInfo_t342 * L_18 = ___culture;
			NullCheck(L_13);
			Object_t * L_19 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t376 *, ObjectU5BU5D_t200*, CultureInfo_t342 * >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_13, L_14, L_15, L_16, L_17, L_18);
			V_0 = L_19;
		}

IL_004f:
		{
			goto IL_005b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SecurityException_t1284_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0051;
		throw e;
	}

CATCH_0051:
	{ // begin catch(System.Security.SecurityException)
		V_2 = ((SecurityException_t1284 *)__exception_local);
		SecurityException_t1284 * L_20 = V_2;
		TargetInvocationException_t1105 * L_21 = (TargetInvocationException_t1105 *)il2cpp_codegen_object_new (TargetInvocationException_t1105_il2cpp_TypeInfo_var);
		TargetInvocationException__ctor_m6144(L_21, L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
		goto IL_005b;
	} // end catch (depth: 1)

IL_005b:
	{
		Object_t * L_22 = V_0;
		return L_22;
	}
}
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t313_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t200_il2cpp_TypeInfo_var;
extern "C" void MonoProperty_SetValue_m6109 (MonoProperty_t * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t376 * ___binder, ObjectU5BU5D_t200* ___index, CultureInfo_t342 * ___culture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		ArgumentException_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		ObjectU5BU5D_t200_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	ObjectU5BU5D_t200* V_1 = {0};
	int32_t V_2 = 0;
	{
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean) */, __this, 1);
		V_0 = L_0;
		MethodInfo_t * L_1 = V_0;
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoProperty::get_Name() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1179(NULL /*static, unused*/, (String_t*) &_stringLiteral1624, L_2, (String_t*) &_stringLiteral82, /*hidden argument*/NULL);
		ArgumentException_t313 * L_4 = (ArgumentException_t313 *)il2cpp_codegen_object_new (ArgumentException_t313_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1159(L_4, L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0026:
	{
		ObjectU5BU5D_t200* L_5 = ___index;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		ObjectU5BU5D_t200* L_6 = ___index;
		NullCheck(L_6);
		if ((((int32_t)(((Array_t *)L_6)->max_length))))
		{
			goto IL_003d;
		}
	}

IL_0030:
	{
		ObjectU5BU5D_t200* L_7 = ((ObjectU5BU5D_t200*)SZArrayNew(ObjectU5BU5D_t200_il2cpp_TypeInfo_var, 1));
		Object_t * L_8 = ___value;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0)) = (Object_t *)L_8;
		V_1 = L_7;
		goto IL_0058;
	}

IL_003d:
	{
		ObjectU5BU5D_t200* L_9 = ___index;
		NullCheck(L_9);
		V_2 = (((int32_t)(((Array_t *)L_9)->max_length)));
		int32_t L_10 = V_2;
		V_1 = ((ObjectU5BU5D_t200*)SZArrayNew(ObjectU5BU5D_t200_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_10+(int32_t)1))));
		ObjectU5BU5D_t200* L_11 = ___index;
		ObjectU5BU5D_t200* L_12 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(7 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_11, (Array_t *)(Array_t *)L_12, 0);
		ObjectU5BU5D_t200* L_13 = V_1;
		int32_t L_14 = V_2;
		Object_t * L_15 = ___value;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		ArrayElementTypeCheck (L_13, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)) = (Object_t *)L_15;
	}

IL_0058:
	{
		MethodInfo_t * L_16 = V_0;
		Object_t * L_17 = ___obj;
		int32_t L_18 = ___invokeAttr;
		Binder_t376 * L_19 = ___binder;
		ObjectU5BU5D_t200* L_20 = V_1;
		CultureInfo_t342 * L_21 = ___culture;
		NullCheck(L_16);
		VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t376 *, ObjectU5BU5D_t200*, CultureInfo_t342 * >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_16, L_17, L_18, L_19, L_20, L_21);
		return;
	}
}
// System.String System.Reflection.MonoProperty::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoProperty_ToString_m6110 (MonoProperty_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.MonoProperty::get_PropertyType() */, __this);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoProperty::get_Name() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1179(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral18, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t196* MonoProperty_GetOptionalCustomModifiers_m6111 (MonoProperty_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	TypeU5BU5D_t196* V_0 = {0};
	{
		TypeU5BU5D_t196* L_0 = MonoPropertyInfo_GetTypeModifiers_m6085(NULL /*static, unused*/, __this, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		TypeU5BU5D_t196* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t196* L_2 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		return L_2;
	}

IL_0011:
	{
		TypeU5BU5D_t196* L_3 = V_0;
		return L_3;
	}
}
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t196* MonoProperty_GetRequiredCustomModifiers_m6112 (MonoProperty_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	TypeU5BU5D_t196* V_0 = {0};
	{
		TypeU5BU5D_t196* L_0 = MonoPropertyInfo_GetTypeModifiers_m6085(NULL /*static, unused*/, __this, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		TypeU5BU5D_t196* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t196* L_2 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		return L_2;
	}

IL_0011:
	{
		TypeU5BU5D_t196* L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoProperty_GetObjectData_m6113 (MonoProperty_t * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t310 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoProperty::get_Name() */, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MonoProperty::get_ReflectedType() */, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Reflection.MonoProperty::ToString() */, __this);
		MemberInfoSerializationHolder_Serialize_m5956(NULL /*static, unused*/, L_0, L_1, L_2, L_3, ((int32_t)16), /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Runtime.InteropServices.InAttribute
#include "mscorlib_System_Runtime_InteropServices_InAttribute.h"
// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttribute.h"
// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttribute.h"
// System.Runtime.InteropServices.InAttribute
#include "mscorlib_System_Runtime_InteropServices_InAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttributeMethodDeclarations.h"


// System.Void System.Reflection.ParameterInfo::.ctor()
extern "C" void ParameterInfo__ctor_m6114 (ParameterInfo_t370 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.Emit.ParameterBuilder,System.Type,System.Reflection.MemberInfo,System.Int32)
extern "C" void ParameterInfo__ctor_m6115 (ParameterInfo_t370 * __this, ParameterBuilder_t1066 * ___pb, Type_t * ___type, MemberInfo_t * ___member, int32_t ___position, const MethodInfo* method)
{
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		__this->___ClassImpl_0 = L_0;
		MemberInfo_t * L_1 = ___member;
		__this->___MemberImpl_2 = L_1;
		ParameterBuilder_t1066 * L_2 = ___pb;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		ParameterBuilder_t1066 * L_3 = ___pb;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Reflection.Emit.ParameterBuilder::get_Name() */, L_3);
		__this->___NameImpl_3 = L_4;
		ParameterBuilder_t1066 * L_5 = ___pb;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Reflection.Emit.ParameterBuilder::get_Position() */, L_5);
		__this->___PositionImpl_4 = ((int32_t)((int32_t)L_6-(int32_t)1));
		ParameterBuilder_t1066 * L_7 = ___pb;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Reflection.Emit.ParameterBuilder::get_Attributes() */, L_7);
		__this->___AttrsImpl_5 = L_8;
		goto IL_0057;
	}

IL_003f:
	{
		__this->___NameImpl_3 = (String_t*)NULL;
		int32_t L_9 = ___position;
		__this->___PositionImpl_4 = ((int32_t)((int32_t)L_9-(int32_t)1));
		__this->___AttrsImpl_5 = 0;
	}

IL_0057:
	{
		return;
	}
}
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
extern "C" void ParameterInfo__ctor_m6116 (ParameterInfo_t370 * __this, ParameterInfo_t370 * ___pinfo, MemberInfo_t * ___member, const MethodInfo* method)
{
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		ParameterInfo_t370 * L_0 = ___pinfo;
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		__this->___ClassImpl_0 = L_1;
		MemberInfo_t * L_2 = ___member;
		__this->___MemberImpl_2 = L_2;
		ParameterInfo_t370 * L_3 = ___pinfo;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_3);
		__this->___NameImpl_3 = L_4;
		ParameterInfo_t370 * L_5 = ___pinfo;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Reflection.ParameterInfo::get_Position() */, L_5);
		__this->___PositionImpl_4 = L_6;
		ParameterInfo_t370 * L_7 = ___pinfo;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, L_7);
		__this->___AttrsImpl_5 = L_8;
		return;
	}
}
// System.String System.Reflection.ParameterInfo::ToString()
extern const Il2CppType* Void_t410_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t424_il2cpp_TypeInfo_var;
extern "C" String_t* ParameterInfo_ToString_m6117 (ParameterInfo_t370 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Void_t410_0_0_0_var = il2cpp_codegen_type_from_index(247);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Char_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	bool V_1 = false;
	String_t* V_2 = {0};
	int32_t G_B7_0 = 0;
	String_t* G_B10_0 = {0};
	{
		Type_t * L_0 = (__this->___ClassImpl_0);
		V_0 = L_0;
		goto IL_0010;
	}

IL_0009:
	{
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
	}

IL_0010:
	{
		Type_t * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Type::get_HasElementType() */, L_3);
		if (L_4)
		{
			goto IL_0009;
		}
	}
	{
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_5);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		Type_t * L_7 = (__this->___ClassImpl_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(Void_t410_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_0054;
		}
	}
	{
		Type_t * L_9 = (__this->___ClassImpl_0);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_9);
		MemberInfo_t * L_11 = (__this->___MemberImpl_2);
		NullCheck(L_11);
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_11);
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m1163(NULL /*static, unused*/, L_10, L_13, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_14));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 1;
	}

IL_0055:
	{
		V_1 = G_B7_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		Type_t * L_16 = (__this->___ClassImpl_0);
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		G_B10_0 = L_17;
		goto IL_0071;
	}

IL_0066:
	{
		Type_t * L_18 = (__this->___ClassImpl_0);
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_18);
		G_B10_0 = L_19;
	}

IL_0071:
	{
		V_2 = G_B10_0;
		bool L_20 = ParameterInfo_get_IsRetval_m6123(__this, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_21 = V_2;
		uint16_t L_22 = ((int32_t)32);
		Object_t * L_23 = Box(Char_t424_il2cpp_TypeInfo_var, &L_22);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m1185(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		String_t* L_25 = V_2;
		String_t* L_26 = (__this->___NameImpl_3);
		String_t* L_27 = String_Concat_m1175(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
	}

IL_0095:
	{
		String_t* L_28 = V_2;
		return L_28;
	}
}
// System.Type System.Reflection.ParameterInfo::get_ParameterType()
extern "C" Type_t * ParameterInfo_get_ParameterType_m6118 (ParameterInfo_t370 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___ClassImpl_0);
		return L_0;
	}
}
// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes()
extern "C" int32_t ParameterInfo_get_Attributes_m6119 (ParameterInfo_t370 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___AttrsImpl_5);
		return L_0;
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
extern "C" bool ParameterInfo_get_IsIn_m6120 (ParameterInfo_t370 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
extern "C" bool ParameterInfo_get_IsOptional_m6121 (ParameterInfo_t370 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
extern "C" bool ParameterInfo_get_IsOut_m6122 (ParameterInfo_t370 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsRetval()
extern "C" bool ParameterInfo_get_IsRetval_m6123 (ParameterInfo_t370 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Reflection.MemberInfo System.Reflection.ParameterInfo::get_Member()
extern "C" MemberInfo_t * ParameterInfo_get_Member_m6124 (ParameterInfo_t370 * __this, const MethodInfo* method)
{
	{
		MemberInfo_t * L_0 = (__this->___MemberImpl_2);
		return L_0;
	}
}
// System.String System.Reflection.ParameterInfo::get_Name()
extern "C" String_t* ParameterInfo_get_Name_m6125 (ParameterInfo_t370 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___NameImpl_3);
		return L_0;
	}
}
// System.Int32 System.Reflection.ParameterInfo::get_Position()
extern "C" int32_t ParameterInfo_get_Position_m6126 (ParameterInfo_t370 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___PositionImpl_4);
		return L_0;
	}
}
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* ParameterInfo_GetCustomAttributes_m6127 (ParameterInfo_t370 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t200* L_2 = MonoCustomAttrs_GetCustomAttributes_m7749(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Reflection.ParameterInfo::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t1375_il2cpp_TypeInfo_var;
extern "C" bool ParameterInfo_IsDefined_m6128 (ParameterInfo_t370 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1840);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t1375_il2cpp_TypeInfo_var);
		bool L_2 = MonoCustomAttrs_IsDefined_m7751(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object[] System.Reflection.ParameterInfo::GetPseudoCustomAttributes()
extern TypeInfo* ObjectU5BU5D_t200_il2cpp_TypeInfo_var;
extern TypeInfo* InAttribute_t890_il2cpp_TypeInfo_var;
extern TypeInfo* OptionalAttribute_t894_il2cpp_TypeInfo_var;
extern TypeInfo* OutAttribute_t887_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t200* ParameterInfo_GetPseudoCustomAttributes_m6129 (ParameterInfo_t370 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t200_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		InAttribute_t890_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2026);
		OptionalAttribute_t894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2027);
		OutAttribute_t887_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t200* V_1 = {0};
	{
		V_0 = 0;
		bool L_0 = ParameterInfo_get_IsIn_m6120(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_000e:
	{
		bool L_2 = ParameterInfo_get_IsOut_m6122(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001a:
	{
		bool L_4 = ParameterInfo_get_IsOptional_m6121(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0026:
	{
		UnmanagedMarshal_t1059 * L_6 = (__this->___marshalAs_6);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		return (ObjectU5BU5D_t200*)NULL;
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		V_1 = ((ObjectU5BU5D_t200*)SZArrayNew(ObjectU5BU5D_t200_il2cpp_TypeInfo_var, L_9));
		V_0 = 0;
		bool L_10 = ParameterInfo_get_IsIn_m6120(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		ObjectU5BU5D_t200* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
		InAttribute_t890 * L_14 = (InAttribute_t890 *)il2cpp_codegen_object_new (InAttribute_t890_il2cpp_TypeInfo_var);
		InAttribute__ctor_m4407(L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, L_13)) = (Object_t *)L_14;
	}

IL_0054:
	{
		bool L_15 = ParameterInfo_get_IsOptional_m6121(__this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		ObjectU5BU5D_t200* L_16 = V_1;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
		OptionalAttribute_t894 * L_19 = (OptionalAttribute_t894 *)il2cpp_codegen_object_new (OptionalAttribute_t894_il2cpp_TypeInfo_var);
		OptionalAttribute__ctor_m4411(L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_18);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)) = (Object_t *)L_19;
	}

IL_0068:
	{
		bool L_20 = ParameterInfo_get_IsOut_m6122(__this, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_007c;
		}
	}
	{
		ObjectU5BU5D_t200* L_21 = V_1;
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
		OutAttribute_t887 * L_24 = (OutAttribute_t887 *)il2cpp_codegen_object_new (OutAttribute_t887_il2cpp_TypeInfo_var);
		OutAttribute__ctor_m4403(L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_23);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23)) = (Object_t *)L_24;
	}

IL_007c:
	{
		UnmanagedMarshal_t1059 * L_25 = (__this->___marshalAs_6);
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		ObjectU5BU5D_t200* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)((int32_t)L_28+(int32_t)1));
		UnmanagedMarshal_t1059 * L_29 = (__this->___marshalAs_6);
		NullCheck(L_29);
		MarshalAsAttribute_t889 * L_30 = UnmanagedMarshal_ToMarshalAsAttribute_m5870(L_29, /*hidden argument*/NULL);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_28);
		ArrayElementTypeCheck (L_26, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, L_28)) = (Object_t *)L_30;
	}

IL_0096:
	{
		ObjectU5BU5D_t200* L_31 = V_1;
		return L_31;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifierMethodDeclarations.h"



// Conversion methods for marshalling of: System.Reflection.ParameterModifier
void ParameterModifier_t1100_marshal(const ParameterModifier_t1100& unmarshaled, ParameterModifier_t1100_marshaled& marshaled)
{
	marshaled.____byref_0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.____byref_0);
}
extern TypeInfo* Boolean_t333_il2cpp_TypeInfo_var;
void ParameterModifier_t1100_marshal_back(const ParameterModifier_t1100_marshaled& marshaled, ParameterModifier_t1100& unmarshaled)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	unmarshaled.____byref_0 = (BooleanU5BU5D_t525*)il2cpp_codegen_marshal_array_result(Boolean_t333_il2cpp_TypeInfo_var, marshaled.____byref_0, 1);
}
// Conversion method for clean up from marshalling of: System.Reflection.ParameterModifier
void ParameterModifier_t1100_marshal_cleanup(ParameterModifier_t1100_marshaled& marshaled)
{
}
// System.Reflection.Pointer
#include "mscorlib_System_Reflection_Pointer.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Pointer
#include "mscorlib_System_Reflection_PointerMethodDeclarations.h"



// System.Void System.Reflection.Pointer::.ctor()
extern "C" void Pointer__ctor_m6130 (Pointer_t1101 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Pointer::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotSupportedException_t667_il2cpp_TypeInfo_var;
extern "C" void Pointer_System_Runtime_Serialization_ISerializable_GetObjectData_m6131 (Pointer_t1101 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t667 * L_0 = (NotSupportedException_t667 *)il2cpp_codegen_object_new (NotSupportedException_t667_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2395(L_0, (String_t*) &_stringLiteral1625, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitecture.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitectureMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.PropertyInfo::.ctor()
extern "C" void PropertyInfo__ctor_m6132 (PropertyInfo_t * __this, const MethodInfo* method)
{
	{
		MemberInfo__ctor_m4389(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.PropertyAttributes System.Reflection.PropertyInfo::get_Attributes()
// System.Boolean System.Reflection.PropertyInfo::get_CanRead()
// System.Boolean System.Reflection.PropertyInfo::get_CanWrite()
// System.Reflection.MemberTypes System.Reflection.PropertyInfo::get_MemberType()
extern "C" int32_t PropertyInfo_get_MemberType_m6133 (PropertyInfo_t * __this, const MethodInfo* method)
{
	{
		return (int32_t)(((int32_t)16));
	}
}
// System.Type System.Reflection.PropertyInfo::get_PropertyType()
// System.Reflection.MethodInfo[] System.Reflection.PropertyInfo::GetAccessors(System.Boolean)
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean)
// System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters()
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean)
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[])
extern "C" Object_t * PropertyInfo_GetValue_m6134 (PropertyInfo_t * __this, Object_t * ___obj, ObjectU5BU5D_t200* ___index, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		ObjectU5BU5D_t200* L_1 = ___index;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t376 *, ObjectU5BU5D_t200*, CultureInfo_t342 * >::Invoke(23 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, __this, L_0, 0, (Binder_t376 *)NULL, L_1, (CultureInfo_t342 *)NULL);
		return L_2;
	}
}
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[])
extern "C" void PropertyInfo_SetValue_m6135 (PropertyInfo_t * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t200* ___index, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = ___value;
		ObjectU5BU5D_t200* L_2 = ___index;
		VirtActionInvoker6< Object_t *, Object_t *, int32_t, Binder_t376 *, ObjectU5BU5D_t200*, CultureInfo_t342 * >::Invoke(25 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, __this, L_0, L_1, 0, (Binder_t376 *)NULL, L_2, (CultureInfo_t342 *)NULL);
		return;
	}
}
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Type[] System.Reflection.PropertyInfo::GetOptionalCustomModifiers()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t196* PropertyInfo_GetOptionalCustomModifiers_m6136 (PropertyInfo_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t196* L_0 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		return L_0;
	}
}
// System.Type[] System.Reflection.PropertyInfo::GetRequiredCustomModifiers()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t196* PropertyInfo_GetRequiredCustomModifiers_m6137 (PropertyInfo_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t196* L_0 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.StrongNameKeyPair
#include "mscorlib_System_Reflection_StrongNameKeyPairMethodDeclarations.h"



// System.Void System.Reflection.StrongNameKeyPair::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* ByteU5BU5D_t102_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t102_il2cpp_TypeInfo_var;
extern "C" void StrongNameKeyPair__ctor_m6138 (StrongNameKeyPair_t1076 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t102_0_0_0_var = il2cpp_codegen_type_from_index(78);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		ByteU5BU5D_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1161(__this, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_0 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(ByteU5BU5D_t102_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_2 = SerializationInfo_GetValue_m2392(L_0, (String_t*) &_stringLiteral1626, L_1, /*hidden argument*/NULL);
		__this->____publicKey_0 = ((ByteU5BU5D_t102*)Castclass(L_2, ByteU5BU5D_t102_il2cpp_TypeInfo_var));
		SerializationInfo_t310 * L_3 = ___info;
		NullCheck(L_3);
		String_t* L_4 = SerializationInfo_GetString_m2399(L_3, (String_t*) &_stringLiteral1627, /*hidden argument*/NULL);
		__this->____keyPairContainer_1 = L_4;
		SerializationInfo_t310 * L_5 = ___info;
		NullCheck(L_5);
		bool L_6 = SerializationInfo_GetBoolean_m2394(L_5, (String_t*) &_stringLiteral1628, /*hidden argument*/NULL);
		__this->____keyPairExported_2 = L_6;
		SerializationInfo_t310 * L_7 = ___info;
		Type_t * L_8 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(ByteU5BU5D_t102_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		Object_t * L_9 = SerializationInfo_GetValue_m2392(L_7, (String_t*) &_stringLiteral1629, L_8, /*hidden argument*/NULL);
		__this->____keyPairArray_3 = ((ByteU5BU5D_t102*)Castclass(L_9, ByteU5BU5D_t102_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* ByteU5BU5D_t102_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m6139 (StrongNameKeyPair_t1076 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t102_0_0_0_var = il2cpp_codegen_type_from_index(78);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t310 * L_0 = ___info;
		ByteU5BU5D_t102* L_1 = (__this->____publicKey_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(ByteU5BU5D_t102_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_AddValue_m2389(L_0, (String_t*) &_stringLiteral1626, (Object_t *)(Object_t *)L_1, L_2, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_3 = ___info;
		String_t* L_4 = (__this->____keyPairContainer_1);
		NullCheck(L_3);
		SerializationInfo_AddValue_m2402(L_3, (String_t*) &_stringLiteral1627, L_4, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_5 = ___info;
		bool L_6 = (__this->____keyPairExported_2);
		NullCheck(L_5);
		SerializationInfo_AddValue_m2390(L_5, (String_t*) &_stringLiteral1628, L_6, /*hidden argument*/NULL);
		SerializationInfo_t310 * L_7 = ___info;
		ByteU5BU5D_t102* L_8 = (__this->____keyPairArray_3);
		Type_t * L_9 = Type_GetTypeFromHandle_m1282(NULL /*static, unused*/, LoadTypeToken(ByteU5BU5D_t102_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_AddValue_m2389(L_7, (String_t*) &_stringLiteral1629, (Object_t *)(Object_t *)L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m6140 (StrongNameKeyPair_t1076 * __this, Object_t * ___sender, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"


// System.Void System.Reflection.TargetException::.ctor()
extern "C" void TargetException__ctor_m6141 (TargetException_t1104 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m4424(NULL /*static, unused*/, (String_t*) &_stringLiteral1630, /*hidden argument*/NULL);
		Exception__ctor_m1314(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetException::.ctor(System.String)
extern "C" void TargetException__ctor_m6142 (TargetException_t1104 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m1314(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetException__ctor_m6143 (TargetException_t1104 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t310 * L_0 = ___info;
		StreamingContext_t311  L_1 = ___context;
		Exception__ctor_m1317(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m6144 (TargetInvocationException_t1105 * __this, Exception_t65 * ___inner, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = ___inner;
		Exception__ctor_m1316(__this, (String_t*) &_stringLiteral1631, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetInvocationException__ctor_m6145 (TargetInvocationException_t1105 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___sc, const MethodInfo* method)
{
	{
		SerializationInfo_t310 * L_0 = ___info;
		StreamingContext_t311  L_1 = ___sc;
		Exception__ctor_m1317(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.TargetParameterCountException::.ctor()
extern "C" void TargetParameterCountException__ctor_m6146 (TargetParameterCountException_t1106 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m4424(NULL /*static, unused*/, (String_t*) &_stringLiteral1632, /*hidden argument*/NULL);
		Exception__ctor_m1314(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.String)
extern "C" void TargetParameterCountException__ctor_m6147 (TargetParameterCountException_t1106 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m1314(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetParameterCountException__ctor_m6148 (TargetParameterCountException_t1106 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t310 * L_0 = ___info;
		StreamingContext_t311  L_1 = ___context;
		Exception__ctor_m1317(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributesMethodDeclarations.h"



// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"



// System.Void System.Resources.NeutralResourcesLanguageAttribute::.ctor(System.String)
extern TypeInfo* ArgumentNullException_t341_il2cpp_TypeInfo_var;
extern "C" void NeutralResourcesLanguageAttribute__ctor_m2553 (NeutralResourcesLanguageAttribute_t692 * __this, String_t* ___cultureName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___cultureName;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t341 * L_1 = (ArgumentNullException_t341 *)il2cpp_codegen_object_new (ArgumentNullException_t341_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1255(L_1, (String_t*) &_stringLiteral1633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		String_t* L_2 = ___cultureName;
		__this->___culture_0 = L_2;
		return;
	}
}
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttributeMethodDeclarations.h"



// System.Void System.Resources.SatelliteContractVersionAttribute::.ctor(System.String)
extern TypeInfo* Version_t512_il2cpp_TypeInfo_var;
extern "C" void SatelliteContractVersionAttribute__ctor_m2556 (SatelliteContractVersionAttribute_t695 * __this, String_t* ___version, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(949);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___version;
		Version_t512 * L_1 = (Version_t512 *)il2cpp_codegen_object_new (Version_t512_il2cpp_TypeInfo_var);
		Version__ctor_m8029(L_1, L_0, /*hidden argument*/NULL);
		__this->___ver_0 = L_1;
		return;
	}
}
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0MethodDeclarations.h"



// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxatiMethodDeclarations.h"



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Runtime.CompilerServices.CompilationRelaxations)
extern "C" void CompilationRelaxationsAttribute__ctor_m2564 (CompilationRelaxationsAttribute_t703 * __this, int32_t ___relaxations, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___relaxations;
		__this->___relax_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAt.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAtMethodDeclarations.h"

// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"


// System.Void System.Runtime.CompilerServices.DefaultDependencyAttribute::.ctor(System.Runtime.CompilerServices.LoadHint)
extern "C" void DefaultDependencyAttribute__ctor_m6149 (DefaultDependencyAttribute_t1109 * __this, int32_t ___loadHintArgument, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___loadHintArgument;
		__this->___hint_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatile.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatileMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHintMethodDeclarations.h"



// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttri.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttriMethodDeclarations.h"



// System.Void System.Runtime.CompilerServices.StringFreezingAttribute::.ctor()
extern "C" void StringFreezingAttribute__ctor_m6150 (StringFreezingAttribute_t1112 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1189(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_CerMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
