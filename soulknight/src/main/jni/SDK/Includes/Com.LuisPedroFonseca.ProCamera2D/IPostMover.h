#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class IPostMover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "IPostMover"));
	}


	template <typename T = void> T PostMove(float deltaTime) {
		return ((T (*)(IPostMover*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = int32_t> T get_PMOrder() {
		return ((T (*)(IPostMover*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_PMOrder(int32_t value) {
		return ((T (*)(IPostMover*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
