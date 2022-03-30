#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapManagerTower
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapManagerTower"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> T& room2Name() {
		return *(T*)((uintptr_t)this + 0x230);
	}

	template <typename T = void> T Setup(uintptr_t baseMap) {
		return ((T (*)(MapManagerTower*, uintptr_t))(Il2CppBase() + 0x41E6690))(this, baseMap);
	}
	template <typename T = void> T CreateMap() {
		return ((T (*)(MapManagerTower*))(Il2CppBase() + 0x41E6718))(this);
	}
	template <typename T = uintptr_t> T GetRoom(uintptr_t towerRoom) {
		return ((T (*)(MapManagerTower*, uintptr_t))(Il2CppBase() + 0x41E685C))(this, towerRoom);
	}
	template <typename T = void> T iFixBaseProxy_CreateMap() {
		return ((T (*)(MapManagerTower*))(Il2CppBase() + 0x41E69C4))(this);
	}

};

}
