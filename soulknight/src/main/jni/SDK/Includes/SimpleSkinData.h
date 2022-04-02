#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SimpleSkinData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SimpleSkinData"));
	}

	template <typename T = uintptr_t> T& prefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T GetPrefabName() {
		return ((T (*)(SimpleSkinData*))(Il2CppBase() + 0x1831258))(this);
	}

};

}
