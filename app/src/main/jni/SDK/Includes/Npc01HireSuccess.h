#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Npc01HireSuccess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Npc01HireSuccess"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& hideObjects() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& petPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T HireSuccess(uintptr_t controller) {
		return ((T (*)(Npc01HireSuccess*, uintptr_t))(Il2CppBase() + 0x4527708))(this, controller);
	}

};

}
