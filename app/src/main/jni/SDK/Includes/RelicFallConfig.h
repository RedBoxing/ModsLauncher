#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicFallConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicFallConfig"));
	}

	template <typename T = uintptr_t> T& characterConfig() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& enemyConfig() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& petConfig() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bossConfig() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
