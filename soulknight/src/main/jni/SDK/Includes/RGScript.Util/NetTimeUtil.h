#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util {

class NetTimeUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util", "NetTimeUtil"));
	}

	template <typename T = bool> static T& IsNetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LocalTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& NetTime2RealtimeSinceStartup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& refleshLocalTimeCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& tryGetNetTimeCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void*> static T get_CurrentTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x43CCFF4))(0);
	}
	template <typename T = bool> static T get_IsNetTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x43CD148))(0);
	}
	template <typename T = void> static T set_IsNetTime(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x43CD1E8))(0, value);
	}
	template <typename T = uintptr_t> static T get_LocalTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x43CD198))(0);
	}
	template <typename T = void> static T set_LocalTime(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43CD240))(0, value);
	}
	template <typename T = void*> static T get_NetTime2RealtimeSinceStartup() {
		return ((T (*)(void *))(Il2CppBase() + 0x43CD294))(0);
	}
	template <typename T = void> static T set_NetTime2RealtimeSinceStartup(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x43CD2E4))(0, value);
	}
	template <typename T = void> static T GetNetTimeCallback(bool canUseNetTime) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x43CD344))(0, canUseNetTime);
	}
	template <typename T = uintptr_t> static T RefleshLocalTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x43CD610))(0);
	}
	template <typename T = uintptr_t> static T TryGetNetTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x43CD6AC))(0);
	}

};

}
