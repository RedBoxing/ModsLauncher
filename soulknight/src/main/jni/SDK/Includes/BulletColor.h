#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletColor"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(BulletColor*))(Il2CppBase() + 0x45AC794))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BulletColor*))(Il2CppBase() + 0x45ACBB4))(this);
	}

};

}
