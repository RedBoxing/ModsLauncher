#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ParticleSystemMaskSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParticleSystemMaskSettings"));
	}

	template <typename T = uintptr_t> T& _psr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& maskInteraction() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_psr() {
		return ((T (*)(ParticleSystemMaskSettings*))(Il2CppBase() + 0x45710BC))(this);
	}
	template <typename T = void> T Set() {
		return ((T (*)(ParticleSystemMaskSettings*))(Il2CppBase() + 0x4571190))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ParticleSystemMaskSettings*))(Il2CppBase() + 0x4571210))(this);
	}

};

}
