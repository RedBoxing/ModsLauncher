#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass1170
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass117_0"));
	}

	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T IsSkinInVisibleListb__0(int32_t visibleIndex) {
		return ((T (*)(cDisplayClass1170*, int32_t))(Il2CppBase() + 0x44F9A68))(this, visibleIndex);
	}

};

}
