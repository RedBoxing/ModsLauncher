#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UICanvasRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICanvasRoot"));
	}


	template <typename T = void> T ShowMessage(Il2CppString* msg, float duration, bool needLocalize) {
		return ((T (*)(UICanvasRoot*, Il2CppString*, float, bool))(Il2CppBase() + 0x41B3520))(this, msg, duration, needLocalize);
	}
	template <typename T = void> T HideMessage() {
		return ((T (*)(UICanvasRoot*))(Il2CppBase() + 0x41B3790))(this);
	}
	template <typename T = void> T ShowLoadingWindow(float duration) {
		return ((T (*)(UICanvasRoot*, float))(Il2CppBase() + 0x41B38F0))(this, duration);
	}
	template <typename T = void> T HideLoadingWindow() {
		return ((T (*)(UICanvasRoot*))(Il2CppBase() + 0x41B3974))(this);
	}
	template <typename T = void> T ShowRealnameWindow() {
		return ((T (*)(UICanvasRoot*))(Il2CppBase() + 0x41B39E0))(this);
	}
	template <typename T = void> T HideRealnameWindow() {
		return ((T (*)(UICanvasRoot*))(Il2CppBase() + 0x41B3B80))(this);
	}
	template <typename T = void> T ShowGuideRealnameWindow(uintptr_t showType) {
		return ((T (*)(UICanvasRoot*, uintptr_t))(Il2CppBase() + 0x41B3CE8))(this, showType);
	}
	template <typename T = void> T ShowPrivacyPolicy(bool forceShowPrivacy) {
		return ((T (*)(UICanvasRoot*, bool))(Il2CppBase() + 0x41B3EF4))(this, forceShowPrivacy);
	}
	template <typename T = void> T ShowGainWindow(uintptr_t sprite, Il2CppString* name) {
		return ((T (*)(UICanvasRoot*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x41B4074))(this, sprite, name);
	}
	template <typename T = void> T ShowUIWinowObjectWithFlag(uintptr_t object_img, uintptr_t flag_img, Il2CppVector3 flag_angle, Il2CppString* object_name) {
		return ((T (*)(UICanvasRoot*, uintptr_t, uintptr_t, Il2CppVector3, Il2CppString*))(Il2CppBase() + 0x41B41E4))(this, object_img, flag_img, flag_angle, object_name);
	}

};

}
