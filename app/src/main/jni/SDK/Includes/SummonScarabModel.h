#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SummonScarabModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SummonScarabModel"));
	}

	template <typename T = uintptr_t> T& effectPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& enemyPrefabs() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& countRange() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& releaseTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& maxCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& enemyController() {
		return *(T*)((uintptr_t)this + 0x70);
	}


};

}
