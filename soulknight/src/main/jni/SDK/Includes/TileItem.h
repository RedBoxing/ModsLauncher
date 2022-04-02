#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TileItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TileItem"));
	}

	template <typename T = uintptr_t> T& position() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& rank() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& compareFactor() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(TileItem*, uintptr_t))(Il2CppBase() + 0x14F6F7C))(this, other);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t other) {
		return ((T (*)(TileItem*, uintptr_t))(Il2CppBase() + 0x14F6F84))(this, other);
	}

};

}
