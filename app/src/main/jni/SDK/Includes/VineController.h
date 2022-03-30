#pragma once
#include "Il2Cpp/Il2Cpp.h"

class VineController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VineController"));
	}

	template <typename T = uintptr_t> T& clip_dead() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& dead_object() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& destory_on_dead() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppString*> T& dead_sorting_layer_name() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& hand() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = bool> T& strength() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& c12_ctrl() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& master_skin_idx() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& lock_facing() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& master_skin_bullets() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x4359E6C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x4359FA0))(this);
	}
	template <typename T = void> T SetAdditionLevel(int32_t level) {
		return ((T (*)(VineController*, int32_t))(Il2CppBase() + 0x435A3AC))(this, level);
	}
	template <typename T = void> T Passaway() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435A57C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435A5F0))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435A64C))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435A79C))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435A898))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435A99C))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(VineController*, int32_t))(Il2CppBase() + 0x435ADBC))(this, damage);
	}
	template <typename T = void> T HitBack() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435B02C))(this);
	}
	template <typename T = void> T ShowDeadAnimation() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435B0BC))(this);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(VineController*, uintptr_t, bool))(Il2CppBase() + 0x435B1A0))(this, source_object, sync);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435B50C))(this);
	}
	template <typename T = void> T CreateDeadObject() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435B5EC))(this);
	}
	template <typename T = void> T ReSetAtk() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435B820))(this);
	}
	template <typename T = void> T Atk() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435B87C))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(VineController*, int32_t))(Il2CppBase() + 0x435B8F0))(this, game_state);
	}
	template <typename T = void> T SetMaster(uintptr_t master) {
		return ((T (*)(VineController*, uintptr_t))(Il2CppBase() + 0x435B960))(this, master);
	}
	template <typename T = void> T OnSkinChanged(int32_t index) {
		return ((T (*)(VineController*, int32_t))(Il2CppBase() + 0x435BA64))(this, index);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435BB2C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435BB34))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435BB3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435BB44))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435BB4C))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435BB54))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(VineController*))(Il2CppBase() + 0x435BB5C))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0) {
		return ((T (*)(VineController*, int32_t))(Il2CppBase() + 0x435BB64))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(VineController*, int32_t))(Il2CppBase() + 0x435BB6C))(this, P0);
	}

};

}
