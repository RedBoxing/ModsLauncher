#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGRuinSword
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGRuinSword"));
	}

	template <typename T = bool> T& revert() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _b() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = uintptr_t> T get_b() {
		return ((T (*)(RGRuinSword*))(Il2CppBase() + 0x1C7E1B4))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGRuinSword*))(Il2CppBase() + 0x1C7E2A4))(this);
	}
	template <typename T = void> T ResetSize() {
		return ((T (*)(RGRuinSword*))(Il2CppBase() + 0x1C7E300))(this);
	}

};

}
