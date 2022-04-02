#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass310
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass31_0"));
	}

	template <typename T = uintptr_t> T& useLocalConfig() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T UseLocalConfigb__0() {
		return ((T (*)(cDisplayClass310*))(Il2CppBase() + 0x4278A6C))(this);
	}

};

}
