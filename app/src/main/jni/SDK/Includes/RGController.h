#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGController"));
	}

	template <typename T = uintptr_t> T& hand() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& roleAttributeProxy() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& onAfterMount() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& onLand() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& onAfterPickUpItem() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& onUseSpecialButton() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = void*> T& onForceDropWeapon() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _bodyCol() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> static T& _skinAudioConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mount() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& clip_skill() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& clip_hit() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skills() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& in_battle() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& move_invers() {
		return *(T*)((uintptr_t)this + 0x151);
	}
	template <typename T = uintptr_t> T& shadow_lock() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& item_tf() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& usableItem() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& camera_focus() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& seach_time() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& processSpeedFactor() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = bool> T& canMount() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppQuaternion> static T& RotLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppQuaternion> static T& RotRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> T& movementInput() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& OnRoleAttack() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& OnRoleAttackStop() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& OnWeaponAttack() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& OnWeaponStop() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& OnRoleSkillStart() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& afterSkillStart() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& OnMountAttack() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& OnRoleSpecial() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = void*> T& onRoleMove() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = void*> T& onBtnAttackClick() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& onArmorBreak() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& onRestoreArmorFromZero() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& onAtkCritical() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = int32_t> T& _invulnerable() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = bool> T& can_hurt() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = Il2CppVector2> T& move_dir() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = Il2CppVector3> T& statuePosition() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = bool> T& keepFacing() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = float> T& scale() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& oneshot_shields() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = uintptr_t> T& rg_random() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = uintptr_t> T& OnHeroSelectAnimEnabled() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = bool> T& _isExceptionFactorInCd() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& randomBuffs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> T& servant() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = bool> T& isSetUp() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = bool> T& bindToCameraOnStart() {
		return *(T*)((uintptr_t)this + 0x249);
	}
	template <typename T = bool> T& isDemonstrationCharacter() {
		return *(T*)((uintptr_t)this + 0x24A);
	}
	template <typename T = float> T& LastHurtHpTime() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = uintptr_t> T& onCharacterDead() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = float> T& forceLerp() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = int32_t> T& _cantMove() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = Il2CppVector3> T& temp_lock_dir() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = bool> T& btnAtkPressed() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = bool> T& can_cut() {
		return *(T*)((uintptr_t)this + 0x26D);
	}
	template <typename T = int32_t> T& skillIndex() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = bool> T& skillCasting() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = float> T& skill_time() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = void*> T& _hitColliderCache() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = bool> T& CanRebornTwice() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = uintptr_t> T& onCharacterReborn() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = bool> T& isFly() {
		return *(T*)((uintptr_t)this + 0x29C);
	}
	template <typename T = Il2CppVector3> T& _handPositionOrigin() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = Il2CppVector3> T& _hand2PositionOrigin() {
		return *(T*)((uintptr_t)this + 0x2AC);
	}
	template <typename T = uintptr_t> T& bodyScaleTween() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = uintptr_t> T& shadowScaleTween() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& onMount() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = int32_t> T& _effectedAdditionLevel() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& onDestoryCb() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = int32_t> T& spriteMaskInteractionCount() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& shadowTimer() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}

	template <typename T = uintptr_t> T get_role_attribute() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E6A40))(this);
	}
	template <typename T = void> T add_onAfterMount(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E6AA8))(this, value);
	}
	template <typename T = void> T remove_onAfterMount(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E6B98))(this, value);
	}
	template <typename T = void> T add_onLand(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E6C88))(this, value);
	}
	template <typename T = void> T remove_onLand(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E6D78))(this, value);
	}
	template <typename T = void> T add_onAfterPickUpItem(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E6E68))(this, value);
	}
	template <typename T = void> T remove_onAfterPickUpItem(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E6F58))(this, value);
	}
	template <typename T = void> T add_onUseSpecialButton(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E7048))(this, value);
	}
	template <typename T = void> T remove_onUseSpecialButton(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E7138))(this, value);
	}
	template <typename T = void> T add_onForceDropWeapon(void* value) {
		return ((T (*)(RGController*, void*))(Il2CppBase() + 0x19E7228))(this, value);
	}
	template <typename T = void> T remove_onForceDropWeapon(void* value) {
		return ((T (*)(RGController*, void*))(Il2CppBase() + 0x19E7318))(this, value);
	}
	template <typename T = uintptr_t> T get_attribute() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E7408))(this);
	}
	template <typename T = void> T set_attribute(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E7468))(this, value);
	}
	template <typename T = uintptr_t> T get_bodyCol() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E74DC))(this);
	}
	template <typename T = uintptr_t> static T get_SkinAudioConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x19E75E4))(0);
	}
	template <typename T = uintptr_t> T get_mount() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E772C))(this);
	}
	template <typename T = void> T set_mount(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E7734))(this, value);
	}
	template <typename T = bool> T get_in_item() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E773C))(this);
	}
	template <typename T = uintptr_t> T get_ItemTransform() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E77EC))(this);
	}
	template <typename T = void> T add_OnRoleAttack(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E784C))(this, value);
	}
	template <typename T = void> T remove_OnRoleAttack(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E793C))(this, value);
	}
	template <typename T = void> T add_OnRoleAttackStop(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E7A2C))(this, value);
	}
	template <typename T = void> T remove_OnRoleAttackStop(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E7B1C))(this, value);
	}
	template <typename T = void> T add_OnWeaponAttack(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E7C0C))(this, value);
	}
	template <typename T = void> T remove_OnWeaponAttack(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E7CFC))(this, value);
	}
	template <typename T = void> T add_OnWeaponStop(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E7DEC))(this, value);
	}
	template <typename T = void> T remove_OnWeaponStop(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E7EDC))(this, value);
	}
	template <typename T = void> T add_OnRoleSkillStart(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E7FCC))(this, value);
	}
	template <typename T = void> T remove_OnRoleSkillStart(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E80BC))(this, value);
	}
	template <typename T = void> T add_afterSkillStart(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E81AC))(this, value);
	}
	template <typename T = void> T remove_afterSkillStart(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E829C))(this, value);
	}
	template <typename T = void> T add_OnMountAttack(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E838C))(this, value);
	}
	template <typename T = void> T remove_OnMountAttack(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E847C))(this, value);
	}
	template <typename T = void> T add_OnRoleSpecial(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E856C))(this, value);
	}
	template <typename T = void> T remove_OnRoleSpecial(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E865C))(this, value);
	}
	template <typename T = void> T add_onRoleMove(void* value) {
		return ((T (*)(RGController*, void*))(Il2CppBase() + 0x19E874C))(this, value);
	}
	template <typename T = void> T remove_onRoleMove(void* value) {
		return ((T (*)(RGController*, void*))(Il2CppBase() + 0x19E883C))(this, value);
	}
	template <typename T = void> T add_onBtnAttackClick(void* value) {
		return ((T (*)(RGController*, void*))(Il2CppBase() + 0x19E892C))(this, value);
	}
	template <typename T = void> T remove_onBtnAttackClick(void* value) {
		return ((T (*)(RGController*, void*))(Il2CppBase() + 0x19E8A1C))(this, value);
	}
	template <typename T = void> T add_onArmorBreak(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E8B0C))(this, value);
	}
	template <typename T = void> T remove_onArmorBreak(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E8BFC))(this, value);
	}
	template <typename T = void> T add_onRestoreArmorFromZero(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E8CEC))(this, value);
	}
	template <typename T = void> T remove_onRestoreArmorFromZero(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E8DDC))(this, value);
	}
	template <typename T = void> T add_onAtkCritical(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E8ECC))(this, value);
	}
	template <typename T = void> T remove_onAtkCritical(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19E8FBC))(this, value);
	}
	template <typename T = void> T Invulnerable(bool b) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19E90AC))(this, b);
	}
	template <typename T = bool> T get_IsInvulnerable() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E9140))(this);
	}
	template <typename T = void> T InvokeRestoreArmorFromZero() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E91A8))(this);
	}
	template <typename T = Il2CppVector2> T get_move_dir() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E921C))(this);
	}
	template <typename T = void> T set_move_dir(Il2CppVector2 value) {
		return ((T (*)(RGController*, Il2CppVector2))(Il2CppBase() + 0x19E9228))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CurPos() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E9234))(this);
	}
	template <typename T = void> T set_CurPos(Il2CppVector3 value) {
		return ((T (*)(RGController*, Il2CppVector3))(Il2CppBase() + 0x19E9330))(this, value);
	}
	template <typename T = int32_t> T get_facing() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E9468))(this);
	}
	template <typename T = void> T set_facing(int32_t value) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19E95D0))(this, value);
	}
	template <typename T = float> T get_Scale() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E9740))(this);
	}
	template <typename T = bool> T get_has_target() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E97A0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E9850))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E9934))(this);
	}
	template <typename T = void> T AwakeController() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19E9A18))(this);
	}
	template <typename T = void> T SetNewRandomSeed(int32_t seed) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19E9FB8))(this, seed);
	}
	template <typename T = void> T CheckAndFixSpecialStatue() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EA084))(this);
	}
	template <typename T = void> T BindToCamera() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EA2C0))(this);
	}
	template <typename T = void> T SetSkin(int32_t index) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19EA3E4))(this, index);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EA508))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponsData() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EC094))(this);
	}
	template <typename T = void> T OnBeforeGetWeaponsData() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EC700))(this);
	}
	template <typename T = void> T OnProcessWeaponExtraInfo(uintptr_t w) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19EC7D4))(this, w);
	}
	template <typename T = void> T ResetExceptionFactorCd() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EC978))(this);
	}
	template <typename T = void> T AddBuff(Il2CppString* buffName, uintptr_t sourceObject) {
		return ((T (*)(RGController*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x19EC9D8))(this, buffName, sourceObject);
	}
	template <typename T = bool> T CheckExceptionFactor() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19ECCD8))(this);
	}
	template <typename T = float> T get_LastHurtHpTime() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19ECDDC))(this);
	}
	template <typename T = void> T set_LastHurtHpTime(float value) {
		return ((T (*)(RGController*, float))(Il2CppBase() + 0x19ECDE4))(this, value);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(RGController*, int32_t, uintptr_t))(Il2CppBase() + 0x19ECDEC))(this, damage, source_object);
	}
	template <typename T = void> T GetHurtHp(int32_t damage, uintptr_t source_object) {
		return ((T (*)(RGController*, int32_t, uintptr_t))(Il2CppBase() + 0x19ED5B4))(this, damage, source_object);
	}
	template <typename T = void> T GetHurtOnlyArmor(int32_t damage, uintptr_t source_object) {
		return ((T (*)(RGController*, int32_t, uintptr_t))(Il2CppBase() + 0x19ED7F4))(this, damage, source_object);
	}
	template <typename T = void> T HitBack() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EDAA0))(this);
	}
	template <typename T = void> T GetGray() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19DB500))(this);
	}
	template <typename T = void> T GrayBack() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19DB724))(this);
	}
	template <typename T = void> T HurtArmor(int32_t damage, uintptr_t source_object) {
		return ((T (*)(RGController*, int32_t, uintptr_t))(Il2CppBase() + 0x19EDB5C))(this, damage, source_object);
	}
	template <typename T = void> T HurtHp(int32_t damage, uintptr_t source_object) {
		return ((T (*)(RGController*, int32_t, uintptr_t))(Il2CppBase() + 0x19EDCD4))(this, damage, source_object);
	}
	template <typename T = void> T add_onCharacterDead(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19EE6B8))(this, value);
	}
	template <typename T = void> T remove_onCharacterDead(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19EE7A8))(this, value);
	}
	template <typename T = void> T Dead(uintptr_t source_object) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19EDF5C))(this, source_object);
	}
	template <typename T = bool> T HasRebornWeapon() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EE898))(this);
	}
	template <typename T = void> T SyncHp(int32_t value) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19EEBB0))(this, value);
	}
	template <typename T = void> T SyncEnergy(int32_t value) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19EED28))(this, value);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EEDEC))(this);
	}
	template <typename T = void> T SetVelocity() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EEE48))(this);
	}
	template <typename T = void> T AttributeUpdate() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EF19C))(this);
	}
	template <typename T = void> T SeachUpdate() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EF254))(this);
	}
	template <typename T = bool> T get_cantMove() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EF2F8))(this);
	}
	template <typename T = void> T set_cantMove(bool value) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19EF360))(this, value);
	}
	template <typename T = void> T RoleMove(uintptr_t m) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19EF4F0))(this, m);
	}
	template <typename T = void> T SetCameraFocus() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EFAE8))(this);
	}
	template <typename T = uintptr_t> T FindTargetThroughBox() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EFBBC))(this);
	}
	template <typename T = void> T LostTarget() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EFC78))(this);
	}
	template <typename T = void> T LockTarget(uintptr_t target) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19EFDCC))(this, target);
	}
	template <typename T = void> T AutoLock() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EFF04))(this);
	}
	template <typename T = void> T BtnSpecialClick(bool isDown, uintptr_t btnType) {
		return ((T (*)(RGController*, bool, uintptr_t))(Il2CppBase() + 0x19F0998))(this, isDown, btnType);
	}
	template <typename T = void> T SpecialClick(bool isDown) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F0A58))(this, isDown);
	}
	template <typename T = bool> T get_CanTriggerSpecialWeapon() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F0D48))(this);
	}
	template <typename T = void> T TriggerSpecialWeapon(bool isDown) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F0E4C))(this, isDown);
	}
	template <typename T = void> T FusionClick(bool isDown) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F0B8C))(this, isDown);
	}
	template <typename T = void> T BtnAtkClick(bool value) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F1024))(this, value);
	}
	template <typename T = void> T RoleSpecialEvent(bool value) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F0F94))(this, value);
	}
	template <typename T = void> T RoleAttackEvent(bool value) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F1268))(this, value);
	}
	template <typename T = void> T MountAttackEvent(bool value) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F11D8))(this, value);
	}
	template <typename T = void> T WeaponAttackEvent() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F1300))(this);
	}
	template <typename T = void> T WeaponStopEvent() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F1374))(this);
	}
	template <typename T = void> T RoleAtk(bool value) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F13E8))(this, value);
	}
	template <typename T = bool> T TryUseItem() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F16E4))(this);
	}
	template <typename T = void> T HandAtk(bool val) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F17E4))(this, val);
	}
	template <typename T = void> T TurnCanCut() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F1870))(this);
	}
	template <typename T = bool> T IsSkillIndex(int32_t index) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19F18D4))(this, index);
	}
	template <typename T = int32_t> T get_SkillExtraUpdate() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F1950))(this);
	}
	template <typename T = bool> T get_aiming() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F19D4))(this);
	}
	template <typename T = void> T UpdateShadowLock() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F1A4C))(this);
	}
	template <typename T = void> T ShowSkillCDEffect() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F1CD8))(this);
	}
	template <typename T = void> T ShowArrowEffect() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F2010))(this);
	}
	template <typename T = void> T RoleSkillStartEvent() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F230C))(this);
	}
	template <typename T = void> T BtnSkillDown() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F23AC))(this);
	}
	template <typename T = void> T ProcessSkillWithMount() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F24D8))(this);
	}
	template <typename T = void> T ProceesSkillWithRole() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F2604))(this);
	}
	template <typename T = void> T BtnSkillUp() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F26A0))(this);
	}
	template <typename T = void> T RoleSkillStart() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F2760))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F27DC))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F2838))(this);
	}
	template <typename T = void> T ForceDesotrySkillObj() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F2898))(this);
	}
	template <typename T = uintptr_t> T get_skillInfo() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EBD14))(this);
	}
	template <typename T = void> T SetSkillIndex(int32_t index) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19F28F4))(this, index);
	}
	template <typename T = void> T CastStatue() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F299C))(this);
	}
	template <typename T = void> T KillSomeOne(uintptr_t other) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19F2BAC))(this, other);
	}
	template <typename T = void> T HurtSomeOne() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F2E74))(this);
	}
	template <typename T = void> T PickUpItem(uintptr_t temp_tf, bool fusion, bool showText) {
		return ((T (*)(RGController*, uintptr_t, bool, bool))(Il2CppBase() + 0x19F2ED0))(this, temp_tf, fusion, showText);
	}
	template <typename T = void> T StartHitTrigger(float time) {
		return ((T (*)(RGController*, float))(Il2CppBase() + 0x19F2FBC))(this, time);
	}
	template <typename T = void> T ForceStartHitTrigger(float time) {
		return ((T (*)(RGController*, float))(Il2CppBase() + 0x19F31A4))(this, time);
	}
	template <typename T = void> T TestStartHitTrigger(float time) {
		return ((T (*)(RGController*, float))(Il2CppBase() + 0x19F3344))(this, time);
	}
	template <typename T = void> T EndHitTrigger() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F3478))(this);
	}
	template <typename T = void> T BtnSwitchWeaponClick() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F3550))(this);
	}
	template <typename T = void> T SetWeaponAttackEvent(uintptr_t weapon, bool isSet) {
		return ((T (*)(RGController*, uintptr_t, bool))(Il2CppBase() + 0x19F3688))(this, weapon, isSet);
	}
	template <typename T = void> T SwitchWeapon() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F3860))(this);
	}
	template <typename T = bool> T SwitchToLastWeapon() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F3930))(this);
	}
	template <typename T = void> T GetChose() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F39AC))(this);
	}
	template <typename T = void> T WeaponInit() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F3A44))(this);
	}
	template <typename T = void> T StatisticInitWeapon() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F3B04))(this);
	}
	template <typename T = void> T NotChose() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F3B9C))(this);
	}
	template <typename T = void> T UpdateStateBar() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EBA9C))(this);
	}
	template <typename T = void> T PausePlayer() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F3D48))(this);
	}
	template <typename T = void> T Dizzy(float the_time) {
		return ((T (*)(RGController*, float))(Il2CppBase() + 0x19F3E6C))(this, the_time);
	}
	template <typename T = void> T EndDizzy() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F4084))(this);
	}
	template <typename T = void> T CreateSmoke() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EF844))(this);
	}
	template <typename T = void> T Resurrection() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F4120))(this);
	}
	template <typename T = bool> T get_CanRebornTwice() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F4388))(this);
	}
	template <typename T = void> T set_CanRebornTwice(bool value) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F437C))(this, value);
	}
	template <typename T = void> T Reborn() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F4390))(this);
	}
	template <typename T = void> T ForceReborn() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F4400))(this);
	}
	template <typename T = void> T add_onCharacterReborn(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19F45A4))(this, value);
	}
	template <typename T = void> T remove_onCharacterReborn(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19F4694))(this, value);
	}
	template <typename T = void> T DoReborn(bool uiReborn) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F4784))(this, uiReborn);
	}
	template <typename T = void> T AddDelegate() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EBBAC))(this);
	}
	template <typename T = void> T RemoveDelegate() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F5164))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19F5338))(this, game_state);
	}
	template <typename T = void> T TriggerItem() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F53C8))(this);
	}
	template <typename T = void> T SetItemtf(uintptr_t value, uintptr_t sprite) {
		return ((T (*)(RGController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19DC8E8))(this, value, sprite);
	}
	template <typename T = bool> T CompareItem(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19DCE0C))(this, value);
	}
	template <typename T = bool> T CompareItem_1(Il2CppString* itemName) {
		return ((T (*)(RGController*, Il2CppString*))(Il2CppBase() + 0x19F5538))(this, itemName);
	}
	template <typename T = bool> T IsSinglePlayer() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F55EC))(this);
	}
	template <typename T = bool> T IsLocalPlayer() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19DCAD0))(this);
	}
	template <typename T = int32_t> T GetSkinIndex() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EE934))(this);
	}
	template <typename T = void> T ChangeWeaponSpeed(float factor, float duration, bool hasEffect) {
		return ((T (*)(RGController*, float, float, bool))(Il2CppBase() + 0x19F56BC))(this, factor, duration, hasEffect);
	}
	template <typename T = void> T BuffChangeWeaponSpeed(float factor, float duration) {
		return ((T (*)(RGController*, float, float))(Il2CppBase() + 0x19F5A0C))(this, factor, duration);
	}
	template <typename T = void> T AttackSpeedChange() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F5BDC))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetPlayerDatas() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F5EA8))(this);
	}
	template <typename T = void> T SetPlayerDatas(Il2CppDictionary<Il2CppString*, Il2CppString*>* playerDatas) {
		return ((T (*)(RGController*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x19F5F50))(this, playerDatas);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F5FC0))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19F6020))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F6090))(this);
	}
	template <typename T = uintptr_t> T DropWeapon(bool autoSwitchWeapon) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F60F4))(this, autoSwitchWeapon);
	}
	template <typename T = void> T DropWeaponOnBack(uintptr_t w) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19F6180))(this, w);
	}
	template <typename T = uintptr_t> T ForceDropWeapon() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F6284))(this);
	}
	template <typename T = void> T Land() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F63B0))(this);
	}
	template <typename T = bool> T HoldWeapon(Il2CppString* weaponName) {
		return ((T (*)(RGController*, Il2CppString*))(Il2CppBase() + 0x19F690C))(this, weaponName);
	}
	template <typename T = bool> T HasWeapon(Il2CppString* weaponName) {
		return ((T (*)(RGController*, Il2CppString*))(Il2CppBase() + 0x19F699C))(this, weaponName);
	}
	template <typename T = Il2CppString*> T GetHoldingWeaponName() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F6A2C))(this);
	}
	template <typename T = uintptr_t> T GetPhatomWeapon(uintptr_t phatomStaff) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19F6AA0))(this, phatomStaff);
	}
	template <typename T = void> T OnSkinChanged(int32_t skinIndex) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19F6BA0))(this, skinIndex);
	}
	template <typename T = void> T DoSkinChanged(int32_t skinIndex) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19F6C9C))(this, skinIndex);
	}
	template <typename T = void> T OnSkillChanged() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F6D0C))(this);
	}
	template <typename T = Il2CppVector3> T GetHitPosition() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F6D68))(this);
	}
	template <typename T = void> T ShowCdEffect() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F1C7C))(this);
	}
	template <typename T = Il2CppString*> T GetSkillName(int32_t skillIndex) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19F6EEC))(this, skillIndex);
	}
	template <typename T = Il2CppString*> T GetSkillDesc(int32_t skillIndex) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19F6FEC))(this, skillIndex);
	}
	template <typename T = uintptr_t> T GetSkillObject(int32_t skill_idx) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19F70EC))(this, skill_idx);
	}
	template <typename T = void> T SetFlyable(bool isFlyable, bool changeSortingOrder) {
		return ((T (*)(RGController*, bool, bool))(Il2CppBase() + 0x19EBF08))(this, isFlyable, changeSortingOrder);
	}
	template <typename T = void> T SetSortingLayer(Il2CppString* targetLayer) {
		return ((T (*)(RGController*, Il2CppString*))(Il2CppBase() + 0x19F7268))(this, targetLayer);
	}
	template <typename T = void> T TurnTransparent(bool isTransparent) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F744C))(this, isTransparent);
	}
	template <typename T = void> T NoWord() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F753C))(this);
	}
	template <typename T = Il2CppVector3> T get_handPositionOrigin() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F7648))(this);
	}
	template <typename T = Il2CppVector3> T get_hand2PositionOrigin() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F7794))(this);
	}
	template <typename T = void> T ChangeScale(float deltaScale, float animDuration) {
		return ((T (*)(RGController*, float, float))(Il2CppBase() + 0x19EBA10))(this, deltaScale, animDuration);
	}
	template <typename T = void> T OnScaleChange(float animDuration) {
		return ((T (*)(RGController*, float))(Il2CppBase() + 0x19F78E0))(this, animDuration);
	}
	template <typename T = void> T add_onMount(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19F7C9C))(this, value);
	}
	template <typename T = void> T remove_onMount(uintptr_t value) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19F7D8C))(this, value);
	}
	template <typename T = void> T OnMount(bool isMount) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F7E7C))(this, isMount);
	}
	template <typename T = void> T OnAfterMount() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F7FAC))(this);
	}
	template <typename T = bool> T get_ImmunIce() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F8020))(this);
	}
	template <typename T = bool> T get_ImmunFire() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F812C))(this);
	}
	template <typename T = bool> T get_ImmunSting() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F8248))(this);
	}
	template <typename T = bool> T get_ImmunGas() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F83CC))(this);
	}
	template <typename T = bool> T get_ImmunInversDir() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F84E8))(this);
	}
	template <typename T = void> T SetWeapon(uintptr_t weapon) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19F8548))(this, weapon);
	}
	template <typename T = int32_t> T get_additionLevel() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F879C))(this);
	}
	template <typename T = void> T OnAdditionLevelChanged() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F8848))(this);
	}
	template <typename T = void> T HandleMultiSkillBuff() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19EBDA8))(this);
	}
	template <typename T = void> T OnBuffChanged(uintptr_t buff, bool isGet) {
		return ((T (*)(RGController*, uintptr_t, bool))(Il2CppBase() + 0x19F8BFC))(this, buff, isGet);
	}
	template <typename T = void> T OnChosen() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F8DD8))(this);
	}
	template <typename T = void> T OnEnterNextLevel(bool changeScene) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19F8E34))(this, changeScene);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F8EA4))(this);
	}
	template <typename T = void> T AddDestroyCb(uintptr_t act) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19F8F80))(this, act);
	}
	template <typename T = void> T MasterDestroy() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F8F0C))(this);
	}
	template <typename T = void> T SetupPrice() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F908C))(this);
	}
	template <typename T = uintptr_t> T GetSkinData(int32_t skinIdx) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19F90E8))(this, skinIdx);
	}
	template <typename T = uintptr_t> T GetSkinData_1(int32_t skinIdx) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x0))(this, skinIdx);
	}
	template <typename T = uintptr_t> T GetSkillClip(int32_t skinIdx) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19F9274))(this, skinIdx);
	}
	template <typename T = bool> T CanUseSkill() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F93A8))(this);
	}
	template <typename T = bool> T CanSwitchWeapon() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F9420))(this);
	}
	template <typename T = bool> T CanTriggerItem() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F9480))(this);
	}
	template <typename T = void> T StopMove() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F94E0))(this);
	}
	template <typename T = uintptr_t> T GetHand(int32_t idx) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19F9680))(this, idx);
	}
	template <typename T = void> T SetBodyMaskInteraction(uintptr_t interaction) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19F9700))(this, interaction);
	}
	template <typename T = void> T OnAtkCritical(uintptr_t e) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19F9828))(this, e);
	}
	template <typename T = void> T DoAttack() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F9AC4))(this);
	}
	template <typename T = void> T DoStop() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F9B34))(this);
	}
	template <typename T = void> T EnableOutline(uintptr_t outlineColor) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19EE574))(this, outlineColor);
	}
	template <typename T = void> T DisableOutline() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19F9BF0))(this);
	}
	template <typename T = void> T OnAtkCriticalb__335_0() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19FA004))(this);
	}
	template <typename T = void> T iFixBaseProxy_SwitchWeapon() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19FA058))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0) {
		return ((T (*)(RGController*, float))(Il2CppBase() + 0x19FA060))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_TurnTransparent(bool P0) {
		return ((T (*)(RGController*, bool))(Il2CppBase() + 0x19FA068))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_attribute() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19FA074))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_attribute(uintptr_t P0) {
		return ((T (*)(RGController*, uintptr_t))(Il2CppBase() + 0x19FA07C))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_facing() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19FA084))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_facing(int32_t P0) {
		return ((T (*)(RGController*, int32_t))(Il2CppBase() + 0x19FA08C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_get_has_target() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19FA094))(this);
	}
	template <typename T = bool> T iFixBaseProxy_SwitchToLastWeapon() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19FA09C))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndDizzy() {
		return ((T (*)(RGController*))(Il2CppBase() + 0x19FA0A4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_HoldWeapon(Il2CppString* P0) {
		return ((T (*)(RGController*, Il2CppString*))(Il2CppBase() + 0x19FA0AC))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_HasWeapon(Il2CppString* P0) {
		return ((T (*)(RGController*, Il2CppString*))(Il2CppBase() + 0x19FA0B4))(this, P0);
	}

};

}
