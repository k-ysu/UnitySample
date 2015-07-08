#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t677;
struct DSAParameters_t677_marshaled;

void DSAParameters_t677_marshal(const DSAParameters_t677& unmarshaled, DSAParameters_t677_marshaled& marshaled);
void DSAParameters_t677_marshal_back(const DSAParameters_t677_marshaled& marshaled, DSAParameters_t677& unmarshaled);
void DSAParameters_t677_marshal_cleanup(DSAParameters_t677_marshaled& marshaled);
