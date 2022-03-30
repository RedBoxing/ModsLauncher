#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PrefabPoolParticlePlay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabPoolParticlePlay"));
	}

	template <typename T = uintptr_t> T& particle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& includeChildren() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(PrefabPoolParticlePlay*))(Il2CppBase() + 0x43A54BC))(this);
	}

};

}
