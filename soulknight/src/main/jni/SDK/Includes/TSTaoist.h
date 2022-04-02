#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSTaoist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSTaoist"));
	}


	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSTaoist*))(Il2CppBase() + 0x18CF46C))(this);
	}
	template <typename T = uintptr_t> T CreatingSword() {
		return ((T (*)(TSTaoist*))(Il2CppBase() + 0x18CF514))(this);
	}
	template <typename T = void> T CreateBagua() {
		return ((T (*)(TSTaoist*))(Il2CppBase() + 0x18CF5C8))(this);
	}
	template <typename T = void> T RoleSkill1Animation(uintptr_t shield, float showTime, float maxTime) {
		return ((T (*)(TSTaoist*, uintptr_t, float, float))(Il2CppBase() + 0x18CFA30))(this, shield, showTime, maxTime);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSTaoist*))(Il2CppBase() + 0x18CFBC8))(this);
	}

};

}
