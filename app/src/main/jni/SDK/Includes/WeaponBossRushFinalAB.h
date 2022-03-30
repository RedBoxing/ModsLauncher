#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponBossRushFinalAB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponBossRushFinalAB"));
	}

	template <typename T = uintptr_t> T& form() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& weaponImg() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& weaponFlying() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& maxDistance() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& maxAddAtk() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& initAngle() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = float> T& angleSpeed() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& reload_obj() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& the_reload_obj() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& holdTime() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& hold() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = Il2CppVector3> T& slaveOffset() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& a_time() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = bool> T& holdMax() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = float> T& addAtk() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& twins() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = bool> T& isSlave() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = void*> T& formCleanFunc() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = bool> T& _atk_b() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& latestAttackWeapon() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& cleanFunc() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = bool> T& _throw() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = bool> T& split() {
		return *(T*)((uintptr_t)this + 0x229);
	}
	template <typename T = void*> T& splitCfgGetter() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& spliters() {
		return *(T*)((uintptr_t)this + 0x238);
	}

	template <typename T = bool> T get_isFormA() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2010A64))(this);
	}
	template <typename T = bool> T get_isFormB() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2010ACC))(this);
	}
	template <typename T = bool> T get_hold() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2010B34))(this);
	}
	template <typename T = void> T set_hold(bool value) {
		return ((T (*)(WeaponBossRushFinalAB*, bool))(Il2CppBase() + 0x2010B3C))(this, value);
	}
	template <typename T = float> T get__actualMaxHoldTime() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2010B48))(this);
	}
	template <typename T = uintptr_t> T Twin() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2010C20))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2010F44))(this);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t handTransform, int32_t layer) {
		return ((T (*)(WeaponBossRushFinalAB*, uintptr_t, int32_t))(Il2CppBase() + 0x20110E8))(this, handTransform, layer);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent, bool temporarily, bool asFirstSibling) {
		return ((T (*)(WeaponBossRushFinalAB*, uintptr_t, bool, bool))(Il2CppBase() + 0x20117A8))(this, parent, temporarily, asFirstSibling);
	}
	template <typename T = void> T SetBackPosition(Il2CppVector3 local_position, float angle, int32_t target_layer) {
		return ((T (*)(WeaponBossRushFinalAB*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x20118F0))(this, local_position, angle, target_layer);
	}
	template <typename T = void> T DualWield() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x201119C))(this);
	}
	template <typename T = void> T DropWeapon(int32_t layer) {
		return ((T (*)(WeaponBossRushFinalAB*, int32_t))(Il2CppBase() + 0x2011B7C))(this, layer);
	}
	template <typename T = void> T OnPlayerBulletHitEnemy(uintptr_t e) {
		return ((T (*)(WeaponBossRushFinalAB*, uintptr_t))(Il2CppBase() + 0x2011C64))(this, e);
	}
	template <typename T = void> T OnAfterInitCharacterWeapons(uintptr_t e) {
		return ((T (*)(WeaponBossRushFinalAB*, uintptr_t))(Il2CppBase() + 0x2011E14))(this, e);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(WeaponBossRushFinalAB*, bool, bool))(Il2CppBase() + 0x2011F64))(this, value1, manual);
	}
	template <typename T = bool> T CanAttack() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2012228))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x20122A0))(this);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2012428))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x20125C0))(this);
	}
	template <typename T = void> T AttackKeyDown(bool manual) {
		return ((T (*)(WeaponBossRushFinalAB*, bool))(Il2CppBase() + 0x2012768))(this, manual);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(WeaponBossRushFinalAB*, bool))(Il2CppBase() + 0x20127E4))(this, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x20129CC))(this);
	}
	template <typename T = void> T _AttackEnd() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2012314))(this);
	}
	template <typename T = void> T HideWeapon() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x20137EC))(this);
	}
	template <typename T = void> T ShowWeapon(bool is_front) {
		return ((T (*)(WeaponBossRushFinalAB*, bool))(Il2CppBase() + 0x20138A4))(this, is_front);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x201397C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2013AB8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2013B38))(this);
	}
	template <typename T = void> T StartSplit(void* splitConfigGetter) {
		return ((T (*)(WeaponBossRushFinalAB*, void*))(Il2CppBase() + 0x2013CAC))(this, splitConfigGetter);
	}
	template <typename T = void> T EndSplit() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2013E4C))(this);
	}
	template <typename T = void> T CopyFrom(uintptr_t w) {
		return ((T (*)(WeaponBossRushFinalAB*, uintptr_t))(Il2CppBase() + 0x2013F9C))(this, w);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x20141B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(WeaponBossRushFinalAB*, uintptr_t, int32_t))(Il2CppBase() + 0x20141B8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(WeaponBossRushFinalAB*, uintptr_t, bool, bool))(Il2CppBase() + 0x20141C0))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_SetBackPosition(Il2CppVector3 P0, float P1, int32_t P2) {
		return ((T (*)(WeaponBossRushFinalAB*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x20141D0))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(WeaponBossRushFinalAB*, int32_t))(Il2CppBase() + 0x20141D8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(WeaponBossRushFinalAB*, bool, bool))(Il2CppBase() + 0x20141E0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x20141F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x20141F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2014200))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyDown(bool P0) {
		return ((T (*)(WeaponBossRushFinalAB*, bool))(Il2CppBase() + 0x2014208))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(WeaponBossRushFinalAB*, bool))(Il2CppBase() + 0x2014214))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideWeapon() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2014220))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowWeapon(bool P0) {
		return ((T (*)(WeaponBossRushFinalAB*, bool))(Il2CppBase() + 0x2014228))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x2014234))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDisable() {
		return ((T (*)(WeaponBossRushFinalAB*))(Il2CppBase() + 0x201423C))(this);
	}
	template <typename T = void> T iFixBaseProxy_CopyFrom(uintptr_t P0) {
		return ((T (*)(WeaponBossRushFinalAB*, uintptr_t))(Il2CppBase() + 0x2014244))(this, P0);
	}

};

}
