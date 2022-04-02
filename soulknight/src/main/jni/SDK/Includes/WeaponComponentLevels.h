#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComponentLevels
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComponentLevels"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& levels() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T Has(int32_t level) {
		return ((T (*)(WeaponComponentLevels*, int32_t))(Il2CppBase() + 0x4497CA8))(this, level);
	}
	template <typename T = uintptr_t> T Get(int32_t level) {
		return ((T (*)(WeaponComponentLevels*, int32_t))(Il2CppBase() + 0x4497DCC))(this, level);
	}

};

}
