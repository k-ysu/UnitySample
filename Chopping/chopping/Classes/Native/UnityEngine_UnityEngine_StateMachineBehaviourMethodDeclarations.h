#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t250;
// UnityEngine.Animator
struct Animator_t139;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m1114 (StateMachineBehaviour_t250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateEnter_m1115 (StateMachineBehaviour_t250 * __this, Animator_t139 * ___animator, AnimatorStateInfo_t133  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateUpdate_m1116 (StateMachineBehaviour_t250 * __this, Animator_t139 * ___animator, AnimatorStateInfo_t133  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateExit_m1117 (StateMachineBehaviour_t250 * __this, Animator_t139 * ___animator, AnimatorStateInfo_t133  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMove_m1118 (StateMachineBehaviour_t250 * __this, Animator_t139 * ___animator, AnimatorStateInfo_t133  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateIK_m1119 (StateMachineBehaviour_t250 * __this, Animator_t139 * ___animator, AnimatorStateInfo_t133  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m1120 (StateMachineBehaviour_t250 * __this, Animator_t139 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineExit_m1121 (StateMachineBehaviour_t250 * __this, Animator_t139 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
