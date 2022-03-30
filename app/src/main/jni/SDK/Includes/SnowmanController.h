#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SnowmanController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SnowmanController"));
	}

	template <typename T = float> T& later_time() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& atk_range() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = int32_t> T& life_time() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& shadow_lock() {
		return *(T*)((uintptr_t)this + 0x190);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x42923B4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x42924E8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x42928C0))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x4292F60))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x42933D0))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x42927C0))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x4293830))(this);
	}
	template <typename T = void> T TurnCanShoot() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x4293B10))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x4293B74))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(SnowmanController*, int32_t))(Il2CppBase() + 0x4293E84))(this, damage);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x42940DC))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(SnowmanController*, int32_t))(Il2CppBase() + 0x42942AC))(this, game_state);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x429448C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x4294494))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x429449C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x42944A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x42944AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(SnowmanController*))(Il2CppBase() + 0x42944B4))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0) {
		return ((T (*)(SnowmanController*, int32_t))(Il2CppBase() + 0x42944BC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(SnowmanController*, int32_t))(Il2CppBase() + 0x42944C4))(this, P0);
	}

};

}
