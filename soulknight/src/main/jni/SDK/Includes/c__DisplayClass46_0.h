#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass460
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass46_0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T LoadAchievementsb__0(uintptr_t response) {
		return ((T (*)(cDisplayClass460*, uintptr_t))(Il2CppBase() + 0x359178C))(this, response);
	}

};

}
