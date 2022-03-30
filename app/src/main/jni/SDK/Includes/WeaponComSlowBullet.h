#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComSlowBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComSlowBullet"));
	}

	template <typename T = float> T& slow() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComSlowBullet*))(Il2CppBase() + 0x448DBA0))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComSlowBullet*))(Il2CppBase() + 0x448DCD4))(this);
	}
	template <typename T = void> T ModifyBulletSpeed(uintptr_t data) {
		return ((T (*)(WeaponComSlowBullet*, uintptr_t))(Il2CppBase() + 0x448DD4C))(this, data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDescParams() {
		return ((T (*)(WeaponComSlowBullet*))(Il2CppBase() + 0x448E080))(this);
	}
	template <typename T = void> T OnEquipWeaponb__1_0() {
		return ((T (*)(WeaponComSlowBullet*))(Il2CppBase() + 0x448E1C8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComSlowBullet*))(Il2CppBase() + 0x448E26C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComSlowBullet*))(Il2CppBase() + 0x448E274))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_GetDescParams() {
		return ((T (*)(WeaponComSlowBullet*))(Il2CppBase() + 0x448E27C))(this);
	}

};

}
