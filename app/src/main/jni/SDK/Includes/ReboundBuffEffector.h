#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ReboundBuffEffector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReboundBuffEffector"));
	}

	template <typename T = uintptr_t> T& _prefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_prefab() {
		return ((T (*)(ReboundBuffEffector*))(Il2CppBase() + 0x42B01B0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ReboundBuffEffector*))(Il2CppBase() + 0x42B0290))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(ReboundBuffEffector*))(Il2CppBase() + 0x42B02F0))(this);
	}

};

}
