#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunHugeAxe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunHugeAxe"));
	}

	template <typename T = float> T& maxTime() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& holdClip() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& reloadPrefab() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& reloadGO() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& weaponSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& weaponTransform() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& holdTime() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& bulletGO() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = void*> T& bulletCache() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = void*> T& onDelayedBulletRelease() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = bool> T& triggerHoldAtk() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}

	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunHugeAxe*, bool))(Il2CppBase() + 0x24A6B18))(this, value);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A6BD4))(this);
	}
	template <typename T = bool> T get_shouldShowReloadGO() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A6C34))(this);
	}
	template <typename T = bool> T get_isHolding() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A6D10))(this);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A6D94))(this);
	}
	template <typename T = float> T GetMaxChargeTime() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A6DF4))(this);
	}
	template <typename T = void*> T get_onDelayedBulletRelease() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A6E54))(this);
	}
	template <typename T = void> T set_onDelayedBulletRelease(void* value) {
		return ((T (*)(GunHugeAxe*, void*))(Il2CppBase() + 0x24A6E5C))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A6E64))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A6F3C))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A728C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A7304))(this);
	}
	template <typename T = void> T HoldUpdate() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A73CC))(this);
	}
	template <typename T = void> T ShowReloadGO() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A7544))(this);
	}
	template <typename T = void> T EnLargeStart() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A7738))(this);
	}
	template <typename T = void> T WeaponSizeUpdate() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A7A9C))(this);
	}
	template <typename T = void> T AttackKeyDown(bool manual) {
		return ((T (*)(GunHugeAxe*, bool))(Il2CppBase() + 0x24A7D78))(this, manual);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A7E3C))(this);
	}
	template <typename T = float> T GetProgress() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A7C90))(this);
	}
	template <typename T = void> T NormalAtk() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A7F08))(this);
	}
	template <typename T = void> T HoldAtk() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A7494))(this);
	}
	template <typename T = void> T HoldStart() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A7FB8))(this);
	}
	template <typename T = void> T HoldAtkStart() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A8018))(this);
	}
	template <typename T = float> T GetThrowAngle() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A89F4))(this);
	}
	template <typename T = void> T HoldAtkFinish() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A8C7C))(this);
	}
	template <typename T = void> T CreateBullet(bool reverse) {
		return ((T (*)(GunHugeAxe*, bool))(Il2CppBase() + 0x24A6FB4))(this, reverse);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A8D58))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A8DBC))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunHugeAxe*, uintptr_t))(Il2CppBase() + 0x24A8EB4))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunHugeAxe*, uintptr_t, int32_t))(Il2CppBase() + 0x24A8F3C))(this, parent, target_layer);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A8FD0))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A93A4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A93AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A93B4))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyDown(bool P0) {
		return ((T (*)(GunHugeAxe*, bool))(Il2CppBase() + 0x24A93BC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A93C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A93D0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A93D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunHugeAxe*, uintptr_t))(Il2CppBase() + 0x24A93E0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunHugeAxe*, uintptr_t, int32_t))(Il2CppBase() + 0x24A93E8))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunHugeAxe*))(Il2CppBase() + 0x24A93F0))(this);
	}

};

}
