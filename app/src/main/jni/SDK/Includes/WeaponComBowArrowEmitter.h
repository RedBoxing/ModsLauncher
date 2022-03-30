#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComBowArrowEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComBowArrowEmitter"));
	}

	template <typename T = int32_t> T& emitCount() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& emitCountByCharge() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& shootSpeed() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = int32_t> T& _toEmit() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& _bulletObj() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& _rgBullet() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& _add_speed() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& onShootEnd() {
		return *(T*)((uintptr_t)this + 0x170);
	}

	template <typename T = bool> T get_multiShoot() {
		return ((T (*)(WeaponComBowArrowEmitter*))(Il2CppBase() + 0x201E2B8))(this);
	}
	template <typename T = uintptr_t> T OnChargeStart(uintptr_t specifiedAttackType) {
		return ((T (*)(WeaponComBowArrowEmitter*, uintptr_t))(Il2CppBase() + 0x201E320))(this, specifiedAttackType);
	}
	template <typename T = uintptr_t> T OnChargeAttackStart(uintptr_t atkType) {
		return ((T (*)(WeaponComBowArrowEmitter*, uintptr_t))(Il2CppBase() + 0x201EB54))(this, atkType);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComBowArrowEmitter*))(Il2CppBase() + 0x201EF88))(this);
	}
	template <typename T = uintptr_t> T OnAttackKeyEvent(uintptr_t specifiedAttackType, int32_t atkSequence) {
		return ((T (*)(WeaponComBowArrowEmitter*, uintptr_t, int32_t))(Il2CppBase() + 0x201EFF8))(this, specifiedAttackType, atkSequence);
	}
	template <typename T = uintptr_t> T OnAttackActionEnd(uintptr_t atkType) {
		return ((T (*)(WeaponComBowArrowEmitter*, uintptr_t))(Il2CppBase() + 0x201F1E0))(this, atkType);
	}
	template <typename T = void> T OnShootStart() {
		return ((T (*)(WeaponComBowArrowEmitter*))(Il2CppBase() + 0x201EBDC))(this);
	}
	template <typename T = void> T OnShootEnd() {
		return ((T (*)(WeaponComBowArrowEmitter*))(Il2CppBase() + 0x201F280))(this);
	}
	template <typename T = uintptr_t> T CreateBullet() {
		return ((T (*)(WeaponComBowArrowEmitter*))(Il2CppBase() + 0x201E4B4))(this);
	}
	template <typename T = void> T SetBullet(uintptr_t rgBullet, uintptr_t bulletInfoInspector, float angle) {
		return ((T (*)(WeaponComBowArrowEmitter*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x201F424))(this, rgBullet, bulletInfoInspector, angle);
	}
	template <typename T = void> T Emit() {
		return ((T (*)(WeaponComBowArrowEmitter*))(Il2CppBase() + 0x2020068))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnChargeStart(uintptr_t P0) {
		return ((T (*)(WeaponComBowArrowEmitter*, uintptr_t))(Il2CppBase() + 0x2020350))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnChargeAttackStart(uintptr_t P0) {
		return ((T (*)(WeaponComBowArrowEmitter*, uintptr_t))(Il2CppBase() + 0x2020358))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComBowArrowEmitter*))(Il2CppBase() + 0x2020360))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackKeyEvent(uintptr_t P0, int32_t P1) {
		return ((T (*)(WeaponComBowArrowEmitter*, uintptr_t, int32_t))(Il2CppBase() + 0x2020368))(this, P0, P1);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackActionEnd(uintptr_t P0) {
		return ((T (*)(WeaponComBowArrowEmitter*, uintptr_t))(Il2CppBase() + 0x2020370))(this, P0);
	}

};

}
