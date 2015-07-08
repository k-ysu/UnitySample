#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t142;
struct HumanBone_t142_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m714 (HumanBone_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m715 (HumanBone_t142 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m716 (HumanBone_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m717 (HumanBone_t142 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t142_marshal(const HumanBone_t142& unmarshaled, HumanBone_t142_marshaled& marshaled);
void HumanBone_t142_marshal_back(const HumanBone_t142_marshaled& marshaled, HumanBone_t142& unmarshaled);
void HumanBone_t142_marshal_cleanup(HumanBone_t142_marshaled& marshaled);
