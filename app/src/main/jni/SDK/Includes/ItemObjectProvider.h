#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemObjectProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemObjectProvider"));
	}

	template <typename T = uintptr_t> T& provideObject() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& currentObject() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T OnReady() {
		return ((T (*)(ItemObjectProvider*))(Il2CppBase() + 0x1CCC288))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemObjectProvider*, uintptr_t))(Il2CppBase() + 0x1CCC2E4))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemObjectProvider*, uintptr_t))(Il2CppBase() + 0x1CCC484))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemObjectProvider*, uintptr_t))(Il2CppBase() + 0x1CCC5AC))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemObjectProvider*, uintptr_t))(Il2CppBase() + 0x1CCC5B4))(this, P0);
	}

};

}
