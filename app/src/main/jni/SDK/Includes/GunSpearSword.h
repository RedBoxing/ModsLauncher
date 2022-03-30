#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunSpearSword
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunSpearSword"));
	}

	template <typename T = int32_t> T& speedTimes() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& force() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& spearFirst() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = bool> T& alwaysAxe() {
		return *(T*)((uintptr_t)this + 0x1AD);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunSpearSword*))(Il2CppBase() + 0x217B204))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunSpearSword*))(Il2CppBase() + 0x217B27C))(this);
	}
	template <typename T = void> T AttackSpear() {
		return ((T (*)(GunSpearSword*))(Il2CppBase() + 0x217B380))(this);
	}
	template <typename T = void> T AxeAttack() {
		return ((T (*)(GunSpearSword*))(Il2CppBase() + 0x217B708))(this);
	}
	template <typename T = uintptr_t> T Dash(Il2CppVector2 direction) {
		return ((T (*)(GunSpearSword*, Il2CppVector2))(Il2CppBase() + 0x217BBE0))(this, direction);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunSpearSword*))(Il2CppBase() + 0x217BCF4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunSpearSword*))(Il2CppBase() + 0x217BDC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunSpearSword*))(Il2CppBase() + 0x217BDD0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunSpearSword*))(Il2CppBase() + 0x217BDD8))(this);
	}

};

}
