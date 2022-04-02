#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBigRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBigRoom"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(RGBigRoom*))(Il2CppBase() + 0x1BBBE1C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGBigRoom*))(Il2CppBase() + 0x1BBC0EC))(this);
	}

};

}
