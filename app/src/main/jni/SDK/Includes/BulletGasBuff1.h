#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletGasBuff1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletGasBuff1"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(BulletGasBuff1*))(Il2CppBase() + 0x23784AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BulletGasBuff1*))(Il2CppBase() + 0x2378DE0))(this);
	}

};

}
