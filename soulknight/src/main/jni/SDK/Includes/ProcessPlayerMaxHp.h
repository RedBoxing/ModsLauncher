#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ProcessPlayerMaxHp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProcessPlayerMaxHp"));
	}

	template <typename T = uintptr_t> T& maxHpType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& skillIdx() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T ProcessMaxHp(int32_t addVal) {
		return ((T (*)(ProcessPlayerMaxHp*, int32_t))(Il2CppBase() + 0x1BA06A0))(this, addVal);
	}

};

}
