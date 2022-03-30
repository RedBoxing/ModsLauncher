#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C13Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C13Controller"));
	}

	template <typename T = uintptr_t> T& antenna() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& funnelRoot() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& the_thunder_god_anim() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& clip_hold() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& clip_bells() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& reload_obj() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& the_reload_obj() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& funnels() {
		return *(T*)((uintptr_t)this + 0x328);
	}

	template <typename T = uintptr_t> T get_Antenna() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F31BF0))(this);
	}
	template <typename T = bool> T get_is_master() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F31C50))(this);
	}
	template <typename T = bool> T get_is_master2() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F31CC0))(this);
	}
	template <typename T = bool> T get_is_thunder_god() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F31D30))(this);
	}
	template <typename T = bool> T get_is_boss() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F31DA0))(this);
	}
	template <typename T = bool> T get_is_opera() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F31E10))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F31E80))(this);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F31FB8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F32BF0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F32CD0))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F32D54))(this);
	}
	template <typename T = void> T OnSkillChanged() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F32DC0))(this);
	}
	template <typename T = uintptr_t> T get_clip_bell() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F32E24))(this);
	}
	template <typename T = void> T RoleSkillStart() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F32EDC))(this);
	}
	template <typename T = void> T OnMount(bool isMount) {
		return ((T (*)(C13Controller*, bool))(Il2CppBase() + 0x1F33260))(this, isMount);
	}
	template <typename T = void> T ShowThunderGod() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F33390))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F335A8))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F3364C))(this);
	}
	template <typename T = void> T Skill0ExtraBulletProcess(uintptr_t bulletObject) {
		return ((T (*)(C13Controller*, uintptr_t))(Il2CppBase() + 0x1F34EB4))(this, bulletObject);
	}
	template <typename T = void> T Skill0ExtraBulletHurtEnemy(uintptr_t chainBullet, uintptr_t hurtEnemy) {
		return ((T (*)(C13Controller*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F35000))(this, chainBullet, hurtEnemy);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F33DDC))(this);
	}
	template <typename T = void> T HideThunderGod() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F35488))(this);
	}
	template <typename T = uintptr_t> T CreatingFunnel() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F35320))(this);
	}
	template <typename T = uintptr_t> T FunnelRotating() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F353D4))(this);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F34438))(this);
	}
	template <typename T = void> T SkillStart() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F355D0))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F356EC))(this);
	}
	template <typename T = void> T RoleSkillEnd0() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F35778))(this);
	}
	template <typename T = void> T RoleSkillEnd1() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F3589C))(this);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F35A4C))(this);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F35ACC))(this);
	}
	template <typename T = void> T TurnTransparent(bool isTransparent) {
		return ((T (*)(C13Controller*, bool))(Il2CppBase() + 0x1F35B2C))(this, isTransparent);
	}
	template <typename T = void> T HurtHp(int32_t damage, uintptr_t source_object) {
		return ((T (*)(C13Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1F35C44))(this, damage, source_object);
	}
	template <typename T = bool> T CreatingFunnelb__37_0() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F35D9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpChar() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F35DAC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSkillChanged() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F35DB4))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillStart() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F35DBC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnMount(bool P0) {
		return ((T (*)(C13Controller*, bool))(Il2CppBase() + 0x1F35DC4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F35DD0))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F35DD8))(this);
	}
	template <typename T = void> T iFixBaseProxy_DeadChild() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F35DE0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C13Controller*))(Il2CppBase() + 0x1F35DE8))(this);
	}
	template <typename T = void> T iFixBaseProxy_TurnTransparent(bool P0) {
		return ((T (*)(C13Controller*, bool))(Il2CppBase() + 0x1F35DF0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HurtHp(int32_t P0, uintptr_t P1) {
		return ((T (*)(C13Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1F35DFC))(this, P0, P1);
	}

};

}
