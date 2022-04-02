#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComScaleBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComScaleBullet"));
	}

	template <typename T = float> T& scale() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& onlyDefaultEmitter() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& _active() {
		return *(T*)((uintptr_t)this + 0xAD);
	}
	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComScaleBullet*))(Il2CppBase() + 0x448BBB4))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComScaleBullet*))(Il2CppBase() + 0x448BD34))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComScaleBullet*))(Il2CppBase() + 0x448BED0))(this);
	}
	template <typename T = void> T ModifyBulletScale(uintptr_t data) {
		return ((T (*)(WeaponComScaleBullet*, uintptr_t))(Il2CppBase() + 0x448BFC0))(this, data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDescParams() {
		return ((T (*)(WeaponComScaleBullet*))(Il2CppBase() + 0x448C7BC))(this);
	}
	template <typename T = void> static T AddScale(uintptr_t bulletObj, float scale) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x448C294))(0, bulletObj, scale);
	}
	template <typename T = void> T Awakeb__4_0(uintptr_t arg) {
		return ((T (*)(WeaponComScaleBullet*, uintptr_t))(Il2CppBase() + 0x448C918))(this, arg);
	}
	template <typename T = void> T Awakeb__4_1() {
		return ((T (*)(WeaponComScaleBullet*))(Il2CppBase() + 0x448C924))(this);
	}
	template <typename T = void> T OnEquipWeaponb__5_0() {
		return ((T (*)(WeaponComScaleBullet*))(Il2CppBase() + 0x448C92C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComScaleBullet*))(Il2CppBase() + 0x448C9D0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComScaleBullet*))(Il2CppBase() + 0x448C9D8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComScaleBullet*))(Il2CppBase() + 0x448C9E0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_GetDescParams() {
		return ((T (*)(WeaponComScaleBullet*))(Il2CppBase() + 0x448C9E8))(this);
	}

};

}
