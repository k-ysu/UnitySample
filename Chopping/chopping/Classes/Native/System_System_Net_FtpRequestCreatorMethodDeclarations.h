#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t507;
// System.Net.WebRequest
struct WebRequest_t505;
// System.Uri
struct Uri_t184;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m1583 (FtpRequestCreator_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t505 * FtpRequestCreator_Create_m1584 (FtpRequestCreator_t507 * __this, Uri_t184 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
