#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemSkillFragment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemSkillFragment"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& skillIndex() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& useItemName() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ItemSkillFragment*))(Il2CppBase() + 0x1CE7740))(this);
	}
	template <typename T = void> T ShowGetUI(uintptr_t controller) {
		return ((T (*)(ItemSkillFragment*, uintptr_t))(Il2CppBase() + 0x1CE78D4))(this, controller);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ItemSkillFragment*))(Il2CppBase() + 0x1CE7EE8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowGetUI(uintptr_t P0) {
		return ((T (*)(ItemSkillFragment*, uintptr_t))(Il2CppBase() + 0x1CE7EEC))(this, P0);
	}

};

}
