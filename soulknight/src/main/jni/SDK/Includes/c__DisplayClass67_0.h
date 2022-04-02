#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass670
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass67_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T BuyDriedFishClickb__0(bool isSuccess) {
		return ((T (*)(cDisplayClass670*, bool))(Il2CppBase() + 0x450B8B4))(this, isSuccess);
	}

};

}
