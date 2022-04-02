#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Weapon {

class GunContinuousShooting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Weapon", "GunContinuousShooting"));
	}

	template <typename T = bool> T& isMountWeapon() {
		return *(T*)((uintptr_t)this + 0x19E);
	}
	template <typename T = int32_t> T& bulletNumPerShoot() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& bulletsInterval() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& _bulletTimer() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& _isShooting() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& _bulletCount() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}

	template <typename T = void> T OnDestroy() {
		return ((T (*)(GunContinuousShooting*))(Il2CppBase() + 0x43CFE58))(this);
	}
	template <typename T = void> T ResetState() {
		return ((T (*)(GunContinuousShooting*))(Il2CppBase() + 0x43CFED8))(this);
	}
	template <typename T = void> T OnSwitchWeapon(bool toFront, bool isPick) {
		return ((T (*)(GunContinuousShooting*, bool, bool))(Il2CppBase() + 0x43CFF54))(this, toFront, isPick);
	}
	template <typename T = void> T DropWeapon(int32_t targetLayer) {
		return ((T (*)(GunContinuousShooting*, int32_t))(Il2CppBase() + 0x43CFFFC))(this, targetLayer);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(GunContinuousShooting*))(Il2CppBase() + 0x43D0080))(this);
	}
	template <typename T = void> T HideGunFire() {
		return ((T (*)(GunContinuousShooting*))(Il2CppBase() + 0x43D00F8))(this);
	}
	template <typename T = void> T SingleAttack() {
		return ((T (*)(GunContinuousShooting*))(Il2CppBase() + 0x43D01B4))(this);
	}
	template <typename T = void> T OnShootingEnd() {
		return ((T (*)(GunContinuousShooting*))(Il2CppBase() + 0x43D0364))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunContinuousShooting*))(Il2CppBase() + 0x43D03C0))(this);
	}
	template <typename T = void> T Attackb__14_0() {
		return ((T (*)(GunContinuousShooting*))(Il2CppBase() + 0x43D0514))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(GunContinuousShooting*))(Il2CppBase() + 0x43D0644))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSwitchWeapon(bool P0, bool P1) {
		return ((T (*)(GunContinuousShooting*, bool, bool))(Il2CppBase() + 0x43D064C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunContinuousShooting*, int32_t))(Il2CppBase() + 0x43D065C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunContinuousShooting*))(Il2CppBase() + 0x43D0664))(this);
	}
	template <typename T = void> T iFixBaseProxy_Attack() {
		return ((T (*)(GunContinuousShooting*))(Il2CppBase() + 0x43D066C))(this);
	}

};

}
