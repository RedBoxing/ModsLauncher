#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass4030
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass403_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& window() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OpenModalb__0() {
		return ((T (*)(cDisplayClass4030*))(Il2CppBase() + 0x21DDF04))(this);
	}
	template <typename T = void> T OpenModalb__1() {
		return ((T (*)(cDisplayClass4030*))(Il2CppBase() + 0x21DDF54))(this);
	}

};

}
