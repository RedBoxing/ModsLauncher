#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ParticleScaleFollower
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParticleScaleFollower"));
	}

	template <typename T = uintptr_t> T& particle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& initScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& followTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Update() {
		return ((T (*)(ParticleScaleFollower*))(Il2CppBase() + 0x4570F90))(this);
	}

};

}
