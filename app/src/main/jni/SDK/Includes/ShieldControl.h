#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShieldControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShieldControl"));
	}

	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _skill_control() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& shield() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& shieldScale() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& oriColor() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& enabled() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Enable(bool b) {
		return ((T (*)(ShieldControl*, bool))(Il2CppBase() + 0x1B9A314))(this, b);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ShieldControl*))(Il2CppBase() + 0x1B96AD0))(this);
	}
	template <typename T = int32_t> T ProcessDamage(int32_t damage) {
		return ((T (*)(ShieldControl*, int32_t))(Il2CppBase() + 0x1B97254))(this, damage);
	}
	template <typename T = void> T Initb__7_0(uintptr_t e) {
		return ((T (*)(ShieldControl*, uintptr_t))(Il2CppBase() + 0x1B9C474))(this, e);
	}

};

}
