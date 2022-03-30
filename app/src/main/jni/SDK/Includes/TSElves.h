#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSElves
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSElves"));
	}


	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSElves*))(Il2CppBase() + 0x18C6B08))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSElves*))(Il2CppBase() + 0x18C6F2C))(this);
	}

};

}
