#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGEControllerRace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGEControllerRace"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(RGEControllerRace*))(Il2CppBase() + 0x2233804))(this);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(RGEControllerRace*, uintptr_t, bool))(Il2CppBase() + 0x2233888))(this, source_object, sync);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t collision) {
		return ((T (*)(RGEControllerRace*, uintptr_t))(Il2CppBase() + 0x223390C))(this, collision);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(RGEControllerRace*))(Il2CppBase() + 0x2233C4C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(RGEControllerRace*, uintptr_t, bool))(Il2CppBase() + 0x2233C50))(this, P0, P1);
	}

};

}
