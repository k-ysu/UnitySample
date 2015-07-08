#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t506;
// System.Net.WebRequest
struct WebRequest_t505;
// System.Uri
struct Uri_t184;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m1581 (FileWebRequestCreator_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t505 * FileWebRequestCreator_Create_m1582 (FileWebRequestCreator_t506 * __this, Uri_t184 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
