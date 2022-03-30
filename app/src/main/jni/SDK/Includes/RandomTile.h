#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomTile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomTile"));
	}

	template <typename T = uintptr_t> T& ruleTile() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& colliderType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& distribute() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T GetTileData(uintptr_t position, uintptr_t tileMap, uintptr_t tileData) {
		return ((T (*)(RandomTile*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x44DCA54))(this, position, tileMap, tileData);
	}
	template <typename T = void> T iFixBaseProxy_GetTileData(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(RandomTile*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x44DCC64))(this, P0, P1, P2);
	}

};

}
