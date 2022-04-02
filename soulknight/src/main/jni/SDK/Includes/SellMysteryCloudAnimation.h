#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SellMysteryCloudAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SellMysteryCloudAnimation"));
	}

	template <typename T = float> T& period() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& basePosition() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& positionRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Update() {
		return ((T (*)(SellMysteryCloudAnimation*))(Il2CppBase() + 0x1822328))(this);
	}

};

}
