#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGArrowTriggerExplode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGArrowTriggerExplode"));
	}

	template <typename T = bool> T& makeHitDamage() {
		return *(T*)((uintptr_t)this + 0xA3);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(RGArrowTriggerExplode*))(Il2CppBase() + 0x1BACFA0))(this);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGArrowTriggerExplode*, uintptr_t, bool))(Il2CppBase() + 0x1BAD010))(this, other, isCritic);
	}
	template <typename T = void> T TriggerWallDestroy(uintptr_t other) {
		return ((T (*)(RGArrowTriggerExplode*, uintptr_t))(Il2CppBase() + 0x1BAD178))(this, other);
	}
	template <typename T = void> T TriggerBodyDestroy(uintptr_t other) {
		return ((T (*)(RGArrowTriggerExplode*, uintptr_t))(Il2CppBase() + 0x1BAD280))(this, other);
	}
	template <typename T = void> T DestroyBullet(uintptr_t other) {
		return ((T (*)(RGArrowTriggerExplode*, uintptr_t))(Il2CppBase() + 0x1BAD364))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGArrowTriggerExplode*))(Il2CppBase() + 0x1BAD708))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, bool P1) {
		return ((T (*)(RGArrowTriggerExplode*, uintptr_t, bool))(Il2CppBase() + 0x1BAD710))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWallDestroy(uintptr_t P0) {
		return ((T (*)(RGArrowTriggerExplode*, uintptr_t))(Il2CppBase() + 0x1BAD718))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_TriggerBodyDestroy(uintptr_t P0) {
		return ((T (*)(RGArrowTriggerExplode*, uintptr_t))(Il2CppBase() + 0x1BAD71C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_DestroyBullet(uintptr_t P0) {
		return ((T (*)(RGArrowTriggerExplode*, uintptr_t))(Il2CppBase() + 0x1BAD720))(this, P0);
	}

};

}
