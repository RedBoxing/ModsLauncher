#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C15Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C15Controller"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& staffSprites() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = int32_t> T& master2Index() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& master2Skill0Effect() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& staffSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& random() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = float> T& skillStartTime() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = float> static T& animEndTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& buff_obj() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& nec_ghost_hand() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& nec_skeleton1s() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& nec_skeleton2s() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& effect_show_up() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = float> static T& skillFriction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& skillEndTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skill0Detect() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = float> static T& bulletRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& summonInitWait() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = uintptr_t> T& summonWait() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& minions() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = uintptr_t> T& _minionsRoot() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& deadCache() {
		return *(T*)((uintptr_t)this + 0x370);
	}
	template <typename T = int32_t> static T& ghostHandMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& ghostHandCount() {
		return *(T*)((uintptr_t)this + 0x378);
	}
	template <typename T = Il2CppString*> static T& MinionsKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3BA0C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3BA70))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3BB6C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3BC98))(this);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3BD04))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3BD64))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3D684))(this);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3D880))(this);
	}
	template <typename T = void> T InitStaffSprite() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3D90C))(this);
	}
	template <typename T = bool> T get_canCastSkill() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3DA20))(this);
	}
	template <typename T = bool> T get_isUpdateWeapon() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3DAC0))(this);
	}
	template <typename T = int32_t> T get_skill0Damage() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3DB48))(this);
	}
	template <typename T = bool> T get_canAddSkill0ToTarget() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3DBC0))(this);
	}
	template <typename T = void> T AddSkill0Buff(uintptr_t target) {
		return ((T (*)(C15Controller*, uintptr_t))(Il2CppBase() + 0x1F3DCF8))(this, target);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3BE08))(this);
	}
	template <typename T = void> T RoleSkill0End() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3D718))(this);
	}
	template <typename T = int32_t> T get_skill1Damage() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3DFF0))(this);
	}
	template <typename T = int32_t> T get_spiderDamage() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3E07C))(this);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3C528))(this);
	}
	template <typename T = void> T RoleSkill1End() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3D7CC))(this);
	}
	template <typename T = void> T Skill1Drop(Il2CppVector3 position) {
		return ((T (*)(C15Controller*, Il2CppVector3))(Il2CppBase() + 0x1F3E0FC))(this, position);
	}
	template <typename T = void> T CreatePoisonCircle(Il2CppVector3 position, bool byDrop) {
		return ((T (*)(C15Controller*, Il2CppVector3, bool))(Il2CppBase() + 0x1F3E1B0))(this, position, byDrop);
	}
	template <typename T = void> T SummonSpider(Il2CppVector3 position) {
		return ((T (*)(C15Controller*, Il2CppVector3))(Il2CppBase() + 0x1F3E698))(this, position);
	}
	template <typename T = void> T Skill1OnBuffEnemyDead(uintptr_t enemy) {
		return ((T (*)(C15Controller*, uintptr_t))(Il2CppBase() + 0x1F3EA24))(this, enemy);
	}
	template <typename T = uintptr_t> T Skill1Summon(Il2CppVector3 enemyPosition, int32_t index, uintptr_t parent) {
		return ((T (*)(C15Controller*, Il2CppVector3, int32_t, uintptr_t))(Il2CppBase() + 0x1F3EBA0))(this, enemyPosition, index, parent);
	}
	template <typename T = uintptr_t> T GetSkinObj(Il2CppArray<uintptr_t>* objs, int32_t skin_idx) {
		return ((T (*)(C15Controller*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1F3ED10))(this, objs, skin_idx);
	}
	template <typename T = int32_t> T get_maxMinionCount() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3EDE4))(this);
	}
	template <typename T = uintptr_t> T get_minionsRoot() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3EE70))(this);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3CCD4))(this);
	}
	template <typename T = void> T CreateRebornMarkEffect(uintptr_t enemy) {
		return ((T (*)(C15Controller*, uintptr_t))(Il2CppBase() + 0x1F3F5D4))(this, enemy);
	}
	template <typename T = void> T MinionsCountControl() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3FA5C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FindDeads(int32_t range, bool throughWall) {
		return ((T (*)(C15Controller*, int32_t, bool))(Il2CppBase() + 0x1F3EFD8))(this, range, throughWall);
	}
	template <typename T = void> T SkillUpdate() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3BC00))(this);
	}
	template <typename T = bool> T get_canSummonGhostHand() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F3FE80))(this);
	}
	template <typename T = void> T OnGhostHandSummon(uintptr_t controller) {
		return ((T (*)(C15Controller*, uintptr_t))(Il2CppBase() + 0x1F3FEE8))(this, controller);
	}
	template <typename T = void> T OnGhostHandDead() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F400E0))(this);
	}
	template <typename T = bool> T get_keepMinions() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F40148))(this);
	}
	template <typename T = void> T SetPlayerDatas(Il2CppDictionary<Il2CppString*, Il2CppString*>* playerDatas) {
		return ((T (*)(C15Controller*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1F401B8))(this, playerDatas);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetPlayerDatas() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F4070C))(this);
	}
	template <typename T = void> T SummonSpiderb__44_0(Il2CppVector3 p) {
		return ((T (*)(C15Controller*, Il2CppVector3))(Il2CppBase() + 0x1F40BA0))(this, p);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F40BB4))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F40BBC))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F40BC4))(this);
	}
	template <typename T = void> T iFixBaseProxy_DeadChild() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F40BCC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetPlayerDatas(Il2CppDictionary<Il2CppString*, Il2CppString*>* P0) {
		return ((T (*)(C15Controller*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1F40BD4))(this, P0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T iFixBaseProxy_GetPlayerDatas() {
		return ((T (*)(C15Controller*))(Il2CppBase() + 0x1F40BDC))(this);
	}

};

}
