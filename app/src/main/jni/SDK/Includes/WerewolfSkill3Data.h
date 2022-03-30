#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WerewolfSkill3Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WerewolfSkill3Data"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& stateEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& hasReleaseEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& releaseEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
