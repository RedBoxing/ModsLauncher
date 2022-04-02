#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIPumpkinHouse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIPumpkinHouse"));
	}

	template <typename T = uintptr_t> T& summonClip() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& summonPrefabs() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& generatePositions() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = int32_t> T& maxSummonCount() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = int32_t> T& maxCount() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = int32_t> T& summonCount() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = int32_t> T& aliveSummonCount() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = uintptr_t> T& deadEffect() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = int32_t> static T& Atk1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _summonCheckWait() {
		return *(T*)((uintptr_t)this + 0x270);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A35C88))(this);
	}
	template <typename T = void> T SetUpAttribution() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A35E40))(this);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAIPumpkinHouse*, float, bool))(Il2CppBase() + 0x2A35EF8))(this, duration, isFreeze);
	}
	template <typename T = void> T EndDizzy() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A35FDC))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A36044))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A360A0))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A360FC))(this);
	}
	template <typename T = void> T SearchTarget() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A36220))(this);
	}
	template <typename T = void> T Summon() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A366EC))(this);
	}
	template <typename T = uintptr_t> T SummonCountCheck() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A36BB8))(this);
	}
	template <typename T = void> T OnSummonDead(uintptr_t enemy) {
		return ((T (*)(EnemyAIPumpkinHouse*, uintptr_t))(Il2CppBase() + 0x2A36C98))(this, enemy);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A36E10))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A37004))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A37154))(this);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(EnemyAIPumpkinHouse*, uintptr_t, bool))(Il2CppBase() + 0x2A3724C))(this, source_object, sync);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A372F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpAttribution() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A37520))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAIPumpkinHouse*, float, bool))(Il2CppBase() + 0x2A37528))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A37534))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A3753C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A37544))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A3754C))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(EnemyAIPumpkinHouse*))(Il2CppBase() + 0x2A37554))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(EnemyAIPumpkinHouse*, uintptr_t, bool))(Il2CppBase() + 0x2A3755C))(this, P0, P1);
	}

};

}
