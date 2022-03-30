#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass1070
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass107_0"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T RefreshSkillsb__0() {
		return ((T (*)(cDisplayClass1070*))(Il2CppBase() + 0x44F9A34))(this);
	}

};

}
