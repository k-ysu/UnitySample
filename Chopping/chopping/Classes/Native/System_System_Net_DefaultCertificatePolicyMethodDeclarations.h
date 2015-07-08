#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t501;
// System.Net.ServicePoint
struct ServicePoint_t515;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t543;
// System.Net.WebRequest
struct WebRequest_t505;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m1575 (DefaultCertificatePolicy_t501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m1576 (DefaultCertificatePolicy_t501 * __this, ServicePoint_t515 * ___point, X509Certificate_t543 * ___certificate, WebRequest_t505 * ___request, int32_t ___certificateProblem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
