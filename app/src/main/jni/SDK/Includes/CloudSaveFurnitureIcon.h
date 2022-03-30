#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CloudSaveFurnitureIcon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloudSaveFurnitureIcon"));
	}

	template <typename T = uintptr_t> T& furnitureType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& furniture2RoomLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Refresh(uintptr_t cloudData) {
		return ((T (*)(CloudSaveFurnitureIcon*, uintptr_t))(Il2CppBase() + 0x1E79EC0))(this, cloudData);
	}

};

}
