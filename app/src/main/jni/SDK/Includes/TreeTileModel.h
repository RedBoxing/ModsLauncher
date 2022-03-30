#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TreeTileModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TreeTileModel"));
	}

	template <typename T = uintptr_t> T& bottomTile() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& topTile() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_Weight() {
		return ((T (*)(TreeTileModel*))(Il2CppBase() + 0x18BEAE4))(this);
	}

};

}
