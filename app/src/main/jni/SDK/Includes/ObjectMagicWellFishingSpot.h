#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectMagicWellFishingSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectMagicWellFishingSpot"));
	}

	template <typename T = int32_t> T& magic_well_fish_times() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectMagicWellFishingSpot*))(Il2CppBase() + 0x1DB4AAC))(this);
	}
	template <typename T = void> T OnCreateLoot(uintptr_t controller, bool result, void* finish) {
		return ((T (*)(ObjectMagicWellFishingSpot*, uintptr_t, bool, void*))(Il2CppBase() + 0x1DB4BC4))(this, controller, result, finish);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectMagicWellFishingSpot*))(Il2CppBase() + 0x1DB4D00))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectMagicWellFishingSpot*))(Il2CppBase() + 0x1DB4E7C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnCreateLoot(uintptr_t P0, bool P1, void* P2) {
		return ((T (*)(ObjectMagicWellFishingSpot*, uintptr_t, bool, void*))(Il2CppBase() + 0x1DB4E84))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ObjectMagicWellFishingSpot*))(Il2CppBase() + 0x1DB4E90))(this);
	}

};

}
