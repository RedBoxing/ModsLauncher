#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComModifyActionAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComModifyActionAttack"));
	}

	template <typename T = Il2CppString*> T& modifyKey() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& modifyAsChargeAttack() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& noChargeEvent() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = float> T& maxChargeTime() {
		return *(T*)((uintptr_t)this + 0xB4);
	}

	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComModifyActionAttack*))(Il2CppBase() + 0x4489274))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComModifyActionAttack*))(Il2CppBase() + 0x44893F4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComModifyActionAttack*))(Il2CppBase() + 0x4489510))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComModifyActionAttack*))(Il2CppBase() + 0x4489518))(this);
	}

};

}
