#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass62
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass6_2"));
	}

	template <typename T = Il2CppVector3> T& oriPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& shiftDir() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& shiftAmount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& shiftSign() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& CS$8__locals2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnStartb__5(float dt) {
		return ((T (*)(cDisplayClass62*, float))(Il2CppBase() + 0x209C2F0))(this, dt);
	}

};

}
