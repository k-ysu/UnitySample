#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t105;
struct CacheIndex_t105_marshaled;

void CacheIndex_t105_marshal(const CacheIndex_t105& unmarshaled, CacheIndex_t105_marshaled& marshaled);
void CacheIndex_t105_marshal_back(const CacheIndex_t105_marshaled& marshaled, CacheIndex_t105& unmarshaled);
void CacheIndex_t105_marshal_cleanup(CacheIndex_t105_marshaled& marshaled);
