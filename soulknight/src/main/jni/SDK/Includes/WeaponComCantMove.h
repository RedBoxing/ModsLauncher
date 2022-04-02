#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComCantMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComCantMove"));
	}

	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& moveSpeedKey() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComCantMove*))(Il2CppBase() + 0x2022E18))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComCantMove*))(Il2CppBase() + 0x2022F50))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComCantMove*))(Il2CppBase() + 0x2022FF0))(this);
	}
	template <typename T = void> T Awakeb__2_0(uintptr_t arg) {
		return ((T (*)(WeaponComCantMove*, uintptr_t))(Il2CppBase() + 0x2023084))(this, arg);
	}
	template <typename T = void> T Awakeb__2_1() {
		return ((T (*)(WeaponComCantMove*))(Il2CppBase() + 0x20231A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComCantMove*))(Il2CppBase() + 0x20232C0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComCantMove*))(Il2CppBase() + 0x20232C8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComCantMove*))(Il2CppBase() + 0x20232D0))(this);
	}

};

}
