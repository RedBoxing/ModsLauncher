#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ParticleRotate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParticleRotate"));
	}

	template <typename T = uintptr_t> T& particleSystem() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Update() {
		return ((T (*)(ParticleRotate*))(Il2CppBase() + 0x4570EB4))(this);
	}

};

}
