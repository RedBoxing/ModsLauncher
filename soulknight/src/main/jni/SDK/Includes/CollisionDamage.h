#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CollisionDamage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollisionDamage"));
	}

	template <typename T = uintptr_t> T& the_controller() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(CollisionDamage*))(Il2CppBase() + 0x2070410))(this);
	}
	template <typename T = void> T OnCollisionEnter2D(uintptr_t col) {
		return ((T (*)(CollisionDamage*, uintptr_t))(Il2CppBase() + 0x20704D8))(this, col);
	}

};

}
