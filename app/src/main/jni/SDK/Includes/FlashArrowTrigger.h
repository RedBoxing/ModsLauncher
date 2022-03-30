#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FlashArrowTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FlashArrowTrigger"));
	}

	template <typename T = uintptr_t> T& onDestroy() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(FlashArrowTrigger*, uintptr_t, bool))(Il2CppBase() + 0x450FD74))(this, other, isCritic);
	}
	template <typename T = void> T DestroyBullet(uintptr_t other) {
		return ((T (*)(FlashArrowTrigger*, uintptr_t))(Il2CppBase() + 0x450FDFC))(this, other);
	}
	template <typename T = void> T TriggerBodyDestroy(uintptr_t other) {
		return ((T (*)(FlashArrowTrigger*, uintptr_t))(Il2CppBase() + 0x450FE78))(this, other);
	}
	template <typename T = void> T TriggerWallDestroy(uintptr_t other) {
		return ((T (*)(FlashArrowTrigger*, uintptr_t))(Il2CppBase() + 0x451060C))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, bool P1) {
		return ((T (*)(FlashArrowTrigger*, uintptr_t, bool))(Il2CppBase() + 0x4510690))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_DestroyBullet(uintptr_t P0) {
		return ((T (*)(FlashArrowTrigger*, uintptr_t))(Il2CppBase() + 0x451069C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_TriggerBodyDestroy(uintptr_t P0) {
		return ((T (*)(FlashArrowTrigger*, uintptr_t))(Il2CppBase() + 0x45106A4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWallDestroy(uintptr_t P0) {
		return ((T (*)(FlashArrowTrigger*, uintptr_t))(Il2CppBase() + 0x45106AC))(this, P0);
	}

};

}
