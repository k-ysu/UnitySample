﻿#pragma once
#include <stdint.h>
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t761;
// System.Security.Cryptography.SymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_SymmetricAlgorithm.h"
// Mono.Security.Cryptography.RC4
struct  RC4_t751  : public SymmetricAlgorithm_t762
{
};
struct RC4_t751_StaticFields{
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t761* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t761* ___s_legalKeySizes_11;
};