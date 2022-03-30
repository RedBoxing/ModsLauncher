#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass351
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass35_1"));
	}

	template <typename T = bool> T& buttonCanExecute() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& consume() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& successProbability() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnChoosePartb__6() {
		return ((T (*)(cDisplayClass351*))(Il2CppBase() + 0x4196E78))(this);
	}

};

}
