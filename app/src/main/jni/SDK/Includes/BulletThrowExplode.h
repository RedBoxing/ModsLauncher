#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletThrowExplode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletThrowExplode"));
	}


	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletThrowExplode*))(Il2CppBase() + 0x1DF2A50))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(BulletThrowExplode*))(Il2CppBase() + 0x1DF2B18))(this);
	}

};

}
