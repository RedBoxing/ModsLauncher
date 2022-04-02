#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComRestore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComRestore"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& attributes() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComRestore*))(Il2CppBase() + 0x448AFAC))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComRestore*))(Il2CppBase() + 0x448B0F8))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComRestore*))(Il2CppBase() + 0x448B1F4))(this);
	}
	template <typename T = void> T TakeEffect() {
		return ((T (*)(WeaponComRestore*))(Il2CppBase() + 0x448B2DC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDescParams() {
		return ((T (*)(WeaponComRestore*))(Il2CppBase() + 0x448B974))(this);
	}
	template <typename T = void> T Awakeb__4_0(uintptr_t arg) {
		return ((T (*)(WeaponComRestore*, uintptr_t))(Il2CppBase() + 0x448BB90))(this, arg);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComRestore*))(Il2CppBase() + 0x448BB94))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComRestore*))(Il2CppBase() + 0x448BB9C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComRestore*))(Il2CppBase() + 0x448BBA4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_GetDescParams() {
		return ((T (*)(WeaponComRestore*))(Il2CppBase() + 0x448BBAC))(this);
	}

};

}
