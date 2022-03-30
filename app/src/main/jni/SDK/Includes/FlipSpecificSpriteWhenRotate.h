#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FlipSpecificSpriteWhenRotate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FlipSpecificSpriteWhenRotate"));
	}

	template <typename T = bool> T& flipY() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& flipX() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Update() {
		return ((T (*)(FlipSpecificSpriteWhenRotate*))(Il2CppBase() + 0x4510840))(this);
	}

};

}
