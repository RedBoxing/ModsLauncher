#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass2401
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass24_0`1"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T InvokeCallbackOnGameThreadb__0() {
		return ((T (*)(cDisplayClass2401*))(Il2CppBase() + 0x0))(this);
	}

};

}
