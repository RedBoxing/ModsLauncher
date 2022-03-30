#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace VacantWall {

class VacantWallFallEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "VacantWall", "VacantWallFallEffect"));
	}

	template <typename T = uintptr_t> T& particleSystem() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Play(uintptr_t sprite, float scale) {
		return ((T (*)(VacantWallFallEffect*, uintptr_t, float))(Il2CppBase() + 0x4355F98))(this, sprite, scale);
	}

};

}
