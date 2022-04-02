#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C14Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C14Controller"));
	}

	template <typename T = uintptr_t> T& masterSkillClip() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = int32_t> T& masterIndex() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& leeSkillClip() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = int32_t> T& leeIndex() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = int32_t> T& wuyongIndex() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = int32_t> T& xxIndex() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = int32_t> T& wusongIndex() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = float> T& waitTime() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& skill1Config() {
		return *(T*)((uintptr_t)this + 0x31C);
	}
	template <typename T = int32_t> T& criticChange() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = uintptr_t> T& phantom_creator() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = int32_t> T& killCount() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = uintptr_t> T& frontWeapon() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = float> T& skillStartTime() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = uintptr_t> T& bulletSpliter() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = uintptr_t> T& skill1Effect() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = bool> T& movable() {
		return *(T*)((uintptr_t)this + 0x370);
	}
	template <typename T = float> T& speedChangeValue() {
		return *(T*)((uintptr_t)this + 0x374);
	}

	template <typename T = bool> T get_is_master2() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F36570))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F365E0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F366D8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F36834))(this);
	}
	template <typename T = void> T RoleMove(uintptr_t m) {
		return ((T (*)(C14Controller*, uintptr_t))(Il2CppBase() + 0x1F36B08))(this, m);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F36BC8))(this);
	}
	template <typename T = void> T DoReborn(bool uiReborn) {
		return ((T (*)(C14Controller*, bool))(Il2CppBase() + 0x1F36C34))(this, uiReborn);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F36D30))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F37010))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F372DC))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F38488))(this);
	}
	template <typename T = void> T RoleSkillEnd0() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F385D4))(this);
	}
	template <typename T = void> T ShowPhatom() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F38410))(this);
	}
	template <typename T = void> T HidePhatom() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F38CC8))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(C14Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1F38D40))(this, damage, source_object);
	}
	template <typename T = void> T KillSomeOne(uintptr_t other) {
		return ((T (*)(C14Controller*, uintptr_t))(Il2CppBase() + 0x1F38E7C))(this, other);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F38FBC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponsData() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F3901C))(this);
	}
	template <typename T = void> T OnMount(bool isMount) {
		return ((T (*)(C14Controller*, bool))(Il2CppBase() + 0x1F390A0))(this, isMount);
	}
	template <typename T = void> T TriggerItem() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F3914C))(this);
	}
	template <typename T = bool> T get_NeedEndSkill1() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F39310))(this);
	}
	template <typename T = uintptr_t> T GetBulletSplitConfig() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F39440))(this);
	}
	template <typename T = void> T FrontWeaponAttackRetrigger() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F39578))(this);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F37988))(this);
	}
	template <typename T = void> T RoleSkillEnd1() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F3874C))(this);
	}
	template <typename T = void> T RoleSkill1Update() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F368E0))(this);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F37ECC))(this);
	}
	template <typename T = void> T RoleSkillEnd2() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F388B0))(this);
	}
	template <typename T = uintptr_t> T JumpLand() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F397C4))(this);
	}
	template <typename T = void> T JumpEnd() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F36CC4))(this);
	}
	template <typename T = void> T OnBuffChanged(uintptr_t buff, bool isGet) {
		return ((T (*)(C14Controller*, uintptr_t, bool))(Il2CppBase() + 0x1F398A4))(this, buff, isGet);
	}
	template <typename T = void> T SetVelocity() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F39A08))(this);
	}
	template <typename T = void> T OnMotivated() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F371B4))(this);
	}
	template <typename T = void> T LongIdleCheckUpdate() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F36978))(this);
	}
	template <typename T = void> T LongIdle() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F39A9C))(this);
	}
	template <typename T = void> T RoleAtk(bool value) {
		return ((T (*)(C14Controller*, bool))(Il2CppBase() + 0x1F39C68))(this, value);
	}
	template <typename T = void> T BtnSwitchWeaponClick() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F39CEC))(this);
	}
	template <typename T = void> T BtnSpecialClick(bool isDown, uintptr_t btnType) {
		return ((T (*)(C14Controller*, bool, uintptr_t))(Il2CppBase() + 0x1F39D58))(this, isDown, btnType);
	}
	template <typename T = void> T iFixBaseProxy_RoleMove(uintptr_t P0) {
		return ((T (*)(C14Controller*, uintptr_t))(Il2CppBase() + 0x1F39E80))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_DoReborn(bool P0) {
		return ((T (*)(C14Controller*, bool))(Il2CppBase() + 0x1F39E88))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_DeadChild() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F39E94))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F39E9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F39EA4))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(C14Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1F39EAC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_KillSomeOne(uintptr_t P0) {
		return ((T (*)(C14Controller*, uintptr_t))(Il2CppBase() + 0x1F39EB4))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F39EBC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T iFixBaseProxy_GetWeaponsData() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F39EC4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnMount(bool P0) {
		return ((T (*)(C14Controller*, bool))(Il2CppBase() + 0x1F39ECC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_TriggerItem() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F39ED8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnBuffChanged(uintptr_t P0, bool P1) {
		return ((T (*)(C14Controller*, uintptr_t, bool))(Il2CppBase() + 0x1F39EE0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetVelocity() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F39EEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleAtk(bool P0) {
		return ((T (*)(C14Controller*, bool))(Il2CppBase() + 0x1F39EF4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_BtnSwitchWeaponClick() {
		return ((T (*)(C14Controller*))(Il2CppBase() + 0x1F39F00))(this);
	}
	template <typename T = void> T iFixBaseProxy_BtnSpecialClick(bool P0, uintptr_t P1) {
		return ((T (*)(C14Controller*, bool, uintptr_t))(Il2CppBase() + 0x1F39F08))(this, P0, P1);
	}

};

}
