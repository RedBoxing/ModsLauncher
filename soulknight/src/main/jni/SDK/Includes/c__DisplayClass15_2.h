#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass152
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass15_2"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T LoadTestb__4() {
		return ((T (*)(cDisplayClass152*))(Il2CppBase() + 0x26DF620))(this);
	}
	template <typename T = void> T LoadTestb__5() {
		return ((T (*)(cDisplayClass152*))(Il2CppBase() + 0x26DF6D4))(this);
	}

};

}
