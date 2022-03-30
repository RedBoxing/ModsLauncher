#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass494
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass49_4"));
	}

	template <typename T = uintptr_t> T& bulletInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& damageInfo() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& dmg() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CS$8__locals4() {
		return *(T*)((uintptr_t)this + 0x88);
	}


};

}
