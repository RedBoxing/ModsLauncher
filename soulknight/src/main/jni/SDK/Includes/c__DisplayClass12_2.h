#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass122
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass12_2"));
	}

	template <typename T = uintptr_t> T& i() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T LoadGameDataTestb__4() {
		return ((T (*)(cDisplayClass122*))(Il2CppBase() + 0x26DEDF4))(this);
	}
	template <typename T = void> T LoadGameDataTestb__5(uintptr_t data) {
		return ((T (*)(cDisplayClass122*, uintptr_t))(Il2CppBase() + 0x26DEE28))(this, data);
	}

};

}
