#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.Fonts {

class FontUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.Fonts", "FontUtil"));
	}

	template <typename T = uintptr_t> T& curSettingFontEnum() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mappings() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& sys() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& zpix() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& curFont() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& FontUpdateTracker_TrackedDic() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FontUtil*))(Il2CppBase() + 0x45541F4))(this);
	}
	template <typename T = uintptr_t> T GetFontByFontSetting(uintptr_t fontSetting) {
		return ((T (*)(FontUtil*, uintptr_t))(Il2CppBase() + 0x4554330))(this, fontSetting);
	}
	template <typename T = void> T SetFont(uintptr_t fontSetting) {
		return ((T (*)(FontUtil*, uintptr_t))(Il2CppBase() + 0x45546A0))(this, fontSetting);
	}
	template <typename T = void> T SwitchTextFont() {
		return ((T (*)(FontUtil*))(Il2CppBase() + 0x45543B4))(this);
	}
	template <typename T = bool> T IsSysOrZpixFont(uintptr_t font) {
		return ((T (*)(FontUtil*, uintptr_t))(Il2CppBase() + 0x4554874))(this, font);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T GetTrackedTexts() {
		return ((T (*)(FontUtil*))(Il2CppBase() + 0x4554728))(this);
	}
	template <typename T = void> T Startb__5_0(uintptr_t text) {
		return ((T (*)(FontUtil*, uintptr_t))(Il2CppBase() + 0x4554A60))(this, text);
	}

};

}
