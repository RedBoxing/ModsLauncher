#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteTransform"));
	}

	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& transform() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& targetTransform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& targetSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
