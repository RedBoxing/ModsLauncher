#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ThinkingAnalytics {

class ThinkingAnalyticsAPI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ThinkingAnalytics", "ThinkingAnalyticsAPI"));
	}

	template <typename T = bool> T& enableLog() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& networkType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& tokens() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& TA_instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& default_appid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& tracking_enabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& instance_lock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& sInstances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> static T Identify(Il2CppString* uniqueId, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x43C40F4))(0, uniqueId, appId);
	}
	template <typename T = Il2CppString*> static T GetDistinctId(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C44D4))(0, appId);
	}
	template <typename T = void> static T Login(Il2CppString* account, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x43C45C4))(0, account, appId);
	}
	template <typename T = void> static T Logout(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C46CC))(0, appId);
	}
	template <typename T = void> static T Flush(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C47B8))(0, appId);
	}
	template <typename T = void> static T EnableAutoTrack(uintptr_t events, Il2CppString* appId) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C48A4))(0, events, appId);
	}
	template <typename T = void> static T Track(Il2CppString* eventName, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x43C49AC))(0, eventName, appId);
	}
	template <typename T = void> static T Track_1(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, uintptr_t>* properties, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x43C4A6C))(0, eventName, properties, appId);
	}
	template <typename T = void> static T Track_2(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, uintptr_t>* properties, uintptr_t date, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C4B80))(0, eventName, properties, date, appId);
	}
	template <typename T = void> static T SetSuperProperties(Il2CppDictionary<Il2CppString*, uintptr_t>* superProperties, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x43C4CB0))(0, superProperties, appId);
	}
	template <typename T = void> static T UnsetSuperProperty(Il2CppString* property, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x43C4DB8))(0, property, appId);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T GetSuperProperties(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C4EC0))(0, appId);
	}
	template <typename T = void> static T ClearSuperProperties(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C4FB0))(0, appId);
	}
	template <typename T = void> static T TimeEvent(Il2CppString* eventName, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x43C509C))(0, eventName, appId);
	}
	template <typename T = void> static T UserSet(Il2CppDictionary<Il2CppString*, uintptr_t>* properties, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x43C51A4))(0, properties, appId);
	}
	template <typename T = void> static T UserSet_1(Il2CppDictionary<Il2CppString*, uintptr_t>* properties, uintptr_t dateTime, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C52AC))(0, properties, dateTime, appId);
	}
	template <typename T = void> static T UserUnset(Il2CppString* property, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x43C53C0))(0, property, appId);
	}
	template <typename T = void> static T UserUnset_1(Il2CppList<Il2CppString*>* properties, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppList<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x43C54C4))(0, properties, appId);
	}
	template <typename T = void> static T UserUnset_2(Il2CppList<Il2CppString*>* properties, uintptr_t dateTime, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppList<Il2CppString*>*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C55CC))(0, properties, dateTime, appId);
	}
	template <typename T = void> static T UserSetOnce(Il2CppDictionary<Il2CppString*, uintptr_t>* properties, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x43C56E0))(0, properties, appId);
	}
	template <typename T = void> static T UserSetOnce_1(Il2CppDictionary<Il2CppString*, uintptr_t>* properties, uintptr_t dateTime, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C57E8))(0, properties, dateTime, appId);
	}
	template <typename T = void> static T UserAdd(Il2CppString* property, uintptr_t value, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C58FC))(0, property, value, appId);
	}
	template <typename T = void> static T UserAdd_1(Il2CppDictionary<Il2CppString*, uintptr_t>* properties, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x43C5A0C))(0, properties, appId);
	}
	template <typename T = void> static T UserAdd_2(Il2CppDictionary<Il2CppString*, uintptr_t>* properties, uintptr_t dateTime, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C5B14))(0, properties, dateTime, appId);
	}
	template <typename T = void> static T UserAppend(Il2CppDictionary<Il2CppString*, uintptr_t>* properties, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x43C5C28))(0, properties, appId);
	}
	template <typename T = void> static T UserAppend_1(Il2CppDictionary<Il2CppString*, uintptr_t>* properties, uintptr_t dateTime, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C5D30))(0, properties, dateTime, appId);
	}
	template <typename T = void> static T UserDelete(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C5E44))(0, appId);
	}
	template <typename T = void> static T UserDelete_1(uintptr_t dateTime, Il2CppString* appId) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C5F30))(0, dateTime, appId);
	}
	template <typename T = void> static T SetNetworkType(uintptr_t networkType, Il2CppString* appId) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C6038))(0, networkType, appId);
	}
	template <typename T = Il2CppString*> static T GetDeviceId() {
		return ((T (*)(void *))(Il2CppBase() + 0x43C6140))(0);
	}
	template <typename T = void> static T SetDynamicSuperProperties(uintptr_t dynamicSuperProperties, Il2CppString* appId) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C6230))(0, dynamicSuperProperties, appId);
	}
	template <typename T = void> static T OptOutTracking(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C6338))(0, appId);
	}
	template <typename T = void> static T OptOutTrackingAndDeleteUser(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C6424))(0, appId);
	}
	template <typename T = void> static T OptInTracking(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C6510))(0, appId);
	}
	template <typename T = void> static T EnableTracking(bool enabled, Il2CppString* appId) {
		return ((T (*)(void *, bool, Il2CppString*))(Il2CppBase() + 0x43C65FC))(0, enabled, appId);
	}
	template <typename T = Il2CppString*> static T CreateLightInstance(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C6704))(0, appId);
	}
	template <typename T = void> static T CalibrateTime(int64_t timestamp) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x43C6944))(0, timestamp);
	}
	template <typename T = void> static T CalibrateTimeWithNtp(Il2CppString* ntpServer) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C69EC))(0, ntpServer);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ThinkingAnalyticsAPI*))(Il2CppBase() + 0x43C6A94))(this);
	}
	template <typename T = uintptr_t> static T getInstance(Il2CppString* appid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C41FC))(0, appid);
	}

};

}
