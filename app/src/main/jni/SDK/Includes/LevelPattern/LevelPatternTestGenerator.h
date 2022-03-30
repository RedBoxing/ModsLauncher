#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace LevelPattern {

class LevelPatternTestGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LevelPattern", "LevelPatternTestGenerator"));
	}

	template <typename T = uintptr_t> T& levelPatternConfig() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& generateIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& tiles() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Generate() {
		return ((T (*)(LevelPatternTestGenerator*))(Il2CppBase() + 0x425BE0C))(this);
	}

};

}
