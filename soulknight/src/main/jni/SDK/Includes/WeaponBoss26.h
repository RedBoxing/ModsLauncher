#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponBoss26
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponBoss26"));
	}

	template <typename T = int32_t> T& tentacleCount() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = float> T& tentacleDistance() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = float> T& passiveEffectTriggerInterval() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = int32_t> T& passiveEffectAttackTimes() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = float> T& passiveEffectAttackInterval() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = uintptr_t> T& passiveEffectBullet() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& tentacleObj() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = float> T& mainTentacleSize() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = float> T& tentacleSize() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = uintptr_t> T& face() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = float> T& tentacleDestroyDelay() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = float> T& tentacleCreateBulletDelay() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = float> T& tentacleAttackDistance() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = float> T& bulletGenDistance() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = uintptr_t> T& smoke() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = Il2CppVector2> T& smokeTailFactor() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = uintptr_t> T& uiDisplayObj() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& smokeTransform() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& faceAnimator() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& faceSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = bool> T& passiveEffect() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = bool> T& passiveEffectActive() {
		return *(T*)((uintptr_t)this + 0x259);
	}
	template <typename T = float> T& passiveEffectTriggerWait() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = float> T& passiveEffectTimesRemain() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = float> T& passiveEffectAttackWait() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = uintptr_t> T& characterController() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = bool> T& random_ready() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = float> T& inactiveScale() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& eyes() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = float> T& oriEyeSize() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& _cleanCustomDisplayer() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = uintptr_t> T& _displayObj() {
		return *(T*)((uintptr_t)this + 0x290);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x43696C0))(this);
	}
	template <typename T = void> T OnResetPosition() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x4369B1C))(this);
	}
	template <typename T = void> T OnSwitchWeapon(bool toFront, bool isPick) {
		return ((T (*)(WeaponBoss26*, bool, bool))(Il2CppBase() + 0x4369FE4))(this, toFront, isPick);
	}
	template <typename T = void> T WeaponOn() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x4369B88))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436A074))(this);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(WeaponBoss26*, int32_t))(Il2CppBase() + 0x436A0E0))(this, target_layer);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(WeaponBoss26*, uintptr_t, int32_t))(Il2CppBase() + 0x436A454))(this, parent, target_layer);
	}
	template <typename T = void> T SetBackPosition(Il2CppVector3 local_position, float angle, int32_t target_layer) {
		return ((T (*)(WeaponBoss26*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x436A4FC))(this, local_position, angle, target_layer);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436A5E0))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436AA08))(this);
	}
	template <typename T = void> T StartPassiveEffect() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436AF48))(this);
	}
	template <typename T = void> T StopPassiveEffect() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436A328))(this);
	}
	template <typename T = void> T _DoAttack(Il2CppVector3 atkPosOffset) {
		return ((T (*)(WeaponBoss26*, Il2CppVector3))(Il2CppBase() + 0x436B078))(this, atkPosOffset);
	}
	template <typename T = void> T CreateTentacle(Il2CppVector3 atkPosOffset) {
		return ((T (*)(WeaponBoss26*, Il2CppVector3))(Il2CppBase() + 0x436B120))(this, atkPosOffset);
	}
	template <typename T = void> T CreateTentacleBullet(int32_t bulletIdx, Il2CppVector3 pos) {
		return ((T (*)(WeaponBoss26*, int32_t, Il2CppVector3))(Il2CppBase() + 0x436B63C))(this, bulletIdx, pos);
	}
	template <typename T = void> T CreatePassiveEffectBullet() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436AC90))(this);
	}
	template <typename T = float> T FunnelModeAtkRange() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436B80C))(this);
	}
	template <typename T = void> T DisplayUIObj(uintptr_t parent, uintptr_t onClean) {
		return ((T (*)(WeaponBoss26*, uintptr_t, uintptr_t))(Il2CppBase() + 0x436B86C))(this, parent, onClean);
	}
	template <typename T = void> T HideUIObj() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436BCD4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436BDC8))(this);
	}
	template <typename T = void> T SpriteLayerSetting(int32_t target_layer, bool is_pet) {
		return ((T (*)(WeaponBoss26*, int32_t, bool))(Il2CppBase() + 0x436BED0))(this, target_layer, is_pet);
	}
	template <typename T = void> T SpriteLayerSetting_1(int32_t target_layer, Il2CppString* layer_name) {
		return ((T (*)(WeaponBoss26*, int32_t, Il2CppString*))(Il2CppBase() + 0x436BFDC))(this, target_layer, layer_name);
	}
	template <typename T = void> T StopPassiveEffectb__41_0() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436C1AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436C29C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnResetPosition() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436C2A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSwitchWeapon(bool P0, bool P1) {
		return ((T (*)(WeaponBoss26*, bool, bool))(Il2CppBase() + 0x436C2AC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436C2BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(WeaponBoss26*, int32_t))(Il2CppBase() + 0x436C2C4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(WeaponBoss26*, uintptr_t, int32_t))(Il2CppBase() + 0x436C2CC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetBackPosition(Il2CppVector3 P0, float P1, int32_t P2) {
		return ((T (*)(WeaponBoss26*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x436C2D4))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_OnUpdate() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436C2DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnFixedUpdate() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436C2E4))(this);
	}
	template <typename T = float> T iFixBaseProxy_FunnelModeAtkRange() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436C2EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(WeaponBoss26*))(Il2CppBase() + 0x436C2F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting(int32_t P0, bool P1) {
		return ((T (*)(WeaponBoss26*, int32_t, bool))(Il2CppBase() + 0x436C2FC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting_1(int32_t P0, Il2CppString* P1) {
		return ((T (*)(WeaponBoss26*, int32_t, Il2CppString*))(Il2CppBase() + 0x436C308))(this, P0, P1);
	}

};

}
