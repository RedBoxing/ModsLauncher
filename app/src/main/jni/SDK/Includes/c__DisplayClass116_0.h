#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass1160
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass116_0"));
	}

	template <typename T = float> T& p0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& p1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& p2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& p3() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = float> T CubicBezierb__0(float c, float s, float e, float d) {
		return ((T (*)(cDisplayClass1160*, float, float, float, float))(Il2CppBase() + 0x46415C8))(this, c, s, e, d);
	}

};

}
