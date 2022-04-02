#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass2_1"));
	}

	template <typename T = Il2CppString*> T& partName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T OnSetRGRandomSeedb__0(uintptr_t o) {
		return ((T (*)(cDisplayClass21*, uintptr_t))(Il2CppBase() + 0x1CA9450))(this, o);
	}

};

}
