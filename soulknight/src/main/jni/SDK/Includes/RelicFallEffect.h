#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicFallEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicFallEffect"));
	}

	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& scaleTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _material() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RelicFallEffect*))(Il2CppBase() + 0x42C1980))(this);
	}
	template <typename T = void> T Init(uintptr_t sprite, float scale) {
		return ((T (*)(RelicFallEffect*, uintptr_t, float))(Il2CppBase() + 0x42C0D08))(this, sprite, scale);
	}
	template <typename T = void> T SetMaterial(uintptr_t material) {
		return ((T (*)(RelicFallEffect*, uintptr_t))(Il2CppBase() + 0x42C0E40))(this, material);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RelicFallEffect*))(Il2CppBase() + 0x42C19FC))(this);
	}

};

}
