#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t511;
// System.Net.WebRequest
struct WebRequest_t505;
// System.Uri
struct Uri_t184;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m1589 (HttpRequestCreator_t511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t505 * HttpRequestCreator_Create_m1590 (HttpRequestCreator_t511 * __this, Uri_t184 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
