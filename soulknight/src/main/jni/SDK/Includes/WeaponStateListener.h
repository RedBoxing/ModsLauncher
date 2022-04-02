#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponStateListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponStateListener"));
	}

	template <typename T = uintptr_t> T& onWeaponAttackStart() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& onWeaponAttackFinished() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& onWeaponColdDownStart() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& onWeaponColdDownFinished() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T add_onWeaponAttackStart(uintptr_t value) {
		return ((T (*)(WeaponStateListener*, uintptr_t))(Il2CppBase() + 0x46007B8))(this, value);
	}
	template <typename T = void> T remove_onWeaponAttackStart(uintptr_t value) {
		return ((T (*)(WeaponStateListener*, uintptr_t))(Il2CppBase() + 0x46008A4))(this, value);
	}
	template <typename T = void> T add_onWeaponAttackFinished(uintptr_t value) {
		return ((T (*)(WeaponStateListener*, uintptr_t))(Il2CppBase() + 0x4600990))(this, value);
	}
	template <typename T = void> T remove_onWeaponAttackFinished(uintptr_t value) {
		return ((T (*)(WeaponStateListener*, uintptr_t))(Il2CppBase() + 0x4600A7C))(this, value);
	}
	template <typename T = void> T add_onWeaponColdDownStart(uintptr_t value) {
		return ((T (*)(WeaponStateListener*, uintptr_t))(Il2CppBase() + 0x4600B68))(this, value);
	}
	template <typename T = void> T remove_onWeaponColdDownStart(uintptr_t value) {
		return ((T (*)(WeaponStateListener*, uintptr_t))(Il2CppBase() + 0x4600C54))(this, value);
	}
	template <typename T = void> T add_onWeaponColdDownFinished(uintptr_t value) {
		return ((T (*)(WeaponStateListener*, uintptr_t))(Il2CppBase() + 0x4600D40))(this, value);
	}
	template <typename T = void> T remove_onWeaponColdDownFinished(uintptr_t value) {
		return ((T (*)(WeaponStateListener*, uintptr_t))(Il2CppBase() + 0x4600E2C))(this, value);
	}
	template <typename T = void> T OnWeaponAttackStart() {
		return ((T (*)(WeaponStateListener*))(Il2CppBase() + 0x4600F18))(this);
	}
	template <typename T = void> T OnWeaponAttackFinished() {
		return ((T (*)(WeaponStateListener*))(Il2CppBase() + 0x4600F8C))(this);
	}
	template <typename T = void> T OnWeaponColdDownStart() {
		return ((T (*)(WeaponStateListener*))(Il2CppBase() + 0x4601000))(this);
	}
	template <typename T = void> T OnWeaponColdDownFinished() {
		return ((T (*)(WeaponStateListener*))(Il2CppBase() + 0x4601074))(this);
	}

};

}
