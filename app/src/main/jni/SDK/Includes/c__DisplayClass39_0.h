#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass390
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass39_0"));
	}

	template <typename T = uintptr_t> T& temp_skin_btn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T UpdateSkinBarBtnb__0() {
		return ((T (*)(cDisplayClass390*))(Il2CppBase() + 0x422E810))(this);
	}

};

}
