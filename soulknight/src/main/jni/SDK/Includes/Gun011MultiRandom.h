#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun011MultiRandom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun011MultiRandom"));
	}

	template <typename T = uintptr_t> T& clip_end_shoot() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& shoot_end() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& shoot_end_time() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& angleRange() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = float> T& positionRange() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& delayTime() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = int32_t> T& shootProbability() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun011MultiRandom*))(Il2CppBase() + 0x256F394))(this);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(Gun011MultiRandom*))(Il2CppBase() + 0x256F3F4))(this);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(Gun011MultiRandom*, bool))(Il2CppBase() + 0x256F4AC))(this, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun011MultiRandom*))(Il2CppBase() + 0x256F564))(this);
	}
	template <typename T = uintptr_t> T CreateEndShootBullet() {
		return ((T (*)(Gun011MultiRandom*))(Il2CppBase() + 0x256F74C))(this);
	}
	template <typename T = void> T TurnEndShoot() {
		return ((T (*)(Gun011MultiRandom*))(Il2CppBase() + 0x256F82C))(this);
	}
	template <typename T = void> T AutoCreateEndBullet() {
		return ((T (*)(Gun011MultiRandom*))(Il2CppBase() + 0x256F910))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(Gun011MultiRandom*))(Il2CppBase() + 0x256F9F4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun011MultiRandom*))(Il2CppBase() + 0x256FA9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(Gun011MultiRandom*))(Il2CppBase() + 0x256FAA4))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(Gun011MultiRandom*, bool))(Il2CppBase() + 0x256FAAC))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(Gun011MultiRandom*))(Il2CppBase() + 0x256FAB8))(this);
	}

};

}
