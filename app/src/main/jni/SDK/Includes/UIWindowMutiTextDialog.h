#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowMutiTextDialog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowMutiTextDialog"));
	}

	template <typename T = uintptr_t> T& title() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& bg() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bgTitle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& AgreeBtn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& DisAgreeBtn() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& onConfirm() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& onCancel() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T SetContentSize(int32_t size, int32_t bestFitMinSize, int32_t bestFitMaxSize) {
		return ((T (*)(UIWindowMutiTextDialog*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x44B9098))(this, size, bestFitMinSize, bestFitMaxSize);
	}
	template <typename T = void> T OnClickConfirm() {
		return ((T (*)(UIWindowMutiTextDialog*))(Il2CppBase() + 0x44B9180))(this);
	}
	template <typename T = void> T OnClickCancel() {
		return ((T (*)(UIWindowMutiTextDialog*))(Il2CppBase() + 0x44B92D0))(this);
	}
	template <typename T = uintptr_t> static T ShowDialog(uintptr_t parent, uintptr_t dialogParams) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x44B9420))(0, parent, dialogParams);
	}

};

}
