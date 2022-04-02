#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossConfig"));
	}

	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& fallLayer() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
