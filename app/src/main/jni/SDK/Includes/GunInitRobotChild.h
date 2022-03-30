#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInitRobotChild
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInitRobotChild"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(GunInitRobotChild*))(Il2CppBase() + 0x2274170))(this);
	}

};

}
