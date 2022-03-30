#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WISwitchWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WISwitchWeapon"));
	}

	template <typename T = bool> T& continuous() {
		return *(T*)((uintptr_t)this + 0xDC);
	}

	template <typename T = void> T MakeEffect(bool isSetup) {
		return ((T (*)(WISwitchWeapon*, bool))(Il2CppBase() + 0x43626F0))(this, isSetup);
	}
	template <typename T = void> T RemoveEffect() {
		return ((T (*)(WISwitchWeapon*))(Il2CppBase() + 0x4362C44))(this);
	}
	template <typename T = void> T OnSwithWeapon(bool toFront, bool isPick) {
		return ((T (*)(WISwitchWeapon*, bool, bool))(Il2CppBase() + 0x4362948))(this, toFront, isPick);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(WISwitchWeapon*))(Il2CppBase() + 0x4362F70))(this);
	}
	template <typename T = void> T OnRestoreEnergy() {
		return ((T (*)(WISwitchWeapon*))(Il2CppBase() + 0x4363000))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeEffect(bool P0) {
		return ((T (*)(WISwitchWeapon*, bool))(Il2CppBase() + 0x43630EC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RemoveEffect() {
		return ((T (*)(WISwitchWeapon*))(Il2CppBase() + 0x43630F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(WISwitchWeapon*))(Il2CppBase() + 0x4363100))(this);
	}

};

}
