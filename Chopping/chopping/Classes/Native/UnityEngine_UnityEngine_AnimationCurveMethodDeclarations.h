#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t136;
struct AnimationCurve_t136_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t283;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m690 (AnimationCurve_t136 * __this, KeyframeU5BU5D_t283* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m691 (AnimationCurve_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m692 (AnimationCurve_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m693 (AnimationCurve_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m694 (AnimationCurve_t136 * __this, KeyframeU5BU5D_t283* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t136_marshal(const AnimationCurve_t136& unmarshaled, AnimationCurve_t136_marshaled& marshaled);
void AnimationCurve_t136_marshal_back(const AnimationCurve_t136_marshaled& marshaled, AnimationCurve_t136& unmarshaled);
void AnimationCurve_t136_marshal_cleanup(AnimationCurve_t136_marshaled& marshaled);
