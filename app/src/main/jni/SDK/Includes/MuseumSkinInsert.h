#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MuseumSkinInsert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MuseumSkinInsert"));
	}

	template <typename T = uintptr_t> T& skinSprite() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& author() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T InsertItemInfo(uintptr_t addedItem) {
		return ((T (*)(MuseumSkinInsert*, uintptr_t))(Il2CppBase() + 0x437BA7C))(this, addedItem);
	}
	template <typename T = void> T iFixBaseProxy_InsertItemInfo(uintptr_t P0) {
		return ((T (*)(MuseumSkinInsert*, uintptr_t))(Il2CppBase() + 0x437BCF4))(this, P0);
	}

};

}
