#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass230
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass23_0"));
	}

	template <typename T = uintptr_t> T& promoInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& page() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Refreshb__0() {
		return ((T (*)(cDisplayClass230*))(Il2CppBase() + 0x1E6F550))(this);
	}
	template <typename T = void> T Refreshb__1() {
		return ((T (*)(cDisplayClass230*))(Il2CppBase() + 0x1E6F5A8))(this);
	}

};

}
