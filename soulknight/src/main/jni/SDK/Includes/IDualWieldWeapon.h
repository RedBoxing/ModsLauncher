#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IDualWieldWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDualWieldWeapon"));
	}


	template <typename T = bool> T OnDualWieldStart() {
		return ((T (*)(IDualWieldWeapon*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnDualWieldEnd() {
		return ((T (*)(IDualWieldWeapon*))(Il2CppBase() + 0x0))(this);
	}

};

}
