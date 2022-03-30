#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass861
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass86_1"));
	}

	template <typename T = int32_t> T& currentIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Skill1CreateSpurb__2() {
		return ((T (*)(cDisplayClass861*))(Il2CppBase() + 0x1F0194C))(this);
	}

};

}
