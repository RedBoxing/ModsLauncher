#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlantPet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlantPet"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& petSprite() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& petName() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PlantPet*))(Il2CppBase() + 0x4398BD4))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(PlantPet*, uintptr_t))(Il2CppBase() + 0x4398D38))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(PlantPet*, uintptr_t))(Il2CppBase() + 0x4398FCC))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(PlantPet*, uintptr_t))(Il2CppBase() + 0x4399124))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(PlantPet*))(Il2CppBase() + 0x439924C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(PlantPet*, uintptr_t))(Il2CppBase() + 0x4399254))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(PlantPet*, uintptr_t))(Il2CppBase() + 0x439925C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(PlantPet*, uintptr_t))(Il2CppBase() + 0x4399264))(this, P0);
	}

};

}
