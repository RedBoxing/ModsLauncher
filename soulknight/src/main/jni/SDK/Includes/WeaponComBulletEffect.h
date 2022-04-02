#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComBulletEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComBulletEffect"));
	}

	template <typename T = int32_t> T& probability() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& addProbablityByCharge() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& addOnHit() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& needCrit() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = bool> T& addWhenHitObstacle() {
		return *(T*)((uintptr_t)this + 0xB2);
	}
	template <typename T = uintptr_t> T& effect() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& bulletConfig() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& extraBulletDestroyDelay() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& enemyType() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& needCharge() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& chargeAmount() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& _canAddEffect() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _bulletMod() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComBulletEffect*))(Il2CppBase() + 0x20206EC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponComBulletEffect*))(Il2CppBase() + 0x2020874))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComBulletEffect*))(Il2CppBase() + 0x202092C))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComBulletEffect*))(Il2CppBase() + 0x2020B44))(this);
	}
	template <typename T = void> T OnCreateBullet(uintptr_t bullet) {
		return ((T (*)(WeaponComBulletEffect*, uintptr_t))(Il2CppBase() + 0x2020CF4))(this, bullet);
	}
	template <typename T = void> T OnBulletHit(uintptr_t data) {
		return ((T (*)(WeaponComBulletEffect*, uintptr_t))(Il2CppBase() + 0x20217E4))(this, data);
	}
	template <typename T = bool> T IsBulletFromDefaultEmitter(uintptr_t damageCarrier) {
		return ((T (*)(WeaponComBulletEffect*, uintptr_t))(Il2CppBase() + 0x20215AC))(this, damageCarrier);
	}
	template <typename T = bool> T CheckChargeAmount() {
		return ((T (*)(WeaponComBulletEffect*))(Il2CppBase() + 0x2021720))(this);
	}
	template <typename T = bool> T CheckEnemyType(uintptr_t enemy) {
		return ((T (*)(WeaponComBulletEffect*, uintptr_t))(Il2CppBase() + 0x2021F70))(this, enemy);
	}
	template <typename T = void> T Awakeb__15_0(uintptr_t arg) {
		return ((T (*)(WeaponComBulletEffect*, uintptr_t))(Il2CppBase() + 0x20221C8))(this, arg);
	}
	template <typename T = void> T Awakeb__15_1() {
		return ((T (*)(WeaponComBulletEffect*))(Il2CppBase() + 0x20221D4))(this);
	}
	template <typename T = void> T OnEquipWeaponb__17_0() {
		return ((T (*)(WeaponComBulletEffect*))(Il2CppBase() + 0x20221DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComBulletEffect*))(Il2CppBase() + 0x2022280))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(WeaponComBulletEffect*))(Il2CppBase() + 0x2022288))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComBulletEffect*))(Il2CppBase() + 0x2022290))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComBulletEffect*))(Il2CppBase() + 0x2022298))(this);
	}

};

}
