#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComponentBulletEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComponentBulletEmitter"));
	}

	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& autoFlipBulletY() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& isDefaultEmitter() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = float> T& godPowerChargeSpeed() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& initDeviation() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& detachOnEmit() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& attachOnCharacter() {
		return *(T*)((uintptr_t)this + 0xC1);
	}
	template <typename T = Il2CppVector3> T& attachOffsetOnCharacter() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& emitFromWeaponOrigin() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& distanceToEmitSource() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& emitFromTriggerSource() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& syncMainComponentScale() {
		return *(T*)((uintptr_t)this + 0xD9);
	}
	template <typename T = float> T& scaleByCharge() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& damageFactorByCharge() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& autoBulletFlipY() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& extraEmitTimes() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& addAtkSequence() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& extraEmitInterval() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& extraEmitIntervalAtten() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& isBulletCanRotate() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = void*> T& onGetBullet() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = void*> T& onEmitBullet() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _bulletMod() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& overrideEmitterInfo() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _triggerSource() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppVector3> T& innerEmitPosOffset() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& innerEmitAngleBias() {
		return *(T*)((uintptr_t)this + 0x13C);
	}

	template <typename T = bool> T get_canEmitFromTriggerSource() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x4496844))(this);
	}
	template <typename T = void> T add_onEmitBullet(void* value) {
		return ((T (*)(WeaponComponentBulletEmitter*, void*))(Il2CppBase() + 0x448A7CC))(this, value);
	}
	template <typename T = void> T remove_onEmitBullet(void* value) {
		return ((T (*)(WeaponComponentBulletEmitter*, void*))(Il2CppBase() + 0x448AEBC))(this, value);
	}
	template <typename T = float> T GetGodPowerChargeSpeed() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x44968AC))(this);
	}
	template <typename T = uintptr_t> T get_overrideEmitterInfo() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x448D04C))(this);
	}
	template <typename T = void> T set_overrideEmitterInfo(uintptr_t value) {
		return ((T (*)(WeaponComponentBulletEmitter*, uintptr_t))(Il2CppBase() + 0x44969D8))(this, value);
	}
	template <typename T = uintptr_t> T CreateArtifactDamageInfo() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x4487824))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x44969E0))(this);
	}
	template <typename T = void> T TriggerEmit(uintptr_t arg) {
		return ((T (*)(WeaponComponentBulletEmitter*, uintptr_t))(Il2CppBase() + 0x4496B44))(this, arg);
	}
	template <typename T = void> T OnEmitFromByTrigger(uintptr_t arg) {
		return ((T (*)(WeaponComponentBulletEmitter*, uintptr_t))(Il2CppBase() + 0x4487A44))(this, arg);
	}
	template <typename T = uintptr_t> T GetBulletConfig(int32_t atkSequence) {
		return ((T (*)(WeaponComponentBulletEmitter*, int32_t))(Il2CppBase() + 0x4486CB8))(this, atkSequence);
	}
	template <typename T = uintptr_t> T _GetBulletConfig(int32_t atkSequence) {
		return ((T (*)(WeaponComponentBulletEmitter*, int32_t))(Il2CppBase() + 0x0))(this, atkSequence);
	}
	template <typename T = uintptr_t> static T Emit(float angle, Il2CppVector3 emitPos, uintptr_t weapon, uintptr_t bulletInfo, uintptr_t damageInfo, int32_t deviation, uintptr_t parent, uintptr_t bulletModifier) {
		return ((T (*)(void *, float, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x44851A8))(0, angle, emitPos, weapon, bulletInfo, damageInfo, deviation, parent, bulletModifier);
	}
	template <typename T = uintptr_t> static T GetDamageInfo(uintptr_t bulletInfo, uintptr_t weapon, float damageFactor, int32_t minDamage) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, int32_t))(Il2CppBase() + 0x4484CB0))(0, bulletInfo, weapon, damageFactor, minDamage);
	}
	template <typename T = bool> T IsBulletCanRotate() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x4496C88))(this);
	}
	template <typename T = bool> T DetachOnEmit() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x4496DCC))(this);
	}
	template <typename T = float> T DistanceToEmitSource() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x4496F10))(this);
	}
	template <typename T = uintptr_t> T Emit_1(float angle, Il2CppVector3 position, float chargeAmount, int32_t atkSequence, float damageFactor, float sizeFactor) {
		return ((T (*)(WeaponComponentBulletEmitter*, float, Il2CppVector3, float, int32_t, float, float))(Il2CppBase() + 0x448D054))(this, angle, position, chargeAmount, atkSequence, damageFactor, sizeFactor);
	}
	template <typename T = uintptr_t> T OnAttackKeyEvent(uintptr_t specifiedAttackType, int32_t atkSequence) {
		return ((T (*)(WeaponComponentBulletEmitter*, uintptr_t, int32_t))(Il2CppBase() + 0x4496F88))(this, specifiedAttackType, atkSequence);
	}
	template <typename T = void> T OnEmit(int32_t atkSequence) {
		return ((T (*)(WeaponComponentBulletEmitter*, int32_t))(Il2CppBase() + 0x4487ACC))(this, atkSequence);
	}
	template <typename T = void> T _EmitBulletInAttack(int32_t atkSequence, float chargeAmount) {
		return ((T (*)(WeaponComponentBulletEmitter*, int32_t, float))(Il2CppBase() + 0x448D9D4))(this, atkSequence, chargeAmount);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x4497094))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x4497190))(this);
	}
	template <typename T = Il2CppVector3> T get_innerEmitPosOffset() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x4497278))(this);
	}
	template <typename T = void> T set_innerEmitPosOffset(Il2CppVector3 value) {
		return ((T (*)(WeaponComponentBulletEmitter*, Il2CppVector3))(Il2CppBase() + 0x4497288))(this, value);
	}
	template <typename T = Il2CppVector3> T GetEmitPos() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x4497298))(this);
	}
	template <typename T = float> T get_innerEmitAngleBias() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x44976E0))(this);
	}
	template <typename T = void> T set_innerEmitAngleBias(float value) {
		return ((T (*)(WeaponComponentBulletEmitter*, float))(Il2CppBase() + 0x44976E8))(this, value);
	}
	template <typename T = float> T GetAngle() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x44976F0))(this);
	}
	template <typename T = uintptr_t> T CommonEmitBullet(Il2CppVector3 position, float chargeAmount, int32_t atkSequence) {
		return ((T (*)(WeaponComponentBulletEmitter*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x449386C))(this, position, chargeAmount, atkSequence);
	}
	template <typename T = void> T OnEmitBullet(uintptr_t obj, float chargeAmount) {
		return ((T (*)(WeaponComponentBulletEmitter*, uintptr_t, float))(Il2CppBase() + 0x448D77C))(this, obj, chargeAmount);
	}
	template <typename T = uintptr_t> static T GetDefaultBulletEmitter(uintptr_t weapon) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x448A6B4))(0, weapon);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetNativeEmitters(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4497924))(0, obj);
	}
	template <typename T = void> T Awakeb__36_0(uintptr_t arg) {
		return ((T (*)(WeaponComponentBulletEmitter*, uintptr_t))(Il2CppBase() + 0x4497A80))(this, arg);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x4497A84))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x4497A8C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComponentBulletEmitter*))(Il2CppBase() + 0x4497A94))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackKeyEvent(uintptr_t P0, int32_t P1) {
		return ((T (*)(WeaponComponentBulletEmitter*, uintptr_t, int32_t))(Il2CppBase() + 0x4497A9C))(this, P0, P1);
	}

};

}
