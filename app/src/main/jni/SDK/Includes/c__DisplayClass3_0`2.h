#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass302
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass3_0`2"));
	}

	template <typename T = void*> T& conversionFunction() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T ToIntPtrb__0(uintptr_t param1, uintptr_t param2) {
		return ((T (*)(cDisplayClass302*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, param1, param2);
	}

};

}
