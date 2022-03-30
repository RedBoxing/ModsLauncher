#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI {

class WindowAdDialog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI", "WindowAdDialog"));
	}

	template <typename T = uintptr_t> T& _onPlayAdSucceed() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T DestroyWindow() {
		return ((T (*)(WindowAdDialog*))(Il2CppBase() + 0x454CB90))(this);
	}
	template <typename T = void> T OnPlayAdButtonClicked() {
		return ((T (*)(WindowAdDialog*))(Il2CppBase() + 0x454CC4C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WindowAdDialog*))(Il2CppBase() + 0x454CD68))(this);
	}
	template <typename T = void> T Setup(Il2CppString* description, uintptr_t onPlayAdSucceed) {
		return ((T (*)(WindowAdDialog*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x454D0BC))(this, description, onPlayAdSucceed);
	}
	template <typename T = void> static T Show(Il2CppString* description, uintptr_t onPlayAdSucceed) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x454D1D0))(0, description, onPlayAdSucceed);
	}
	template <typename T = void> T OnPlayAdButtonClickedb__2_0() {
		return ((T (*)(WindowAdDialog*))(Il2CppBase() + 0x454D324))(this);
	}

};

}
