#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePointManager
struct ServicePointManager_t523;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t522;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t508;
// System.Net.ServicePoint
struct ServicePoint_t515;
// System.Uri
struct Uri_t184;
// System.Net.IWebProxy
struct IWebProxy_t503;
// System.Net.SecurityProtocolType
#include "System_System_Net_SecurityProtocolType.h"

// System.Void System.Net.ServicePointManager::.cctor()
extern "C" void ServicePointManager__cctor_m1654 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
extern "C" Object_t * ServicePointManager_get_CertificatePolicy_m1655 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
extern "C" bool ServicePointManager_get_CheckCertificateRevocationList_m1656 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
extern "C" int32_t ServicePointManager_get_SecurityProtocol_m1657 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
extern "C" RemoteCertificateValidationCallback_t508 * ServicePointManager_get_ServerCertificateValidationCallback_m1658 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern "C" ServicePoint_t515 * ServicePointManager_FindServicePoint_m1659 (Object_t * __this /* static, unused */, Uri_t184 * ___address, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
extern "C" void ServicePointManager_RecycleServicePoints_m1660 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
