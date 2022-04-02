#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass821
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass82_1"));
	}

	template <typename T = int32_t> T& thornCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Skill1AtkFinalCombob__3() {
		return ((T (*)(cDisplayClass821*))(Il2CppBase() + 0x1F01904))(this);
	}

};

}
