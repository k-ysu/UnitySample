#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t40;
struct Gradient_t40_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m129 (Gradient_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m130 (Gradient_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m131 (Gradient_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m132 (Gradient_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t40_marshal(const Gradient_t40& unmarshaled, Gradient_t40_marshaled& marshaled);
void Gradient_t40_marshal_back(const Gradient_t40_marshaled& marshaled, Gradient_t40& unmarshaled);
void Gradient_t40_marshal_cleanup(Gradient_t40_marshaled& marshaled);
