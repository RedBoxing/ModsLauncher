#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectTile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectTile"));
	}


	template <typename T = void> T GetTileData(uintptr_t position, uintptr_t tilemap, uintptr_t tileData) {
		return ((T (*)(ObjectTile*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DCBE8C))(this, position, tilemap, tileData);
	}
	template <typename T = bool> T StartUp(uintptr_t position, uintptr_t tilemap, uintptr_t go) {
		return ((T (*)(ObjectTile*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DCBF68))(this, position, tilemap, go);
	}
	template <typename T = void> T iFixBaseProxy_GetTileData(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ObjectTile*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DCC16C))(this, P0, P1, P2);
	}
	template <typename T = bool> T iFixBaseProxy_StartUp(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ObjectTile*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DCC178))(this, P0, P1, P2);
	}

};

}
