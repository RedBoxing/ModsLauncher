#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass210
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass21_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Authenticateb__0(int32_t result) {
		return ((T (*)(cDisplayClass210*, int32_t))(Il2CppBase() + 0x3590C84))(this, result);
	}

};

}
