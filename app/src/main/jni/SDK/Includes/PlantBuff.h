#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlantBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlantBuff"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& IsRandomBuff() {
		return *(T*)((uintptr_t)this + 0xCC);
	}

	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(PlantBuff*, uintptr_t))(Il2CppBase() + 0x4395B48))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(PlantBuff*, uintptr_t))(Il2CppBase() + 0x4395EC8))(this, controller);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(PlantBuff*, uintptr_t))(Il2CppBase() + 0x4396088))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(PlantBuff*, uintptr_t))(Il2CppBase() + 0x4396250))(this, controller);
	}
	template <typename T = uintptr_t> T GetValidBuffIndex() {
		return ((T (*)(PlantBuff*))(Il2CppBase() + 0x4395D3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(PlantBuff*, uintptr_t))(Il2CppBase() + 0x439636C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(PlantBuff*, uintptr_t))(Il2CppBase() + 0x4396374))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(PlantBuff*, uintptr_t))(Il2CppBase() + 0x439637C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(PlantBuff*, uintptr_t))(Il2CppBase() + 0x4396384))(this, P0);
	}

};

}
