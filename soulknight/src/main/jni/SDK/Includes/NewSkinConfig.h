#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NewSkinConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewSkinConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& skins() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T isNewSkin(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(NewSkinConfig*, uintptr_t, int32_t))(Il2CppBase() + 0x4521114))(this, hero, skinIndex);
	}

};

}
