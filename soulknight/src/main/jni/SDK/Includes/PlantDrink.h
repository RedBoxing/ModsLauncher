#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlantDrink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlantDrink"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& drink() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(PlantDrink*, uintptr_t))(Il2CppBase() + 0x43968DC))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(PlantDrink*, uintptr_t))(Il2CppBase() + 0x4396A9C))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(PlantDrink*, uintptr_t))(Il2CppBase() + 0x4396BBC))(this, controller);
	}
	template <typename T = uintptr_t> T GetValidBuffIndex() {
		return ((T (*)(PlantDrink*))(Il2CppBase() + 0x4396CCC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(PlantDrink*, uintptr_t))(Il2CppBase() + 0x4396E60))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(PlantDrink*, uintptr_t))(Il2CppBase() + 0x4396E68))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(PlantDrink*, uintptr_t))(Il2CppBase() + 0x4396E70))(this, P0);
	}

};

}
