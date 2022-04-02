#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass431
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass43_1"));
	}

	template <typename T = int32_t> T& idx() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CreateTentacleb__0() {
		return ((T (*)(cDisplayClass431*))(Il2CppBase() + 0x436C310))(this);
	}

};

}
