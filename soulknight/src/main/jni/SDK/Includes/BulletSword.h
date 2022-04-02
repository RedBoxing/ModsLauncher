#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletSword
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletSword"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(BulletSword*))(Il2CppBase() + 0x2393244))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BulletSword*))(Il2CppBase() + 0x23932A0))(this);
	}

};

}
