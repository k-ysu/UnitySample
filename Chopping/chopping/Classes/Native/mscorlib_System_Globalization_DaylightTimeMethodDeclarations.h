#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DaylightTime
struct DaylightTime_t1014;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
extern "C" void DaylightTime__ctor_m5288 (DaylightTime_t1014 * __this, DateTime_t51  ___start, DateTime_t51  ___end, TimeSpan_t557  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
extern "C" DateTime_t51  DaylightTime_get_Start_m5289 (DaylightTime_t1014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
extern "C" DateTime_t51  DaylightTime_get_End_m5290 (DaylightTime_t1014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
extern "C" TimeSpan_t557  DaylightTime_get_Delta_m5291 (DaylightTime_t1014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
