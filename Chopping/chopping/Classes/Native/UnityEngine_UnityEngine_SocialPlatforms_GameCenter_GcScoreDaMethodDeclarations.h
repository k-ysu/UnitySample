#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t225;
struct GcScoreData_t225_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t235;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t235 * GcScoreData_ToScore_m1026 (GcScoreData_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t225_marshal(const GcScoreData_t225& unmarshaled, GcScoreData_t225_marshaled& marshaled);
void GcScoreData_t225_marshal_back(const GcScoreData_t225_marshaled& marshaled, GcScoreData_t225& unmarshaled);
void GcScoreData_t225_marshal_cleanup(GcScoreData_t225_marshaled& marshaled);
