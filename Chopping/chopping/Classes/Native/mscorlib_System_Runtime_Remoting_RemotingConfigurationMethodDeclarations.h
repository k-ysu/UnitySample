﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.RemotingConfiguration
struct RemotingConfiguration_t1191;
// System.String
struct String_t;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t1182;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
extern "C" void RemotingConfiguration__cctor_m6415 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern "C" String_t* RemotingConfiguration_get_ApplicationName_m6416 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
extern "C" String_t* RemotingConfiguration_get_ProcessId_m6417 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
extern "C" ActivatedClientTypeEntry_t1182 * RemotingConfiguration_IsRemotelyActivatedClientType_m6418 (Object_t * __this /* static, unused */, Type_t * ___svrType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
