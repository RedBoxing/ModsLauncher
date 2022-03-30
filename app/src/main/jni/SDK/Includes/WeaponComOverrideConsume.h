#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComOverrideConsume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComOverrideConsume"));
	}

	template <typename T = int32_t> T& consume() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComOverrideConsume*))(Il2CppBase() + 0x4489520))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComOverrideConsume*))(Il2CppBase() + 0x44896E8))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComOverrideConsume*))(Il2CppBase() + 0x4489908))(this);
	}
	template <typename T = void> T TakeEffect() {
		return ((T (*)(WeaponComOverrideConsume*))(Il2CppBase() + 0x44897EC))(this);
	}
	template <typename T = void> T Revert() {
		return ((T (*)(WeaponComOverrideConsume*))(Il2CppBase() + 0x44899F8))(this);
	}
	template <typename T = int32_t> T GetConsume(int32_t c) {
		return ((T (*)(WeaponComOverrideConsume*, int32_t))(Il2CppBase() + 0x4489B14))(this, c);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComOverrideConsume*))(Il2CppBase() + 0x4489B90))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComOverrideConsume*))(Il2CppBase() + 0x4489B98))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComOverrideConsume*))(Il2CppBase() + 0x4489BA0))(this);
	}

};

}
