#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t514;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t543;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t674;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
struct  TlsClientSettings_t798  : public Object_t
{
	// System.String Mono.Security.Protocol.Tls.TlsClientSettings::targetHost
	String_t* ___targetHost_0;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.TlsClientSettings::certificates
	X509CertificateCollection_t514 * ___certificates_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.TlsClientSettings::clientCertificate
	X509Certificate_t543 * ___clientCertificate_2;
	// Mono.Security.Cryptography.RSAManaged Mono.Security.Protocol.Tls.TlsClientSettings::certificateRSA
	RSAManaged_t674 * ___certificateRSA_3;
};
