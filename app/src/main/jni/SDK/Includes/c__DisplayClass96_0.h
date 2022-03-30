#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass960
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass96_0"));
	}

	template <typename T = Il2CppString*> T& partName() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T CheckAchievementUnlockb__0(uintptr_t obj) {
		return ((T (*)(cDisplayClass960*, uintptr_t))(Il2CppBase() + 0x41BE65C))(this, obj);
	}

};

}
