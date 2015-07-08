#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t140;
struct SkeletonBone_t140_marshaled;

void SkeletonBone_t140_marshal(const SkeletonBone_t140& unmarshaled, SkeletonBone_t140_marshaled& marshaled);
void SkeletonBone_t140_marshal_back(const SkeletonBone_t140_marshaled& marshaled, SkeletonBone_t140& unmarshaled);
void SkeletonBone_t140_marshal_cleanup(SkeletonBone_t140_marshaled& marshaled);
