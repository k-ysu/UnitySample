#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t116;
// UnityEngine.Coroutine
struct Coroutine_t14;
struct Coroutine_t14_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t279;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m600 (MonoBehaviour_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t14 * MonoBehaviour_StartCoroutine_m601 (MonoBehaviour_t116 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t14 * MonoBehaviour_StartCoroutine_Auto_m602 (MonoBehaviour_t116 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
