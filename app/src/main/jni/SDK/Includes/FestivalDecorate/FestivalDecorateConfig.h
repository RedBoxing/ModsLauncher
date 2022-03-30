#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FestivalDecorate {

class FestivalDecorateConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FestivalDecorate", "FestivalDecorateConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& configs() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = bool> T IsSuit(Il2CppString* key, uintptr_t currentDateTime) {
		return ((T (*)(FestivalDecorateConfig*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4475E4C))(this, key, currentDateTime);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(FestivalDecorateConfig*))(Il2CppBase() + 0x4476044))(this);
	}

};

}
