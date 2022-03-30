#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass930
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass93_0"));
	}

	template <typename T = uintptr_t> T& rectTransform() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppVector2> T ShowOrHideViewb__0() {
		return ((T (*)(cDisplayClass930*))(Il2CppBase() + 0x44F9A78))(this);
	}
	template <typename T = void> T ShowOrHideViewb__1(Il2CppVector2 anchoredPosition) {
		return ((T (*)(cDisplayClass930*, Il2CppVector2))(Il2CppBase() + 0x44F9AA8))(this, anchoredPosition);
	}

};

}
