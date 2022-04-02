#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CollisionNormal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollisionNormal"));
	}

	template <typename T = uintptr_t> T& the_controller() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(CollisionNormal*))(Il2CppBase() + 0x20706F0))(this);
	}
	template <typename T = void> T OnCollisionEnter2D(uintptr_t col) {
		return ((T (*)(CollisionNormal*, uintptr_t))(Il2CppBase() + 0x20707B8))(this, col);
	}

};

}
