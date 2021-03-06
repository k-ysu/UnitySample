﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t630;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t623;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t628;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t629;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t662;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m2239 (CaptureAssertion_t630 * __this, Literal_t629 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m2240 (CaptureAssertion_t630 * __this, CapturingGroup_t623 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CaptureAssertion_Compile_m2241 (CaptureAssertion_t630 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m2242 (CaptureAssertion_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t628 * CaptureAssertion_get_Alternate_m2243 (CaptureAssertion_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
