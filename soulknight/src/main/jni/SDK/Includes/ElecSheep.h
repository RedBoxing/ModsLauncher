#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ElecSheep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ElecSheep"));
	}

	template <typename T = int32_t> T& bgm_idx() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& bgm_arr() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ElecSheep*))(Il2CppBase() + 0x22AD674))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ElecSheep*, uintptr_t))(Il2CppBase() + 0x22AD8AC))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ElecSheep*, uintptr_t))(Il2CppBase() + 0x22AD934))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ElecSheep*, uintptr_t))(Il2CppBase() + 0x22ADA24))(this, controller);
	}
	template <typename T = void> T ChangeBGM(int32_t idx) {
		return ((T (*)(ElecSheep*, int32_t))(Il2CppBase() + 0x22AD6D8))(this, idx);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ElecSheep*, uintptr_t))(Il2CppBase() + 0x22ADC84))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ElecSheep*, uintptr_t))(Il2CppBase() + 0x22ADC8C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ElecSheep*, uintptr_t))(Il2CppBase() + 0x22ADC94))(this, P0);
	}

};

}
