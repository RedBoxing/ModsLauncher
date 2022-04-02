#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.Fonts {

class FontMapping
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.Fonts", "FontMapping"));
	}

	template <typename T = Il2CppString*> T& fontKey() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& sysFont() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& zpixFont() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T GetFontBySetting(uintptr_t curSettingFontEnum) {
		return ((T (*)(FontMapping*, uintptr_t))(Il2CppBase() + 0x16F38C0))(this, curSettingFontEnum);
	}

};

}
