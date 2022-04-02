#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass161
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass16_1"));
	}

	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T _Emitb__0() {
		return ((T (*)(cDisplayClass161*))(Il2CppBase() + 0x1C9B890))(this);
	}

};

}
