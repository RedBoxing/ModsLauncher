#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMount"));
	}

	template <typename T = uintptr_t> T& linkWeapon() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunMount*))(Il2CppBase() + 0x2286DA8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunMount*))(Il2CppBase() + 0x2286E14))(this);
	}
	template <typename T = void> T SetLinkWeapon(uintptr_t weapon) {
		return ((T (*)(GunMount*, uintptr_t))(Il2CppBase() + 0x2286E70))(this, weapon);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(GunMount*, bool, bool))(Il2CppBase() + 0x2287050))(this, value1, setHandAttack);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunMount*))(Il2CppBase() + 0x2287158))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(GunMount*))(Il2CppBase() + 0x2287238))(this);
	}
	template <typename T = void> T OnWeaponSpeedChanged() {
		return ((T (*)(GunMount*))(Il2CppBase() + 0x2287318))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunMount*))(Il2CppBase() + 0x228739C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunMount*))(Il2CppBase() + 0x22873A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunMount*, bool, bool))(Il2CppBase() + 0x22873AC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunMount*))(Il2CppBase() + 0x22873BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(GunMount*))(Il2CppBase() + 0x22873C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnWeaponSpeedChanged() {
		return ((T (*)(GunMount*))(Il2CppBase() + 0x22873CC))(this);
	}

};

}
