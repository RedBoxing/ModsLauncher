#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HitWallDestroyer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HitWallDestroyer"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(HitWallDestroyer*, uintptr_t))(Il2CppBase() + 0x420394C))(this, other);
	}

};

}
