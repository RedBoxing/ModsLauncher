#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSVampire
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSVampire"));
	}


	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSVampire*))(Il2CppBase() + 0x18D0358))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSVampire*))(Il2CppBase() + 0x18D083C))(this);
	}

};

}
