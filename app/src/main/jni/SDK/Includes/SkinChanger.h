#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinChanger"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(SkinChanger*))(Il2CppBase() + 0x1834388))(this);
	}
	template <typename T = void> T StopAnimate() {
		return ((T (*)(SkinChanger*))(Il2CppBase() + 0x1834690))(this);
	}

};

}
