#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FrameConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FrameConfig"));
	}

	template <typename T = uintptr_t> T& frameSprite() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& backgroundSprite() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
