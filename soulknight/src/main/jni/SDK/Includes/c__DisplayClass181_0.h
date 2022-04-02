#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass1810
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass181_0"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& atkSequence() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T OnAttackKeyEventb__0(uintptr_t com) {
		return ((T (*)(cDisplayClass1810*, uintptr_t))(Il2CppBase() + 0x1C6F97C))(this, com);
	}

};

}
