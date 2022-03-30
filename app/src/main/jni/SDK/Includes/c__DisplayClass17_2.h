#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass172
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass17_2"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T SaveTestb__4() {
		return ((T (*)(cDisplayClass172*))(Il2CppBase() + 0x26DFF38))(this);
	}
	template <typename T = void> T SaveTestb__5() {
		return ((T (*)(cDisplayClass172*))(Il2CppBase() + 0x26E0000))(this);
	}

};

}
