﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch
struct NetworkMatch_t185;
// System.Uri
struct Uri_t184;
// UnityEngine.Coroutine
struct Coroutine_t14;
struct Coroutine_t14_marshaled;
// System.String
struct String_t;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
struct ResponseDelegate_1_t291;
// UnityEngine.Networking.Match.CreateMatchRequest
struct CreateMatchRequest_t164;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
struct ResponseDelegate_1_t292;
// UnityEngine.Networking.Match.JoinMatchRequest
struct JoinMatchRequest_t166;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
struct ResponseDelegate_1_t293;
// UnityEngine.Networking.Match.DestroyMatchRequest
struct DestroyMatchRequest_t168;
// UnityEngine.Networking.Match.DropConnectionRequest
struct DropConnectionRequest_t169;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t294;
// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t170;
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern "C" void NetworkMatch__ctor_m904 (NetworkMatch_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t184 * NetworkMatch_get_baseUri_m905 (NetworkMatch_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C" void NetworkMatch_set_baseUri_m906 (NetworkMatch_t185 * __this, Uri_t184 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern "C" void NetworkMatch_SetProgramAppID_m907 (NetworkMatch_t185 * __this, uint64_t ___programAppID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C" Coroutine_t14 * NetworkMatch_CreateMatch_m908 (NetworkMatch_t185 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t291 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C" Coroutine_t14 * NetworkMatch_CreateMatch_m909 (NetworkMatch_t185 * __this, CreateMatchRequest_t164 * ___req, ResponseDelegate_1_t291 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C" Coroutine_t14 * NetworkMatch_JoinMatch_m910 (NetworkMatch_t185 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t292 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C" Coroutine_t14 * NetworkMatch_JoinMatch_m911 (NetworkMatch_t185 * __this, JoinMatchRequest_t166 * ___req, ResponseDelegate_1_t292 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t14 * NetworkMatch_DestroyMatch_m912 (NetworkMatch_t185 * __this, uint64_t ___netId, ResponseDelegate_1_t293 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t14 * NetworkMatch_DestroyMatch_m913 (NetworkMatch_t185 * __this, DestroyMatchRequest_t168 * ___req, ResponseDelegate_1_t293 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t14 * NetworkMatch_DropConnection_m914 (NetworkMatch_t185 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t293 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t14 * NetworkMatch_DropConnection_m915 (NetworkMatch_t185 * __this, DropConnectionRequest_t169 * ___req, ResponseDelegate_1_t293 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C" Coroutine_t14 * NetworkMatch_ListMatches_m916 (NetworkMatch_t185 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t294 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C" Coroutine_t14 * NetworkMatch_ListMatches_m917 (NetworkMatch_t185 * __this, ListMatchRequest_t170 * ___req, ResponseDelegate_1_t294 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
