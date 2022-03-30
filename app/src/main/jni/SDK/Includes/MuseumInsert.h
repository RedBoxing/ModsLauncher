#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MuseumInsert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MuseumInsert"));
	}

	template <typename T = uintptr_t> T& largeFrame() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& largeBackground() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& largeOffset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& smallFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& smallBackground() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& barricade() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& smallOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& insertIndex() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& useLargeFrame() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& fromLeftToRight() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = float> T& large_sp_scale() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& small_sp_scale() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = Il2CppVector3> T get_direction() {
		return ((T (*)(MuseumInsert*))(Il2CppBase() + 0x437B47C))(this);
	}
	template <typename T = void> T InsertItemInfo(uintptr_t addedItem) {
		return ((T (*)(MuseumInsert*, uintptr_t))(Il2CppBase() + 0x437B1D8))(this, addedItem);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(MuseumInsert*))(Il2CppBase() + 0x437B548))(this);
	}

};

}
