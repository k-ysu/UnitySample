#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t578;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Capture
struct Capture_t576;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;

// System.Void System.Text.RegularExpressions.CaptureCollection::.ctor(System.Int32)
extern "C" void CaptureCollection__ctor_m1933 (CaptureCollection_t578 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CaptureCollection::get_Count()
extern "C" int32_t CaptureCollection_get_Count_m1934 (CaptureCollection_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CaptureCollection::SetValue(System.Text.RegularExpressions.Capture,System.Int32)
extern "C" void CaptureCollection_SetValue_m1935 (CaptureCollection_t578 * __this, Capture_t576 * ___cap, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.CaptureCollection::get_SyncRoot()
extern "C" Object_t * CaptureCollection_get_SyncRoot_m1936 (CaptureCollection_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CaptureCollection::CopyTo(System.Array,System.Int32)
extern "C" void CaptureCollection_CopyTo_m1937 (CaptureCollection_t578 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.CaptureCollection::GetEnumerator()
extern "C" Object_t * CaptureCollection_GetEnumerator_m1938 (CaptureCollection_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
