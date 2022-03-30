#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ParticleOrderFollower
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParticleOrderFollower"));
	}

	template <typename T = uintptr_t> T& followRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _particleSystemRenderer() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ParticleOrderFollower*))(Il2CppBase() + 0x4570CD4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ParticleOrderFollower*))(Il2CppBase() + 0x4570E4C))(this);
	}
	template <typename T = void> T FollowSortingOrder() {
		return ((T (*)(ParticleOrderFollower*))(Il2CppBase() + 0x4570D70))(this);
	}

};

}
