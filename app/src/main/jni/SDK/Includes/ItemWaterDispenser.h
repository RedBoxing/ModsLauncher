#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemWaterDispenser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemWaterDispenser"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ItemWaterDispenser*, uintptr_t))(Il2CppBase() + 0x219F2F4))(this, controller);
	}
	template <typename T = uintptr_t> T Talk(uintptr_t controller) {
		return ((T (*)(ItemWaterDispenser*, uintptr_t))(Il2CppBase() + 0x219F370))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemWaterDispenser*, uintptr_t))(Il2CppBase() + 0x219F47C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemWaterDispenser*, uintptr_t))(Il2CppBase() + 0x219F4F8))(this, controller);
	}
	template <typename T = void> T RestoreMercenaries(int32_t health) {
		return ((T (*)(ItemWaterDispenser*, int32_t))(Il2CppBase() + 0x219F7FC))(this, health);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ItemWaterDispenser*))(Il2CppBase() + 0x219FB24))(this);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ItemWaterDispenser*, uintptr_t))(Il2CppBase() + 0x219FBEC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemWaterDispenser*, uintptr_t))(Il2CppBase() + 0x219FBF4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemWaterDispenser*, uintptr_t))(Il2CppBase() + 0x219FBFC))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(ItemWaterDispenser*))(Il2CppBase() + 0x219FC04))(this);
	}

};

}
