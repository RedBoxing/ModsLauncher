#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EGunLongLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EGunLongLaser"));
	}

	template <typename T = uintptr_t> T& aim() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& shootDelayTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& atkDuration() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& laserPrepareTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& endDuration() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& weaponSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& idleSprite() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& attackSprite() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _laser() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EGunLongLaser*))(Il2CppBase() + 0x22A9D10))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EGunLongLaser*))(Il2CppBase() + 0x22A9F10))(this);
	}
	template <typename T = void> T SetAttack(bool atk) {
		return ((T (*)(EGunLongLaser*, bool))(Il2CppBase() + 0x22A9FEC))(this, atk);
	}
	template <typename T = void> T StopAttack() {
		return ((T (*)(EGunLongLaser*))(Il2CppBase() + 0x22AA0F4))(this);
	}
	template <typename T = void> T StartAttack() {
		return ((T (*)(EGunLongLaser*))(Il2CppBase() + 0x22AA084))(this);
	}
	template <typename T = uintptr_t> T LaserAttackStart() {
		return ((T (*)(EGunLongLaser*))(Il2CppBase() + 0x22AA358))(this);
	}
	template <typename T = void> T EndShoot() {
		return ((T (*)(EGunLongLaser*))(Il2CppBase() + 0x22AA274))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGunLongLaser*))(Il2CppBase() + 0x22AA438))(this);
	}
	template <typename T = uintptr_t> T LaserAttack() {
		return ((T (*)(EGunLongLaser*))(Il2CppBase() + 0x22AA4A8))(this);
	}
	template <typename T = uintptr_t> T LaserAttackStop() {
		return ((T (*)(EGunLongLaser*))(Il2CppBase() + 0x22AA1C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0) {
		return ((T (*)(EGunLongLaser*, bool))(Il2CppBase() + 0x22AA5C8))(this, P0);
	}

};

}
