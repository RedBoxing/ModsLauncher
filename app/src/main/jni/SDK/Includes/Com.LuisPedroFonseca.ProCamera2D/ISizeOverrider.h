#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ISizeOverrider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ISizeOverrider"));
	}


	template <typename T = float> T OverrideSize(float deltaTime, float originalSize) {
		return ((T (*)(ISizeOverrider*, float, float))(Il2CppBase() + 0x0))(this, deltaTime, originalSize);
	}
	template <typename T = int32_t> T get_SOOrder() {
		return ((T (*)(ISizeOverrider*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_SOOrder(int32_t value) {
		return ((T (*)(ISizeOverrider*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
