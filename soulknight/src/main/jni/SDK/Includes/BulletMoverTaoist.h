#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletMoverTaoist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletMoverTaoist"));
	}


	template <typename T = bool> T get_ignoreWall() {
		return ((T (*)(BulletMoverTaoist*))(Il2CppBase() + 0x2389A54))(this);
	}
	template <typename T = float> T get_targetRange() {
		return ((T (*)(BulletMoverTaoist*))(Il2CppBase() + 0x2389AB4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_ignoreWall() {
		return ((T (*)(BulletMoverTaoist*))(Il2CppBase() + 0x2389B24))(this);
	}
	template <typename T = float> T iFixBaseProxy_get_targetRange() {
		return ((T (*)(BulletMoverTaoist*))(Il2CppBase() + 0x2389B28))(this);
	}

};

}
