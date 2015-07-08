#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t964;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t963;
// System.Byte[]
struct ByteU5BU5D_t102;
// Mono.Security.ASN1
struct ASN1_t951;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m4865 (EncryptedData_t964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m4866 (EncryptedData_t964 * __this, ASN1_t951 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t963 * EncryptedData_get_EncryptionAlgorithm_m4867 (EncryptedData_t964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t102* EncryptedData_get_EncryptedContent_m4868 (EncryptedData_t964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
