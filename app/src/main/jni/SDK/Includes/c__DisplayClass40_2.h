#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass402
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass40_2"));
	}

	template <typename T = uintptr_t> T& skillData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& clip1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CS$8__locals2() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T RoleSkill2b__2() {
		return ((T (*)(cDisplayClass402*))(Il2CppBase() + 0x1E097D8))(this);
	}
	template <typename T = void> T RoleSkill2b__4() {
		return ((T (*)(cDisplayClass402*))(Il2CppBase() + 0x1E09A88))(this);
	}

};

}
