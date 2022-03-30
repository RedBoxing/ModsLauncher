#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass1201
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass12_0`1"));
	}

	template <typename T = void*> T& toInvokeOnGameThread() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T AsOnGameThreadCallbackb__0(uintptr_t result) {
		return ((T (*)(cDisplayClass1201*, uintptr_t))(Il2CppBase() + 0x0))(this, result);
	}

};

}
