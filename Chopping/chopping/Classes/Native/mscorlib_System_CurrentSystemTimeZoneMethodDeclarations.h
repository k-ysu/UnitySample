#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t1394;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1428;
// System.String[]
struct StringU5BU5D_t197;
// System.Globalization.DaylightTime
struct DaylightTime_t1014;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m8001 (CurrentSystemTimeZone_t1394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m8002 (CurrentSystemTimeZone_t1394 * __this, int64_t ___lnow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m8003 (CurrentSystemTimeZone_t1394 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m8004 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t1428** ___data, StringU5BU5D_t197** ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t1014 * CurrentSystemTimeZone_GetDaylightChanges_m8005 (CurrentSystemTimeZone_t1394 * __this, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t557  CurrentSystemTimeZone_GetUtcOffset_m8006 (CurrentSystemTimeZone_t1394 * __this, DateTime_t51  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m8007 (CurrentSystemTimeZone_t1394 * __this, DaylightTime_t1014 * ___dlt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t1014 * CurrentSystemTimeZone_GetDaylightTimeFromData_m8008 (CurrentSystemTimeZone_t1394 * __this, Int64U5BU5D_t1428* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
