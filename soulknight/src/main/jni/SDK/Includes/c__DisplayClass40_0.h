#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass400
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass40_0"));
	}

	template <typename T = int32_t> T& skillIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T UpdateSkillBarBtnb__0() {
		return ((T (*)(cDisplayClass400*))(Il2CppBase() + 0x422E84C))(this);
	}

};

}
