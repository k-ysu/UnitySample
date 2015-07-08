#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t737;
// Mono.Math.BigInteger
struct BigInteger_t736;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m2676 (ModulusRing_t737 * __this, BigInteger_t736 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m2677 (ModulusRing_t737 * __this, BigInteger_t736 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t736 * ModulusRing_Multiply_m2678 (ModulusRing_t737 * __this, BigInteger_t736 * ___a, BigInteger_t736 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t736 * ModulusRing_Difference_m2679 (ModulusRing_t737 * __this, BigInteger_t736 * ___a, BigInteger_t736 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t736 * ModulusRing_Pow_m2680 (ModulusRing_t737 * __this, BigInteger_t736 * ___a, BigInteger_t736 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t736 * ModulusRing_Pow_m2681 (ModulusRing_t737 * __this, uint32_t ___b, BigInteger_t736 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
