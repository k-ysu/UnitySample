﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t675;
struct RSAParameters_t675_marshaled;

void RSAParameters_t675_marshal(const RSAParameters_t675& unmarshaled, RSAParameters_t675_marshaled& marshaled);
void RSAParameters_t675_marshal_back(const RSAParameters_t675_marshaled& marshaled, RSAParameters_t675& unmarshaled);
void RSAParameters_t675_marshal_cleanup(RSAParameters_t675_marshaled& marshaled);
