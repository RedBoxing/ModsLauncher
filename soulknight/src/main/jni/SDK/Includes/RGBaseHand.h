#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBaseHand
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBaseHand"));
	}

	template <typename T = int32_t> T& target_layer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& back_layer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& front_weapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& handTarget() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGBaseHand*))(Il2CppBase() + 0x1BB9D68))(this);
	}
	template <typename T = bool> T NeedLock() {
		return ((T (*)(RGBaseHand*))(Il2CppBase() + 0x1BB9DCC))(this);
	}
	template <typename T = Il2CppString*> T GetWeaponKey() {
		return ((T (*)(RGBaseHand*))(Il2CppBase() + 0x1BB9EA4))(this);
	}
	template <typename T = Il2CppString*> T GetWeaponI2Name() {
		return ((T (*)(RGBaseHand*))(Il2CppBase() + 0x1BB9F90))(this);
	}
	template <typename T = int32_t> T GetWeaponLevel() {
		return ((T (*)(RGBaseHand*))(Il2CppBase() + 0x1BBA084))(this);
	}
	template <typename T = void> T OnEnergyRunout() {
		return ((T (*)(RGBaseHand*))(Il2CppBase() + 0x1BBA160))(this);
	}
	template <typename T = bool> T HoldWeapon(Il2CppString* weaponName) {
		return ((T (*)(RGBaseHand*, Il2CppString*))(Il2CppBase() + 0x1BBA1BC))(this, weaponName);
	}
	template <typename T = bool> T HasWeapon(Il2CppString* weaponName) {
		return ((T (*)(RGBaseHand*, Il2CppString*))(Il2CppBase() + 0x1BBA23C))(this, weaponName);
	}

};

}
