#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI16Horse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI16Horse"));
	}

	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& _master() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& h2() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uintptr_t> T& point_1() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& point_2() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = bool> T& inAtk03() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}

	template <typename T = uintptr_t> T get_master() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x294FAE0))(this);
	}
	template <typename T = void> T set_master(uintptr_t value) {
		return ((T (*)(BossAI16Horse*, uintptr_t))(Il2CppBase() + 0x294D50C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x294FB40))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x294FD8C))(this);
	}
	template <typename T = void> T SetUpAttribution() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x294FE98))(this);
	}
	template <typename T = void> T StartEnemyAI() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x294FF80))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x29502F8))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2950368))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI16Horse*, int32_t))(Il2CppBase() + 0x295045C))(this, index);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2950878))(this);
	}
	template <typename T = void> T Angry() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x294D680))(this);
	}
	template <typename T = void> T BossAngry() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2950BE4))(this);
	}
	template <typename T = bool> T GetForce(Il2CppVector2 value1, float value2, float limit, bool ignoreDizzy) {
		return ((T (*)(BossAI16Horse*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x2950CD0))(this, value1, value2, limit, ignoreDizzy);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI16Horse*, int32_t, uintptr_t))(Il2CppBase() + 0x2950DB8))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2950F3C))(this);
	}
	template <typename T = void> T TurnPlayer() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x29510D8))(this);
	}
	template <typename T = void> T OnBossRoomClear() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x29511C8))(this);
	}
	template <typename T = void> T ShowTransferGate() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2951224))(this);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(BossAI16Horse*, float, bool))(Il2CppBase() + 0x2951280))(this, duration, isFreeze);
	}
	template <typename T = void> T InAttack01() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x295140C))(this);
	}
	template <typename T = void> T StartAtk02() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x29505A4))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2951810))(this);
	}
	template <typename T = void> T EndAttack02() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2951BAC))(this);
	}
	template <typename T = void> T StartAtk03() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2950198))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2951D74))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2951FEC))(this);
	}
	template <typename T = void> T SetTargetPoint(Il2CppVector3 targetPoint) {
		return ((T (*)(BossAI16Horse*, Il2CppVector3))(Il2CppBase() + 0x294D594))(this, targetPoint);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2952144))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpAttribution() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x295214C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartEnemyAI() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2952154))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x295215C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2952164))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI16Horse*, int32_t))(Il2CppBase() + 0x295216C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2952174))(this);
	}
	template <typename T = void> T iFixBaseProxy_BossAngry() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x295217C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_GetForce(Il2CppVector2 P0, float P1, float P2, bool P3) {
		return ((T (*)(BossAI16Horse*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x2952184))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI16Horse*, int32_t, uintptr_t))(Il2CppBase() + 0x2952190))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x2952198))(this);
	}
	template <typename T = void> T iFixBaseProxy_TurnPlayer() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x29521A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnBossRoomClear() {
		return ((T (*)(BossAI16Horse*))(Il2CppBase() + 0x29521A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(BossAI16Horse*, float, bool))(Il2CppBase() + 0x29521B0))(this, P0, P1);
	}

};

}
