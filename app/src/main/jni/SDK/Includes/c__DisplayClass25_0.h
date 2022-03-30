#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass250
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass25_0"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T GetRewardb__0(uintptr_t i) {
		return ((T (*)(cDisplayClass250*, uintptr_t))(Il2CppBase() + 0x1E6F8C8))(this, i);
	}

};

}
