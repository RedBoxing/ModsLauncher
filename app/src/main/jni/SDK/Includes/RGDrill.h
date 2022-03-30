#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGDrill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGDrill"));
	}

	template <typename T = float> T& splitOffset() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _audioSource() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGDrill*))(Il2CppBase() + 0x221B8EC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGDrill*))(Il2CppBase() + 0x221B99C))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGDrill*))(Il2CppBase() + 0x221B9FC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGDrill*))(Il2CppBase() + 0x221BB1C))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(RGDrill*, uintptr_t, uintptr_t))(Il2CppBase() + 0x221BC3C))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T UpdateInterval(float interval) {
		return ((T (*)(RGDrill*, float))(Il2CppBase() + 0x221BE5C))(this, interval);
	}
	template <typename T = void> T EndDrill() {
		return ((T (*)(RGDrill*))(Il2CppBase() + 0x221BF14))(this);
	}
	template <typename T = void> T DestroyDrill() {
		return ((T (*)(RGDrill*))(Il2CppBase() + 0x221C000))(this);
	}
	template <typename T = void> T OnSplit(int32_t index, uintptr_t splitConfig) {
		return ((T (*)(RGDrill*, int32_t, uintptr_t))(Il2CppBase() + 0x221C0BC))(this, index, splitConfig);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RGDrill*, uintptr_t, uintptr_t))(Il2CppBase() + 0x221C378))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnSplit(int32_t P0, uintptr_t P1) {
		return ((T (*)(RGDrill*, int32_t, uintptr_t))(Il2CppBase() + 0x221C3D0))(this, P0, P1);
	}

};

}
