#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemSkinFragment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemSkinFragment"));
	}

	template <typename T = Il2CppString*> T& bossName() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& is_boss_fragment() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ItemSkinFragment*))(Il2CppBase() + 0x1CE7EF0))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ItemSkinFragment*))(Il2CppBase() + 0x1CE7FE8))(this);
	}

};

}
