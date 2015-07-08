﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t14;
struct Coroutine_t14_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m20 (Coroutine_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m21 (Coroutine_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m22 (Coroutine_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t14_marshal(const Coroutine_t14& unmarshaled, Coroutine_t14_marshaled& marshaled);
void Coroutine_t14_marshal_back(const Coroutine_t14_marshaled& marshaled, Coroutine_t14& unmarshaled);
void Coroutine_t14_marshal_cleanup(Coroutine_t14_marshaled& marshaled);
