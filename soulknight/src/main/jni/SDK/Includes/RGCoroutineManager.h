#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGCoroutineManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGCoroutineManager"));
	}


	template <typename T = void> T StartC(uintptr_t ie) {
		return ((T (*)(RGCoroutineManager*, uintptr_t))(Il2CppBase() + 0x2218678))(this, ie);
	}
	template <typename T = void> T StopC(uintptr_t ie) {
		return ((T (*)(RGCoroutineManager*, uintptr_t))(Il2CppBase() + 0x22186F4))(this, ie);
	}

};

}
