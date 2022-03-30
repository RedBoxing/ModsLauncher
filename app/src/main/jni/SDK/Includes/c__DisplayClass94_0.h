#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass940
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass94_0"));
	}

	template <typename T = uintptr_t> T& rectTransform() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppVector2> T ShowOrHideGroupButtonb__0() {
		return ((T (*)(cDisplayClass940*))(Il2CppBase() + 0x44F9AF0))(this);
	}
	template <typename T = void> T ShowOrHideGroupButtonb__1(Il2CppVector2 anchoredPosition) {
		return ((T (*)(cDisplayClass940*, Il2CppVector2))(Il2CppBase() + 0x44F9B20))(this, anchoredPosition);
	}

};

}
