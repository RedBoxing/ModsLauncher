#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass1840
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass184_0"));
	}

	template <typename T = uintptr_t> T& atkType() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T OnChargeAttackStartb__0(uintptr_t com) {
		return ((T (*)(cDisplayClass1840*, uintptr_t))(Il2CppBase() + 0x1C6FA48))(this, com);
	}

};

}
