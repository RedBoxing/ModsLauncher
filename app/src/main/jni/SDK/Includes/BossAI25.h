#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI25
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI25"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& extraBodyRenderers() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = float> T& showGateDelay() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = bool> T& isKinematic() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = bool> T& ignoreSkillCD() {
		return *(T*)((uintptr_t)this + 0x2CD);
	}
	template <typename T = bool> T& prepared() {
		return *(T*)((uintptr_t)this + 0x2CE);
	}
	template <typename T = uintptr_t> T& _skillProvider() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& _hurtProcessor() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = int32_t> T& currentSkillIndex() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& onBossRoomClear() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _bodyRendererMaterials() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& _bodyMaterial() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = void*> T& onStart() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = void*> T& onRunReflection() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& _latestTarget() {
		return *(T*)((uintptr_t)this + 0x310);
	}

	template <typename T = void> T add_onStart(void* value) {
		return ((T (*)(BossAI25*, void*))(Il2CppBase() + 0x1DE17A4))(this, value);
	}
	template <typename T = void> T remove_onStart(void* value) {
		return ((T (*)(BossAI25*, void*))(Il2CppBase() + 0x1DE1894))(this, value);
	}
	template <typename T = int32_t> T get_ExtraBodyRendererLength() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE1984))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE19F4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE1D40))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE1DF0))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE1EAC))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE1F60))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE22EC))(this);
	}
	template <typename T = void> T OnBossRoomClear() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE2530))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI25*, int32_t))(Il2CppBase() + 0x1DE2754))(this, index);
	}
	template <typename T = void> T ResetAI() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE2CB8))(this);
	}
	template <typename T = void> T MoveTo(Il2CppVector3 pos, uintptr_t finished) {
		return ((T (*)(BossAI25*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1DE2E70))(this, pos, finished);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE3054))(this);
	}
	template <typename T = void> T UpdateSkillState() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE30D4))(this);
	}
	template <typename T = void> T SetBodyHit() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE3588))(this);
	}
	template <typename T = void> T HitBack() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE36B0))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t sourceObject) {
		return ((T (*)(BossAI25*, int32_t, uintptr_t))(Il2CppBase() + 0x1DE3800))(this, damage, sourceObject);
	}
	template <typename T = void> T BaseGetHurt(int32_t damage, uintptr_t sourceObject) {
		return ((T (*)(BossAI25*, int32_t, uintptr_t))(Il2CppBase() + 0x1DE39BC))(this, damage, sourceObject);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(BossAI25*, uintptr_t, bool))(Il2CppBase() + 0x1DE3A44))(this, source_object, sync);
	}
	template <typename T = void> T OnGameStateChangePhysics(int32_t game_state) {
		return ((T (*)(BossAI25*, int32_t))(Il2CppBase() + 0x1DE3AF8))(this, game_state);
	}
	template <typename T = void> T Awakeb__16_0(uintptr_t e) {
		return ((T (*)(BossAI25*, uintptr_t))(Il2CppBase() + 0x1DE3C98))(this, e);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE3E88))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE3E90))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE3E98))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE3EA0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE3EA8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnBossRoomClear() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE3EB0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI25*, int32_t))(Il2CppBase() + 0x1DE3EB8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE3EC0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetBodyHit() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE3EC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_HitBack() {
		return ((T (*)(BossAI25*))(Il2CppBase() + 0x1DE3ED0))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI25*, int32_t, uintptr_t))(Il2CppBase() + 0x1DE3ED8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(BossAI25*, uintptr_t, bool))(Il2CppBase() + 0x1DE3EE0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChangePhysics(int32_t P0) {
		return ((T (*)(BossAI25*, int32_t))(Il2CppBase() + 0x1DE3EEC))(this, P0);
	}

};

}
