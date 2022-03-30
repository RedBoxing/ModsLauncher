#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIBtnChoseHero
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIBtnChoseHero"));
	}

	template <typename T = uintptr_t> T& chose_hero() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& hideIfUnlock() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIBtnChoseHero*))(Il2CppBase() + 0x419AE0C))(this);
	}
	template <typename T = void> T BtnClick() {
		return ((T (*)(UIBtnChoseHero*))(Il2CppBase() + 0x419AF24))(this);
	}

};

}
