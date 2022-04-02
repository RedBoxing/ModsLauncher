#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Character.Enemy {

class EliteArcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Character.Enemy", "EliteArcher"));
	}


	template <typename T = void> T FixedRotation() {
		return ((T (*)(EliteArcher*))(Il2CppBase() + 0x1C2E65C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EliteArcher*))(Il2CppBase() + 0x1C2E6DC))(this);
	}

};

}
