#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t772;
// System.String[]
struct StringU5BU5D_t197;
// Mono.Security.ASN1
struct ASN1_t656;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m2970 (GeneralNames_t772 * __this, ASN1_t656 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t197* GeneralNames_get_DNSNames_m2971 (GeneralNames_t772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t197* GeneralNames_get_IPAddresses_m2972 (GeneralNames_t772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m2973 (GeneralNames_t772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
