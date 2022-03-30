#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class BossRushFinalSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "BossRushFinal_Skill"));
	}

	template <typename T = uintptr_t> T& boss() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& bodyCenter() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& _shieldActive() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& shieldObj() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& emitPos() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& useSkillInterval() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& skill1Data() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& skill2Data() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& skill3Data() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& skill3bData() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& skill4Data() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& skill5Data() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& skillSummonData() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& dieEfxPrefab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& normalBeam() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& beamWipe() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& beamWipeBarrage() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& beamWipeHomingBarrage() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& meleeAttack() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& magicStar() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& summon() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& minions() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skills() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& cmdList() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _randomMovePos() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& aiState() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& lastSkillEndTime() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& _doingAction() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = int32_t> T& _meleeAttackCount() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& _useSkillInterval() {
		return *(T*)((uintptr_t)this + 0x134);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_randomMovePos() {
		return ((T (*)(BossRushFinalSkill*))(Il2CppBase() + 0x208BFA0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BossRushFinalSkill*))(Il2CppBase() + 0x208C2AC))(this);
	}
	template <typename T = bool> T NoSurvivingMinion() {
		return ((T (*)(BossRushFinalSkill*))(Il2CppBase() + 0x208CAF8))(this);
	}
	template <typename T = void> T OnScoutEnd() {
		return ((T (*)(BossRushFinalSkill*))(Il2CppBase() + 0x208CC7C))(this);
	}
	template <typename T = void> T EnableShield(bool b) {
		return ((T (*)(BossRushFinalSkill*, bool))(Il2CppBase() + 0x208D104))(this, b);
	}
	template <typename T = void> T InitMinionList() {
		return ((T (*)(BossRushFinalSkill*))(Il2CppBase() + 0x208D198))(this);
	}
	template <typename T = void> T OnMinionDead(uintptr_t e) {
		return ((T (*)(BossRushFinalSkill*, uintptr_t))(Il2CppBase() + 0x208D3C8))(this, e);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Skills() {
		return ((T (*)(BossRushFinalSkill*))(Il2CppBase() + 0x208D600))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkillAnimations() {
		return ((T (*)(BossRushFinalSkill*))(Il2CppBase() + 0x208D660))(this);
	}
	template <typename T = uintptr_t> T get_currentSkill() {
		return ((T (*)(BossRushFinalSkill*))(Il2CppBase() + 0x208D6C0))(this);
	}
	template <typename T = void> T ResetSkillVariant() {
		return ((T (*)(BossRushFinalSkill*))(Il2CppBase() + 0x208D7E8))(this);
	}
	template <typename T = int32_t> T GetAttackIndex(uintptr_t controller) {
		return ((T (*)(BossRushFinalSkill*, uintptr_t))(Il2CppBase() + 0x208D944))(this, controller);
	}
	template <typename T = void> T OnSkillEnd(int32_t skillIdx, int32_t skillVariant) {
		return ((T (*)(BossRushFinalSkill*, int32_t, int32_t))(Il2CppBase() + 0x208DD4C))(this, skillIdx, skillVariant);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BossRushFinalSkill*))(Il2CppBase() + 0x208E01C))(this);
	}
	template <typename T = void> T UseSkillImmediatly(float delay) {
		return ((T (*)(BossRushFinalSkill*, float))(Il2CppBase() + 0x208D4A8))(this, delay);
	}
	template <typename T = bool> T CanReleaseSkill(uintptr_t controller) {
		return ((T (*)(BossRushFinalSkill*, uintptr_t))(Il2CppBase() + 0x208E2A0))(this, controller);
	}
	template <typename T = bool> T CanProcessHurt(uintptr_t controller) {
		return ((T (*)(BossRushFinalSkill*, uintptr_t))(Il2CppBase() + 0x208E334))(this, controller);
	}
	template <typename T = void> T HurtProcess(uintptr_t controller, int32_t damage, uintptr_t sourceObject) {
		return ((T (*)(BossRushFinalSkill*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x208E3A8))(this, controller, damage, sourceObject);
	}
	template <typename T = void> T SkillAnimationStart() {
		return ((T (*)(BossRushFinalSkill*))(Il2CppBase() + 0x208E508))(this);
	}
	template <typename T = void> T SkillAnimationEnd() {
		return ((T (*)(BossRushFinalSkill*))(Il2CppBase() + 0x208E588))(this);
	}
	template <typename T = void> T SkillAnimationEvent(int32_t param) {
		return ((T (*)(BossRushFinalSkill*, int32_t))(Il2CppBase() + 0x208E608))(this, param);
	}
	template <typename T = void> T Awakeb__28_1() {
		return ((T (*)(BossRushFinalSkill*))(Il2CppBase() + 0x208E730))(this);
	}
	template <typename T = void> T Awakeb__28_0(uintptr_t e) {
		return ((T (*)(BossRushFinalSkill*, uintptr_t))(Il2CppBase() + 0x208E73C))(this, e);
	}
	template <typename T = void> T OnScoutEndb__30_0() {
		return ((T (*)(BossRushFinalSkill*))(Il2CppBase() + 0x208EA08))(this);
	}

};

}
