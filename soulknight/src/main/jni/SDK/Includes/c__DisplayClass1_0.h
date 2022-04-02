#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass1_0"));
	}

	template <typename T = uintptr_t> T& frontTap() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T PageDownb__0() {
		return ((T (*)(cDisplayClass10*))(Il2CppBase() + 0x1E707FC))(this);
	}

};

}
