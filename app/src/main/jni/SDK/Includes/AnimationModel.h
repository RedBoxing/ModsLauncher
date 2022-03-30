#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AnimationModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationModel"));
	}

	template <typename T = float> T& baseValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& range() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& period() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& power() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = float> T get_value() {
		return ((T (*)(AnimationModel*))(Il2CppBase() + 0x41FA1EC))(this);
	}

};

}
