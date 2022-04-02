#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C06Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C06Controller"));
	}

	template <typename T = uintptr_t> T& battery() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& the_battery() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = int32_t> T& master_skin_index() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = Il2CppVector3> T& master_hand_position() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = int32_t> T& battery_max_num() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = Il2CppVector3> T& init_hand_position() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = uintptr_t> T& master_clip_hit() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& battery_list() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& battery_bullets() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = uintptr_t> T& batteryIntensiveEffect() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = uintptr_t> T& skill1ExtraExplodeObject() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = int32_t> T& skill1ExtraExplodeDamage() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = float> T& skill1ExtraExplodeScale() {
		return *(T*)((uintptr_t)this + 0x34C);
	}
	template <typename T = bool> T& show_in_skill() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = uintptr_t> T& cd_anim() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = uintptr_t> T& skill_mech() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = Il2CppString*> T& mechName() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = Il2CppString*> T& MechNameKey() {
		return *(T*)((uintptr_t)this + 0x370);
	}

	template <typename T = bool> T get_is_master() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE5EE0))(this);
	}
	template <typename T = bool> T get_is_master2() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE5F54))(this);
	}
	template <typename T = bool> T get_is_boss_skin() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE5FC4))(this);
	}
	template <typename T = bool> T get_is_fire_god() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE6034))(this);
	}
	template <typename T = bool> T get_is_opera() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE60A4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE6114))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE6178))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE6204))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE6288))(this);
	}
	template <typename T = void> T ShowFireGod() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE62F4))(this);
	}
	template <typename T = void> T DoReborn(bool uiReborn) {
		return ((T (*)(C06Controller*, bool))(Il2CppBase() + 0x1EE6434))(this, uiReborn);
	}
	template <typename T = void> T ResetCdAnimSpeed() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE6570))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(C06Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1EE66C0))(this, damage, source_object);
	}
	template <typename T = void> T UpdateBatteryList() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE67C0))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE6994))(this);
	}
	template <typename T = void> T ShowMasterCDAnim() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE8318))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE6A38))(this);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE72A4))(this);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE7DBC))(this);
	}
	template <typename T = void> T MechDeadExplodeUpdate(uintptr_t explodeObject) {
		return ((T (*)(C06Controller*, uintptr_t))(Il2CppBase() + 0x1EE872C))(this, explodeObject);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE88B4))(this);
	}
	template <typename T = void> T RoleSkillEnd0() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE8940))(this);
	}
	template <typename T = void> T RoleSkillEnd1() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE89D4))(this);
	}
	template <typename T = void> T EndShowInSkill() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE91B4))(this);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE9280))(this);
	}
	template <typename T = void> T OnMount(bool isMount) {
		return ((T (*)(C06Controller*, bool))(Il2CppBase() + 0x1EE92E0))(this, isMount);
	}
	template <typename T = void> T Land() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE95C4))(this);
	}
	template <typename T = void> T LandShowMasterCDAni() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE8D78))(this);
	}
	template <typename T = void> T MasterSkinHandCheck() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE9B14))(this);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE9CB8))(this);
	}
	template <typename T = void> T SwitchWeapon() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE9D24))(this);
	}
	template <typename T = void> T PickUpItem(uintptr_t temp_tf, bool fusion, bool showText) {
		return ((T (*)(C06Controller*, uintptr_t, bool, bool))(Il2CppBase() + 0x1EE9D90))(this, temp_tf, fusion, showText);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE9E38))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetPlayerDatas() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EE9F20))(this);
	}
	template <typename T = void> T SetPlayerDatas(Il2CppDictionary<Il2CppString*, Il2CppString*>* playerDatas) {
		return ((T (*)(C06Controller*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1EEA084))(this, playerDatas);
	}
	template <typename T = void> T iFixBaseProxy_DoReborn(bool P0) {
		return ((T (*)(C06Controller*, bool))(Il2CppBase() + 0x1EEA2A4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(C06Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1EEA2B0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EEA2B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EEA2C0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EEA2C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnMount(bool P0) {
		return ((T (*)(C06Controller*, bool))(Il2CppBase() + 0x1EEA2D0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Land() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EEA2DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpChar() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EEA2E4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SwitchWeapon() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EEA2EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_DeadChild() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EEA2F4))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T iFixBaseProxy_GetPlayerDatas() {
		return ((T (*)(C06Controller*))(Il2CppBase() + 0x1EEA2FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetPlayerDatas(Il2CppDictionary<Il2CppString*, Il2CppString*>* P0) {
		return ((T (*)(C06Controller*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1EEA304))(this, P0);
	}

};

}
