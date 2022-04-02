#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FestivalDecorateShowMulti
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FestivalDecorateShowMulti"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& festivalDecorateConfig() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FestivalDecorateShowMulti*))(Il2CppBase() + 0x4476E90))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(FestivalDecorateShowMulti*))(Il2CppBase() + 0x4476EF0))(this);
	}

};

}
