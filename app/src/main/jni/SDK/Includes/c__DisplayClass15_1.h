#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass151
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass15_1"));
	}

	template <typename T = int32_t> T& j() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T LoadTestb__2() {
		return ((T (*)(cDisplayClass151*))(Il2CppBase() + 0x26DF230))(this);
	}
	template <typename T = void> T LoadTestb__3() {
		return ((T (*)(cDisplayClass151*))(Il2CppBase() + 0x26DF434))(this);
	}

};

}
