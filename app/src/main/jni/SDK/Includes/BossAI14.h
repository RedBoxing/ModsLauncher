#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI14"));
	}

	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& bullet03() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& bullet04() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uintptr_t> T& bullet05() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& bullet06() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& h1() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& h2() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& h3() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& energy_ball() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& star() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& body() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = bool> T& root() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = bool> T& bulletStay() {
		return *(T*)((uintptr_t)this + 0x321);
	}
	template <typename T = bool> T& inAtk03() {
		return *(T*)((uintptr_t)this + 0x322);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2944094))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2944330))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x294469C))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x29447C8))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI14*, int32_t))(Il2CppBase() + 0x29448FC))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x29450C0))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI14*, int32_t, uintptr_t))(Il2CppBase() + 0x29453EC))(this, damage, source_object);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(BossAI14*, uintptr_t, bool))(Il2CppBase() + 0x294559C))(this, source_object, sync);
	}
	template <typename T = void> T Reborn() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x294568C))(this);
	}
	template <typename T = void> T TurnPlayer() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2945748))(this);
	}
	template <typename T = void> T StartAtk01() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2944A20))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2945838))(this);
	}
	template <typename T = void> T StartAtk02() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2944BAC))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2945F68))(this);
	}
	template <typename T = uintptr_t> T Atk02BulletTimer() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2946170))(this);
	}
	template <typename T = uintptr_t> T Atk02BulletMove(uintptr_t the_bullet) {
		return ((T (*)(BossAI14*, uintptr_t))(Il2CppBase() + 0x2946224))(this, the_bullet);
	}
	template <typename T = void> T StartAtk03() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2944D08))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x294635C))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x29465D4))(this);
	}
	template <typename T = void> T StartAtk04() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2944DE4))(this);
	}
	template <typename T = void> T InAtk04(int32_t count) {
		return ((T (*)(BossAI14*, int32_t))(Il2CppBase() + 0x2945BB8))(this, count);
	}
	template <typename T = void> T StartAtk05() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2944E88))(this);
	}
	template <typename T = void> T InAtk05() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2946724))(this);
	}
	template <typename T = void> T StartAtk06() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2944FA4))(this);
	}
	template <typename T = void> T InAtk06() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2946B94))(this);
	}
	template <typename T = uintptr_t> T Attacking06() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2946C04))(this);
	}
	template <typename T = void> T Dizzy(float value1, bool isFreeze) {
		return ((T (*)(BossAI14*, float, bool))(Il2CppBase() + 0x2946CE4))(this, value1, isFreeze);
	}
	template <typename T = void> T ShowMiddleFoot() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2946E70))(this);
	}
	template <typename T = bool> T GetForce(Il2CppVector2 value1, float value2, float limit, bool ignoreDizzy) {
		return ((T (*)(BossAI14*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x2946F64))(this, value1, value2, limit, ignoreDizzy);
	}
	template <typename T = float> T GetAngle(uintptr_t trans) {
		return ((T (*)(BossAI14*, uintptr_t))(Il2CppBase() + 0x2947054))(this, trans);
	}
	template <typename T = void> T CreateHpBar() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x2947230))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x29472B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x29472C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x29472C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI14*, int32_t))(Il2CppBase() + 0x29472D0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x29472D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI14*, int32_t, uintptr_t))(Il2CppBase() + 0x29472E0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(BossAI14*, uintptr_t, bool))(Il2CppBase() + 0x29472E8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Reborn() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x29472F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_TurnPlayer() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x29472FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(BossAI14*, float, bool))(Il2CppBase() + 0x2947304))(this, P0, P1);
	}
	template <typename T = bool> T iFixBaseProxy_GetForce(Il2CppVector2 P0, float P1, float P2, bool P3) {
		return ((T (*)(BossAI14*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x2947310))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T iFixBaseProxy_CreateHpBar() {
		return ((T (*)(BossAI14*))(Il2CppBase() + 0x294731C))(this);
	}

};

}
