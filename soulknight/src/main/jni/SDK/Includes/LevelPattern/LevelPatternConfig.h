#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace LevelPattern {

class LevelPatternConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LevelPattern", "LevelPatternConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& mapModels() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
