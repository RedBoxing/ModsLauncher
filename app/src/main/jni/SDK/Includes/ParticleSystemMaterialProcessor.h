#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ParticleSystemMaterialProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParticleSystemMaterialProcessor"));
	}

	template <typename T = uintptr_t> T& particleSystem() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _particleSystemRenderer() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ParticleSystemMaterialProcessor*))(Il2CppBase() + 0x4571278))(this);
	}
	template <typename T = void> T SetMaterial(uintptr_t material) {
		return ((T (*)(ParticleSystemMaterialProcessor*, uintptr_t))(Il2CppBase() + 0x4571320))(this, material);
	}

};

}
