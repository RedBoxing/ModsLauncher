#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CollisionSpecial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollisionSpecial"));
	}

	template <typename T = uintptr_t> T& the_controller() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& onCollision() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(CollisionSpecial*))(Il2CppBase() + 0x2070C78))(this);
	}
	template <typename T = void> T OnCollisionEnter2D(uintptr_t col) {
		return ((T (*)(CollisionSpecial*, uintptr_t))(Il2CppBase() + 0x2070D40))(this, col);
	}

};

}
