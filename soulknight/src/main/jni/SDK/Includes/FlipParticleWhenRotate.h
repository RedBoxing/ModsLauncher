#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FlipParticleWhenRotate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FlipParticleWhenRotate"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& particle() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FlipParticleWhenRotate*))(Il2CppBase() + 0x45106B4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FlipParticleWhenRotate*))(Il2CppBase() + 0x451074C))(this);
	}

};

}
