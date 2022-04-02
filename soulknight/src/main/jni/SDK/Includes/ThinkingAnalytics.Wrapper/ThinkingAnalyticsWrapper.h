#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ThinkingAnalytics.Wrapper {

class ThinkingAnalyticsWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ThinkingAnalytics.Wrapper", "ThinkingAnalyticsWrapper"));
	}

	template <typename T = Il2CppString*> static T& JSON_CLASS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& sdkClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& configClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& instance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& token() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& dynamicSuperProperties() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& rnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T getJSONObject(Il2CppString* dataString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E3CD88))(0, dataString);
	}
	template <typename T = Il2CppString*> T getTimeString(uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, uintptr_t))(Il2CppBase() + 0x1E3CFA0))(this, dateTime);
	}
	template <typename T = void> static T enable_log(bool enableLog) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1E3D1F4))(0, enableLog);
	}
	template <typename T = void> T init() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E3D35C))(this);
	}
	template <typename T = void> T flush() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E3D87C))(this);
	}
	template <typename T = uintptr_t> T getDate(uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, uintptr_t))(Il2CppBase() + 0x1E3D938))(this, dateTime);
	}
	template <typename T = void> T track(Il2CppString* eventName, Il2CppString* properties, uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1E3DB08))(this, eventName, properties, dateTime);
	}
	template <typename T = void> T track_1(Il2CppString* eventName, Il2CppString* properties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E3DF08))(this, eventName, properties);
	}
	template <typename T = void> T setSuperProperties(Il2CppString* superProperties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*))(Il2CppBase() + 0x1E3E0A4))(this, superProperties);
	}
	template <typename T = void> T unsetSuperProperty(Il2CppString* superPropertyName) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*))(Il2CppBase() + 0x1E3E1F8))(this, superPropertyName);
	}
	template <typename T = void> T clearSuperProperty() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E3E318))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T getSuperProperties() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E3E3D4))(this);
	}
	template <typename T = void> T timeEvent(Il2CppString* eventName) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*))(Il2CppBase() + 0x1E3E4F0))(this, eventName);
	}
	template <typename T = void> T identify(Il2CppString* uniqueId) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*))(Il2CppBase() + 0x1E3E610))(this, uniqueId);
	}
	template <typename T = Il2CppString*> T getDistinctId() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E3E730))(this);
	}
	template <typename T = void> T login(Il2CppString* uniqueId) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*))(Il2CppBase() + 0x1E3E7F4))(this, uniqueId);
	}
	template <typename T = void> T userSetOnce(Il2CppString* properties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*))(Il2CppBase() + 0x1E3E914))(this, properties);
	}
	template <typename T = void> T userSetOnce_1(Il2CppString* properties, uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1E3EA68))(this, properties, dateTime);
	}
	template <typename T = void> T userSet(Il2CppString* properties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*))(Il2CppBase() + 0x1E3EC28))(this, properties);
	}
	template <typename T = void> T userSet_1(Il2CppString* properties, uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1E3ED7C))(this, properties, dateTime);
	}
	template <typename T = void> T userUnset(Il2CppList<Il2CppString*>* properties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1E3EF3C))(this, properties);
	}
	template <typename T = void> T userUnset_1(Il2CppList<Il2CppString*>* properties, uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppList<Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x1E3F01C))(this, properties, dateTime);
	}
	template <typename T = void> T userAdd(Il2CppString* properties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*))(Il2CppBase() + 0x1E3F338))(this, properties);
	}
	template <typename T = void> T userAdd_1(Il2CppString* properties, uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1E3F48C))(this, properties, dateTime);
	}
	template <typename T = void> T userAppend(Il2CppString* properties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*))(Il2CppBase() + 0x1E3F64C))(this, properties);
	}
	template <typename T = void> T userAppend_1(Il2CppString* properties, uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1E3F7A0))(this, properties, dateTime);
	}
	template <typename T = void> T userDelete() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E3F960))(this);
	}
	template <typename T = void> T userDelete_1(uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, uintptr_t))(Il2CppBase() + 0x1E3FA1C))(this, dateTime);
	}
	template <typename T = void> T logout() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E3FB50))(this);
	}
	template <typename T = Il2CppString*> T getDeviceId() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E3FC0C))(this);
	}
	template <typename T = void> T setNetworkType(uintptr_t networkType) {
		return ((T (*)(ThinkingAnalyticsWrapper*, uintptr_t))(Il2CppBase() + 0x1E3FCD0))(this, networkType);
	}
	template <typename T = void> T enableAutoTrack(uintptr_t events) {
		return ((T (*)(ThinkingAnalyticsWrapper*, uintptr_t))(Il2CppBase() + 0x1E3FEAC))(this, events);
	}
	template <typename T = void> T optOutTracking() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E3FFF0))(this);
	}
	template <typename T = void> T optOutTrackingAndDeleteUser() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E400AC))(this);
	}
	template <typename T = void> T optInTracking() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E40168))(this);
	}
	template <typename T = void> T enableTracking(bool enabled) {
		return ((T (*)(ThinkingAnalyticsWrapper*, bool))(Il2CppBase() + 0x1E40224))(this, enabled);
	}
	template <typename T = void> T setInstance(uintptr_t anotherInstance) {
		return ((T (*)(ThinkingAnalyticsWrapper*, uintptr_t))(Il2CppBase() + 0x1E4036C))(this, anotherInstance);
	}
	template <typename T = uintptr_t> T createLightInstance(uintptr_t delegateToken) {
		return ((T (*)(ThinkingAnalyticsWrapper*, uintptr_t))(Il2CppBase() + 0x1E403E0))(this, delegateToken);
	}
	template <typename T = void> static T calibrateTime(int64_t timestamp) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x1E4058C))(0, timestamp);
	}
	template <typename T = void> static T calibrateTimeWithNtp(Il2CppString* ntpServer) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E406F0))(0, ntpServer);
	}
	template <typename T = Il2CppString*> T serilize(Il2CppDictionary<Il2CppString*, uintptr_t>* data) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = void> static T EnableLog(bool enableLog) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1E40830))(0, enableLog);
	}
	template <typename T = void> T Identify(Il2CppString* uniqueId) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*))(Il2CppBase() + 0x1E408D4))(this, uniqueId);
	}
	template <typename T = Il2CppString*> T GetDistinctId() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E4094C))(this);
	}
	template <typename T = void> T Login(Il2CppString* accountId) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*))(Il2CppBase() + 0x1E409AC))(this, accountId);
	}
	template <typename T = void> T Logout() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E40A24))(this);
	}
	template <typename T = void> T EnableAutoTrack(uintptr_t events) {
		return ((T (*)(ThinkingAnalyticsWrapper*, uintptr_t))(Il2CppBase() + 0x1E40A84))(this, events);
	}
	template <typename T = void> T Track(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, uintptr_t>* properties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1E40AFC))(this, eventName, properties);
	}
	template <typename T = void> T Track_1(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, uintptr_t>* properties, uintptr_t datetime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1E40CF4))(this, eventName, properties, datetime);
	}
	template <typename T = void> T SetSuperProperties(Il2CppDictionary<Il2CppString*, uintptr_t>* superProperties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1E40F04))(this, superProperties);
	}
	template <typename T = void> T UnsetSuperProperty(Il2CppString* superPropertyName) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*))(Il2CppBase() + 0x1E40FEC))(this, superPropertyName);
	}
	template <typename T = void> T ClearSuperProperty() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E410B0))(this);
	}
	template <typename T = void> T TimeEvent(Il2CppString* eventName) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppString*))(Il2CppBase() + 0x1E41110))(this, eventName);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T GetSuperProperties() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E411D4))(this);
	}
	template <typename T = void> T UserSet(Il2CppDictionary<Il2CppString*, uintptr_t>* properties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1E41234))(this, properties);
	}
	template <typename T = void> T UserSet_1(Il2CppDictionary<Il2CppString*, uintptr_t>* properties, uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1E4131C))(this, properties, dateTime);
	}
	template <typename T = void> T UserSetOnce(Il2CppDictionary<Il2CppString*, uintptr_t>* properties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1E41410))(this, properties);
	}
	template <typename T = void> T UserSetOnce_1(Il2CppDictionary<Il2CppString*, uintptr_t>* properties, uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1E414F8))(this, properties, dateTime);
	}
	template <typename T = void> T UserUnset(Il2CppList<Il2CppString*>* properties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1E415EC))(this, properties);
	}
	template <typename T = void> T UserUnset_1(Il2CppList<Il2CppString*>* properties, uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppList<Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x1E416B0))(this, properties, dateTime);
	}
	template <typename T = void> T UserAdd(Il2CppDictionary<Il2CppString*, uintptr_t>* properties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1E41780))(this, properties);
	}
	template <typename T = void> T UserAdd_1(Il2CppDictionary<Il2CppString*, uintptr_t>* properties, uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1E41868))(this, properties, dateTime);
	}
	template <typename T = void> T UserAppend(Il2CppDictionary<Il2CppString*, uintptr_t>* properties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1E4195C))(this, properties);
	}
	template <typename T = void> T UserAppend_1(Il2CppDictionary<Il2CppString*, uintptr_t>* properties, uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1E41A44))(this, properties, dateTime);
	}
	template <typename T = void> T UserDelete() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E41B38))(this);
	}
	template <typename T = void> T UserDelete_1(uintptr_t dateTime) {
		return ((T (*)(ThinkingAnalyticsWrapper*, uintptr_t))(Il2CppBase() + 0x1E41B98))(this, dateTime);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E41C10))(this);
	}
	template <typename T = void> T SetNetworkType(uintptr_t networkType) {
		return ((T (*)(ThinkingAnalyticsWrapper*, uintptr_t))(Il2CppBase() + 0x1E41C70))(this, networkType);
	}
	template <typename T = Il2CppString*> T GetDeviceId() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E41CE8))(this);
	}
	template <typename T = void> T SetDynamicSuperProperties(uintptr_t dynamicSuperProperties) {
		return ((T (*)(ThinkingAnalyticsWrapper*, uintptr_t))(Il2CppBase() + 0x1E41D48))(this, dynamicSuperProperties);
	}
	template <typename T = void> T OptOutTracking() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E41EC0))(this);
	}
	template <typename T = void> T OptOutTrackingAndDeleteUser() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E41F20))(this);
	}
	template <typename T = void> T OptInTracking() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E41F80))(this);
	}
	template <typename T = void> T EnableTracking(bool enabled) {
		return ((T (*)(ThinkingAnalyticsWrapper*, bool))(Il2CppBase() + 0x1E41FE0))(this, enabled);
	}
	template <typename T = uintptr_t> T CreateLightInstance() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E42058))(this);
	}
	template <typename T = Il2CppString*> T GetAppId() {
		return ((T (*)(ThinkingAnalyticsWrapper*))(Il2CppBase() + 0x1E42178))(this);
	}
	template <typename T = void> static T CalibrateTime(int64_t timestamp) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x1E421D8))(0, timestamp);
	}
	template <typename T = void> static T CalibrateTimeWithNtp(Il2CppString* ntpServer) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E4227C))(0, ntpServer);
	}

};

}
