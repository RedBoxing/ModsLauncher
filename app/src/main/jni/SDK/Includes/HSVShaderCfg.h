#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HSVShaderCfg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HSVShaderCfg"));
	}

	template <typename T = bool> T& needChangeColor() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& initSaturation() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& maxSaturation() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& hueShift() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& spriteColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
