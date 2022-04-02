#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunNuclear
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunNuclear"));
	}

	template <typename T = uintptr_t> T& upBomb() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& nuclearWarn() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& launched() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}

	template <typename T = void> T Attack() {
		return ((T (*)(GunNuclear*))(Il2CppBase() + 0x2167688))(this);
	}
	template <typename T = uintptr_t> T Warning() {
		return ((T (*)(GunNuclear*))(Il2CppBase() + 0x2167EC4))(this);
	}
	template <typename T = void> T LaunchNuclearBomb() {
		return ((T (*)(GunNuclear*))(Il2CppBase() + 0x2167F78))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunNuclear*))(Il2CppBase() + 0x2168278))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunNuclear*, uintptr_t))(Il2CppBase() + 0x2168330))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunNuclear*, uintptr_t, int32_t))(Il2CppBase() + 0x21683AC))(this, parent, target_layer);
	}
	template <typename T = void> T OnSwitchWeapon(bool toFront, bool isPick) {
		return ((T (*)(GunNuclear*, bool, bool))(Il2CppBase() + 0x2168434))(this, toFront, isPick);
	}
	template <typename T = bool> T IsRGController() {
		return ((T (*)(GunNuclear*))(Il2CppBase() + 0x2167DE8))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunNuclear*))(Il2CppBase() + 0x21686D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunNuclear*, uintptr_t))(Il2CppBase() + 0x21686DC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunNuclear*, uintptr_t, int32_t))(Il2CppBase() + 0x21686E4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnSwitchWeapon(bool P0, bool P1) {
		return ((T (*)(GunNuclear*, bool, bool))(Il2CppBase() + 0x21686EC))(this, P0, P1);
	}

};

}
