#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Rune
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Rune"));
	}

	template <typename T = uintptr_t> T& beginRenderer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& endRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& startPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& endPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& currentPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& positions() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& coloredTiles() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& runeIndex() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = int32_t> T get_ColoredCount() {
		return ((T (*)(Rune*))(Il2CppBase() + 0x42BDB00))(this);
	}

};

}
