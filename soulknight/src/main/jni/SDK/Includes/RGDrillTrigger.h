#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGDrillTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGDrillTrigger"));
	}

	template <typename T = float> T& damageInterval() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& col() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& can_atk() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& makeConsume() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _hits() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGDrillTrigger*))(Il2CppBase() + 0x221C3D8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGDrillTrigger*))(Il2CppBase() + 0x221C470))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RGDrillTrigger*))(Il2CppBase() + 0x221C4D8))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGDrillTrigger*))(Il2CppBase() + 0x221C53C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_hits() {
		return ((T (*)(RGDrillTrigger*))(Il2CppBase() + 0x221C5EC))(this);
	}
	template <typename T = uintptr_t> T MakeDamage() {
		return ((T (*)(RGDrillTrigger*))(Il2CppBase() + 0x221C68C))(this);
	}
	template <typename T = void> T ContactWith(uintptr_t other) {
		return ((T (*)(RGDrillTrigger*, uintptr_t))(Il2CppBase() + 0x221C76C))(this, other);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGDrillTrigger*, uintptr_t))(Il2CppBase() + 0x221D390))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGDrillTrigger*))(Il2CppBase() + 0x221D78C))(this);
	}

};

}
