#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass510
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass51_0"));
	}

	template <typename T = void*> T& cb() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T ShowAchievementsUIb__0(uintptr_t result) {
		return ((T (*)(cDisplayClass510*, uintptr_t))(Il2CppBase() + 0x3591C94))(this, result);
	}

};

}
