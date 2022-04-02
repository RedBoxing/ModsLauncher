#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGChestMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGChestMaterial"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& onEmptyChestOpen() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& _isEmptyChest() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGChestMaterial*))(Il2CppBase() + 0x19E188C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGChestMaterial*))(Il2CppBase() + 0x19E1970))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(RGChestMaterial*, uintptr_t))(Il2CppBase() + 0x19E19D4))(this, controller);
	}
	template <typename T = void> T OpenChest() {
		return ((T (*)(RGChestMaterial*))(Il2CppBase() + 0x19E1A58))(this);
	}
	template <typename T = void> T OpenChestEffect() {
		return ((T (*)(RGChestMaterial*))(Il2CppBase() + 0x19E1E5C))(this);
	}
	template <typename T = void> T InstantiateMaterial() {
		return ((T (*)(RGChestMaterial*))(Il2CppBase() + 0x19E1C6C))(this);
	}
	template <typename T = void> T SetChestEmpty() {
		return ((T (*)(RGChestMaterial*))(Il2CppBase() + 0x19E2024))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(RGChestMaterial*))(Il2CppBase() + 0x19E20D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(RGChestMaterial*))(Il2CppBase() + 0x19E21C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(RGChestMaterial*, uintptr_t))(Il2CppBase() + 0x19E21CC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnReady() {
		return ((T (*)(RGChestMaterial*))(Il2CppBase() + 0x19E21D4))(this);
	}

};

}
