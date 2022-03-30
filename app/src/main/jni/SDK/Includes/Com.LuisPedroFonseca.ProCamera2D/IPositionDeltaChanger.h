#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class IPositionDeltaChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "IPositionDeltaChanger"));
	}


	template <typename T = Il2CppVector3> T AdjustDelta(float deltaTime, Il2CppVector3 originalDelta) {
		return ((T (*)(IPositionDeltaChanger*, float, Il2CppVector3))(Il2CppBase() + 0x0))(this, deltaTime, originalDelta);
	}
	template <typename T = int32_t> T get_PDCOrder() {
		return ((T (*)(IPositionDeltaChanger*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_PDCOrder(int32_t value) {
		return ((T (*)(IPositionDeltaChanger*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
