#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass301
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass30_1"));
	}

	template <typename T = uintptr_t> T& textCom() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T UpdateDialogTextb__1(float dt, float progress) {
		return ((T (*)(cDisplayClass301*, float, float))(Il2CppBase() + 0x42309DC))(this, dt, progress);
	}

};

}
