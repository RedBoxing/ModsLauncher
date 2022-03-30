#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass160
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass16_0"));
	}

	template <typename T = void*> T& currentDelegate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& match() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& shouldAutolaunch() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T HandleMatchEventb__0() {
		return ((T (*)(cDisplayClass160*))(Il2CppBase() + 0x2838E2C))(this);
	}

};

}
