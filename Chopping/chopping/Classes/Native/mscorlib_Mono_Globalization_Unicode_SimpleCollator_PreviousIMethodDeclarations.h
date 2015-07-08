#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t920;
struct PreviousInfo_t920_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m4467 (PreviousInfo_t920 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t920_marshal(const PreviousInfo_t920& unmarshaled, PreviousInfo_t920_marshaled& marshaled);
void PreviousInfo_t920_marshal_back(const PreviousInfo_t920_marshaled& marshaled, PreviousInfo_t920& unmarshaled);
void PreviousInfo_t920_marshal_cleanup(PreviousInfo_t920_marshaled& marshaled);
