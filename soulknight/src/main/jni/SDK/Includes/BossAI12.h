#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI12"));
	}

	template <typename T = uintptr_t> T& ai_parent() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& bullet03() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uintptr_t> T& bullet04() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& bullet05() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& gun_point() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = int32_t> T& atk_count() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAD034))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAD200))(this);
	}
	template <typename T = uintptr_t> T DetectingBossInfo() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAD2B0))(this);
	}
	template <typename T = void> T SetUpAttribution() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAD390))(this);
	}
	template <typename T = void> T SetBossParent(uintptr_t value) {
		return ((T (*)(BossAI12*, uintptr_t))(Il2CppBase() + 0x2EAD468))(this, value);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAD4DC))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAD54C))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI12*, int32_t))(Il2CppBase() + 0x2EAD654))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EADA2C))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI12*, int32_t, uintptr_t))(Il2CppBase() + 0x2EADDB0))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EADF60))(this);
	}
	template <typename T = void> T OnBossRoomClear() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAE550))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAE7E0))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAEB90))(this);
	}
	template <typename T = void> T EndAtk02() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAEE98))(this);
	}
	template <typename T = void> T OnAtk2Angry() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAF078))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAF3C0))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAF7B8))(this);
	}
	template <typename T = void> T EndAtk04() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAFAB0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAFB64))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpAttribution() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAFB6C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAFB74))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAFB7C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI12*, int32_t))(Il2CppBase() + 0x2EAFB84))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAFB8C))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI12*, int32_t, uintptr_t))(Il2CppBase() + 0x2EAFB94))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAFB9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnBossRoomClear() {
		return ((T (*)(BossAI12*))(Il2CppBase() + 0x2EAFBA4))(this);
	}

};

}
