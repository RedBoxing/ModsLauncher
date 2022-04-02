#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIHeroSkinWeaponIndex
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIHeroSkinWeaponIndex"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, int32_t>*>*> T& skinWeaponIndex() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = int32_t> T GetSkinWeaponIndex(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(UIHeroSkinWeaponIndex*, uintptr_t, int32_t))(Il2CppBase() + 0x43378C0))(this, hero, skinIndex);
	}

};

}
