#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t543;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t102;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t310;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[],System.Boolean)
extern "C" void X509Certificate__ctor_m6583 (X509Certificate_t543 * __this, ByteU5BU5D_t102* ___data, bool ___dates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m3564 (X509Certificate_t543 * __this, ByteU5BU5D_t102* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor()
extern "C" void X509Certificate__ctor_m2458 (X509Certificate_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate__ctor_m6584 (X509Certificate_t543 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void X509Certificate_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m2640 (X509Certificate_t543 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData_m2639 (X509Certificate_t543 * __this, SerializationInfo_t310 * ___info, StreamingContext_t311  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::tostr(System.Byte[])
extern "C" String_t* X509Certificate_tostr_m6585 (X509Certificate_t543 * __this, ByteU5BU5D_t102* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" bool X509Certificate_Equals_m2641 (X509Certificate_t543 * __this, X509Certificate_t543 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHash()
extern "C" ByteU5BU5D_t102* X509Certificate_GetCertHash_m2642 (X509Certificate_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHashString()
extern "C" String_t* X509Certificate_GetCertHashString_m2463 (X509Certificate_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetEffectiveDateString()
extern "C" String_t* X509Certificate_GetEffectiveDateString_m2643 (X509Certificate_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetExpirationDateString()
extern "C" String_t* X509Certificate_GetExpirationDateString_m2644 (X509Certificate_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate::GetHashCode()
extern "C" int32_t X509Certificate_GetHashCode_m2638 (X509Certificate_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetIssuerName()
extern "C" String_t* X509Certificate_GetIssuerName_m2645 (X509Certificate_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetName()
extern "C" String_t* X509Certificate_GetName_m2646 (X509Certificate_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetPublicKey()
extern "C" ByteU5BU5D_t102* X509Certificate_GetPublicKey_m2647 (X509Certificate_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetRawCertData()
extern "C" ByteU5BU5D_t102* X509Certificate_GetRawCertData_m2648 (X509Certificate_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString()
extern "C" String_t* X509Certificate_ToString_m6586 (X509Certificate_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString(System.Boolean)
extern "C" String_t* X509Certificate_ToString_m2476 (X509Certificate_t543 * __this, bool ___fVerbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Issuer()
extern "C" String_t* X509Certificate_get_Issuer_m2479 (X509Certificate_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Subject()
extern "C" String_t* X509Certificate_get_Subject_m2478 (X509Certificate_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Object)
extern "C" bool X509Certificate_Equals_m2637 (X509Certificate_t543 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate_Import_m2473 (X509Certificate_t543 * __this, ByteU5BU5D_t102* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Reset()
extern "C" void X509Certificate_Reset_m2475 (X509Certificate_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
