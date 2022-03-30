#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteMaskAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteMaskAnimation"));
	}

	template <typename T = uintptr_t> T& renderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mask() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T LateUpdate() {
		return ((T (*)(SpriteMaskAnimation*))(Il2CppBase() + 0x4297874))(this);
	}

};

}
