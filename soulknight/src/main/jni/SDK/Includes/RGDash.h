#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGDash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGDash"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& atk_cd() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& repel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& critical() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& useCustomDmg() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGDash*))(Il2CppBase() + 0x22187E0))(this);
	}
	template <typename T = void> T ResetCamp() {
		return ((T (*)(RGDash*))(Il2CppBase() + 0x2218954))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(RGDash*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2218A80))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RGDash*))(Il2CppBase() + 0x2218B84))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGDash*, uintptr_t))(Il2CppBase() + 0x2218BE4))(this, other);
	}
	template <typename T = void> T BeginDash() {
		return ((T (*)(RGDash*))(Il2CppBase() + 0x22198F8))(this);
	}
	template <typename T = void> T EndDash() {
		return ((T (*)(RGDash*))(Il2CppBase() + 0x2219978))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RGDash*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2219A14))(this, P0, P1);
	}

};

}
