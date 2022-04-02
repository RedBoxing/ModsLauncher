#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComLegacyBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComLegacyBuff"));
	}

	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComLegacyBuff*))(Il2CppBase() + 0x4486140))(this);
	}
	template <typename T = void> T AddBuff() {
		return ((T (*)(WeaponComLegacyBuff*))(Il2CppBase() + 0x44862BC))(this);
	}
	template <typename T = void> T CancelBuff() {
		return ((T (*)(WeaponComLegacyBuff*))(Il2CppBase() + 0x4486434))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComLegacyBuff*))(Il2CppBase() + 0x448652C))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComLegacyBuff*))(Il2CppBase() + 0x4486634))(this);
	}
	template <typename T = void> T Awakeb__2_0(uintptr_t arg) {
		return ((T (*)(WeaponComLegacyBuff*, uintptr_t))(Il2CppBase() + 0x4486730))(this, arg);
	}
	template <typename T = void> T Awakeb__2_1() {
		return ((T (*)(WeaponComLegacyBuff*))(Il2CppBase() + 0x4486734))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComLegacyBuff*))(Il2CppBase() + 0x4486738))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComLegacyBuff*))(Il2CppBase() + 0x4486740))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComLegacyBuff*))(Il2CppBase() + 0x4486748))(this);
	}

};

}
