#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class IPositionOverrider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "IPositionOverrider"));
	}


	template <typename T = Il2CppVector3> T OverridePosition(float deltaTime, Il2CppVector3 originalPosition) {
		return ((T (*)(IPositionOverrider*, float, Il2CppVector3))(Il2CppBase() + 0x0))(this, deltaTime, originalPosition);
	}
	template <typename T = int32_t> T get_POOrder() {
		return ((T (*)(IPositionOverrider*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_POOrder(int32_t value) {
		return ((T (*)(IPositionOverrider*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
