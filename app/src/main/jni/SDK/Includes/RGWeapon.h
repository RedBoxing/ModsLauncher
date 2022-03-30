#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGWeapon"));
	}

	template <typename T = uintptr_t> T& weapon_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& weapon_tags() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& activate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& item_level() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& item_value() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bulletsInfo() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& deviation() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& consume() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& dmgMultiFactor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& targetObj() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& OwnerType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& weapon_speed() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& atk_move_speed() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& gun_point() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& need_lock() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& has_effect() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = bool> T& is_melee() {
		return *(T*)((uintptr_t)this + 0x8A);
	}
	template <typename T = bool> T& not_forgeable() {
		return *(T*)((uintptr_t)this + 0x8B);
	}
	template <typename T = bool> T& has_picked() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = uintptr_t> T& rg_random() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& weapon_item() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = void*> T& supported_items() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& _settingDecidedByWeaponConfig() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& _itemDecidedByWeaponConfig() {
		return *(T*)((uintptr_t)this + 0xA9);
	}
	template <typename T = bool> T& handCutWhenOutOfEnergy() {
		return *(T*)((uintptr_t)this + 0xAA);
	}
	template <typename T = uintptr_t> T& onPickup() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& OnStartUseWeapon() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& OnStopWeapon() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& attack_count() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& canDualWielding() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _cachedWeaponSpr() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& attackPressed() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& OnAttackKeyDown() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& OnAttackKeyUp() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& hasAddSpeed() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& _buffAtkSpeedFactor() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& _speedFactor() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& _atkFactor() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& _criticFactor() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _autoAttackTags() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& autoAtk() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = void*> T& OnCopyFrom() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& energyWarn() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& energyWarnTrigger() {
		return *(T*)((uintptr_t)this + 0x121);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _icons() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _texts() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& OnFlushIcon() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _weaponSpecial() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& hasSpecialInit() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = void*> T& onBulletCreate() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& afterBulletCreate() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& afterAttack() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& onAttackStart() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& onAttackStop() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& bullet2DmgType() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& additionLevel() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = int32_t> T& _effectedAdditionLevel() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& NeedRecord() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& limitUseInMultiRoom() {
		return *(T*)((uintptr_t)this + 0x189);
	}
	template <typename T = bool> T& funnelMode() {
		return *(T*)((uintptr_t)this + 0x18A);
	}
	template <typename T = uintptr_t> T& target_point() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& detect_radius() {
		return *(T*)((uintptr_t)this + 0x198);
	}

	template <typename T = int32_t> T get_realConsume() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C1554))(this);
	}
	template <typename T = uintptr_t> T get_bulletInfo() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C15B4))(this);
	}
	template <typename T = uintptr_t> T get_bulletInfo2() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C1680))(this);
	}
	template <typename T = uintptr_t> T get_bullet() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C1764))(this);
	}
	template <typename T = float> T get_bullet_speed() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C17D8))(this);
	}
	template <typename T = void> T ChangeBulletSpeed(float value, uintptr_t changeType, uintptr_t bulletFilter) {
		return ((T (*)(RGWeapon*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x44C184C))(this, value, changeType, bulletFilter);
	}
	template <typename T = int32_t> T get_atk() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C1A98))(this);
	}
	template <typename T = void> T ChangeAtk(float value, uintptr_t changeType, uintptr_t bulletFilter) {
		return ((T (*)(RGWeapon*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x44C1B0C))(this, value, changeType, bulletFilter);
	}
	template <typename T = void> T ChangeAtk_1(float value, int32_t bulletIndex, uintptr_t changeType, uintptr_t bulletFilter) {
		return ((T (*)(RGWeapon*, float, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x44C1DA0))(this, value, bulletIndex, changeType, bulletFilter);
	}
	template <typename T = uintptr_t> T GetWeaponData() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C1F84))(this);
	}
	template <typename T = int32_t> T get_critical() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C2178))(this);
	}
	template <typename T = void> T ChangeCritical(float value, uintptr_t changeType, uintptr_t bulletFilter) {
		return ((T (*)(RGWeapon*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x44C21EC))(this, value, changeType, bulletFilter);
	}
	template <typename T = int32_t> T get_repel() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C2440))(this);
	}
	template <typename T = int32_t> T get_throughCount() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C24B4))(this);
	}
	template <typename T = void> T ChangeThrough(int32_t value, uintptr_t bulletFilter) {
		return ((T (*)(RGWeapon*, int32_t, uintptr_t))(Il2CppBase() + 0x44C2528))(this, value, bulletFilter);
	}
	template <typename T = float> T get_bulletSize() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C26E8))(this);
	}
	template <typename T = void> T ChangeBulletSize(float value, uintptr_t changeType, uintptr_t bulletFilter) {
		return ((T (*)(RGWeapon*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x44C275C))(this, value, changeType, bulletFilter);
	}
	template <typename T = void> T ChangeBulletSize_1(float value, int32_t bulletIndex, uintptr_t changeType, uintptr_t bulletFilter) {
		return ((T (*)(RGWeapon*, float, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x44C299C))(this, value, bulletIndex, changeType, bulletFilter);
	}
	template <typename T = bool> T get_handCutWhenOutOfEnergy() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C2B3C))(this);
	}
	template <typename T = void> T set_handCutWhenOutOfEnergy(bool value) {
		return ((T (*)(RGWeapon*, bool))(Il2CppBase() + 0x44C2B44))(this, value);
	}
	template <typename T = bool> T get_itemDecidedByWeaponConfig() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C2B50))(this);
	}
	template <typename T = void> T add_OnStartUseWeapon(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C2E1C))(this, value);
	}
	template <typename T = void> T remove_OnStartUseWeapon(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C2F08))(this, value);
	}
	template <typename T = void> T add_OnStopWeapon(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C2FF4))(this, value);
	}
	template <typename T = void> T remove_OnStopWeapon(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C30E0))(this, value);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C31CC))(this);
	}
	template <typename T = void> T set_atk_b(bool value) {
		return ((T (*)(RGWeapon*, bool))(Il2CppBase() + 0x44C322C))(this, value);
	}
	template <typename T = bool> T get_atk_b() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C3330))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_CachedWeaponSpr() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C341C))(this);
	}
	template <typename T = void> T set_CachedWeaponSpr(Il2CppList<uintptr_t>* value) {
		return ((T (*)(RGWeapon*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x44C347C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C34F0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C3640))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C369C))(this);
	}
	template <typename T = void> T WeaponItemConfigInit() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C2BC0))(this);
	}
	template <typename T = void> T HandleBattleFactor() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C36F8))(this);
	}
	template <typename T = void> T OnBattleFactorAdd(uintptr_t e) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C3878))(this, e);
	}
	template <typename T = void> T OnBattleFactorRemove(uintptr_t e) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C3998))(this, e);
	}
	template <typename T = float> T get_FactorSpeedRate() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C3AB8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C3B18))(this);
	}
	template <typename T = void> T ApplyFactor() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C3CEC))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C427C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C42D8))(this);
	}
	template <typename T = void> T OnHide() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C462C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C4720))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C4C1C))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C5158))(this, other);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(RGWeapon*, bool, bool))(Il2CppBase() + 0x44C5608))(this, value1, manual);
	}
	template <typename T = bool> T get_attackPressed() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C5AD0))(this);
	}
	template <typename T = void> T set_attackPressed(bool value) {
		return ((T (*)(RGWeapon*, bool))(Il2CppBase() + 0x44C5AD8))(this, value);
	}
	template <typename T = void> T add_OnAttackKeyDown(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C5AE4))(this, value);
	}
	template <typename T = void> T remove_OnAttackKeyDown(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C5BD0))(this, value);
	}
	template <typename T = void> T SendAttackKeyDownEvent() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C5CBC))(this);
	}
	template <typename T = void> T add_OnAttackKeyUp(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C5D30))(this, value);
	}
	template <typename T = void> T remove_OnAttackKeyUp(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C5E1C))(this, value);
	}
	template <typename T = void> T AttackKeyDown(bool manual) {
		return ((T (*)(RGWeapon*, bool))(Il2CppBase() + 0x44C5F08))(this, manual);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(RGWeapon*, bool))(Il2CppBase() + 0x44C5FB4))(this, manual);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C6158))(this);
	}
	template <typename T = void> T AddAttackCount() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C62D0))(this);
	}
	template <typename T = void> T ResetAttackCount() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C6338))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C6398))(this);
	}
	template <typename T = void> T SetController(uintptr_t controller) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C650C))(this, controller);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C6860))(this);
	}
	template <typename T = void> T OnSwitchWeapon(bool toFront, bool isPick) {
		return ((T (*)(RGWeapon*, bool, bool))(Il2CppBase() + 0x44C6AF4))(this, toFront, isPick);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C6CEC))(this);
	}
	template <typename T = float> T get_BuffAtkSpeedFactor() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C7078))(this);
	}
	template <typename T = void> T set_BuffAtkSpeedFactor(float value) {
		return ((T (*)(RGWeapon*, float))(Il2CppBase() + 0x44C70D8))(this, value);
	}
	template <typename T = float> T get_controllerAtkSpeed() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C714C))(this);
	}
	template <typename T = bool> T get__autoAttack() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C6098))(this);
	}
	template <typename T = bool> T get_HasAutoAttackTags() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C7268))(this);
	}
	template <typename T = void> T SetWeaponSpeed(float speedFactor, float duration) {
		return ((T (*)(RGWeapon*, float, float))(Il2CppBase() + 0x44C7314))(this, speedFactor, duration);
	}
	template <typename T = void> T BuffSetWeaponSpeed(float speedFactor, float duration) {
		return ((T (*)(RGWeapon*, float, float))(Il2CppBase() + 0x44C7548))(this, speedFactor, duration);
	}
	template <typename T = uintptr_t> T ChangingSpeed(float speedFactor, float duration) {
		return ((T (*)(RGWeapon*, float, float))(Il2CppBase() + 0x44C744C))(this, speedFactor, duration);
	}
	template <typename T = uintptr_t> T BuffChangingSpeed(float speedFactor, float duration) {
		return ((T (*)(RGWeapon*, float, float))(Il2CppBase() + 0x44C7680))(this, speedFactor, duration);
	}
	template <typename T = void> T ResetWeaponSpeedToOrigin() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C77D4))(this);
	}
	template <typename T = void> T ResetWeaponSpeed() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C3EDC))(this);
	}
	template <typename T = void> T SetAutoAttack(float speedFactor, float duration, Il2CppString* tag) {
		return ((T (*)(RGWeapon*, float, float, Il2CppString*))(Il2CppBase() + 0x44C78F4))(this, speedFactor, duration, tag);
	}
	template <typename T = void> T StopAutoAttack(Il2CppString* tag) {
		return ((T (*)(RGWeapon*, Il2CppString*))(Il2CppBase() + 0x44C7B3C))(this, tag);
	}
	template <typename T = uintptr_t> T AutoAttacking(float speedFactor, float duration, Il2CppString* tag) {
		return ((T (*)(RGWeapon*, float, float, Il2CppString*))(Il2CppBase() + 0x44C7A20))(this, speedFactor, duration, tag);
	}
	template <typename T = void> T CheckAutoAttackDelay() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C7C20))(this);
	}
	template <typename T = void> T CheckAutoAttack() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C7CBC))(this);
	}
	template <typename T = void> T OnWeaponSpeedChanged() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C7D48))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C7DA4))(this);
	}
	template <typename T = void> T OnRebornBack() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C80A0))(this);
	}
	template <typename T = void> T DeadBack() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C80FC))(this);
	}
	template <typename T = void> T add_OnCopyFrom(void* value) {
		return ((T (*)(RGWeapon*, void*))(Il2CppBase() + 0x44C8158))(this, value);
	}
	template <typename T = void> T remove_OnCopyFrom(void* value) {
		return ((T (*)(RGWeapon*, void*))(Il2CppBase() + 0x44C8248))(this, value);
	}
	template <typename T = void> T CopyFrom(uintptr_t proto) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C8338))(this, proto);
	}
	template <typename T = void> T ShowBoxCollider() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C679C))(this);
	}
	template <typename T = void> T HideBoxCollider() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C6690))(this);
	}
	template <typename T = void> T FusionTrigger(uintptr_t controller) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C895C))(this, controller);
	}
	template <typename T = void> T SyncFusionTrigger(uintptr_t controller) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C8F50))(this, controller);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C93AC))(this, controller);
	}
	template <typename T = void> T StatisticPickCount() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C8EDC))(this);
	}
	template <typename T = void> T StatisticCount() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C9884))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGWeapon*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x44C9E74))(this, controller, ext_info);
	}
	template <typename T = float> T GetFixedAngle() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CA2E0))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CA354))(this);
	}
	template <typename T = void> T EnergyWarn() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C595C))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CA618))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CA678))(this);
	}
	template <typename T = Il2CppString*> static T GetWeaponNameText(Il2CppString* weaponKey) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44CA864))(0, weaponKey);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_icons() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CA980))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CAAAC))(this);
	}
	template <typename T = int32_t> T get_damageFinal() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CB098))(this);
	}
	template <typename T = int32_t> T get_criticalFinal() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CB164))(this);
	}
	template <typename T = int32_t> T get_damageFinal2() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CB230))(this);
	}
	template <typename T = int32_t> T get_criticalFinal2() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CB2FC))(this);
	}
	template <typename T = void> T ShowItemInfo() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CB3C8))(this);
	}
	template <typename T = void> T HideItemInfo() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CB5A0))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CB5FC))(this);
	}
	template <typename T = void> T PlayerIn(uintptr_t other) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C4CA0))(this, other);
	}
	template <typename T = void> T ShowWeaponName(float height) {
		return ((T (*)(RGWeapon*, float))(Il2CppBase() + 0x44CB7D0))(this, height);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(RGWeapon*, int32_t))(Il2CppBase() + 0x44CB8D8))(this, target_layer);
	}
	template <typename T = void> T DestroyRemains() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CBCB4))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44CBFA0))(this, parent);
	}
	template <typename T = void> T SetWeaponBack_1(uintptr_t parent, bool temporarily, bool asFirstSibling) {
		return ((T (*)(RGWeapon*, uintptr_t, bool, bool))(Il2CppBase() + 0x44CC04C))(this, parent, temporarily, asFirstSibling);
	}
	template <typename T = void> T SetBackPosition(Il2CppVector3 local_position, float angle, int32_t target_layer) {
		return ((T (*)(RGWeapon*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x44CC128))(this, local_position, angle, target_layer);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(RGWeapon*, uintptr_t, int32_t))(Il2CppBase() + 0x44CC278))(this, parent, target_layer);
	}
	template <typename T = void> T PlayerOut(uintptr_t other) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C51DC))(this, other);
	}
	template <typename T = void> T ResetFusionButton(uintptr_t ctrl, bool enter) {
		return ((T (*)(RGWeapon*, uintptr_t, bool))(Il2CppBase() + 0x44CB65C))(this, ctrl, enter);
	}
	template <typename T = void> T ColliderTriggerWithControllerEnter(uintptr_t triggerController) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44CC488))(this, triggerController);
	}
	template <typename T = void> T ColliderTriggerWithControllerLeave(uintptr_t triggerController) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44CC6F0))(this, triggerController);
	}
	template <typename T = bool> T CanFusionWhenEnter(uintptr_t ctrl, bool raise_event) {
		return ((T (*)(RGWeapon*, uintptr_t, bool))(Il2CppBase() + 0x44CC948))(this, ctrl, raise_event);
	}
	template <typename T = uintptr_t> T GetControllerTarget() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CCED0))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CCFA4))(this);
	}
	template <typename T = void> T TurnActivate() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CD018))(this);
	}
	template <typename T = bool> T get_petAtkAudio() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CD0C8))(this);
	}
	template <typename T = void> T SetPetAttackTrigger(bool playAudio) {
		return ((T (*)(RGWeapon*, bool))(Il2CppBase() + 0x44CD128))(this, playAudio);
	}
	template <typename T = void> T SetPetAttack(bool value1) {
		return ((T (*)(RGWeapon*, bool))(Il2CppBase() + 0x44CD294))(this, value1);
	}
	template <typename T = void> T MercenaryIn(uintptr_t other) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C4F04))(this, other);
	}
	template <typename T = void> T MercenaryOut(uintptr_t other) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44C5408))(this, other);
	}
	template <typename T = void> T WildPetIn(uintptr_t other) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44CD31C))(this, other);
	}
	template <typename T = void> T WildPetOut(uintptr_t other) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44CD878))(this, other);
	}
	template <typename T = void> T AddWeaponItem(uintptr_t item) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44CDB14))(this, item);
	}
	template <typename T = void> T SetWeaponItems(Il2CppArray<uintptr_t>* itemNames, bool remainIfNoSuit) {
		return ((T (*)(RGWeapon*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x44C8454))(this, itemNames, remainIfNoSuit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetWeaponItems() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C2020))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CDF38))(this);
	}
	template <typename T = void> T AdjustAnchor() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CDF98))(this);
	}
	template <typename T = void> T AdjustColliderAnchor() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CE24C))(this);
	}
	template <typename T = Il2CppString*> T GetDescAttack() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CE500))(this);
	}
	template <typename T = Il2CppString*> T GetDescConsume() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CE57C))(this);
	}
	template <typename T = Il2CppString*> T GetDescCritic() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CE5E0))(this);
	}
	template <typename T = Il2CppString*> T GetDescDeviation() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CE65C))(this);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T GetDefaultMaterials() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CE6C0))(this);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T GetMaterials() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CEAEC))(this);
	}
	template <typename T = void> T add_OnFlushIcon(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44CEE8C))(this, value);
	}
	template <typename T = void> T remove_OnFlushIcon(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44CEF7C))(this, value);
	}
	template <typename T = void> T FlushIcon(bool leave) {
		return ((T (*)(RGWeapon*, bool))(Il2CppBase() + 0x44CF06C))(this, leave);
	}
	template <typename T = bool> T get_IsFrontWeapon() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CF480))(this);
	}
	template <typename T = bool> T get_ShowSelfIcon() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CF5C8))(this);
	}
	template <typename T = uintptr_t> T get_weaponSpecial() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CCE04))(this);
	}
	template <typename T = bool> T get_isSpecialWeapon() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CF828))(this);
	}
	template <typename T = void> T SpriteLayerSetting(int32_t target_layer, bool is_pet) {
		return ((T (*)(RGWeapon*, int32_t, bool))(Il2CppBase() + 0x44CF938))(this, target_layer, is_pet);
	}
	template <typename T = void> T SpriteLayerSetting_1(int32_t target_layer, Il2CppString* layer_name) {
		return ((T (*)(RGWeapon*, int32_t, Il2CppString*))(Il2CppBase() + 0x44CFA5C))(this, target_layer, layer_name);
	}
	template <typename T = void> T LockedProcess(float fixed_angle) {
		return ((T (*)(RGWeapon*, float))(Il2CppBase() + 0x44CFBB0))(this, fixed_angle);
	}
	template <typename T = bool> static T IsMelle(Il2CppString* weaponName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44CFC20))(0, weaponName);
	}
	template <typename T = bool> static T IsTransformWeapon(Il2CppString* weaponName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44CFD50))(0, weaponName);
	}
	template <typename T = void> T ChangeSprite(uintptr_t sprite) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44CFE48))(this, sprite);
	}
	template <typename T = bool> T get_IsInvisibleWeapon() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CFF3C))(this);
	}
	template <typename T = Il2CppString*> static T WeaponNameNormalized(Il2CppString* weapon_name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44C9C08))(0, weapon_name);
	}
	template <typename T = uintptr_t> T GetBulletHitObject() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44CFFA4))(this);
	}
	template <typename T = void> T add_onBulletCreate(void* value) {
		return ((T (*)(RGWeapon*, void*))(Il2CppBase() + 0x44D01B4))(this, value);
	}
	template <typename T = void> T remove_onBulletCreate(void* value) {
		return ((T (*)(RGWeapon*, void*))(Il2CppBase() + 0x44D02A4))(this, value);
	}
	template <typename T = void> T BulletCreateEvent(uintptr_t bullet) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D0394))(this, bullet);
	}
	template <typename T = void> T add_afterBulletCreate(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D0450))(this, value);
	}
	template <typename T = void> T remove_afterBulletCreate(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D0540))(this, value);
	}
	template <typename T = void> T AfterBulletCreateEvent() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D0630))(this);
	}
	template <typename T = void> T add_afterAttack(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D06A4))(this, value);
	}
	template <typename T = void> T remove_afterAttack(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D0794))(this, value);
	}
	template <typename T = void> T AfterAttackEvent() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D0884))(this);
	}
	template <typename T = void> T add_onAttackStart(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D08F8))(this, value);
	}
	template <typename T = void> T remove_onAttackStart(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D09E8))(this, value);
	}
	template <typename T = void> T StartAttackEvent() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C625C))(this);
	}
	template <typename T = void> T add_onAttackStop(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D0AD8))(this, value);
	}
	template <typename T = void> T remove_onAttackStop(uintptr_t value) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D0BC8))(this, value);
	}
	template <typename T = void> T StopAttackEvent() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C6498))(this);
	}
	template <typename T = void> T HideWeapon() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D0CB8))(this);
	}
	template <typename T = void> T ShowWeapon(bool is_front) {
		return ((T (*)(RGWeapon*, bool))(Il2CppBase() + 0x44D0D4C))(this, is_front);
	}
	template <typename T = void> T OnRestoreEnergyWhenLow() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D0E08))(this);
	}
	template <typename T = bool> T IsMelleIndeed() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D0F08))(this);
	}
	template <typename T = bool> T get_HandCutWhenTargetNear() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D0F68))(this);
	}
	template <typename T = bool> T InHeroHand() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D0FC8))(this);
	}
	template <typename T = float> T get_fixedAngle() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D10C0))(this);
	}
	template <typename T = bool> T HasDamageType(uintptr_t bullet, uintptr_t damageType) {
		return ((T (*)(RGWeapon*, uintptr_t, uintptr_t))(Il2CppBase() + 0x44D11D0))(this, bullet, damageType);
	}
	template <typename T = uintptr_t> T GetBulletInfo(int32_t index) {
		return ((T (*)(RGWeapon*, int32_t))(Il2CppBase() + 0x44D1400))(this, index);
	}
	template <typename T = void> T SetDmgMultiFactor(float factor) {
		return ((T (*)(RGWeapon*, float))(Il2CppBase() + 0x44D18A0))(this, factor);
	}
	template <typename T = uintptr_t> T GetDamageInfo(int32_t index) {
		return ((T (*)(RGWeapon*, int32_t))(Il2CppBase() + 0x44D1914))(this, index);
	}
	template <typename T = void> T ResetBuffEffect(uintptr_t buff, bool isGet) {
		return ((T (*)(RGWeapon*, uintptr_t, bool))(Il2CppBase() + 0x44D1BBC))(this, buff, isGet);
	}
	template <typename T = bool> T HasTag(uintptr_t tag) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D1D98))(this, tag);
	}
	template <typename T = void> T AddTag(uintptr_t tag) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D1E54))(this, tag);
	}
	template <typename T = bool> T HasDamageType_1(uintptr_t damageType) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D1F3C))(this, damageType);
	}
	template <typename T = void> T OnTypicalChange() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D2178))(this);
	}
	template <typename T = void> T AddAdditionLevel() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D21D4))(this);
	}
	template <typename T = uintptr_t> T DecorateAdditionLevel(uintptr_t damageInfo) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D2380))(this, damageInfo);
	}
	template <typename T = uintptr_t> T DecorateAdditionLevel_1(uintptr_t bulletInfo) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D2470))(this, bulletInfo);
	}
	template <typename T = void> T AddBaseEvent() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C3FF4))(this);
	}
	template <typename T = void> T RemoveBaseEvent() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C4994))(this);
	}
	template <typename T = void> T OnCreateAddtionBullet(uintptr_t bulletGo) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D2538))(this, bulletGo);
	}
	template <typename T = void> T OnControllerCreateBullet(uintptr_t bulletGo) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D25F4))(this, bulletGo);
	}
	template <typename T = void> T OnControllerDelayedBulletRelease(uintptr_t bulletGo) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D26F0))(this, bulletGo);
	}
	template <typename T = bool> T get_NeedRecord() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D27EC))(this);
	}
	template <typename T = void> T set_NeedRecord(bool value) {
		return ((T (*)(RGWeapon*, bool))(Il2CppBase() + 0x44D27F4))(this, value);
	}
	template <typename T = void> T AddRecord() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C9730))(this);
	}
	template <typename T = bool> T LimitUseInMultiRoom() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D2800))(this);
	}
	template <typename T = bool> T get_funnelMode() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D2920))(this);
	}
	template <typename T = void> T set_funnelMode(bool value) {
		return ((T (*)(RGWeapon*, bool))(Il2CppBase() + 0x44D2928))(this, value);
	}
	template <typename T = void> T OnStartBeingUsedAsFunnel() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D2934))(this);
	}
	template <typename T = void> T OnEndBeingUsedAsFunnel() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D2998))(this);
	}
	template <typename T = float> T FunnelModeAtkRange() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D29F8))(this);
	}
	template <typename T = bool> T get_canSaveToBattleData() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D2A58))(this);
	}
	template <typename T = uintptr_t> T get_target_point_proto() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D2AB8))(this);
	}
	template <typename T = int32_t> T get_weaponLayer() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D2B68))(this);
	}
	template <typename T = void> T StartDetectFusion(int32_t gameState) {
		return ((T (*)(RGWeapon*, int32_t))(Il2CppBase() + 0x44C6A30))(this, gameState);
	}
	template <typename T = void> T RepeatDetectFusion() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44D2C60))(this);
	}
	template <typename T = void> T SetupFusionGuide(uintptr_t target) {
		return ((T (*)(RGWeapon*, uintptr_t))(Il2CppBase() + 0x44D32C4))(this, target);
	}
	template <typename T = void> T StopDetectFusion() {
		return ((T (*)(RGWeapon*))(Il2CppBase() + 0x44C6F68))(this);
	}

};

}
