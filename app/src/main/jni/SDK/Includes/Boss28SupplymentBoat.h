#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Boss28SupplymentBoat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Boss28SupplymentBoat"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& staff() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& hand() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& pirate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _targetObj() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _grabObj() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Prepare(uintptr_t rg_random) {
		return ((T (*)(Boss28SupplymentBoat*, uintptr_t))(Il2CppBase() + 0x1B2F45C))(this, rg_random);
	}
	template <typename T = uintptr_t> T Throw(Il2CppVector3 position, float duration) {
		return ((T (*)(Boss28SupplymentBoat*, Il2CppVector3, float))(Il2CppBase() + 0x1B2F868))(this, position, duration);
	}

};

}
