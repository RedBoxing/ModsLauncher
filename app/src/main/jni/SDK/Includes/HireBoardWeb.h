#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HireBoardWeb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HireBoardWeb"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(HireBoardWeb*))(Il2CppBase() + 0x1A383E4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(HireBoardWeb*, uintptr_t))(Il2CppBase() + 0x1A384E0))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(HireBoardWeb*, uintptr_t))(Il2CppBase() + 0x1A385BC))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(HireBoardWeb*, uintptr_t))(Il2CppBase() + 0x1A38698))(this, controller);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(HireBoardWeb*))(Il2CppBase() + 0x1A3874C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(HireBoardWeb*))(Il2CppBase() + 0x1A38814))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(HireBoardWeb*, uintptr_t))(Il2CppBase() + 0x1A3881C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(HireBoardWeb*, uintptr_t))(Il2CppBase() + 0x1A38824))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(HireBoardWeb*, uintptr_t))(Il2CppBase() + 0x1A3882C))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(HireBoardWeb*))(Il2CppBase() + 0x1A38834))(this);
	}

};

}
