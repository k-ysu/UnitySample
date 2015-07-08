﻿#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t184;
// System.Net.IWebProxy
struct IWebProxy_t503;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t197;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t508;
// System.Net.WebRequest
#include "System_System_Net_WebRequest.h"
// System.Net.FtpWebRequest
struct  FtpWebRequest_t509  : public WebRequest_t505
{
	// System.Uri System.Net.FtpWebRequest::requestUri
	Uri_t184 * ___requestUri_6;
	// System.Net.IWebProxy System.Net.FtpWebRequest::proxy
	Object_t * ___proxy_7;
	// System.Int32 System.Net.FtpWebRequest::timeout
	int32_t ___timeout_8;
	// System.Int32 System.Net.FtpWebRequest::rwTimeout
	int32_t ___rwTimeout_9;
	// System.Boolean System.Net.FtpWebRequest::binary
	bool ___binary_10;
	// System.Boolean System.Net.FtpWebRequest::usePassive
	bool ___usePassive_11;
	// System.String System.Net.FtpWebRequest::method
	String_t* ___method_12;
	// System.Object System.Net.FtpWebRequest::locker
	Object_t * ___locker_13;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::callback
	RemoteCertificateValidationCallback_t508 * ___callback_15;
};
struct FtpWebRequest_t509_StaticFields{
	// System.String[] System.Net.FtpWebRequest::supportedCommands
	StringU5BU5D_t197* ___supportedCommands_14;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::<>f__am$cache1C
	RemoteCertificateValidationCallback_t508 * ___U3CU3Ef__amU24cache1C_16;
};