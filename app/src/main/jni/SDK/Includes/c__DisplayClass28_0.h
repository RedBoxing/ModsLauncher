#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass280
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass28_0"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T ShowingDialogb__0(uintptr_t i) {
		return ((T (*)(cDisplayClass280*, uintptr_t))(Il2CppBase() + 0x1E6FE04))(this, i);
	}
	template <typename T = bool> T ShowingDialogb__1(uintptr_t i) {
		return ((T (*)(cDisplayClass280*, uintptr_t))(Il2CppBase() + 0x1E6FE3C))(this, i);
	}

};

}
