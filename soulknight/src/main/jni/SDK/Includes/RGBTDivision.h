#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBTDivision
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBTDivision"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& child_critical() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& bullet_speed() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& destroyed() {
		return *(T*)((uintptr_t)this + 0xCC);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(RGBTDivision*))(Il2CppBase() + 0x1BB1250))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGBTDivision*, uintptr_t))(Il2CppBase() + 0x1BB12BC))(this, other);
	}
	template <typename T = void> T Division() {
		return ((T (*)(RGBTDivision*))(Il2CppBase() + 0x1BB13B8))(this);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGBTDivision*, uintptr_t, bool))(Il2CppBase() + 0x1BB1884))(this, other, isCritic);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGBTDivision*))(Il2CppBase() + 0x1BB1938))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(RGBTDivision*, uintptr_t))(Il2CppBase() + 0x1BB1940))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, bool P1) {
		return ((T (*)(RGBTDivision*, uintptr_t, bool))(Il2CppBase() + 0x1BB1948))(this, P0, P1);
	}

};

}
