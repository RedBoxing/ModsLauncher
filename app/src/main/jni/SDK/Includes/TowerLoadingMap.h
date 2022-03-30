#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TowerLoadingMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TowerLoadingMap"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& room2icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& nodePrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T DrawMap() {
		return ((T (*)(TowerLoadingMap*))(Il2CppBase() + 0x1E478C0))(this);
	}
	template <typename T = uintptr_t> T DrawNode(uintptr_t nodeData) {
		return ((T (*)(TowerLoadingMap*, uintptr_t))(Il2CppBase() + 0x1E47A30))(this, nodeData);
	}
	template <typename T = void> T CancelSelect() {
		return ((T (*)(TowerLoadingMap*))(Il2CppBase() + 0x1E47B4C))(this);
	}
	template <typename T = uintptr_t> T GetRoomSprite(uintptr_t room) {
		return ((T (*)(TowerLoadingMap*, uintptr_t))(Il2CppBase() + 0x1E47C50))(this, room);
	}

};

}
