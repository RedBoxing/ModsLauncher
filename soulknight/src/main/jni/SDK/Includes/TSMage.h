#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSMage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSMage"));
	}


	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSMage*))(Il2CppBase() + 0x18C90C4))(this);
	}
	template <typename T = void> T CreateThunder() {
		return ((T (*)(TSMage*))(Il2CppBase() + 0x18C9684))(this);
	}
	template <typename T = void> T FireStorm() {
		return ((T (*)(TSMage*))(Il2CppBase() + 0x18C92D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSMage*))(Il2CppBase() + 0x18C995C))(this);
	}

};

}
