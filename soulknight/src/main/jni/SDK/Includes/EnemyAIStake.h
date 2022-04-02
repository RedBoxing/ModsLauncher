#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIStake
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIStake"));
	}

	template <typename T = uintptr_t> T& damageText() {
		return *(T*)((uintptr_t)this + 0x238);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIStake*))(Il2CppBase() + 0x1FD6648))(this);
	}
	template <typename T = void> T SetUpAttribution() {
		return ((T (*)(EnemyAIStake*))(Il2CppBase() + 0x1FD677C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAIStake*))(Il2CppBase() + 0x1FD6864))(this);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(EnemyAIStake*, uintptr_t, bool))(Il2CppBase() + 0x1FD68C0))(this, source_object, sync);
	}
	template <typename T = void> T EatenBy(uintptr_t eater) {
		return ((T (*)(EnemyAIStake*, uintptr_t))(Il2CppBase() + 0x1FD6938))(this, eater);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(EnemyAIStake*, int32_t, uintptr_t))(Il2CppBase() + 0x1FD6B18))(this, damage, source_object);
	}
	template <typename T = void> T SyncGetHurt(int32_t damage) {
		return ((T (*)(EnemyAIStake*, int32_t))(Il2CppBase() + 0x1FD7370))(this, damage);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAIStake*, float, bool))(Il2CppBase() + 0x1FD7420))(this, duration, isFreeze);
	}
	template <typename T = void> T ShowHurtText(int32_t damage) {
		return ((T (*)(EnemyAIStake*, int32_t))(Il2CppBase() + 0x1FD70C8))(this, damage);
	}
	template <typename T = void> T CreateHurtText(int32_t damage) {
		return ((T (*)(EnemyAIStake*, int32_t))(Il2CppBase() + 0x1FD74A4))(this, damage);
	}
	template <typename T = void> T DestroyEvent() {
		return ((T (*)(EnemyAIStake*))(Il2CppBase() + 0x1FD6A4C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpAttribution() {
		return ((T (*)(EnemyAIStake*))(Il2CppBase() + 0x1FD76B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAIStake*))(Il2CppBase() + 0x1FD76B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(EnemyAIStake*, uintptr_t, bool))(Il2CppBase() + 0x1FD76C0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_EatenBy(uintptr_t P0) {
		return ((T (*)(EnemyAIStake*, uintptr_t))(Il2CppBase() + 0x1FD76CC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(EnemyAIStake*, int32_t, uintptr_t))(Il2CppBase() + 0x1FD76D4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SyncGetHurt(int32_t P0) {
		return ((T (*)(EnemyAIStake*, int32_t))(Il2CppBase() + 0x1FD76DC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAIStake*, float, bool))(Il2CppBase() + 0x1FD76E4))(this, P0, P1);
	}

};

}
