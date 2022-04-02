#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGProtoWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGProtoWeapon"));
	}

	template <typename T = uintptr_t> T& currentAttackType() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& rechargeAmountOnAttack() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& rechargeFull() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& _useGodPowerCount() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& recharge() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& addiontialRecharge() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& attachComponentClip() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& partList() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cachedPartArray() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cachedComponents() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& godPower() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& _godPowerType() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& actionComponent() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& weaponBody() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = Il2CppVector3> T& equipedOffset() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = Il2CppVector3> T& _equipedRotation() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = uintptr_t> T& specialButtonPrefab() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& _weaponBodyInner() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& _extraComponentsRoot() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _additionalCmds() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& componentShareData() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = void*> T& overrideConsume() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = void*> T& onAttackActionStart() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = void*> T& onAttackActionEnd() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = int32_t> T& _addHP() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = int32_t> T& _addEnergy() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = int32_t> T& _addShield() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = int32_t> T& _addAtk() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = int32_t> T& _addDef() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = float> T& _addMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = float> T& _addAtkSpeed() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = float> T& _addArmorRestoreSpeed() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = int32_t> T& _addConsume() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = int32_t> T& _addCrit() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = int32_t> T& _addRepel() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = int32_t> T& _addDeviation() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = int32_t> T& _throughCount() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = int32_t> T& _modifiedDeltaHP() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = float> T& _addRechargeSpeed() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = float> T& addGodPower() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = float> T& addBulletSpeed() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = int32_t> T& defaultEmitterExtraTimes() {
		return *(T*)((uintptr_t)this + 0x294);
	}
	template <typename T = int32_t> T& weaponAtk() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = int32_t> T& weaponCrit() {
		return *(T*)((uintptr_t)this + 0x29C);
	}
	template <typename T = int32_t> T& weaponArmor() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = float> T& tempAddChargeSpeed() {
		return *(T*)((uintptr_t)this + 0x2A4);
	}
	template <typename T = float> T& bulletAddScale() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = float> T& _addChargeSpeedByPart() {
		return *(T*)((uintptr_t)this + 0x2AC);
	}
	template <typename T = bool> T& _attributeAddedToController() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = bool> T& attackActionComModified() {
		return *(T*)((uintptr_t)this + 0x2B1);
	}
	template <typename T = Il2CppString*> T& attackActionComModifyKey() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = bool> T& modifyAsChargeAttack() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = bool> T& modifyAsChargeAttack_NoEvent() {
		return *(T*)((uintptr_t)this + 0x2C1);
	}
	template <typename T = float> T& modifyAsChargeAttack_MaxChargeTime() {
		return *(T*)((uintptr_t)this + 0x2C4);
	}
	template <typename T = bool> T& isCopied() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = bool> T& isAttacking() {
		return *(T*)((uintptr_t)this + 0x2C9);
	}
	template <typename T = void*> T& modifyDefaultEmitterAction() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = void*> T& modifyPowerRechargeSpeed() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = bool> T& _isCharacterSpeedUp() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = float> T& _displayShadowSpeedRateThreshold() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = float> T& _speedShadowFadeSpeed() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = bool> T& _atk_b() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = bool> T& _atkPressed() {
		return *(T*)((uintptr_t)this + 0x2ED);
	}
	template <typename T = bool> T& _atkValid() {
		return *(T*)((uintptr_t)this + 0x2EE);
	}
	template <typename T = uintptr_t> T& _specialButtonObj() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& onClickSpecialSkillButton() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& listenEventFlag() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = bool> T& _picked() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = float> T& _accumulationAdditionalRecharge() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = int32_t> T& _sortingOrder() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = Il2CppString*> T& _sortingLayer() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = void*> T& onRecharge() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& _cleanCustomDisplayer() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = uintptr_t> T& _displayObj() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = uintptr_t> T& _updateCustomDisplay() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = uintptr_t> static T& _InfoPanelObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_isUsingGodPower() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C63CB4))(this);
	}
	template <typename T = void> T set_isUsingGodPower(bool value) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C63D1C))(this, value);
	}
	template <typename T = int32_t> T get_recharge() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C63DB0))(this);
	}
	template <typename T = void> T set_recharge(int32_t value) {
		return ((T (*)(RGProtoWeapon*, int32_t))(Il2CppBase() + 0x1C63DB8))(this, value);
	}
	template <typename T = uintptr_t> T get_godPower() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C63DC0))(this);
	}
	template <typename T = void> T set_godPower(uintptr_t value) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C63DC8))(this, value);
	}
	template <typename T = uintptr_t> T get_godPowerCom() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C63DD0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_parts() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C63E70))(this);
	}
	template <typename T = Il2CppVector3> T get__equipedRotation() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C63ED0))(this);
	}
	template <typename T = void> T set__equipedRotation(Il2CppVector3 value) {
		return ((T (*)(RGProtoWeapon*, Il2CppVector3))(Il2CppBase() + 0x1C63EE0))(this, value);
	}
	template <typename T = void> T add_overrideConsume(void* value) {
		return ((T (*)(RGProtoWeapon*, void*))(Il2CppBase() + 0x1C63EF0))(this, value);
	}
	template <typename T = void> T remove_overrideConsume(void* value) {
		return ((T (*)(RGProtoWeapon*, void*))(Il2CppBase() + 0x1C63FE0))(this, value);
	}
	template <typename T = int32_t> T get_realConsume() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C640D0))(this);
	}
	template <typename T = int32_t> T get_currentEnergyConsume() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64208))(this);
	}
	template <typename T = bool> T get_HandCutWhenTargetNear() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64270))(this);
	}
	template <typename T = void> T add_onAttackActionStart(void* value) {
		return ((T (*)(RGProtoWeapon*, void*))(Il2CppBase() + 0x1C642E8))(this, value);
	}
	template <typename T = void> T remove_onAttackActionStart(void* value) {
		return ((T (*)(RGProtoWeapon*, void*))(Il2CppBase() + 0x1C643D8))(this, value);
	}
	template <typename T = void> T add_onAttackActionEnd(void* value) {
		return ((T (*)(RGProtoWeapon*, void*))(Il2CppBase() + 0x1C644C8))(this, value);
	}
	template <typename T = void> T remove_onAttackActionEnd(void* value) {
		return ((T (*)(RGProtoWeapon*, void*))(Il2CppBase() + 0x1C645B8))(this, value);
	}
	template <typename T = float> T get_addAtkSpeed() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C646A8))(this);
	}
	template <typename T = int32_t> T get_weaponAtk() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64708))(this);
	}
	template <typename T = void> T set_weaponAtk(int32_t value) {
		return ((T (*)(RGProtoWeapon*, int32_t))(Il2CppBase() + 0x1C64710))(this, value);
	}
	template <typename T = int32_t> T get_weaponCrit() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64718))(this);
	}
	template <typename T = void> T set_weaponCrit(int32_t value) {
		return ((T (*)(RGProtoWeapon*, int32_t))(Il2CppBase() + 0x1C64720))(this, value);
	}
	template <typename T = float> T get_weaponAdditionalChargeSpeed() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64728))(this);
	}
	template <typename T = float> T get_tempAddChargeSpeed() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64790))(this);
	}
	template <typename T = void> T set_tempAddChargeSpeed(float value) {
		return ((T (*)(RGProtoWeapon*, float))(Il2CppBase() + 0x1C64798))(this, value);
	}
	template <typename T = int32_t> T get_atk() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C647A0))(this);
	}
	template <typename T = int32_t> T get_addAtk() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64800))(this);
	}
	template <typename T = int32_t> T get_addAtkWithoutPlayerAtk() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64890))(this);
	}
	template <typename T = int32_t> T get_def() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C648F0))(this);
	}
	template <typename T = int32_t> T get_hp() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64950))(this);
	}
	template <typename T = int32_t> T get_energy() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C649B0))(this);
	}
	template <typename T = int32_t> T get_armor() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64A10))(this);
	}
	template <typename T = int32_t> T get_crit() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64A70))(this);
	}
	template <typename T = int32_t> T get_addCrit() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64B78))(this);
	}
	template <typename T = int32_t> T get_addCritWithoutPlayerCrit() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64C08))(this);
	}
	template <typename T = float> T get_atkSpeed() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64C68))(this);
	}
	template <typename T = int32_t> T get_repel() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64D3C))(this);
	}
	template <typename T = int32_t> T get_throughCount() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64D9C))(this);
	}
	template <typename T = int32_t> T get_deviation() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64DFC))(this);
	}
	template <typename T = bool> T get_attackActionComModified() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64E5C))(this);
	}
	template <typename T = void> T set_attackActionComModified(bool value) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C64E64))(this, value);
	}
	template <typename T = bool> T get_modifyAsChargeAttack() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64E70))(this);
	}
	template <typename T = void> T set_modifyAsChargeAttack(bool value) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C64E78))(this, value);
	}
	template <typename T = bool> T get_modifyAsChargeAttack_NoEvent() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64E84))(this);
	}
	template <typename T = void> T set_modifyAsChargeAttack_NoEvent(bool value) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C64E8C))(this, value);
	}
	template <typename T = float> T get_modifyAsChargeAttack_MaxChargeTime() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64E98))(this);
	}
	template <typename T = void> T set_modifyAsChargeAttack_MaxChargeTime(float value) {
		return ((T (*)(RGProtoWeapon*, float))(Il2CppBase() + 0x1C64EA0))(this, value);
	}
	template <typename T = bool> T get_isCopied() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64EA8))(this);
	}
	template <typename T = void> T set_isCopied(bool value) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C64EB0))(this, value);
	}
	template <typename T = bool> T get_isAttacking() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64EBC))(this);
	}
	template <typename T = void> T set_isAttacking(bool value) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C64EC4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C64ED0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C67D00))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C67DD8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetWeaponComponents(bool excludeNative) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C684A4))(this, excludeNative);
	}
	template <typename T = bool> T AttachWeaponPart(uintptr_t newPart) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C6863C))(this, newPart);
	}
	template <typename T = void> T AttachPartWhenCreateWeapon(uintptr_t part) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C68810))(this, part);
	}
	template <typename T = void> T RefreshParts() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C65AE4))(this);
	}
	template <typename T = void> T SetActionComponent(uintptr_t com) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C6889C))(this, com);
	}
	template <typename T = void> T UpdateComponentList() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C69D58))(this);
	}
	template <typename T = bool> T _AttachWeaponPart(uintptr_t newPart) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C65238))(this, newPart);
	}
	template <typename T = void> T _DetachPart(int32_t partIdx) {
		return ((T (*)(RGProtoWeapon*, int32_t))(Il2CppBase() + 0x1C69DB4))(this, partIdx);
	}
	template <typename T = void> T AttachComponent(uintptr_t com) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C6A1F4))(this, com);
	}
	template <typename T = bool> T get_isHpModified() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6A264))(this);
	}
	template <typename T = void> T ControllSpeedUpShadow(uintptr_t rgController) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C6A2CC))(this, rgController);
	}
	template <typename T = void> T AddAttribute() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6A524))(this);
	}
	template <typename T = void> T RevertAttribute() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6A5A4))(this);
	}
	template <typename T = void> T OnWeaponAttributeChange() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C68C28))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6B03C))(this);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(RGProtoWeapon*, uintptr_t, int32_t))(Il2CppBase() + 0x1C6B264))(this, parent, target_layer);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C6B39C))(this, parent);
	}
	template <typename T = bool> T get_atk_b() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6B528))(this);
	}
	template <typename T = void> T set_atk_b(bool value) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C6B588))(this, value);
	}
	template <typename T = void> T AttackKeyDown(bool manual) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C6B600))(this, manual);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C6B99C))(this, manual);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6BA20))(this);
	}
	template <typename T = void> T OnAttackActionStart(uintptr_t attackType) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C6BC10))(this, attackType);
	}
	template <typename T = void> T OnAttackKeyEvent(uintptr_t attackType, int32_t atkSequence) {
		return ((T (*)(RGProtoWeapon*, uintptr_t, int32_t))(Il2CppBase() + 0x1C6BD38))(this, attackType, atkSequence);
	}
	template <typename T = void> T OnAttackActionEnd(uintptr_t attackType) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C6BE9C))(this, attackType);
	}
	template <typename T = void> T OnChargeStart(uintptr_t atkType) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C6BFB0))(this, atkType);
	}
	template <typename T = void> T OnChargeAttackStart(uintptr_t atkType) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C6C0B4))(this, atkType);
	}
	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6C1B8))(this);
	}
	template <typename T = void> T FlushIcon(bool leave) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C6C218))(this, leave);
	}
	template <typename T = void> T DisplaySpecialSkillButton(bool show) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C6C3CC))(this, show);
	}
	template <typename T = void> T UpdateRechargeProgress(bool refreshIcon) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C68AEC))(this, refreshIcon);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6C830))(this);
	}
	template <typename T = uintptr_t> T ExecuteEvent(void* todo) {
		return ((T (*)(RGProtoWeapon*, void*))(Il2CppBase() + 0x1C67F1C))(this, todo);
	}
	template <typename T = bool> T Verify(void* todo) {
		return ((T (*)(RGProtoWeapon*, void*))(Il2CppBase() + 0x1C6B808))(this, todo);
	}
	template <typename T = void> T StopAllCmds() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6C89C))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6CAA4))(this);
	}
	template <typename T = void> T AddEventListener(void* func) {
		return ((T (*)(RGProtoWeapon*, void*))(Il2CppBase() + 0x0))(this, func);
	}
	template <typename T = void> T RemoveEventListener() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnSwitchWeapon(bool toFront, bool pick) {
		return ((T (*)(RGProtoWeapon*, bool, bool))(Il2CppBase() + 0x1C6CB14))(this, toFront, pick);
	}
	template <typename T = void> T OnSpecialButtonClicked(uintptr_t data) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C6D078))(this, data);
	}
	template <typename T = void> T OnShowSpecialButton(uintptr_t data) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C6D104))(this, data);
	}
	template <typename T = void> T RechargeOnEnemyGetHurt(uintptr_t data) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C6D2A8))(this, data);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(RGProtoWeapon*, int32_t))(Il2CppBase() + 0x1C6D8CC))(this, target_layer);
	}
	template <typename T = void> T AddEventListeners() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6CE38))(this);
	}
	template <typename T = void> T OnCleanEventListeners() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6CFAC))(this);
	}
	template <typename T = int32_t> T get_damageFinal() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6DBD4))(this);
	}
	template <typename T = int32_t> T get_criticalFinal() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6DC34))(this);
	}
	template <typename T = int32_t> T get_damageFinal2() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6DC94))(this);
	}
	template <typename T = int32_t> T get_criticalFinal2() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6DCF4))(this);
	}
	template <typename T = void> T SpriteLayerSetting(int32_t target_layer, bool is_pet) {
		return ((T (*)(RGProtoWeapon*, int32_t, bool))(Il2CppBase() + 0x1C6DD54))(this, target_layer, is_pet);
	}
	template <typename T = void> T SpriteLayerSetting_1(int32_t target_layer, Il2CppString* layer_name) {
		return ((T (*)(RGProtoWeapon*, int32_t, Il2CppString*))(Il2CppBase() + 0x1C6DDD8))(this, target_layer, layer_name);
	}
	template <typename T = void> T RefreshLooking(bool updateUI) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C667D4))(this, updateUI);
	}
	template <typename T = void> T Recharge(int32_t value, bool withAdditional) {
		return ((T (*)(RGProtoWeapon*, int32_t, bool))(Il2CppBase() + 0x1C6D7CC))(this, value, withAdditional);
	}
	template <typename T = void> T InitRecharge(int32_t value) {
		return ((T (*)(RGProtoWeapon*, int32_t))(Il2CppBase() + 0x1C6DE60))(this, value);
	}
	template <typename T = void> T add_onRecharge(void* value) {
		return ((T (*)(RGProtoWeapon*, void*))(Il2CppBase() + 0x1C6DEDC))(this, value);
	}
	template <typename T = void> T remove_onRecharge(void* value) {
		return ((T (*)(RGProtoWeapon*, void*))(Il2CppBase() + 0x1C6DFCC))(this, value);
	}
	template <typename T = void> T DisplayUIObj(uintptr_t parent, uintptr_t onClean) {
		return ((T (*)(RGProtoWeapon*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C6E0BC))(this, parent, onClean);
	}
	template <typename T = void> T HideUIObj() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6E210))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6E308))(this);
	}
	template <typename T = uintptr_t> T DoubleWeaponBoostStart(uintptr_t* doubleWeapon) {
		return ((T (*)(RGProtoWeapon*, uintptr_t*))(Il2CppBase() + 0x1C6E714))(this, doubleWeapon);
	}
	template <typename T = void> T DoubleWeaponBoostEnd() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6E7B0))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6E80C))(this);
	}
	template <typename T = void> T ShowItemInfo() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6EA68))(this);
	}
	template <typename T = void> T HideItemInfo() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6ED88))(this);
	}
	template <typename T = bool> T get_canSaveToBattleData() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6EE30))(this);
	}
	template <typename T = void> T DisplaySpecialSkillButtonb__190_0() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6EFA0))(this);
	}
	template <typename T = void> T DisplaySpecialSkillButtonb__190_1() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F228))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_realConsume() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F258))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_HandCutWhenTargetNear() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F260))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F268))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F270))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F278))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(RGProtoWeapon*, uintptr_t, int32_t))(Il2CppBase() + 0x1C6F280))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(RGProtoWeapon*, uintptr_t))(Il2CppBase() + 0x1C6F288))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_get_atk_b() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F290))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_atk_b(bool P0) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C6F298))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyDown(bool P0) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C6F2A4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C6F2B0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F2BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_FlushIcon(bool P0) {
		return ((T (*)(RGProtoWeapon*, bool))(Il2CppBase() + 0x1C6F2C4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F2D0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F2D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSwitchWeapon(bool P0, bool P1) {
		return ((T (*)(RGProtoWeapon*, bool, bool))(Il2CppBase() + 0x1C6F2E0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(RGProtoWeapon*, int32_t))(Il2CppBase() + 0x1C6F2F0))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_damageFinal() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F2F8))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_criticalFinal() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F300))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_damageFinal2() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F308))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_criticalFinal2() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F310))(this);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting(int32_t P0, bool P1) {
		return ((T (*)(RGProtoWeapon*, int32_t, bool))(Il2CppBase() + 0x1C6F318))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting_1(int32_t P0, Il2CppString* P1) {
		return ((T (*)(RGProtoWeapon*, int32_t, Il2CppString*))(Il2CppBase() + 0x1C6F324))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F32C))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F334))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowItemInfo() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F33C))(this);
	}
	template <typename T = void> T iFixBaseProxy_HideItemInfo() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F344))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_canSaveToBattleData() {
		return ((T (*)(RGProtoWeapon*))(Il2CppBase() + 0x1C6F34C))(this);
	}

};

}
