#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteDistribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteDistribute"));
	}

	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
