#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t629;
// System.String
struct String_t;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t662;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t637;

// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
extern "C" void Literal__ctor_m2256 (Literal_t629 * __this, String_t* ___str, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
extern "C" void Literal_CompileLiteral_m2257 (Object_t * __this /* static, unused */, String_t* ___str, Object_t * ___cmp, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Literal_Compile_m2258 (Literal_t629 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
extern "C" void Literal_GetWidth_m2259 (Literal_t629 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t637 * Literal_GetAnchorInfo_m2260 (Literal_t629 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
extern "C" bool Literal_IsComplex_m2261 (Literal_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
