#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChainInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChainInfo"));
	}

	template <typename T = int32_t> T& maxBranch() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& damageFactor() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& critFactor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& searchRange() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& lightningWidthFactor() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
