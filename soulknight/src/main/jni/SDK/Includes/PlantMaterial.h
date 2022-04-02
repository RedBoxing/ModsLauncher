#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlantMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlantMaterial"));
	}

	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& randomMaterial() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RandomMaterials() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PlantMaterial*))(Il2CppBase() + 0x4398190))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(PlantMaterial*, uintptr_t))(Il2CppBase() + 0x43982BC))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(PlantMaterial*, uintptr_t))(Il2CppBase() + 0x43986BC))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(PlantMaterial*, uintptr_t))(Il2CppBase() + 0x4398738))(this, controller);
	}
	template <typename T = void> T ShowGetUI() {
		return ((T (*)(PlantMaterial*))(Il2CppBase() + 0x43987B4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(PlantMaterial*))(Il2CppBase() + 0x4398BB4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(PlantMaterial*, uintptr_t))(Il2CppBase() + 0x4398BBC))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(PlantMaterial*, uintptr_t))(Il2CppBase() + 0x4398BC4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(PlantMaterial*, uintptr_t))(Il2CppBase() + 0x4398BCC))(this, P0);
	}

};

}
