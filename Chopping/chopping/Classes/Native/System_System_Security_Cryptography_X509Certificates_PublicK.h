#pragma once
#include <stdint.h>
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t530;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t531;
// System.Security.Cryptography.Oid
struct Oid_t532;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t77;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Cryptography.X509Certificates.PublicKey
struct  PublicKey_t533  : public Object_t
{
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::_key
	AsymmetricAlgorithm_t530 * ____key_0;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t531 * ____keyValue_1;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t531 * ____params_2;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t532 * ____oid_3;
};
struct PublicKey_t533_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.PublicKey::<>f__switch$map9
	Dictionary_2_t77 * ___U3CU3Ef__switchU24map9_4;
};
