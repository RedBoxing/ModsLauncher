#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FlipWhenRotate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FlipWhenRotate"));
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

	template <typename T = void> T Start() {
		return ((T (*)(FlipWhenRotate*))(Il2CppBase() + 0x451098C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FlipWhenRotate*))(Il2CppBase() + 0x4510A24))(this);
	}

};

}
