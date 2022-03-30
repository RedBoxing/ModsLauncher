#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EGun011
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EGun011"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(EGun011*))(Il2CppBase() + 0x22A8750))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EGun011*))(Il2CppBase() + 0x22A88AC))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGun011*))(Il2CppBase() + 0x22A8994))(this);
	}

};

}
