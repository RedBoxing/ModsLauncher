#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemOfficerCatTalk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemOfficerCatTalk"));
	}

	template <typename T = uintptr_t> T& catPoint() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemOfficerCatTalk*, uintptr_t))(Il2CppBase() + 0x1CCF104))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemOfficerCatTalk*, uintptr_t))(Il2CppBase() + 0x1CCF390))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemOfficerCatTalk*, uintptr_t))(Il2CppBase() + 0x1CCF6EC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemOfficerCatTalk*, uintptr_t))(Il2CppBase() + 0x1CCF6F4))(this, P0);
	}

};

}
