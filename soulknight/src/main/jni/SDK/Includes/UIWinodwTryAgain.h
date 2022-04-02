#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWinodwTryAgain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWinodwTryAgain"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& text_gem() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& reborn_gem() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWinodwTryAgain*))(Il2CppBase() + 0x45D534C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIWinodwTryAgain*))(Il2CppBase() + 0x45D5450))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWinodwTryAgain*))(Il2CppBase() + 0x45D55FC))(this);
	}
	template <typename T = void> T ShowWindow() {
		return ((T (*)(UIWinodwTryAgain*))(Il2CppBase() + 0x45D5B50))(this);
	}
	template <typename T = void> T BtnGemClick() {
		return ((T (*)(UIWinodwTryAgain*))(Il2CppBase() + 0x45D5994))(this);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWinodwTryAgain*))(Il2CppBase() + 0x45D5718))(this);
	}

};

}
