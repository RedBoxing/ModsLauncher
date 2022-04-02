#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComAttributeToAttributeRealTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComAttributeToAttributeRealTime"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _valueMode() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& _currentValue() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& _active() {
		return *(T*)((uintptr_t)this + 0xBC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComAttributeToAttributeRealTime*))(Il2CppBase() + 0x201B8A0))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComAttributeToAttributeRealTime*))(Il2CppBase() + 0x201B938))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComAttributeToAttributeRealTime*))(Il2CppBase() + 0x201B9E8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponComAttributeToAttributeRealTime*))(Il2CppBase() + 0x201BBA4))(this);
	}
	template <typename T = void> T Revert() {
		return ((T (*)(WeaponComAttributeToAttributeRealTime*))(Il2CppBase() + 0x201BA60))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComAttributeToAttributeRealTime*))(Il2CppBase() + 0x201BD2C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComAttributeToAttributeRealTime*))(Il2CppBase() + 0x201BD34))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(WeaponComAttributeToAttributeRealTime*))(Il2CppBase() + 0x201BD3C))(this);
	}

};

}
