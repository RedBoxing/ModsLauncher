#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Character {

class RoleAttributeProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Character", "RoleAttributeProxy"));
	}

	template <typename T = uintptr_t> T& Client() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _speedValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _maxHpValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _maxArmorValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& _maxEnergyValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_Client() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C33318))(this);
	}
	template <typename T = int32_t> T get_camp() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C33320))(this);
	}
	template <typename T = void> T set_camp(int32_t value) {
		return ((T (*)(RoleAttributeProxy*, int32_t))(Il2CppBase() + 0x1C33390))(this, value);
	}
	template <typename T = void*> T get_SpeedValue() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C33414))(this);
	}
	template <typename T = float> T get_speed() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C334F8))(this);
	}
	template <typename T = float> T get_speed_rate() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C3359C))(this);
	}
	template <typename T = void> T set_speed_rate(float value) {
		return ((T (*)(RoleAttributeProxy*, float))(Il2CppBase() + 0x1C3360C))(this, value);
	}
	template <typename T = void*> T get_MaxHpValue() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C2FC98))(this);
	}
	template <typename T = int32_t> T get_max_hp() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C2FD78))(this);
	}
	template <typename T = int32_t> T get_hp() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C33690))(this);
	}
	template <typename T = void> T set_hp(int32_t value) {
		return ((T (*)(RoleAttributeProxy*, int32_t))(Il2CppBase() + 0x1C2FE1C))(this, value);
	}
	template <typename T = float> T get_dynamicAddSpeedFactor() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C33700))(this);
	}
	template <typename T = void> T set_dynamicAddSpeedFactor(float value) {
		return ((T (*)(RoleAttributeProxy*, float))(Il2CppBase() + 0x1C33774))(this, value);
	}
	template <typename T = int32_t> T get_critical() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C33800))(this);
	}
	template <typename T = void> T set_critical(int32_t value) {
		return ((T (*)(RoleAttributeProxy*, int32_t))(Il2CppBase() + 0x1C33870))(this, value);
	}
	template <typename T = float> T get_deviation() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C338F4))(this);
	}
	template <typename T = void*> T get_MaxArmorValue() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C33964))(this);
	}
	template <typename T = int32_t> T get_Max_armor() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C33AB8))(this);
	}
	template <typename T = int32_t> T get_MaxArmor() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C33B18))(this);
	}
	template <typename T = int32_t> T get_armor() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C33BBC))(this);
	}
	template <typename T = void> T set_armor(int32_t value) {
		return ((T (*)(RoleAttributeProxy*, int32_t))(Il2CppBase() + 0x1C33C84))(this, value);
	}
	template <typename T = bool> T get_HasArmor() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C33DA0))(this);
	}
	template <typename T = void*> T get_MaxEnergyValue() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C33E70))(this);
	}
	template <typename T = int32_t> T get_max_energy() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C33FC4))(this);
	}
	template <typename T = int32_t> T get_energy() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C34068))(this);
	}
	template <typename T = void> T set_energy(int32_t value) {
		return ((T (*)(RoleAttributeProxy*, int32_t))(Il2CppBase() + 0x1C340E0))(this, value);
	}
	template <typename T = int32_t> T get_atk() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C341DC))(this);
	}
	template <typename T = void> T set_atk(int32_t value) {
		return ((T (*)(RoleAttributeProxy*, int32_t))(Il2CppBase() + 0x1C342A4))(this, value);
	}
	template <typename T = int32_t> T get_c_index() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C34378))(this);
	}
	template <typename T = int32_t> T get_c_level() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C34440))(this);
	}
	template <typename T = uintptr_t> T get_default_buff() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C34508))(this);
	}
	template <typename T = float> T get_atk_speed() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C345D0))(this);
	}
	template <typename T = void> T set_atk_speed(float value) {
		return ((T (*)(RoleAttributeProxy*, float))(Il2CppBase() + 0x1C34694))(this, value);
	}
	template <typename T = int32_t> T get_defence() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C34768))(this);
	}
	template <typename T = void> T set_defence(int32_t value) {
		return ((T (*)(RoleAttributeProxy*, int32_t))(Il2CppBase() + 0x1C34830))(this, value);
	}
	template <typename T = float> T get_this_skill_time() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C34904))(this);
	}
	template <typename T = void> T set_this_skill_time(float value) {
		return ((T (*)(RoleAttributeProxy*, float))(Il2CppBase() + 0x1C349C8))(this, value);
	}
	template <typename T = float> T get_armor_restore_speed() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C34A9C))(this);
	}
	template <typename T = void> T set_armor_restore_speed(float value) {
		return ((T (*)(RoleAttributeProxy*, float))(Il2CppBase() + 0x1C34B60))(this, value);
	}
	template <typename T = bool> T get_skill_ready() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C34C34))(this);
	}
	template <typename T = bool> T get_skill_strengthen() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C34D04))(this);
	}
	template <typename T = float> T get_role_skill_time() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C34DD4))(this);
	}
	template <typename T = uintptr_t> T get_skillInfo() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C34EA4))(this);
	}
	template <typename T = uint32_t> T get_skill_release_count() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C34F74))(this);
	}
	template <typename T = void> T set_skill_release_count(uint32_t value) {
		return ((T (*)(RoleAttributeProxy*, uint32_t))(Il2CppBase() + 0x1C3503C))(this, value);
	}
	template <typename T = float> T get_skillCd() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C35110))(this);
	}
	template <typename T = void> T ChangeSpeed(Il2CppString* id, float value, float time) {
		return ((T (*)(RoleAttributeProxy*, Il2CppString*, float, float))(Il2CppBase() + 0x1C3520C))(this, id, value, time);
	}
	template <typename T = void> T ChangeSpeedNE(Il2CppString* id, float value, float time) {
		return ((T (*)(RoleAttributeProxy*, Il2CppString*, float, float))(Il2CppBase() + 0x1C352BC))(this, id, value, time);
	}
	template <typename T = void> T SpeedBack() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C3536C))(this);
	}
	template <typename T = void> T HpChanged() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C353E0))(this);
	}
	template <typename T = void> T RestoreHealth(int32_t value, bool sync) {
		return ((T (*)(RoleAttributeProxy*, int32_t, bool))(Il2CppBase() + 0x1C35454))(this, value, sync);
	}
	template <typename T = void> T RestoreEnergy(int32_t value, bool sync, bool playEffect, bool fromEnergyBall) {
		return ((T (*)(RoleAttributeProxy*, int32_t, bool, bool, bool))(Il2CppBase() + 0x1C354F0))(this, value, sync, playEffect, fromEnergyBall);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C355B0))(this);
	}
	template <typename T = void> T ChangeAttribute(uintptr_t attribute, int32_t value) {
		return ((T (*)(RoleAttributeProxy*, uintptr_t, int32_t))(Il2CppBase() + 0x1C3567C))(this, attribute, value);
	}
	template <typename T = void> T ReSetArmorReload() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C35770))(this);
	}
	template <typename T = bool> T CanDie() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C3583C))(this);
	}
	template <typename T = void> T ArmorReload() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C35904))(this);
	}
	template <typename T = void> T SkillReload() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C359D0))(this);
	}
	template <typename T = void> T SkillReload_1(float deltaTime) {
		return ((T (*)(RoleAttributeProxy*, float))(Il2CppBase() + 0x1C35A9C))(this, deltaTime);
	}
	template <typename T = void> T ClampAttribute() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C35B84))(this);
	}
	template <typename T = void> T RefreshSkillCd() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C35C50))(this);
	}
	template <typename T = void> T RestoreArmor(int32_t restore, bool showText) {
		return ((T (*)(RoleAttributeProxy*, int32_t, bool))(Il2CppBase() + 0x1C35D1C))(this, restore, showText);
	}
	template <typename T = void> T UpdateArmor(int32_t coinVal) {
		return ((T (*)(RoleAttributeProxy*, int32_t))(Il2CppBase() + 0x1C35E10))(this, coinVal);
	}
	template <typename T = void> T ChangeDefenceTemp(int32_t def, float duration) {
		return ((T (*)(RoleAttributeProxy*, int32_t, float))(Il2CppBase() + 0x1C35EF8))(this, def, duration);
	}
	template <typename T = void> T ChangeAtkSpeedTemp(int32_t change_val, float duration) {
		return ((T (*)(RoleAttributeProxy*, int32_t, float))(Il2CppBase() + 0x1C35FFC))(this, change_val, duration);
	}
	template <typename T = void> T RestoreHealthAndEnergy(int32_t hpValue, int32_t mpValue, bool sync) {
		return ((T (*)(RoleAttributeProxy*, int32_t, int32_t, bool))(Il2CppBase() + 0x1C36100))(this, hpValue, mpValue, sync);
	}
	template <typename T = void> T ReSetSkillReload() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C36210))(this);
	}
	template <typename T = void> T ConsumeSkillCount(int32_t count) {
		return ((T (*)(RoleAttributeProxy*, int32_t))(Il2CppBase() + 0x1C362DC))(this, count);
	}
	template <typename T = void> T ResetClampTime() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C363C4))(this);
	}
	template <typename T = uintptr_t> T RestoringEnergy() {
		return ((T (*)(RoleAttributeProxy*))(Il2CppBase() + 0x1C36490))(this);
	}
	template <typename T = bool> T CanChangeMaxHP(int32_t deltaHp) {
		return ((T (*)(RoleAttributeProxy*, int32_t))(Il2CppBase() + 0x1C36560))(this, deltaHp);
	}

};

}
