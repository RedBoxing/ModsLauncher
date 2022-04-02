#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass401
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass40_1"));
	}

	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 9__3() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T RoleSkill2b__0() {
		return ((T (*)(cDisplayClass401*))(Il2CppBase() + 0x1E0959C))(this);
	}
	template <typename T = void> T RoleSkill2b__3() {
		return ((T (*)(cDisplayClass401*))(Il2CppBase() + 0x1E096FC))(this);
	}

};

}
