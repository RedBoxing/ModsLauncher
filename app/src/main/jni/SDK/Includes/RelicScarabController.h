#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicScarabController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicScarabController"));
	}

	template <typename T = uintptr_t> T& bulletInfo() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& triggerRange() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& atkCd() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = Il2CppString*> T& atkAnimKey() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = int32_t> T& atkProbability() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& atkReleaseTransform() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = Il2CppVector3> T& atkPositionOffset() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& attackClip() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& _atkAnimId() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& shadow_lock() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = Il2CppVector2> T& target_point() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& rg_random() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = int32_t> T& life_time() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& atk_range() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = uintptr_t> T& effect_show_up_plague() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42C7E94))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42C7FDC))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42C83C8))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42C8B40))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42C8FB0))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42C9410))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42C8A68))(this);
	}
	template <typename T = void> T ReleaseBullet() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42C9798))(this);
	}
	template <typename T = void> T TurnCanShoot() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42C9AA4))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(RelicScarabController*, int32_t))(Il2CppBase() + 0x42C9B08))(this, damage);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42C9D60))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(RelicScarabController*, int32_t))(Il2CppBase() + 0x42C9F30))(this, game_state);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42CA160))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42CA168))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42CA170))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42CA178))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42CA180))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(RelicScarabController*))(Il2CppBase() + 0x42CA188))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0) {
		return ((T (*)(RelicScarabController*, int32_t))(Il2CppBase() + 0x42CA190))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(RelicScarabController*, int32_t))(Il2CppBase() + 0x42CA198))(this, P0);
	}

};

}
