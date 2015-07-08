#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t10;
struct WaitForSeconds_t10_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m17 (WaitForSeconds_t10 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t10_marshal(const WaitForSeconds_t10& unmarshaled, WaitForSeconds_t10_marshaled& marshaled);
void WaitForSeconds_t10_marshal_back(const WaitForSeconds_t10_marshaled& marshaled, WaitForSeconds_t10& unmarshaled);
void WaitForSeconds_t10_marshal_cleanup(WaitForSeconds_t10_marshaled& marshaled);
