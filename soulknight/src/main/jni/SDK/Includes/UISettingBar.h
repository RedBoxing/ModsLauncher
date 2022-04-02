#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UISettingBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISettingBar"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& icon_bgm() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& icon_effect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& icon_axis() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& icon_control() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& icon_shake() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& icon_arrow() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& text_shake() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& control_mode1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& control_mode2() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& control_mode3() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& btn_clip() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& butttons() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _buttonsNavigationUtil() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UISettingBar*))(Il2CppBase() + 0x423D800))(this);
	}
	template <typename T = void> T SetupNavigation() {
		return ((T (*)(UISettingBar*))(Il2CppBase() + 0x423DB10))(this);
	}
	template <typename T = uintptr_t> T NavigationCoroutine() {
		return ((T (*)(UISettingBar*))(Il2CppBase() + 0x423DB80))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UISettingBar*))(Il2CppBase() + 0x423DC60))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UISettingBar*))(Il2CppBase() + 0x423DCE8))(this);
	}
	template <typename T = void> T BtnBgmClick() {
		return ((T (*)(UISettingBar*))(Il2CppBase() + 0x423E234))(this);
	}
	template <typename T = void> T BtnEffectClick() {
		return ((T (*)(UISettingBar*))(Il2CppBase() + 0x423E40C))(this);
	}
	template <typename T = void> T BtnControlClick() {
		return ((T (*)(UISettingBar*))(Il2CppBase() + 0x423E5E4))(this);
	}
	template <typename T = void> T BtnAxisClick() {
		return ((T (*)(UISettingBar*))(Il2CppBase() + 0x423E7D8))(this);
	}
	template <typename T = void> T BtnShareClick() {
		return ((T (*)(UISettingBar*))(Il2CppBase() + 0x423EA14))(this);
	}
	template <typename T = void> T BtnShakeClick() {
		return ((T (*)(UISettingBar*))(Il2CppBase() + 0x423EE10))(this);
	}
	template <typename T = void> T BtnArrowClick() {
		return ((T (*)(UISettingBar*))(Il2CppBase() + 0x423F19C))(this);
	}
	template <typename T = void> T ShowBar(bool show) {
		return ((T (*)(UISettingBar*, bool))(Il2CppBase() + 0x423F1F8))(this, show);
	}
	template <typename T = void> T Close() {
		return ((T (*)(UISettingBar*))(Il2CppBase() + 0x423F2D4))(this);
	}
	template <typename T = uintptr_t> T CaptureCamera() {
		return ((T (*)(UISettingBar*))(Il2CppBase() + 0x423EA98))(this);
	}

};

}
