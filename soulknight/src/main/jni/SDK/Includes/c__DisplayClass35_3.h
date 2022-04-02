#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass353
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass35_3"));
	}

	template <typename T = Il2CppVector3> T& pos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& t() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& CS$8__locals3() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T OnChoosePartb__9(float dt, float p) {
		return ((T (*)(cDisplayClass353*, float, float))(Il2CppBase() + 0x4198680))(this, dt, p);
	}

};

}
