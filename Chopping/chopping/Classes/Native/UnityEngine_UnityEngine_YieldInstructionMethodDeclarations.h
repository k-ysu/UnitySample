#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t11;
struct YieldInstruction_t11_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m631 (YieldInstruction_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t11_marshal(const YieldInstruction_t11& unmarshaled, YieldInstruction_t11_marshaled& marshaled);
void YieldInstruction_t11_marshal_back(const YieldInstruction_t11_marshaled& marshaled, YieldInstruction_t11& unmarshaled);
void YieldInstruction_t11_marshal_cleanup(YieldInstruction_t11_marshaled& marshaled);
