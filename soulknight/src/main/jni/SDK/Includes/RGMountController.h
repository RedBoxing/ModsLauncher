#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGMountController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGMountController"));
	}

	template <typename T = Il2CppString*> T& unlock_key() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& itemLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& itemValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& defence() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& canTriggerItem() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& deadObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& deadClip() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& attribute() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& driver() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& speedRate() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& drivePosition() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& col() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& shadowLock() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& renderers() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& dead() {
		return *(T*)((uintptr_t)this + 0x81);
	}
	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x82);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hands() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& hpBar() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& hand() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& handIndex() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& justMount() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _cachedWeaponSpr() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = void*> T& onMountMove() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& inBuild() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& useControllerWeapon() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = bool> T& coverController() {
		return *(T*)((uintptr_t)this + 0xBA);
	}
	template <typename T = bool> T& offsetRiderCollider() {
		return *(T*)((uintptr_t)this + 0xBB);
	}
	template <typename T = bool> T& runAnim() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& idleAnim() {
		return *(T*)((uintptr_t)this + 0xBD);
	}
	template <typename T = bool> T& hideInactiveWeapon() {
		return *(T*)((uintptr_t)this + 0xBE);
	}
	template <typename T = bool> T& isCreature() {
		return *(T*)((uintptr_t)this + 0xBF);
	}
	template <typename T = bool> T& hasHp() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& keep() {
		return *(T*)((uintptr_t)this + 0xC1);
	}
	template <typename T = bool> T& hideCharacter() {
		return *(T*)((uintptr_t)this + 0xC2);
	}
	template <typename T = bool> T& canTakeoff() {
		return *(T*)((uintptr_t)this + 0xC3);
	}
	template <typename T = bool> T& isLockBulletAngle() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& onDead() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _mountSpecialAttack() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = void*> T& OnDeadExplode() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& hasFx() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& SortingOrderOffset() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& canUpdateDriver() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& _hasLandState() {
		return *(T*)((uintptr_t)this + 0xE9);
	}
	template <typename T = int32_t> static T& land() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& isLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& IsInvulnerable() {
		return *(T*)((uintptr_t)this + 0xEA);
	}
	template <typename T = bool> T& isSpecialDown() {
		return *(T*)((uintptr_t)this + 0xEB);
	}
	template <typename T = float> T& deadExplosionDelay() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& NeedRecord() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& _moving() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = uintptr_t> T& startMoving() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& stopMoving() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = uintptr_t> T get_attribute() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6B7E4))(this);
	}
	template <typename T = void> T set_attribute(uintptr_t value) {
		return ((T (*)(RGMountController*, uintptr_t))(Il2CppBase() + 0x1B6B7EC))(this, value);
	}
	template <typename T = uintptr_t> T get_HpBar() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6B7F4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_CachedWeaponSpr() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6B854))(this);
	}
	template <typename T = void> T set_CachedWeaponSpr(Il2CppList<uintptr_t>* value) {
		return ((T (*)(RGMountController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1B6B8B4))(this, value);
	}
	template <typename T = bool> T get_IsMech() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6B928))(this);
	}
	template <typename T = bool> T get_unlocked() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6B9EC))(this);
	}
	template <typename T = void> T add_onMountMove(void* value) {
		return ((T (*)(RGMountController*, void*))(Il2CppBase() + 0x1B6BABC))(this, value);
	}
	template <typename T = void> T remove_onMountMove(void* value) {
		return ((T (*)(RGMountController*, void*))(Il2CppBase() + 0x1B6BBA8))(this, value);
	}
	template <typename T = float> T get_justMountDelay() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6BC94))(this);
	}
	template <typename T = void> T add_OnDeadExplode(void* value) {
		return ((T (*)(RGMountController*, void*))(Il2CppBase() + 0x1B6BCF8))(this, value);
	}
	template <typename T = void> T remove_OnDeadExplode(void* value) {
		return ((T (*)(RGMountController*, void*))(Il2CppBase() + 0x1B6BDE4))(this, value);
	}
	template <typename T = bool> T get_IsInvulnerable() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6BED0))(this);
	}
	template <typename T = void> T set_IsInvulnerable(bool value) {
		return ((T (*)(RGMountController*, bool))(Il2CppBase() + 0x1B6BED8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6BEE4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6C8DC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6C9A0))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6C9FC))(this);
	}
	template <typename T = void> T OnNormalWeaponShow() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6CA58))(this);
	}
	template <typename T = void> T OnNormalWeaponHide() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6CB9C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6CC94))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6CF10))(this);
	}
	template <typename T = void> T RestoreHealth(int32_t health) {
		return ((T (*)(RGMountController*, int32_t))(Il2CppBase() + 0x1B6D2B8))(this, health);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6D468))(this);
	}
	template <typename T = void> T UpdateDriverPosition() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6D52C))(this);
	}
	template <typename T = void> T SetUp(uintptr_t driver) {
		return ((T (*)(RGMountController*, uintptr_t))(Il2CppBase() + 0x1B6D7F0))(this, driver);
	}
	template <typename T = void> T SetSortingOrder() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6EA80))(this);
	}
	template <typename T = void> T ResetSortingOrder() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6EBE8))(this);
	}
	template <typename T = void> T WeaponsSetUp() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6ED50))(this);
	}
	template <typename T = void> T UnJustMount() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6F938))(this);
	}
	template <typename T = bool> T ShouldShowBtnSpecial(uintptr_t driver) {
		return ((T (*)(RGMountController*, uintptr_t))(Il2CppBase() + 0x1B6F998))(this, driver);
	}
	template <typename T = void> T Mount(uintptr_t driver) {
		return ((T (*)(RGMountController*, uintptr_t))(Il2CppBase() + 0x1B6FB00))(this, driver);
	}
	template <typename T = void> T EnableCollider() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B702CC))(this);
	}
	template <typename T = void> T ShowUp() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B70380))(this);
	}
	template <typename T = void> T Land() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B704E0))(this);
	}
	template <typename T = void> T ResetCommon(bool isMount) {
		return ((T (*)(RGMountController*, bool))(Il2CppBase() + 0x1B6DC9C))(this, isMount);
	}
	template <typename T = void> T OnDriveStatusChanged(bool isMount) {
		return ((T (*)(RGMountController*, bool))(Il2CppBase() + 0x1B7094C))(this, isMount);
	}
	template <typename T = bool> T IsNormalMultiHand(uintptr_t multiHand) {
		return ((T (*)(RGMountController*, uintptr_t))(Il2CppBase() + 0x1B709BC))(this, multiHand);
	}
	template <typename T = void> T ResetWeapons(bool isMount) {
		return ((T (*)(RGMountController*, bool))(Il2CppBase() + 0x1B6EE54))(this, isMount);
	}
	template <typename T = uintptr_t> T GetParent(uintptr_t controller) {
		return ((T (*)(RGMountController*, uintptr_t))(Il2CppBase() + 0x1B70D4C))(this, controller);
	}
	template <typename T = void> T SwitchWeapon() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B70E18))(this);
	}
	template <typename T = void> T SetAttack(bool isAttack) {
		return ((T (*)(RGMountController*, bool))(Il2CppBase() + 0x1B71100))(this, isAttack);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B712FC))(this);
	}
	template <typename T = void> T RoleMove(uintptr_t m) {
		return ((T (*)(RGMountController*, uintptr_t))(Il2CppBase() + 0x1B713EC))(this, m);
	}
	template <typename T = void> T CreateSmoke() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B71610))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(RGMountController*, int32_t))(Il2CppBase() + 0x1B7190C))(this, damage);
	}
	template <typename T = void> T SyncHp(int32_t hp) {
		return ((T (*)(RGMountController*, int32_t))(Il2CppBase() + 0x1B71D18))(this, hp);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B71E08))(this);
	}
	template <typename T = void> T DeadExplode() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B7253C))(this);
	}
	template <typename T = void> T SyncDead(uintptr_t source) {
		return ((T (*)(RGMountController*, uintptr_t))(Il2CppBase() + 0x1B727D0))(this, source);
	}
	template <typename T = void> T SyncDeadNoSource() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B72940))(this);
	}
	template <typename T = void> T ResetWeaponInfo(bool showText) {
		return ((T (*)(RGMountController*, bool))(Il2CppBase() + 0x1B70B4C))(this, showText);
	}
	template <typename T = void> T RefreshWeaponOutlook() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6C798))(this);
	}
	template <typename T = void> T CheckGray() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B729AC))(this);
	}
	template <typename T = void> T StartConsumingHp() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B72B40))(this);
	}
	template <typename T = uintptr_t> T ConsumingHp() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B72BB0))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGMountController*, uintptr_t))(Il2CppBase() + 0x1B72C90))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGMountController*, uintptr_t))(Il2CppBase() + 0x1B73290))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGMountController*, uintptr_t))(Il2CppBase() + 0x1B73508))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGMountController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1B73AE0))(this, controller, ext_info);
	}
	template <typename T = void> T UpdateHpBarTransform() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B73CF0))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B73D78))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B73170))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B73230))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B73DD8))(this);
	}
	template <typename T = Il2CppVector3> T GetSourcePosition() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B73E88))(this);
	}
	template <typename T = void> T ChangeAtk(float value, uintptr_t changeType) {
		return ((T (*)(RGMountController*, float, uintptr_t))(Il2CppBase() + 0x1B7400C))(this, value, changeType);
	}
	template <typename T = bool> T get_isSpecialDown() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B70944))(this);
	}
	template <typename T = void> T set_isSpecialDown(bool value) {
		return ((T (*)(RGMountController*, bool))(Il2CppBase() + 0x1B7417C))(this, value);
	}
	template <typename T = bool> T get_HasSpecialAttack() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B74188))(this);
	}
	template <typename T = bool> T get_UseControllerWeaponSpecialAttack() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B741F0))(this);
	}
	template <typename T = void> T SpecialClick(bool isDown) {
		return ((T (*)(RGMountController*, bool))(Il2CppBase() + 0x1B74288))(this, isDown);
	}
	template <typename T = void> T ColliderTriggerWithWeaponEnter(uintptr_t triggerWeapon) {
		return ((T (*)(RGMountController*, uintptr_t))(Il2CppBase() + 0x1B74494))(this, triggerWeapon);
	}
	template <typename T = void> T ColliderTriggerWithWeaponLeave(uintptr_t triggerWeapon) {
		return ((T (*)(RGMountController*, uintptr_t))(Il2CppBase() + 0x1B74504))(this, triggerWeapon);
	}
	template <typename T = void> T FlushWeaponIcon(uintptr_t rgWeapon) {
		return ((T (*)(RGMountController*, uintptr_t))(Il2CppBase() + 0x1B74574))(this, rgWeapon);
	}
	template <typename T = void> T UIFlushNullWeapon() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B74700))(this);
	}
	template <typename T = void> T SetNewWeaponActive(uintptr_t newWeaponGo, uintptr_t frontWeaponGO) {
		return ((T (*)(RGMountController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B74820))(this, newWeaponGo, frontWeaponGO);
	}
	template <typename T = bool> T get_NeedRecord() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B74958))(this);
	}
	template <typename T = void> T set_NeedRecord(bool value) {
		return ((T (*)(RGMountController*, bool))(Il2CppBase() + 0x1B74960))(this, value);
	}
	template <typename T = void> T AddRecord() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B739C0))(this);
	}
	template <typename T = void> T EnableShadow(float durTime) {
		return ((T (*)(RGMountController*, float))(Il2CppBase() + 0x1B7496C))(this, durTime);
	}
	template <typename T = void> T DisableShadow() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B7240C))(this);
	}
	template <typename T = bool> T IsMoving() {
		return ((T (*)(RGMountController*))(Il2CppBase() + 0x1B6D1AC))(this);
	}

};

}
