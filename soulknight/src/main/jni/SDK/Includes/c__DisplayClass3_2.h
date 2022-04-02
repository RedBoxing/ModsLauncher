#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass32
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass3_2"));
	}

	template <typename T = uintptr_t> T& enemy() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T BoatStartLandingb__6() {
		return ((T (*)(cDisplayClass32*))(Il2CppBase() + 0x1FE5C54))(this);
	}

};

}
