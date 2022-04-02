#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpawnMountToken
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpawnMountToken"));
	}

	template <typename T = uintptr_t> T& mountPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SpawnMountToken*))(Il2CppBase() + 0x42954F0))(this);
	}

};

}
