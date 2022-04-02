#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass121
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass12_1"));
	}

	template <typename T = int32_t> T& j() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T LoadGameDataTestb__2() {
		return ((T (*)(cDisplayClass121*))(Il2CppBase() + 0x26DEC7C))(this);
	}
	template <typename T = void> T LoadGameDataTestb__3(uintptr_t data) {
		return ((T (*)(cDisplayClass121*, uintptr_t))(Il2CppBase() + 0x26DECE8))(this, data);
	}

};

}
