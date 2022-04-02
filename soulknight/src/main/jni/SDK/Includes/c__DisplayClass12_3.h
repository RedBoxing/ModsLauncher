#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass123
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass12_3"));
	}

	template <typename T = uintptr_t> T& obj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals3() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T _Castb__2() {
		return ((T (*)(cDisplayClass123*))(Il2CppBase() + 0x4491744))(this);
	}

};

}
