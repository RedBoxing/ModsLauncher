#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MercenaryInBattle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MercenaryInBattle"));
	}

	template <typename T = Il2CppString*> T& mercenaryName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& hp() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& intensive() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& equipments() {
		return *(T*)((uintptr_t)this + 0x48);
	}


};

}
