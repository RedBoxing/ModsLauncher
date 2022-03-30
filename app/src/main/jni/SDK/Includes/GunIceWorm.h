#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunIceWorm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunIceWorm"));
	}

	template <typename T = Il2CppVector2> T& releasePositionRange() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& releaseTargetPositionRange() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& releaseAngle() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& releaseCount() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = Il2CppVector2> T& bulletDelayRange() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& effectParticle() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& weaponSprite() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = Il2CppVector3> T& h1Offset() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& headPrefab() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& _headGO() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = void*> T& _headAnimCache() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = void*> T& _headParticleCache() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& _delayedButton() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = void*> T& _bulletReleaseList() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& _currentState() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = float> T& _releaseStartTime() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = uintptr_t> T& _weaponSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = bool> T& _backAtk() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = float> T& _atkTime() {
		return *(T*)((uintptr_t)this + 0x224);
	}

	template <typename T = uintptr_t> T get_weaponSpriteRenderer() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24A93F8))(this);
	}
	template <typename T = bool> T get_showMouse() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24A9504))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24A9614))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24A96D4))(this);
	}
	template <typename T = void> T UpdateBulletRelease() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24A9758))(this);
	}
	template <typename T = void> T UpdateBackBulletRelease() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24A9A30))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24AA38C))(this);
	}
	template <typename T = float> T GetControllerAngle() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24AA0B8))(this);
	}
	template <typename T = Il2CppVector3> T GetRandomReleasePosition(float controllerAngle) {
		return ((T (*)(GunIceWorm*, float))(Il2CppBase() + 0x24AA178))(this, controllerAngle);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24AA5C4))(this);
	}
	template <typename T = void> T CreateBullet(Il2CppVector3 releasePosition) {
		return ((T (*)(GunIceWorm*, Il2CppVector3))(Il2CppBase() + 0x24A9D88))(this, releasePosition);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunIceWorm*, uintptr_t))(Il2CppBase() + 0x24AA630))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunIceWorm*, uintptr_t, int32_t))(Il2CppBase() + 0x24AAC00))(this, parent, target_layer);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24AB048))(this);
	}
	template <typename T = void> T HeadAttack() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24AB0D8))(this);
	}
	template <typename T = void> T HeadAttackStop() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24AB148))(this);
	}
	template <typename T = void> T BackAttackDown() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24AB1A8))(this);
	}
	template <typename T = void> T BackAttackUp() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24AB21C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24AB3A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunIceWorm*, uintptr_t))(Il2CppBase() + 0x24AB3A8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunIceWorm*, uintptr_t, int32_t))(Il2CppBase() + 0x24AB3B0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunIceWorm*))(Il2CppBase() + 0x24AB3B8))(this);
	}

};

}
