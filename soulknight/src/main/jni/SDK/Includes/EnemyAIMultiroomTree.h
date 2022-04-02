#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIMultiroomTree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIMultiroomTree"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& dropList() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& fallLeaves() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& fall_leaves_clip() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& damageText() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = bool> T& can_drop() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = float> T& dropCD() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = uintptr_t> T& drop_points() {
		return *(T*)((uintptr_t)this + 0x260);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIMultiroomTree*))(Il2CppBase() + 0x2A30CB0))(this);
	}
	template <typename T = void> T RemoveItem3() {
		return ((T (*)(EnemyAIMultiroomTree*))(Il2CppBase() + 0x2A30F54))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(EnemyAIMultiroomTree*))(Il2CppBase() + 0x2A310EC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(EnemyAIMultiroomTree*))(Il2CppBase() + 0x2A311D0))(this);
	}
	template <typename T = void> T SetUpAttribution() {
		return ((T (*)(EnemyAIMultiroomTree*))(Il2CppBase() + 0x2A312B4))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAIMultiroomTree*))(Il2CppBase() + 0x2A3139C))(this);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(EnemyAIMultiroomTree*, uintptr_t, bool))(Il2CppBase() + 0x2A313F8))(this, source_object, sync);
	}
	template <typename T = void> T EatenBy(uintptr_t eater) {
		return ((T (*)(EnemyAIMultiroomTree*, uintptr_t))(Il2CppBase() + 0x2A31470))(this, eater);
	}
	template <typename T = void> T SetBodyHit() {
		return ((T (*)(EnemyAIMultiroomTree*))(Il2CppBase() + 0x2A314E0))(this);
	}
	template <typename T = void> T HitBack() {
		return ((T (*)(EnemyAIMultiroomTree*))(Il2CppBase() + 0x2A3153C))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(EnemyAIMultiroomTree*, int32_t, uintptr_t))(Il2CppBase() + 0x2A31598))(this, damage, source_object);
	}
	template <typename T = void> T SyncGetHurt(int32_t damage) {
		return ((T (*)(EnemyAIMultiroomTree*, int32_t))(Il2CppBase() + 0x2A32194))(this, damage);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAIMultiroomTree*, float, bool))(Il2CppBase() + 0x2A32244))(this, duration, isFreeze);
	}
	template <typename T = void> T CreateHurtText(int32_t damage) {
		return ((T (*)(EnemyAIMultiroomTree*, int32_t))(Il2CppBase() + 0x2A322C8))(this, damage);
	}
	template <typename T = void> T ShowHurtText(int32_t damage) {
		return ((T (*)(EnemyAIMultiroomTree*, int32_t))(Il2CppBase() + 0x2A319B0))(this, damage);
	}
	template <typename T = void> T DropItem() {
		return ((T (*)(EnemyAIMultiroomTree*))(Il2CppBase() + 0x2A31C58))(this);
	}
	template <typename T = void> T OnGetCommonMessage(uintptr_t e) {
		return ((T (*)(EnemyAIMultiroomTree*, uintptr_t))(Il2CppBase() + 0x2A32824))(this, e);
	}
	template <typename T = void> T SyncDropItem(int32_t dropPointIndex, int32_t dropIndex) {
		return ((T (*)(EnemyAIMultiroomTree*, int32_t, int32_t))(Il2CppBase() + 0x2A32A54))(this, dropPointIndex, dropIndex);
	}
	template <typename T = void> T CreateItem(uintptr_t proto, int32_t index) {
		return ((T (*)(EnemyAIMultiroomTree*, uintptr_t, int32_t))(Il2CppBase() + 0x2A32474))(this, proto, index);
	}
	template <typename T = void> T RemoveSpecialDrop(uintptr_t proto, uintptr_t intance, uintptr_t leaves) {
		return ((T (*)(EnemyAIMultiroomTree*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A32B30))(this, proto, intance, leaves);
	}
	template <typename T = uintptr_t> T RefreshDrop() {
		return ((T (*)(EnemyAIMultiroomTree*))(Il2CppBase() + 0x2A32770))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpAttribution() {
		return ((T (*)(EnemyAIMultiroomTree*))(Il2CppBase() + 0x2A330E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAIMultiroomTree*))(Il2CppBase() + 0x2A330E8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(EnemyAIMultiroomTree*, uintptr_t, bool))(Il2CppBase() + 0x2A330F0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_EatenBy(uintptr_t P0) {
		return ((T (*)(EnemyAIMultiroomTree*, uintptr_t))(Il2CppBase() + 0x2A330FC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetBodyHit() {
		return ((T (*)(EnemyAIMultiroomTree*))(Il2CppBase() + 0x2A33104))(this);
	}
	template <typename T = void> T iFixBaseProxy_HitBack() {
		return ((T (*)(EnemyAIMultiroomTree*))(Il2CppBase() + 0x2A3310C))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(EnemyAIMultiroomTree*, int32_t, uintptr_t))(Il2CppBase() + 0x2A33114))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SyncGetHurt(int32_t P0) {
		return ((T (*)(EnemyAIMultiroomTree*, int32_t))(Il2CppBase() + 0x2A3311C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAIMultiroomTree*, float, bool))(Il2CppBase() + 0x2A33124))(this, P0, P1);
	}

};

}
