#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MuseumPlantInsert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MuseumPlantInsert"));
	}

	template <typename T = uintptr_t> T& plant() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T InsertItemInfo(uintptr_t addedItem) {
		return ((T (*)(MuseumPlantInsert*, uintptr_t))(Il2CppBase() + 0x437B63C))(this, addedItem);
	}
	template <typename T = void> T iFixBaseProxy_InsertItemInfo(uintptr_t P0) {
		return ((T (*)(MuseumPlantInsert*, uintptr_t))(Il2CppBase() + 0x437B754))(this, P0);
	}

};

}
