#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Match
struct Match_t573;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t581;
// System.Text.RegularExpressions.Regex
struct Regex_t380;
// System.Text.RegularExpressions.IMachine
struct IMachine_t582;
// System.String
struct String_t;

// System.Void System.Text.RegularExpressions.Match::.ctor()
extern "C" void Match__ctor_m1952 (Match_t573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Match__ctor_m1953 (Match_t573 * __this, Regex_t380 * ___regex, Object_t * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Match__ctor_m1954 (Match_t573 * __this, Regex_t380 * ___regex, Object_t * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, int32_t ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.cctor()
extern "C" void Match__cctor_m1955 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
extern "C" Match_t573 * Match_get_Empty_m1956 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups()
extern "C" GroupCollection_t581 * Match_get_Groups_m1957 (Match_t573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::NextMatch()
extern "C" Match_t573 * Match_NextMatch_m1958 (Match_t573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::get_Regex()
extern "C" Regex_t380 * Match_get_Regex_m1959 (Match_t573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
