#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemTape
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemTape"));
	}

	template <typename T = Il2CppString*> T& bgmName() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& randomList() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& tepeSprite() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = bool> T get_Droppable() {
		return ((T (*)(ItemTape*))(Il2CppBase() + 0x1CE7FEC))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ItemTape*))(Il2CppBase() + 0x1CE80CC))(this);
	}
	template <typename T = bool> T CanDrop() {
		return ((T (*)(ItemTape*))(Il2CppBase() + 0x1CE818C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_Droppable() {
		return ((T (*)(ItemTape*))(Il2CppBase() + 0x1CE84C0))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ItemTape*))(Il2CppBase() + 0x1CE84C4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_CanDrop() {
		return ((T (*)(ItemTape*))(Il2CppBase() + 0x1CE84C8))(this);
	}

};

}
