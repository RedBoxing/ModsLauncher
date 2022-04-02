#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TAUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TAUtil"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TADeviceIdKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& neededEvents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x18C17DC))(0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T GetDynamicSuperProperties() {
		return ((T (*)(TAUtil*))(Il2CppBase() + 0x18C18DC))(this);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x18C1C28))(0);
	}
	template <typename T = void> static T InitUserProperties() {
		return ((T (*)(void *))(Il2CppBase() + 0x18C1F0C))(0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T GetInitUserProperties() {
		return ((T (*)(void *))(Il2CppBase() + 0x18C269C))(0);
	}
	template <typename T = void> static T UserAdd(Il2CppString* property, uintptr_t value, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x18C2528))(0, property, value, appId);
	}
	template <typename T = void> static T UserSet(Il2CppDictionary<Il2CppString*, uintptr_t>* properties, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x18C2B38))(0, properties, appId);
	}
	template <typename T = void> static T UserSetOnce(Il2CppDictionary<Il2CppString*, uintptr_t>* properties, Il2CppString* appId) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x18C23C0))(0, properties, appId);
	}
	template <typename T = void> static T Track(Il2CppString* name, Il2CppString* parameterName, int32_t parameterValue) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x18C2CA0))(0, name, parameterName, parameterValue);
	}
	template <typename T = void> static T Track_1(Il2CppString* name, Il2CppString* parameterName, Il2CppString* parameterValue) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x18C303C))(0, name, parameterName, parameterValue);
	}
	template <typename T = void> static T Track_2(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x18C3240))(0, name);
	}
	template <typename T = void> static T Track_3(Il2CppString* name, Il2CppDictionary<Il2CppString*, uintptr_t>* properties) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x18C33C4))(0, name, properties);
	}
	template <typename T = void> static T TrackActive() {
		return ((T (*)(void *))(Il2CppBase() + 0x18C21B4))(0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T GetDicGameProcess() {
		return ((T (*)(void *))(Il2CppBase() + 0x18C3564))(0);
	}
	template <typename T = bool> static T CheckSignatrue() {
		return ((T (*)(void *))(Il2CppBase() + 0x18C37A4))(0);
	}
	template <typename T = Il2CppString*> static T GetDeviceId() {
		return ((T (*)(void *))(Il2CppBase() + 0x18C1BA0))(0);
	}
	template <typename T = bool> static T CanUseTrack(Il2CppString* eventName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x18C2EC8))(0, eventName);
	}

};

}
