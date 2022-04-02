#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HeroSkillInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeroSkillInfo"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, uintptr_t>*>*> T& skillInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A34024))(0);
	}
	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A340B4))(0);
	}
	template <typename T = void> static T set_info(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A3428C))(0, value);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A34154))(0);
	}
	template <typename T = void> static T Save() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A34320))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T RMB_Skill() {
		return ((T (*)(HeroSkillInfo*))(Il2CppBase() + 0x1A343D0))(this);
	}

};

}
