#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunPetHope
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunPetHope"));
	}

	template <typename T = uintptr_t> T& hsvShader() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& readySaturator() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& coldDownSaturator() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& coldDown() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& is_ready() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = int32_t> T& cureHp() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunPetHope*))(Il2CppBase() + 0x216C3DC))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunPetHope*, bool, bool))(Il2CppBase() + 0x216C4F4))(this, value1, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunPetHope*))(Il2CppBase() + 0x216CC94))(this);
	}
	template <typename T = void> T TurnReady() {
		return ((T (*)(GunPetHope*))(Il2CppBase() + 0x216D2BC))(this);
	}
	template <typename T = uintptr_t> T DoubleWeaponBoostStart(uintptr_t* doubleWeapon) {
		return ((T (*)(GunPetHope*, uintptr_t*))(Il2CppBase() + 0x216D344))(this, doubleWeapon);
	}
	template <typename T = void> T DoubleWeaponBoostEnd() {
		return ((T (*)(GunPetHope*))(Il2CppBase() + 0x216D3BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunPetHope*, bool, bool))(Il2CppBase() + 0x216D434))(this, P0, P1);
	}

};

}
