#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass492
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass49_2"));
	}

	template <typename T = float> T& flySpeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& flyDistance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& bulletObj() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& bulletConfig() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CS$8__locals2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T Attackb__1(float dt) {
		return ((T (*)(cDisplayClass492*, float))(Il2CppBase() + 0x2014A10))(this, dt);
	}
	template <typename T = bool> T Attackb__2(float dt) {
		return ((T (*)(cDisplayClass492*, float))(Il2CppBase() + 0x2014C20))(this, dt);
	}
	template <typename T = bool> T Attackb__4(float dt) {
		return ((T (*)(cDisplayClass492*, float))(Il2CppBase() + 0x2014F78))(this, dt);
	}

};

}
