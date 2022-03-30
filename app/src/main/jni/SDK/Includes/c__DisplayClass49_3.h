#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass493
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass49_3"));
	}

	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& sign() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& initDir() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& passedTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& CS$8__locals3() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T Attackb__3(float dt) {
		return ((T (*)(cDisplayClass493*, float))(Il2CppBase() + 0x2015360))(this, dt);
	}

};

}
