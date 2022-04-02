#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ISizeDeltaChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ISizeDeltaChanger"));
	}


	template <typename T = float> T AdjustSize(float deltaTime, float originalDelta) {
		return ((T (*)(ISizeDeltaChanger*, float, float))(Il2CppBase() + 0x0))(this, deltaTime, originalDelta);
	}
	template <typename T = int32_t> T get_SDCOrder() {
		return ((T (*)(ISizeDeltaChanger*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_SDCOrder(int32_t value) {
		return ((T (*)(ISizeDeltaChanger*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
