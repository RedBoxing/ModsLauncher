#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComActionAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComActionAttack"));
	}

	template <typename T = uintptr_t> T& attackAutioClip() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& startTrigger() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& chargeAttack() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& maxChargeTime() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& attackLoadObjectPrefab() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& consumeByCharge() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& noChargeAttackEvent() {
		return *(T*)((uintptr_t)this + 0xF9);
	}
	template <typename T = uintptr_t> T& _animationRoot() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _anim() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _currentAtkCmd() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& _chargeTime() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& freeConsume() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& _atkBegin() {
		return *(T*)((uintptr_t)this + 0x11D);
	}
	template <typename T = bool> T& _startCharge() {
		return *(T*)((uintptr_t)this + 0x11E);
	}
	template <typename T = bool> T& _startAttack() {
		return *(T*)((uintptr_t)this + 0x11F);
	}
	template <typename T = float> T& _latestChargeAmount() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _attackLoadObj() {
		return *(T*)((uintptr_t)this + 0x128);
	}

	template <typename T = bool> T get_freeConsume() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2015A8C))(this);
	}
	template <typename T = void> T set_freeConsume(bool value) {
		return ((T (*)(WeaponComActionAttack*, bool))(Il2CppBase() + 0x2015A94))(this, value);
	}
	template <typename T = uintptr_t> T get_actionTransform() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2015AA0))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2015BC4))(this);
	}
	template <typename T = uintptr_t> T OnSwitchWeapon(bool front) {
		return ((T (*)(WeaponComActionAttack*, bool))(Il2CppBase() + 0x2015D5C))(this, front);
	}
	template <typename T = uintptr_t> T OnCharacterReborn() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2015E08))(this);
	}
	template <typename T = void> T OnAttach(uintptr_t w) {
		return ((T (*)(WeaponComActionAttack*, uintptr_t))(Il2CppBase() + 0x2015EA8))(this, w);
	}
	template <typename T = uintptr_t> T OnAttackVerify(uintptr_t atkType, bool start) {
		return ((T (*)(WeaponComActionAttack*, uintptr_t, bool))(Il2CppBase() + 0x2016014))(this, atkType, start);
	}
	template <typename T = bool> T get_charging() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2016128))(this);
	}
	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t specifiedAttackType) {
		return ((T (*)(WeaponComActionAttack*, uintptr_t))(Il2CppBase() + 0x2016188))(this, specifiedAttackType);
	}
	template <typename T = bool> T get_IsChargeAttack() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2016210))(this);
	}
	template <typename T = bool> T get_IsNoChargeAttackEvent() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x201632C))(this);
	}
	template <typename T = uintptr_t> T OnAttackEnd(uintptr_t specifiedAttackType) {
		return ((T (*)(WeaponComActionAttack*, uintptr_t))(Il2CppBase() + 0x2016448))(this, specifiedAttackType);
	}
	template <typename T = uintptr_t> T OnStop() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2016744))(this);
	}
	template <typename T = float> T get_realMaxChargeTime() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2016834))(this);
	}
	template <typename T = float> T get_chargeAmountLimit() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2016A60))(this);
	}
	template <typename T = float> T GetRealTimeChargeAmount() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x20165B8))(this);
	}
	template <typename T = float> T get_chargeAmount() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2016D78))(this);
	}
	template <typename T = void> T CreateAttackCommand() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2016DD8))(this);
	}
	template <typename T = void> T SetDisplayConsume() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2015C78))(this);
	}
	template <typename T = int32_t> T GetConsumeByCharge(float amount) {
		return ((T (*)(WeaponComActionAttack*, float))(Il2CppBase() + 0x2016C18))(this, amount);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2016F2C))(this);
	}
	template <typename T = void> T OnResetChargeAmount() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2017310))(this);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x20173D4))(this);
	}
	template <typename T = void> T OnSetAtkSeqNo(int32_t n) {
		return ((T (*)(WeaponComActionAttack*, int32_t))(Il2CppBase() + 0x20174E0))(this, n);
	}
	template <typename T = void> T Attack(int32_t atkSequence) {
		return ((T (*)(WeaponComActionAttack*, int32_t))(Il2CppBase() + 0x201755C))(this, atkSequence);
	}
	template <typename T = void> T AttackEnd() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x20176E8))(this);
	}
	template <typename T = void> T ChargeStart() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2017778))(this);
	}
	template <typename T = void> T ChargeAttackStart() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2017808))(this);
	}
	template <typename T = void> T DisplayAttackLoading() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x20171B4))(this);
	}
	template <typename T = void> T HideAttackLoading() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2016658))(this);
	}
	template <typename T = void> T CreateAttackCommandb__43_0() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x201789C))(this);
	}
	template <typename T = void> T CreateAttackCommandb__43_1() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2017A34))(this);
	}
	template <typename T = int32_t> T SetDisplayConsumeb__44_0() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2017AC0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_actionTransform() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2017B20))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2017B28))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnSwitchWeapon(bool P0) {
		return ((T (*)(WeaponComActionAttack*, bool))(Il2CppBase() + 0x2017B30))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnCharacterReborn() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2017B3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnAttach(uintptr_t P0) {
		return ((T (*)(WeaponComActionAttack*, uintptr_t))(Il2CppBase() + 0x2017B44))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackVerify(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponComActionAttack*, uintptr_t, bool))(Il2CppBase() + 0x2017B4C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackBegin(uintptr_t P0) {
		return ((T (*)(WeaponComActionAttack*, uintptr_t))(Il2CppBase() + 0x2017B58))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackEnd(uintptr_t P0) {
		return ((T (*)(WeaponComActionAttack*, uintptr_t))(Il2CppBase() + 0x2017B60))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnStop() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2017B68))(this);
	}
	template <typename T = float> T iFixBaseProxy_get_chargeAmount() {
		return ((T (*)(WeaponComActionAttack*))(Il2CppBase() + 0x2017B70))(this);
	}

};

}
