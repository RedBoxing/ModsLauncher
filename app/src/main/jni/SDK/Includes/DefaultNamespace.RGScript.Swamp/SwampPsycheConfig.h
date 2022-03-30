#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace DefaultNamespace.RGScript.Swamp {

class SwampPsycheConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "DefaultNamespace.RGScript.Swamp", "SwampPsycheConfig"));
	}

	template <typename T = uintptr_t> T& countRange() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& enemyPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& enemyRadius() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& spawnEffect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& radiusRange() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& factor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& minDamage() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& instantiateColdDown() {
		return *(T*)((uintptr_t)this + 0x4C);
	}


};

}
