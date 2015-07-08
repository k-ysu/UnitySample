#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t533;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t531;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t530;
// System.Security.Cryptography.Oid
struct Oid_t532;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t541;
// System.Byte[]
struct ByteU5BU5D_t102;
// System.Security.Cryptography.DSA
struct DSA_t654;
// System.Security.Cryptography.RSA
struct RSA_t655;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m1698 (PublicKey_t533 * __this, X509Certificate_t541 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t531 * PublicKey_get_EncodedKeyValue_m1699 (PublicKey_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t531 * PublicKey_get_EncodedParameters_m1700 (PublicKey_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t530 * PublicKey_get_Key_m1701 (PublicKey_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t532 * PublicKey_get_Oid_m1702 (PublicKey_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t102* PublicKey_GetUnsignedBigInteger_m1703 (Object_t * __this /* static, unused */, ByteU5BU5D_t102* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t654 * PublicKey_DecodeDSA_m1704 (Object_t * __this /* static, unused */, ByteU5BU5D_t102* ___rawPublicKey, ByteU5BU5D_t102* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t655 * PublicKey_DecodeRSA_m1705 (Object_t * __this /* static, unused */, ByteU5BU5D_t102* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
