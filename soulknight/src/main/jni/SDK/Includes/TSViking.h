#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSViking
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSViking"));
	}


	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSViking*))(Il2CppBase() + 0x18D0844))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSViking*))(Il2CppBase() + 0x18D0C6C))(this);
	}

};

}
