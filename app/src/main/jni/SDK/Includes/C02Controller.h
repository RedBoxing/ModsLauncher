#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C02Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C02Controller"));
	}

	template <typename T = void*> T& OnSkillStart() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = void*> T& OnSkillFinished() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = bool> T& skill_shoot() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = float> T& rollSpeed() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = uintptr_t> T& reloadObject() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& rollObject() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = Il2CppVector2> T& rollDirection() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = float> T& rollingTime() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = bool> T& fullyRollEnd() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = bool> T& earlyEndRoll() {
		return *(T*)((uintptr_t)this + 0x325);
	}
	template <typename T = float> static T& MinRollingTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T add_OnSkillStart(void* value) {
		return ((T (*)(C02Controller*, void*))(Il2CppBase() + 0x1DFB800))(this, value);
	}
	template <typename T = void> T remove_OnSkillStart(void* value) {
		return ((T (*)(C02Controller*, void*))(Il2CppBase() + 0x1DFB8F0))(this, value);
	}
	template <typename T = void> T add_OnSkillFinished(void* value) {
		return ((T (*)(C02Controller*, void*))(Il2CppBase() + 0x1DFB9E0))(this, value);
	}
	template <typename T = void> T remove_OnSkillFinished(void* value) {
		return ((T (*)(C02Controller*, void*))(Il2CppBase() + 0x1DFBAD0))(this, value);
	}
	template <typename T = bool> T get_isOpera() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFBBC0))(this);
	}
	template <typename T = bool> T get_is_master2() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFBC30))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFBCA0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFBD04))(this);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFBD90))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFBFAC))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFC030))(this);
	}
	template <typename T = void> T SwitchWeapon() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFC09C))(this);
	}
	template <typename T = void> T SetVelocity() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFC194))(this);
	}
	template <typename T = void> T AutoLock() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFC354))(this);
	}
	template <typename T = void> T SetCameraFocus() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFC4E0))(this);
	}
	template <typename T = void> T RoleSkillStart() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFC5D0))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFD028))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFD0D4))(this);
	}
	template <typename T = void> T ChangeFace() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFF4C0))(this);
	}
	template <typename T = int32_t> T WeightedRandom(int32_t last, Il2CppArray<uintptr_t>* weights) {
		return ((T (*)(C02Controller*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DFF5DC))(this, last, weights);
	}
	template <typename T = uintptr_t> T GetSkill0Clip() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFF3A8))(this);
	}
	template <typename T = uintptr_t> T GetSkill1Clip() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFF7E4))(this);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFDDA0))(this);
	}
	template <typename T = bool> T get_isRolling() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFC118))(this);
	}
	template <typename T = float> static T get_BaseRollTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DFF870))(0);
	}
	template <typename T = void> T RoleSkillStart2() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFC68C))(this);
	}
	template <typename T = uintptr_t> T Rolling() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFF984))(this);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFF34C))(this);
	}
	template <typename T = void> T AxeAttack() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1DFFA64))(this);
	}
	template <typename T = void> T CreateAxeBullet(int32_t damage, float scale, int32_t critic, float angle) {
		return ((T (*)(C02Controller*, int32_t, float, int32_t, float))(Il2CppBase() + 0x1DFFE58))(this, damage, scale, critic, angle);
	}
	template <typename T = void> T RoleSkillEnd2() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E002DC))(this);
	}
	template <typename T = void> T RollingEnd() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E003F4))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E0073C))(this);
	}
	template <typename T = void> T RoleSkillEnd0() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E00818))(this);
	}
	template <typename T = void> T RoleSkillEnd1() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E0090C))(this);
	}
	template <typename T = void> T EndSkillShoot() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E009C4))(this);
	}
	template <typename T = void> T OnMount(bool isMount) {
		return ((T (*)(C02Controller*, bool))(Il2CppBase() + 0x1E00AB4))(this, isMount);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E00B6C))(this);
	}
	template <typename T = void> T OnAdditionLevelChanged() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E00BCC))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(C02Controller*, int32_t))(Il2CppBase() + 0x1E00CE4))(this, game_state);
	}
	template <typename T = uintptr_t> T GetSkillClip(int32_t skinIdx) {
		return ((T (*)(C02Controller*, int32_t))(Il2CppBase() + 0x1E00DD8))(this, skinIdx);
	}
	template <typename T = void> T RoleSkill1b__27_0() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E00F18))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpChar() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E00F48))(this);
	}
	template <typename T = void> T iFixBaseProxy_SwitchWeapon() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E00F50))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetVelocity() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E00F58))(this);
	}
	template <typename T = void> T iFixBaseProxy_AutoLock() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E00F60))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetCameraFocus() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E00F68))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillStart() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E00F70))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E00F78))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E00F80))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnMount(bool P0) {
		return ((T (*)(C02Controller*, bool))(Il2CppBase() + 0x1E00F88))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E00F94))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnAdditionLevelChanged() {
		return ((T (*)(C02Controller*))(Il2CppBase() + 0x1E00F9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(C02Controller*, int32_t))(Il2CppBase() + 0x1E00FA4))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetSkillClip(int32_t P0) {
		return ((T (*)(C02Controller*, int32_t))(Il2CppBase() + 0x1E00FAC))(this, P0);
	}

};

}
