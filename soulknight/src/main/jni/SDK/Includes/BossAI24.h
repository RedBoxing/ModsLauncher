#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI24
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI24"));
	}

	template <typename T = uintptr_t> T& atk3Bullet() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& atk4() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = float> T& burrowDisplacement() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& burrowMoveCurve() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = float> T& burrowDuration() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = float> T& nodeSize() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = uintptr_t> T& burrowBullet() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = int32_t> T& burrowBulletCount() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& snakeModel() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = int32_t> T& eatRestoreHpAmount() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = float> T& thornDuration() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = uintptr_t> T& thornBullet() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = float> T& thornLifeTime() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& thornEndBullet() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = int32_t> T& thornEndBulletCount() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = int32_t> T& thornEndBulletCountAngry() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = uintptr_t> T& iceNailModel() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = uintptr_t> T& iceStone() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = uintptr_t> T& atk3Particle() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = uintptr_t> T& _currentState() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = uintptr_t> T& _burrowCounter() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = Il2CppVector3> T& _burrowInitPosition() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = Il2CppVector3> T& _burrowTargetPosition() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = uintptr_t> T& _triggerCollider() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = uintptr_t> T& _imgTransform() {
		return *(T*)((uintptr_t)this + 0x370);
	}
	template <typename T = uintptr_t> T& _thornCounter() {
		return *(T*)((uintptr_t)this + 0x378);
	}
	template <typename T = int32_t> static T& AnimIdAtk2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AnimIdAtk1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& AnimIdRun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& AnimIdAtk3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& AnimIdAtk4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& _thornEndModels() {
		return *(T*)((uintptr_t)this + 0x380);
	}

	template <typename T = uintptr_t> T get_DamageGeneral() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DD7C68))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DD7D20))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DD7E88))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DD89EC))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DD8A5C))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI24*, int32_t))(Il2CppBase() + 0x1DD8CC4))(this, index);
	}
	template <typename T = void> T StartEnemyAI() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DD9240))(this);
	}
	template <typename T = void> T OutGround() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DD8E70))(this);
	}
	template <typename T = void> T OutGroundEnd() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDA198))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDA1F4))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t sourceObject) {
		return ((T (*)(BossAI24*, int32_t, uintptr_t))(Il2CppBase() + 0x1DDA4EC))(this, damage, sourceObject);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDA664))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDACE0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDC004))(this);
	}
	template <typename T = void> T ReleaseUpdate() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDCF70))(this);
	}
	template <typename T = void> T UndergroundUpdate() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDBA38))(this);
	}
	template <typename T = void> T BurrowMoveUpdate() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDB0B0))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDD324))(this);
	}
	template <typename T = void> T InAtk01End() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDDC7C))(this);
	}
	template <typename T = void> T ToUndergroundEnd() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDE42C))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDE4F0))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDE6D8))(this);
	}
	template <typename T = void> T InAtk04End() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDEA78))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDEB28))(this);
	}
	template <typename T = void> T ShowUp() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDEC3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDEEA8))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDEEB0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDEEB8))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI24*, int32_t))(Il2CppBase() + 0x1DDEEC0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_StartEnemyAI() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDEEC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDEED0))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI24*, int32_t, uintptr_t))(Il2CppBase() + 0x1DDEED8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDEEE0))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDEEE8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(BossAI24*))(Il2CppBase() + 0x1DDEEF0))(this);
	}

};

}
