#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun003
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun003"));
	}

	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = uintptr_t> T get_WeaponBulletInfo() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461F360))(this);
	}
	template <typename T = uintptr_t> T get_WeaponDamageInfo() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461F420))(this);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461F4E4))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461F544))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(Gun003*, bool, bool))(Il2CppBase() + 0x461F5A0))(this, value1, setHandAttack);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461F798))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461FA3C))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461FBBC))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461FC58))(this);
	}
	template <typename T = void> T OnWeaponSpeedChanged() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461FCB8))(this);
	}
	template <typename T = void> T DestroyLaserChild() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461F668))(this);
	}
	template <typename T = void> T EndLaserChild() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461FAA8))(this);
	}
	template <typename T = void> T OnTypicalChange() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461FDD4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461FFAC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(Gun003*, bool, bool))(Il2CppBase() + 0x461FFB4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461FFC4))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461FFCC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461FFD4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461FFDC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnWeaponSpeedChanged() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461FFE4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTypicalChange() {
		return ((T (*)(Gun003*))(Il2CppBase() + 0x461FFEC))(this);
	}

};

}
