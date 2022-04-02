#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SummonEnemyModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SummonEnemyModel"));
	}

	template <typename T = uintptr_t> T& enemyPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& summonCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& shadowObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& effectParticle() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& summonClip() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& enemy() {
		return *(T*)((uintptr_t)this + 0x58);
	}


};

}
