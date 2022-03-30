#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired {

class FlightPedalsTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired", "FlightPedalsTemplate"));
	}

	template <typename T = uintptr_t> static T& typeGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_leftPedal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_rightPedal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& elementId_slide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T Rewired_IFlightPedalsTemplate_get_leftPedal() {
		return ((T (*)(FlightPedalsTemplate*))(Il2CppBase() + 0x2686E74))(this);
	}
	template <typename T = uintptr_t> T Rewired_IFlightPedalsTemplate_get_rightPedal() {
		return ((T (*)(FlightPedalsTemplate*))(Il2CppBase() + 0x2686F08))(this);
	}
	template <typename T = uintptr_t> T Rewired_IFlightPedalsTemplate_get_slide() {
		return ((T (*)(FlightPedalsTemplate*))(Il2CppBase() + 0x2686F9C))(this);
	}

};

}
