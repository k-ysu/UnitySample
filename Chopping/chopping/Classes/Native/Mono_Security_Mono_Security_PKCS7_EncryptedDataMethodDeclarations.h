#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t748;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t747;
// System.Byte[]
struct ByteU5BU5D_t102;
// Mono.Security.ASN1
struct ASN1_t656;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m2770 (EncryptedData_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m2771 (EncryptedData_t748 * __this, ASN1_t656 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t747 * EncryptedData_get_EncryptionAlgorithm_m2772 (EncryptedData_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t102* EncryptedData_get_EncryptedContent_m2773 (EncryptedData_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
