#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGEShortLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGEShortLaser"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(RGEShortLaser*))(Il2CppBase() + 0x2235CC4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGEShortLaser*))(Il2CppBase() + 0x2235D20))(this);
	}

};

}
