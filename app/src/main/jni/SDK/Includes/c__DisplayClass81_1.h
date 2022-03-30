#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass811
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass81_1"));
	}

	template <typename T = float> T& rotateAngle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& angleSign() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Skill1AtkNormalCombob__2() {
		return ((T (*)(cDisplayClass811*))(Il2CppBase() + 0x1F00B8C))(this);
	}

};

}
