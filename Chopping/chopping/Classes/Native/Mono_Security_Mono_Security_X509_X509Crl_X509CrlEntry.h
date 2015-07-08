#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t102;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t684;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t660  : public Object_t
{
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t102* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t51  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t684 * ___extensions_2;
};
