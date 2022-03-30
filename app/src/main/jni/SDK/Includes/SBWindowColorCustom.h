#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SBWindowColorCustom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SBWindowColorCustom"));
	}

	template <typename T = uintptr_t> T& inputR() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& inputG() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& inputB() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sliderR() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& sliderG() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& sliderB() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& previewIcon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& onConfirm() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& onCanel() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T get_windowSandbox() {
		return ((T (*)(SBWindowColorCustom*))(Il2CppBase() + 0x180E1A8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SBWindowColorCustom*))(Il2CppBase() + 0x180E238))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SBWindowColorCustom*))(Il2CppBase() + 0x180E4FC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SBWindowColorCustom*))(Il2CppBase() + 0x180E558))(this);
	}
	template <typename T = void> T SetColor(uintptr_t color) {
		return ((T (*)(SBWindowColorCustom*, uintptr_t))(Il2CppBase() + 0x180E5B4))(this, color);
	}
	template <typename T = void> T Show(void* onConfirm, uintptr_t onCanel) {
		return ((T (*)(SBWindowColorCustom*, void*, uintptr_t))(Il2CppBase() + 0x180E6A4))(this, onConfirm, onCanel);
	}
	template <typename T = void> T OnClick_Confirm() {
		return ((T (*)(SBWindowColorCustom*))(Il2CppBase() + 0x180E7E8))(this);
	}
	template <typename T = void> T OnClick_Cancel() {
		return ((T (*)(SBWindowColorCustom*))(Il2CppBase() + 0x180E8D8))(this);
	}
	template <typename T = void> T OnValueChanged_Color(uintptr_t slider) {
		return ((T (*)(SBWindowColorCustom*, uintptr_t))(Il2CppBase() + 0x180E974))(this, slider);
	}
	template <typename T = void> T OnTextEditEnd(uintptr_t inputField) {
		return ((T (*)(SBWindowColorCustom*, uintptr_t))(Il2CppBase() + 0x180EC78))(this, inputField);
	}
	template <typename T = void> T OnColorChange() {
		return ((T (*)(SBWindowColorCustom*))(Il2CppBase() + 0x180EB14))(this);
	}

};

}
