#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChildItemInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChildItemInterface"));
	}


	template <typename T = bool> T CanInteract(uintptr_t controller) {
		return ((T (*)(ChildItemInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = uintptr_t> T Self() {
		return ((T (*)(ChildItemInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T SelfItem() {
		return ((T (*)(ChildItemInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnStartInteract(uintptr_t controller) {
		return ((T (*)(ChildItemInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = void> T OnEndInteract(uintptr_t controller) {
		return ((T (*)(ChildItemInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = void> T OnUseChildItem(uintptr_t controller) {
		return ((T (*)(ChildItemInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}

};

}
