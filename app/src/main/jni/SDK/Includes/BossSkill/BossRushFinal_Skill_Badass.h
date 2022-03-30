#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class BossRushFinalSkillBadass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "BossRushFinal_Skill_Badass"));
	}

	template <typename T = uintptr_t> T& boss() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& maxTakenDamageWhenAngry() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& bodyCenter() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& angryClip() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& skill1Data() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& skill2Data() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& skill3Data() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& skill4Data() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& skill5Data() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& skill6Data() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& skill7Data() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& skill8Data() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& dieEfxPrefab() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skills() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& animationEnd() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = void*> T& animationEvent() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& cmdList() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& skill_bulletsWave1() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& skill_bulletsWave2() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& skill_jump() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& skill_gridlaser() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& skill_whirlBlade() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& skill_flySword() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& skill_parallelLaser() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& skill_meleeAttack() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& aiState() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skillUseTimes() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& skillUseTimesInCurrentState() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& lastSkillEndTime() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppList<int32_t>*> T& skillHistory() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& probability_use_whirlBlade() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& _usingSkill() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = bool> T& leftHandEmpty() {
		return *(T*)((uintptr_t)this + 0x145);
	}
	template <typename T = bool> T& rightHandEmpty() {
		return *(T*)((uintptr_t)this + 0x146);
	}

	template <typename T = void> T add_animationEnd(uintptr_t value) {
		return ((T (*)(BossRushFinalSkillBadass*, uintptr_t))(Il2CppBase() + 0x2094F38))(this, value);
	}
	template <typename T = void> T remove_animationEnd(uintptr_t value) {
		return ((T (*)(BossRushFinalSkillBadass*, uintptr_t))(Il2CppBase() + 0x2095024))(this, value);
	}
	template <typename T = void> T add_animationEvent(void* value) {
		return ((T (*)(BossRushFinalSkillBadass*, void*))(Il2CppBase() + 0x2095110))(this, value);
	}
	template <typename T = void> T remove_animationEvent(void* value) {
		return ((T (*)(BossRushFinalSkillBadass*, void*))(Il2CppBase() + 0x20951FC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x20952E8))(this);
	}
	template <typename T = void> T DoAngry() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x2095DE8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Skills() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x2095F4C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkillAnimations() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x2095FAC))(this);
	}
	template <typename T = uintptr_t> T get_currentSkill() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x209600C))(this);
	}
	template <typename T = void> T ResetSkillUseTime() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x2095CC4))(this);
	}
	template <typename T = void> T ResetSkillVariant() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x2096134))(this);
	}
	template <typename T = int32_t> T GetAttackIndex(uintptr_t controller) {
		return ((T (*)(BossRushFinalSkillBadass*, uintptr_t))(Il2CppBase() + 0x2096290))(this, controller);
	}
	template <typename T = void> T OnSkillEnd(int32_t skillIdx, int32_t skillVariant) {
		return ((T (*)(BossRushFinalSkillBadass*, int32_t, int32_t))(Il2CppBase() + 0x2096A58))(this, skillIdx, skillVariant);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x2097270))(this);
	}
	template <typename T = bool> T HasSkillInHistroy(int32_t skillIdx, int32_t historyLength) {
		return ((T (*)(BossRushFinalSkillBadass*, int32_t, int32_t))(Il2CppBase() + 0x20968E0))(this, skillIdx, historyLength);
	}
	template <typename T = void> T UseSkillImmediatly(float delay) {
		return ((T (*)(BossRushFinalSkillBadass*, float))(Il2CppBase() + 0x2097024))(this, delay);
	}
	template <typename T = void> T StartMoving(float delay) {
		return ((T (*)(BossRushFinalSkillBadass*, float))(Il2CppBase() + 0x209717C))(this, delay);
	}
	template <typename T = bool> T CanReleaseSkill(uintptr_t controller) {
		return ((T (*)(BossRushFinalSkillBadass*, uintptr_t))(Il2CppBase() + 0x20975AC))(this, controller);
	}
	template <typename T = bool> T CanProcessHurt(uintptr_t controller) {
		return ((T (*)(BossRushFinalSkillBadass*, uintptr_t))(Il2CppBase() + 0x2097640))(this, controller);
	}
	template <typename T = void> T HurtProcess(uintptr_t controller, int32_t damage, uintptr_t sourceObject) {
		return ((T (*)(BossRushFinalSkillBadass*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x20976B4))(this, controller, damage, sourceObject);
	}
	template <typename T = void> T SkillAnimationStart() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x2097838))(this);
	}
	template <typename T = void> T SkillAnimationEnd() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x20978B8))(this);
	}
	template <typename T = void> T SkillAnimationEvent(int32_t param) {
		return ((T (*)(BossRushFinalSkillBadass*, int32_t))(Il2CppBase() + 0x2097948))(this, param);
	}
	template <typename T = void> T Awakeb__29_2() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x2097ADC))(this);
	}
	template <typename T = void> T Awakeb__29_0(uintptr_t oriAngryTodo) {
		return ((T (*)(BossRushFinalSkillBadass*, uintptr_t))(Il2CppBase() + 0x2097AE8))(this, oriAngryTodo);
	}
	template <typename T = void> T Awakeb__29_1(uintptr_t e) {
		return ((T (*)(BossRushFinalSkillBadass*, uintptr_t))(Il2CppBase() + 0x2097B50))(this, e);
	}
	template <typename T = void> T DoAngryb__30_0() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x2097D90))(this);
	}
	template <typename T = void> T DoAngryb__30_1() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x2097F3C))(this);
	}
	template <typename T = void> T DoAngryb__30_4() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x2098290))(this);
	}
	template <typename T = uintptr_t> T GetAttackIndexb__48_0() {
		return ((T (*)(BossRushFinalSkillBadass*))(Il2CppBase() + 0x2098344))(this);
	}
	template <typename T = bool> T OnSkillEndb__49_0(float dt) {
		return ((T (*)(BossRushFinalSkillBadass*, float))(Il2CppBase() + 0x209837C))(this, dt);
	}

};

}
