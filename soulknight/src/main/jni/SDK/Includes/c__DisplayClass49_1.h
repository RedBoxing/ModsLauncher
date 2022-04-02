#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass491
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass49_1"));
	}

	template <typename T = int32_t> T& finishedCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bullets() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Attackb__0() {
		return ((T (*)(cDisplayClass491*))(Il2CppBase() + 0x201470C))(this);
	}

};

}
