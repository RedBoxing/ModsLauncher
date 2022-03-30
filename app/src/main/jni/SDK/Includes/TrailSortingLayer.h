#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TrailSortingLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrailSortingLayer"));
	}

	template <typename T = Il2CppString*> T& sortingLayerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& sortingOrder() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& trailRenderer() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TrailSortingLayer*))(Il2CppBase() + 0x4405B9C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TrailSortingLayer*))(Il2CppBase() + 0x4405C34))(this);
	}

};

}
