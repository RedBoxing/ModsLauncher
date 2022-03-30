#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C07Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C07Controller"));
	}

	template <typename T = uintptr_t> T& bat_particle_root() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& bat_particle_effect() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = int32_t> T& bat_count() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = int32_t> T& bat_hit_count() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = float> T& reduce_skill_cd() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& operaSkill0Prefabs() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& operaSwitchEffects() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& operaSkill0Particle() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& theBatBulletProto() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = uintptr_t> T& theBlackHoleProto() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& skill2Particles() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& skill2Blasts() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = bool> T& Black() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = uintptr_t> T& operaSwitchEffect() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& the_bat_bullets() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = int32_t> T& totalAbsordDamage() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = int32_t> T& absordDamage() {
		return *(T*)((uintptr_t)this + 0x364);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& vamEffects() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = int32_t> T& vamBodyHpDelta() {
		return *(T*)((uintptr_t)this + 0x370);
	}

	template <typename T = bool> T get_is_master2() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEA378))(this);
	}
	template <typename T = bool> T get_is_opera() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEA3E8))(this);
	}
	template <typename T = int32_t> T get_batTotal() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEA458))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEA538))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEA5F8))(this);
	}
	template <typename T = void> T NotChose() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEA684))(this);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEA778))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEAE90))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEAF14))(this);
	}
	template <typename T = void> T ForceDesotrySkillObj() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEAF80))(this);
	}
	template <typename T = bool> T get_Black() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEB100))(this);
	}
	template <typename T = void> T set_Black(bool value) {
		return ((T (*)(C07Controller*, bool))(Il2CppBase() + 0x1EEB108))(this, value);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEB114))(this);
	}
	template <typename T = void> T SwitchBlack() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEC974))(this);
	}
	template <typename T = void> T SwitchAnim() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EECB80))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEB1B8))(this);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEB93C))(this);
	}
	template <typename T = void> T Skill1ExtraBulletProcess(uintptr_t rgbtCreate, uintptr_t createdObject) {
		return ((T (*)(C07Controller*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1EECC30))(this, rgbtCreate, createdObject);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEC0F4))(this);
	}
	template <typename T = bool> T get_vampireBody() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EECE64))(this);
	}
	template <typename T = void> T AbsordDamage(int32_t damage) {
		return ((T (*)(C07Controller*, int32_t))(Il2CppBase() + 0x1EECEE0))(this, damage);
	}
	template <typename T = void> T AddMaxHp(int32_t deltaHp) {
		return ((T (*)(C07Controller*, int32_t))(Il2CppBase() + 0x1EED0F4))(this, deltaHp);
	}
	template <typename T = uintptr_t> T GetSkinData(int32_t skinIdx) {
		return ((T (*)(C07Controller*, int32_t))(Il2CppBase() + 0x1EEACFC))(this, skinIdx);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EED278))(this);
	}
	template <typename T = void> T RoleSkillEnd0() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EED304))(this);
	}
	template <typename T = void> T RoleSkillEnd2() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EED44C))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(C07Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1EEDC00))(this, damage, source_object);
	}
	template <typename T = void> T GetForce(Il2CppVector2 dir, float force) {
		return ((T (*)(C07Controller*, Il2CppVector2, float))(Il2CppBase() + 0x1EEDCC4))(this, dir, force);
	}
	template <typename T = void> T BatBack(bool has_hit, bool createBySkill) {
		return ((T (*)(C07Controller*, bool, bool))(Il2CppBase() + 0x1EEDD84))(this, has_hit, createBySkill);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEE0D8))(this);
	}
	template <typename T = void> T OnBuffChanged(uintptr_t buff, bool isGet) {
		return ((T (*)(C07Controller*, uintptr_t, bool))(Il2CppBase() + 0x1EEE138))(this, buff, isGet);
	}
	template <typename T = void> T iFixBaseProxy_NotChose() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEE2F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpChar() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEE2FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ForceDesotrySkillObj() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEE304))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEE30C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEE314))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(C07Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1EEE31C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_GetForce(Il2CppVector2 P0, float P1) {
		return ((T (*)(C07Controller*, Il2CppVector2, float))(Il2CppBase() + 0x1EEE324))(this, P0, P1);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C07Controller*))(Il2CppBase() + 0x1EEE32C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnBuffChanged(uintptr_t P0, bool P1) {
		return ((T (*)(C07Controller*, uintptr_t, bool))(Il2CppBase() + 0x1EEE334))(this, P0, P1);
	}

};

}
