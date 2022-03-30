#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIMultiroomBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIMultiroomBase"));
	}

	template <typename T = bool> T& show_hurt_text() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = bool> T& change_white_when_hurt() {
		return *(T*)((uintptr_t)this + 0x239);
	}
	template <typename T = bool> T& play_anim_when_hurt() {
		return *(T*)((uintptr_t)this + 0x23A);
	}
	template <typename T = uintptr_t> T& damageText() {
		return *(T*)((uintptr_t)this + 0x240);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIMultiroomBase*))(Il2CppBase() + 0x2A2EE5C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(EnemyAIMultiroomBase*))(Il2CppBase() + 0x2A2EF90))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(EnemyAIMultiroomBase*))(Il2CppBase() + 0x2A2F074))(this);
	}
	template <typename T = void> T SetUpAttribution() {
		return ((T (*)(EnemyAIMultiroomBase*))(Il2CppBase() + 0x2A2F158))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAIMultiroomBase*))(Il2CppBase() + 0x2A2F240))(this);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(EnemyAIMultiroomBase*, uintptr_t, bool))(Il2CppBase() + 0x2A2F29C))(this, source_object, sync);
	}
	template <typename T = void> T EatenBy(uintptr_t eater) {
		return ((T (*)(EnemyAIMultiroomBase*, uintptr_t))(Il2CppBase() + 0x2A2F314))(this, eater);
	}
	template <typename T = void> T SetBodyHit() {
		return ((T (*)(EnemyAIMultiroomBase*))(Il2CppBase() + 0x2A2F384))(this);
	}
	template <typename T = void> T HitBack() {
		return ((T (*)(EnemyAIMultiroomBase*))(Il2CppBase() + 0x2A2F3E0))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(EnemyAIMultiroomBase*, int32_t, uintptr_t))(Il2CppBase() + 0x2A2F484))(this, damage, source_object);
	}
	template <typename T = bool> T GetHurtNeedReturn(int32_t damage, uintptr_t source_object) {
		return ((T (*)(EnemyAIMultiroomBase*, int32_t, uintptr_t))(Il2CppBase() + 0x2A2F7B8))(this, damage, source_object);
	}
	template <typename T = void> T SyncGetHurt(int32_t damage) {
		return ((T (*)(EnemyAIMultiroomBase*, int32_t))(Il2CppBase() + 0x2A2FC48))(this, damage);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAIMultiroomBase*, float, bool))(Il2CppBase() + 0x2A2FE5C))(this, duration, isFreeze);
	}
	template <typename T = void> T ShowHurtText(int32_t damage) {
		return ((T (*)(EnemyAIMultiroomBase*, int32_t))(Il2CppBase() + 0x2A2F9A0))(this, damage);
	}
	template <typename T = void> T CreateHurtText(int32_t damage) {
		return ((T (*)(EnemyAIMultiroomBase*, int32_t))(Il2CppBase() + 0x2A2FEE0))(this, damage);
	}
	template <typename T = void> T OnGetCommonMessage(uintptr_t e) {
		return ((T (*)(EnemyAIMultiroomBase*, uintptr_t))(Il2CppBase() + 0x2A30084))(this, e);
	}
	template <typename T = void> T iFixBaseProxy_SetUpAttribution() {
		return ((T (*)(EnemyAIMultiroomBase*))(Il2CppBase() + 0x2A3016C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAIMultiroomBase*))(Il2CppBase() + 0x2A30174))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(EnemyAIMultiroomBase*, uintptr_t, bool))(Il2CppBase() + 0x2A3017C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_EatenBy(uintptr_t P0) {
		return ((T (*)(EnemyAIMultiroomBase*, uintptr_t))(Il2CppBase() + 0x2A30188))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetBodyHit() {
		return ((T (*)(EnemyAIMultiroomBase*))(Il2CppBase() + 0x2A30190))(this);
	}
	template <typename T = void> T iFixBaseProxy_HitBack() {
		return ((T (*)(EnemyAIMultiroomBase*))(Il2CppBase() + 0x2A30198))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(EnemyAIMultiroomBase*, int32_t, uintptr_t))(Il2CppBase() + 0x2A301A0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SyncGetHurt(int32_t P0) {
		return ((T (*)(EnemyAIMultiroomBase*, int32_t))(Il2CppBase() + 0x2A301A8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAIMultiroomBase*, float, bool))(Il2CppBase() + 0x2A301B0))(this, P0, P1);
	}

};

}
