#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RootSpriteModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RootSpriteModel"));
	}

	template <typename T = uintptr_t> T& rootSprite() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& spriteSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_Weight() {
		return ((T (*)(RootSpriteModel*))(Il2CppBase() + 0x14F6AA0))(this);
	}

};

}
