#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace VacantWall {

class VacantWallConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "VacantWall", "VacantWallConfig"));
	}

	template <typename T = uintptr_t> T& fallEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& showEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& effectOffset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& playerFallDuration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& playerImgPath() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& playerBodyPath() {
		return *(T*)((uintptr_t)this + 0x40);
	}


};

}
