#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C10Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C10Controller"));
	}

	template <typename T = uintptr_t> T& paw_l() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& paw_r() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& pawLEffect() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& pawREffect() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& effect_s8_l_obj() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& effect_s8_r_obj() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& head_s8_obj() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& effect_s8_l_ps() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = uintptr_t> T& effect_s8_r_ps() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = uintptr_t> T& head_s8_ps() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = float> T& in_skill_time() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = uintptr_t> T& skill_atk_obj() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = uintptr_t> T& paw_clip() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = bool> T& changing() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = int32_t> T& hurt_count() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = bool> T& skill_atk() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = uintptr_t> T& pawLEffectTransform() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = uintptr_t> T& pawREffectTransform() {
		return *(T*)((uintptr_t)this + 0x370);
	}
	template <typename T = uintptr_t> T& random() {
		return *(T*)((uintptr_t)this + 0x378);
	}
	template <typename T = Il2CppString*> static T& skill1TriggerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& skill1SpurLeftDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& skill1ExtraCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skill1FinalSpurCount() {
		return *(T*)((uintptr_t)this + 0x380);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skill1ExtraPawCount() {
		return *(T*)((uintptr_t)this + 0x388);
	}
	template <typename T = float> static T& skill1ExtraPawAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& spurSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& skill1FinalSpurAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& skill1Atk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& skill1extraPawPositionOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& skill1extraPawDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& skill1NormalComboForce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& skill1FinalComboForce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& skill1SpurPosition() {
		return *(T*)((uintptr_t)this + 0x390);
	}
	template <typename T = float> static T& skill1SpurLeftOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& skill1TotalTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& skill1ComboLevel() {
		return *(T*)((uintptr_t)this + 0x39C);
	}
	template <typename T = int32_t> T& skill1ComboCount() {
		return *(T*)((uintptr_t)this + 0x3A0);
	}
	template <typename T = float> T& currentSkillAmount() {
		return *(T*)((uintptr_t)this + 0x3A4);
	}
	template <typename T = float> T& skill1StartTime() {
		return *(T*)((uintptr_t)this + 0x3A8);
	}
	template <typename T = int32_t> T& digestLevel() {
		return *(T*)((uintptr_t)this + 0x3AC);
	}
	template <typename T = uintptr_t> T& _digestEffect() {
		return *(T*)((uintptr_t)this + 0x3B0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _digestParticles() {
		return *(T*)((uintptr_t)this + 0x3B8);
	}

	template <typename T = bool> T get_inSkill0() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF849C))(this);
	}
	template <typename T = bool> T get_isMasterSkin() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF8514))(this);
	}
	template <typename T = bool> T get_isMasterSkin2() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF8584))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF85F4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF8AE0))(this);
	}
	template <typename T = void> T NotChose() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF8B6C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF8C60))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF90A8))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF9114))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF91B8))(this);
	}
	template <typename T = void> T Skill0Update() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF8E6C))(this);
	}
	template <typename T = Il2CppString*> T GetSkillEffectBySkinIndex(int32_t skinIdx) {
		return ((T (*)(C10Controller*, int32_t))(Il2CppBase() + 0x1EF9B94))(this, skinIdx);
	}
	template <typename T = void> T Transfiguration() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF9C50))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFA018))(this);
	}
	template <typename T = void> T RoleSkill0End() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFA15C))(this);
	}
	template <typename T = void> T AutoLock() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFA918))(this);
	}
	template <typename T = void> T SkillAtk() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFAAA8))(this);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFB090))(this);
	}
	template <typename T = bool> T CanTriggerItem() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFB348))(this);
	}
	template <typename T = void> T RoleAtk(bool value) {
		return ((T (*)(C10Controller*, bool))(Il2CppBase() + 0x1EFB3E4))(this, value);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFB7C4))(this);
	}
	template <typename T = void> T HurtSomeOne() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFB844))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(C10Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1EFB900))(this, damage, source_object);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFB9E8))(this);
	}
	template <typename T = int32_t> T GetSkillDamage(int32_t baseDamage) {
		return ((T (*)(C10Controller*, int32_t))(Il2CppBase() + 0x1EFAE5C))(this, baseDamage);
	}
	template <typename T = int32_t> T GetSkillCritic() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFAFC4))(this);
	}
	template <typename T = bool> T get_inSkill1() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFB74C))(this);
	}
	template <typename T = float> T get_skill1AnimTime() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFBA48))(this);
	}
	template <typename T = void> T Skill1Update() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF8D88))(this);
	}
	template <typename T = void> T Skill1ExtraCountSetUp() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFB1CC))(this);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF96D0))(this);
	}
	template <typename T = void> T Skill1FlushComboCount() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFBF50))(this);
	}
	template <typename T = void> T RoleSkill1Start() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFBACC))(this);
	}
	template <typename T = void> T ShowMasterEffect() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFBFD8))(this);
	}
	template <typename T = void> T HideMasterEffect() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFA738))(this);
	}
	template <typename T = void> T RoleSkill1End() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFA3E4))(this);
	}
	template <typename T = int32_t> T GetComboFactor(int32_t comboIndex) {
		return ((T (*)(C10Controller*, int32_t))(Il2CppBase() + 0x1EFC1B8))(this, comboIndex);
	}
	template <typename T = void> T Skill1AtkNormalCombo(int32_t comboIndex) {
		return ((T (*)(C10Controller*, int32_t))(Il2CppBase() + 0x1EFC320))(this, comboIndex);
	}
	template <typename T = void> T Skill1AtkFinalCombo() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFD50C))(this);
	}
	template <typename T = void> T CreatePoly() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFE80C))(this);
	}
	template <typename T = void> T CreateBite(Il2CppVector3 position) {
		return ((T (*)(C10Controller*, Il2CppVector3))(Il2CppBase() + 0x1EFEBF0))(this, position);
	}
	template <typename T = uintptr_t> T Skill1Move(Il2CppVector3 forceDir, float distance) {
		return ((T (*)(C10Controller*, Il2CppVector3, float))(Il2CppBase() + 0x1EFCEB0))(this, forceDir, distance);
	}
	template <typename T = void> T Skill1CreateSpur(int32_t spurCount, Il2CppVector3 spurPosition, Il2CppVector3 skillDirection) {
		return ((T (*)(C10Controller*, int32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1EFE2F8))(this, spurCount, spurPosition, skillDirection);
	}
	template <typename T = void> T Skill1CreateThorn(int32_t directionCount) {
		return ((T (*)(C10Controller*, int32_t))(Il2CppBase() + 0x1EFEF18))(this, directionCount);
	}
	template <typename T = void> T Skill1AtkAnimEnter(uintptr_t stateInfo, int32_t index) {
		return ((T (*)(C10Controller*, uintptr_t, int32_t))(Il2CppBase() + 0x1EFF444))(this, stateInfo, index);
	}
	template <typename T = void> T Skill1AtkCheck() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFF56C))(this);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EF9778))(this);
	}
	template <typename T = void> T StartEat() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFF5F0))(this);
	}
	template <typename T = void> T Eat() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFF908))(this);
	}
	template <typename T = uintptr_t> T Digesting() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1F002B4))(this);
	}
	template <typename T = void> T OnDigestLevelChanged(int32_t newLevel, int32_t oldLevel) {
		return ((T (*)(C10Controller*, int32_t, int32_t))(Il2CppBase() + 0x1F00394))(this, newLevel, oldLevel);
	}
	template <typename T = void> T RoleSkillEnd2() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1EFA564))(this);
	}
	template <typename T = bool> T CanSwitchWeapon() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1F00880))(this);
	}
	template <typename T = void> T Skill1Moveb__85_0() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1F00A4C))(this);
	}
	template <typename T = void> T iFixBaseProxy_NotChose() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1F00A58))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1F00A60))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1F00A68))(this);
	}
	template <typename T = void> T iFixBaseProxy_AutoLock() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1F00A70))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpChar() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1F00A78))(this);
	}
	template <typename T = bool> T iFixBaseProxy_CanTriggerItem() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1F00A80))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleAtk(bool P0) {
		return ((T (*)(C10Controller*, bool))(Il2CppBase() + 0x1F00A88))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_DeadChild() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1F00A94))(this);
	}
	template <typename T = void> T iFixBaseProxy_HurtSomeOne() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1F00A9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(C10Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1F00AA4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1F00AAC))(this);
	}
	template <typename T = bool> T iFixBaseProxy_CanSwitchWeapon() {
		return ((T (*)(C10Controller*))(Il2CppBase() + 0x1F00AB4))(this);
	}

};

}
