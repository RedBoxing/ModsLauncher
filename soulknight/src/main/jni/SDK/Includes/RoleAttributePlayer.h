#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoleAttributePlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoleAttributePlayer"));
	}

	template <typename T = int32_t> T& _max_armor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& armor() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& max_energy() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _energy() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& _rgController() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& in_skill_time() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& c_index() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& c_level() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& default_buff() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& atk_speed() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& defence() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& this_skill_time() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& armor_load() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& armor_rate() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& armor_restore_speed() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uint32_t> T& skill_release_count() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& armor_time() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& energy_time() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& OnSkillReady() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& clampTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& clampEnergyTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& LastBuffArmorBrokenRestoreArmorTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& lowEnergy() {
		return *(T*)((uintptr_t)this + 0xC4);
	}

	template <typename T = uintptr_t> T get_RoleAttributeProxy() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEA448))(this);
	}
	template <typename T = int32_t> T get_Max_armor() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEA5A0))(this);
	}
	template <typename T = int32_t> T get_max_hp() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEA618))(this);
	}
	template <typename T = bool> T get_HasArmor() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEA690))(this);
	}
	template <typename T = int32_t> T get_MaxEnergy() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEA6F8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEA770))(this);
	}
	template <typename T = int32_t> T get_energy() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEA810))(this);
	}
	template <typename T = void> T set_energy(int32_t value) {
		return ((T (*)(RoleAttributePlayer*, int32_t))(Il2CppBase() + 0x1BEA870))(this, value);
	}
	template <typename T = float> T get_fixedArmorRestoreSpeed() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEA8E4))(this);
	}
	template <typename T = float> T get_ArmorLoad() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEA9A4))(this);
	}
	template <typename T = float> T get_ArmorRate() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEAA64))(this);
	}
	template <typename T = uintptr_t> T get_skillInfo() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEAB24))(this);
	}
	template <typename T = bool> T get_skillCasting() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEABCC))(this);
	}
	template <typename T = float> T get_skillCd() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEAC70))(this);
	}
	template <typename T = void> T set_skillCd(float value) {
		return ((T (*)(RoleAttributePlayer*, float))(Il2CppBase() + 0x1BEACE4))(this, value);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEAD6C))(this);
	}
	template <typename T = void> T SetUpAddition() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEC4BC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BED1A4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BED288))(this);
	}
	template <typename T = void> T OnCoinChange(uintptr_t e) {
		return ((T (*)(RoleAttributePlayer*, uintptr_t))(Il2CppBase() + 0x1BED36C))(this, e);
	}
	template <typename T = void> T UpdateArmor(int32_t coinVal) {
		return ((T (*)(RoleAttributePlayer*, int32_t))(Il2CppBase() + 0x1BEC81C))(this, coinVal);
	}
	template <typename T = bool> T CanChangeMaxHP(int32_t deltaHp) {
		return ((T (*)(RoleAttributePlayer*, int32_t))(Il2CppBase() + 0x1BED460))(this, deltaHp);
	}
	template <typename T = void> T ChangeAttribute(uintptr_t attribute, int32_t value) {
		return ((T (*)(RoleAttributePlayer*, uintptr_t, int32_t))(Il2CppBase() + 0x1BECB50))(this, attribute, value);
	}
	template <typename T = void> T ArmorReload() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BED4E4))(this);
	}
	template <typename T = void> T TenaciousRestoreHp() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEDE3C))(this);
	}
	template <typename T = void> T ClampAttribute() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEE0A4))(this);
	}
	template <typename T = void> T ResetClampTime() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEE250))(this);
	}
	template <typename T = void> T ReSetSkillReload() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEE2B4))(this);
	}
	template <typename T = void> T ConsumeSkillCount(int32_t count) {
		return ((T (*)(RoleAttributePlayer*, int32_t))(Il2CppBase() + 0x1BEE3F8))(this, count);
	}
	template <typename T = void> T RefreshSkillCd() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEE52C))(this);
	}
	template <typename T = void> T ReSetArmorReload() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEE698))(this);
	}
	template <typename T = void> T EnergyReLoad() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEE6F8))(this);
	}
	template <typename T = void> T SkillReload() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEE7F8))(this);
	}
	template <typename T = void> T SkillReload_1(float deltaTime) {
		return ((T (*)(RoleAttributePlayer*, float))(Il2CppBase() + 0x1BEE860))(this, deltaTime);
	}
	template <typename T = void> T RestoreArmor(int32_t restore, bool showText) {
		return ((T (*)(RoleAttributePlayer*, int32_t, bool))(Il2CppBase() + 0x1BED678))(this, restore, showText);
	}
	template <typename T = void> T RestoreHealth(int32_t value, bool sync) {
		return ((T (*)(RoleAttributePlayer*, int32_t, bool))(Il2CppBase() + 0x1BEEF50))(this, value, sync);
	}
	template <typename T = void> T ProcessMaxHp() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEF524))(this);
	}
	template <typename T = bool> T CanDie() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEF3BC))(this);
	}
	template <typename T = uintptr_t> T RestoringEnergy() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEC408))(this);
	}
	template <typename T = void> T RestoreEnergy(int32_t value, bool sync, bool playEffect, bool fromEnergyBall) {
		return ((T (*)(RoleAttributePlayer*, int32_t, bool, bool, bool))(Il2CppBase() + 0x1BEF5B8))(this, value, sync, playEffect, fromEnergyBall);
	}
	template <typename T = void> T RestoreHealthAndEnergy(int32_t hpValue, int32_t mpValue, bool sync) {
		return ((T (*)(RoleAttributePlayer*, int32_t, int32_t, bool))(Il2CppBase() + 0x1BEFE9C))(this, hpValue, mpValue, sync);
	}
	template <typename T = void> T RestoreArmorAndEnergy(int32_t armorValue, int32_t mpValue, bool sync) {
		return ((T (*)(RoleAttributePlayer*, int32_t, int32_t, bool))(Il2CppBase() + 0x1BF041C))(this, armorValue, mpValue, sync);
	}
	template <typename T = void> T ChangeDefenceTemp(int32_t defence, float duration) {
		return ((T (*)(RoleAttributePlayer*, int32_t, float))(Il2CppBase() + 0x1BF096C))(this, defence, duration);
	}
	template <typename T = uintptr_t> T ChangingDefence(int32_t defence, float duration) {
		return ((T (*)(RoleAttributePlayer*, int32_t, float))(Il2CppBase() + 0x1BF0A0C))(this, defence, duration);
	}
	template <typename T = void> T ChangeAtkSpeedTemp(int32_t change_val, float duration) {
		return ((T (*)(RoleAttributePlayer*, int32_t, float))(Il2CppBase() + 0x1BF0B40))(this, change_val, duration);
	}
	template <typename T = uintptr_t> T ChangingAtkSpeed(int32_t change_val, float duration) {
		return ((T (*)(RoleAttributePlayer*, int32_t, float))(Il2CppBase() + 0x1BF0BE0))(this, change_val, duration);
	}
	template <typename T = bool> T get_skill_strengthen() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BF0D14))(this);
	}
	template <typename T = bool> T get_skill_ready() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEEE6C))(this);
	}
	template <typename T = float> T get_role_skill_time() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BF0D7C))(this);
	}
	template <typename T = bool> T get_is_local_player() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BEDF94))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BF0E0C))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_energy() {
		return ((T (*)(RoleAttributePlayer*))(Il2CppBase() + 0x1BF0E10))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_energy(int32_t P0) {
		return ((T (*)(RoleAttributePlayer*, int32_t))(Il2CppBase() + 0x1BF0E14))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RestoreHealth(int32_t P0, bool P1) {
		return ((T (*)(RoleAttributePlayer*, int32_t, bool))(Il2CppBase() + 0x1BF0E18))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_RestoreEnergy(int32_t P0, bool P1, bool P2, bool P3) {
		return ((T (*)(RoleAttributePlayer*, int32_t, bool, bool, bool))(Il2CppBase() + 0x1BF0E20))(this, P0, P1, P2, P3);
	}

};

}
