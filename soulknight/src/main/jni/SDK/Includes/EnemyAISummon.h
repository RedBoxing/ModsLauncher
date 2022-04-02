#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAISummon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAISummon"));
	}

	template <typename T = uintptr_t> T& summonClip() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& summonPrefabs() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = int32_t> T& maxSummonCount() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = float> T& enemyDelayTime() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = uintptr_t> T& summonEffect() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = Il2CppVector3> T& summonPosition() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = int32_t> T& summonCount() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = int32_t> T& aliveSummonCount() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = int32_t> static T& Atk1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDA96C))(this);
	}
	template <typename T = void> T StartEnemyAI() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDABB0))(this);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(EnemyAISummon*, uintptr_t, bool))(Il2CppBase() + 0x1FDACF8))(this, source_object, sync);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAISummon*, float, bool))(Il2CppBase() + 0x1FDAE64))(this, duration, isFreeze);
	}
	template <typename T = void> T EndDizzy() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDAF50))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDAFBC))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDB018))(this);
	}
	template <typename T = void> T Summon() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDB134))(this);
	}
	template <typename T = uintptr_t> T EnemyDelayStart(uintptr_t enemyGO) {
		return ((T (*)(EnemyAISummon*, uintptr_t))(Il2CppBase() + 0x1FDB818))(this, enemyGO);
	}
	template <typename T = void> T OnSummonDead(uintptr_t enemy) {
		return ((T (*)(EnemyAISummon*, uintptr_t))(Il2CppBase() + 0x1FDB924))(this, enemy);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDBA9C))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDBC90))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDBDE0))(this);
	}
	template <typename T = void> T EffectStop() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDAD88))(this);
	}
	template <typename T = void> T EffectInit() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDAAD4))(this);
	}
	template <typename T = void> T IdleEffectStart() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDAC1C))(this);
	}
	template <typename T = void> T EffectOnSummon(uintptr_t summonTransform) {
		return ((T (*)(EnemyAISummon*, uintptr_t))(Il2CppBase() + 0x1FDB720))(this, summonTransform);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDBED8))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartEnemyAI() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDC0E4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(EnemyAISummon*, uintptr_t, bool))(Il2CppBase() + 0x1FDC0EC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAISummon*, float, bool))(Il2CppBase() + 0x1FDC0F8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDC104))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDC10C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDC114))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(EnemyAISummon*))(Il2CppBase() + 0x1FDC11C))(this);
	}

};

}
