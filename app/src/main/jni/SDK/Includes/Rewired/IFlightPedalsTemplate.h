#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired {

class IFlightPedalsTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired", "IFlightPedalsTemplate"));
	}


	template <typename T = uintptr_t> T get_leftPedal() {
		return ((T (*)(IFlightPedalsTemplate*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_rightPedal() {
		return ((T (*)(IFlightPedalsTemplate*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_slide() {
		return ((T (*)(IFlightPedalsTemplate*))(Il2CppBase() + 0x0))(this);
	}

};

}
