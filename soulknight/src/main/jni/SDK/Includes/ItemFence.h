#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemFence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemFence"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemFence*))(Il2CppBase() + 0x1DA4834))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemFence*, uintptr_t))(Il2CppBase() + 0x1DA495C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemFence*, uintptr_t))(Il2CppBase() + 0x1DA4B78))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemFence*, uintptr_t))(Il2CppBase() + 0x1DA4C18))(this, controller);
	}
	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(ItemFence*, uintptr_t, int32_t))(Il2CppBase() + 0x1DA4CFC))(this, controller, state);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ItemFence*))(Il2CppBase() + 0x1DA4E20))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemFence*, uintptr_t))(Il2CppBase() + 0x1DA4E8C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemFence*, uintptr_t))(Il2CppBase() + 0x1DA4E94))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemFence*, uintptr_t))(Il2CppBase() + 0x1DA4E9C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerState(uintptr_t P0, int32_t P1) {
		return ((T (*)(ItemFence*, uintptr_t, int32_t))(Il2CppBase() + 0x1DA4EA4))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ItemFence*))(Il2CppBase() + 0x1DA4EAC))(this);
	}

};

}
