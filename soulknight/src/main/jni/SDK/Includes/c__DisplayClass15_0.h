#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass150
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass15_0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T ToCallbackPointerb__0(uintptr_t result) {
		return ((T (*)(cDisplayClass150*, uintptr_t))(Il2CppBase() + 0x2AFE494))(this, result);
	}

};

}
