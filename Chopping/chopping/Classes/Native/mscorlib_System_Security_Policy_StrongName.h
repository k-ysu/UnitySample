#pragma once
#include <stdint.h>
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t1275;
// System.String
struct String_t;
// System.Version
struct Version_t512;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Policy.StrongName
struct  StrongName_t1280  : public Object_t
{
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t1275 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t512 * ___version_2;
};
