#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UnlockCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockCondition"));
	}

	template <typename T = uintptr_t> T& achievement_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& target_int() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& target_str() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& target_hero() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& is_enough() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
