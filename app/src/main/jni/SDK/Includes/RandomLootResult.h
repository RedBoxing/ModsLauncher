#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomLootResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomLootResult"));
	}

	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isUnique() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& prefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
