#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class IPreMover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "IPreMover"));
	}


	template <typename T = void> T PreMove(float deltaTime) {
		return ((T (*)(IPreMover*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = int32_t> T get_PrMOrder() {
		return ((T (*)(IPreMover*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_PrMOrder(int32_t value) {
		return ((T (*)(IPreMover*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
