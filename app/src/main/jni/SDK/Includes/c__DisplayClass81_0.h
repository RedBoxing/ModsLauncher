#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass810
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass81_0"));
	}

	template <typename T = int32_t> T& comboIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Skill1AtkNormalCombob__3() {
		return ((T (*)(cDisplayClass810*))(Il2CppBase() + 0x1F00B58))(this);
	}

};

}
