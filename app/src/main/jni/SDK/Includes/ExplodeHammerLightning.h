#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeHammerLightning
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeHammerLightning"));
	}

	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& maxDistance() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& lightningDamage() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& release_obj() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(ExplodeHammerLightning*, uintptr_t, uintptr_t))(Il2CppBase() + 0x446B95C))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(ExplodeHammerLightning*))(Il2CppBase() + 0x446BA5C))(this);
	}
	template <typename T = void> T Lightning(uintptr_t t) {
		return ((T (*)(ExplodeHammerLightning*, uintptr_t))(Il2CppBase() + 0x446C130))(this, t);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ExplodeHammerLightning*, uintptr_t, uintptr_t))(Il2CppBase() + 0x446C964))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ExplodeStart() {
		return ((T (*)(ExplodeHammerLightning*))(Il2CppBase() + 0x446C9B8))(this);
	}

};

}
