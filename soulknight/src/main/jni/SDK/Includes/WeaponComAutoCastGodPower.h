#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComAutoCastGodPower
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComAutoCastGodPower"));
	}

	template <typename T = float> T& power() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _triggerSource() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComAutoCastGodPower*))(Il2CppBase() + 0x201BD44))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComAutoCastGodPower*))(Il2CppBase() + 0x201BE8C))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComAutoCastGodPower*))(Il2CppBase() + 0x201BF84))(this);
	}
	template <typename T = void> T Cast() {
		return ((T (*)(WeaponComAutoCastGodPower*))(Il2CppBase() + 0x201C068))(this);
	}
	template <typename T = void> T Awakeb__3_0(uintptr_t arg) {
		return ((T (*)(WeaponComAutoCastGodPower*, uintptr_t))(Il2CppBase() + 0x201C3C8))(this, arg);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComAutoCastGodPower*))(Il2CppBase() + 0x201C47C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComAutoCastGodPower*))(Il2CppBase() + 0x201C484))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComAutoCastGodPower*))(Il2CppBase() + 0x201C48C))(this);
	}

};

}
