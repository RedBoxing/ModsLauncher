#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGArrowTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGArrowTrigger"));
	}

	template <typename T = bool> T& cover_enemy() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = bool> T& destroy_when_hit() {
		return *(T*)((uintptr_t)this + 0xA2);
	}

	template <typename T = void> T TriggerBodyDestroy(uintptr_t other) {
		return ((T (*)(RGArrowTrigger*, uintptr_t))(Il2CppBase() + 0x1BAB2E0))(this, other);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(RGArrowTrigger*))(Il2CppBase() + 0x1BACB98))(this);
	}
	template <typename T = void> T TriggerWallDestroy(uintptr_t other) {
		return ((T (*)(RGArrowTrigger*, uintptr_t))(Il2CppBase() + 0x1BABC38))(this, other);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGArrowTrigger*, uintptr_t, bool))(Il2CppBase() + 0x1BACD34))(this, other, isCritic);
	}
	template <typename T = void> T DestroyBullet(uintptr_t other) {
		return ((T (*)(RGArrowTrigger*, uintptr_t))(Il2CppBase() + 0x1BAA77C))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, bool P1) {
		return ((T (*)(RGArrowTrigger*, uintptr_t, bool))(Il2CppBase() + 0x1BACF8C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_DestroyBullet(uintptr_t P0) {
		return ((T (*)(RGArrowTrigger*, uintptr_t))(Il2CppBase() + 0x1BACF98))(this, P0);
	}

};

}
