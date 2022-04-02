#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UITextContentSizeFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITextContentSizeFilter"));
	}

	template <typename T = float> T& minWidth() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& maxWidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& yMargin() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& maxHeight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& widthFixed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& refreshInUpdate() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> T& _uiText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& updateSizeInLateUpdate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _fontSize() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = uintptr_t> T get_uiText() {
		return ((T (*)(UITextContentSizeFilter*))(Il2CppBase() + 0x41C9F70))(this);
	}
	template <typename T = void> T SetWidth(uintptr_t trans, float width) {
		return ((T (*)(UITextContentSizeFilter*, uintptr_t, float))(Il2CppBase() + 0x41CA060))(this, trans, width);
	}
	template <typename T = void> T SetHeight(uintptr_t trans, float height) {
		return ((T (*)(UITextContentSizeFilter*, uintptr_t, float))(Il2CppBase() + 0x41CA100))(this, trans, height);
	}
	template <typename T = void> T UpdateSize(int32_t fontSize) {
		return ((T (*)(UITextContentSizeFilter*, int32_t))(Il2CppBase() + 0x41CA1A0))(this, fontSize);
	}
	template <typename T = void> T _UpdateSize(int32_t fontSize) {
		return ((T (*)(UITextContentSizeFilter*, int32_t))(Il2CppBase() + 0x41CA230))(this, fontSize);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UITextContentSizeFilter*))(Il2CppBase() + 0x41CA810))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(UITextContentSizeFilter*))(Il2CppBase() + 0x41CA888))(this);
	}

};

}
