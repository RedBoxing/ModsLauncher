#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomObjectData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomObjectData"));
	}

	template <typename T = uintptr_t> T& objectType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& maxLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& distributeProbability() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& objectDistribution() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
