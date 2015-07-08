#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t224;
struct GcAchievementData_t224_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t233;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t233 * GcAchievementData_ToAchievement_m1025 (GcAchievementData_t224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t224_marshal(const GcAchievementData_t224& unmarshaled, GcAchievementData_t224_marshaled& marshaled);
void GcAchievementData_t224_marshal_back(const GcAchievementData_t224_marshaled& marshaled, GcAchievementData_t224& unmarshaled);
void GcAchievementData_t224_marshal_cleanup(GcAchievementData_t224_marshaled& marshaled);
