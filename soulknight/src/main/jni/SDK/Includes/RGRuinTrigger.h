#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGRuinTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGRuinTrigger"));
	}

	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& repel() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T get_sourceObject() {
		return ((T (*)(RGRuinTrigger*))(Il2CppBase() + 0x1C7E418))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGRuinTrigger*, uintptr_t))(Il2CppBase() + 0x1C7E47C))(this, other);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGRuinTrigger*, uintptr_t, bool))(Il2CppBase() + 0x1C7EAC8))(this, other, isCritic);
	}
	template <typename T = void> T Enlarge() {
		return ((T (*)(RGRuinTrigger*))(Il2CppBase() + 0x1C7EB40))(this);
	}

};

}
