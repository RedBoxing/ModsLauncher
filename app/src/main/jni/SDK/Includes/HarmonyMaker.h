#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HarmonyMaker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HarmonyMaker"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(HarmonyMaker*))(Il2CppBase() + 0x1A327B4))(this);
	}

};

}
