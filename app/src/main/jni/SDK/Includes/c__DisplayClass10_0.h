#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass100
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass10_0"));
	}

	template <typename T = Il2CppString*> T& viewName() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T GetViewPrefabb__0(uintptr_t _) {
		return ((T (*)(cDisplayClass100*, uintptr_t))(Il2CppBase() + 0x43EE288))(this, _);
	}

};

}
