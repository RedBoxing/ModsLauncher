#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass190
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass19_0"));
	}

	template <typename T = uintptr_t> T& agreeAction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& disagreeAction() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T ShowDelayConfirmb__0() {
		return ((T (*)(cDisplayClass190*))(Il2CppBase() + 0x43E9F28))(this);
	}
	template <typename T = void> T ShowDelayConfirmb__1() {
		return ((T (*)(cDisplayClass190*))(Il2CppBase() + 0x43E9F58))(this);
	}

};

}
