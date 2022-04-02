#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NpcSummon01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcSummon01"));
	}

	template <typename T = int32_t> T& life_time() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& hand_tf() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& hand() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& atk_range() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = void*> T& onDeadOrDestroyAlive() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& shadow_lock() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& clipDead() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& lvStarTemplate() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& starNum() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& _lvStarNode() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = bool> T& is_melee() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> T& atk_mode() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = float> T& focus_time() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = int32_t> T& back_min() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = int32_t> T& back_max() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = bool> T& is_charge() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}

	template <typename T = void> T add_onDeadOrDestroyAlive(void* value) {
		return ((T (*)(NpcSummon01*, void*))(Il2CppBase() + 0x4532EA4))(this, value);
	}
	template <typename T = void> T remove_onDeadOrDestroyAlive(void* value) {
		return ((T (*)(NpcSummon01*, void*))(Il2CppBase() + 0x4532F94))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4533084))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4533210))(this);
	}
	template <typename T = void> T NewLvStar() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4533798))(this);
	}
	template <typename T = void> T MoveLvStar() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x45339A8))(this);
	}
	template <typename T = void> T RemoveAllStars() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4533B70))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4533C44))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x45342EC))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x453494C))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4535274))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4535A4C))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4535B50))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(NpcSummon01*, int32_t))(Il2CppBase() + 0x4536050))(this, damage);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x45362A8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4536528))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(NpcSummon01*, int32_t))(Il2CppBase() + 0x45365E8))(this, game_state);
	}
	template <typename T = void> T MeleeScout() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4534364))(this);
	}
	template <typename T = void> T MeleeRunReflection() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x45349C4))(this);
	}
	template <typename T = void> T MeleeShootReflection() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x45352EC))(this);
	}
	template <typename T = void> T RemoteScout() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x45344B8))(this);
	}
	template <typename T = void> T RemoteRunReflection() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4534E24))(this);
	}
	template <typename T = void> T RemoteShootReflection() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x45355D4))(this);
	}
	template <typename T = void> T ResetIsCharge(uintptr_t weapon) {
		return ((T (*)(NpcSummon01*, uintptr_t))(Il2CppBase() + 0x4533644))(this, weapon);
	}
	template <typename T = void> T EndAtk() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x45367A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4536858))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4536860))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4536868))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4536870))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4536878))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4536880))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(NpcSummon01*))(Il2CppBase() + 0x4536888))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0) {
		return ((T (*)(NpcSummon01*, int32_t))(Il2CppBase() + 0x4536890))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(NpcSummon01*, int32_t))(Il2CppBase() + 0x4536898))(this, P0);
	}

};

}
