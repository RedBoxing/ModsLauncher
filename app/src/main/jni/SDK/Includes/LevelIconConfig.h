#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LevelIconConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelIconConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& icons() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& pixelPerUnit() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T GetIcon(int32_t sceneIndex, int32_t branchIndex) {
		return ((T (*)(LevelIconConfig*, int32_t, int32_t))(Il2CppBase() + 0x425BA24))(this, sceneIndex, branchIndex);
	}

};

}
