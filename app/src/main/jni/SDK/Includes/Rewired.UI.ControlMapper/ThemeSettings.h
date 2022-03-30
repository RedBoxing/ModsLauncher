#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class ThemeSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "ThemeSettings"));
	}

	template <typename T = uintptr_t> T& _mainWindowBackground() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _popupWindowBackground() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _areaBackground() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _selectableSettings() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _buttonSettings() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _inputGridFieldSettings() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _scrollbarSettings() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _sliderSettings() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _invertToggle() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _invertToggleDisabledColor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _calibrationBackground() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _calibrationValueMarker() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _calibrationRawValueMarker() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _calibrationZeroMarker() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _calibrationCalibratedZeroMarker() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _calibrationDeadzone() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _textSettings() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _buttonTextSettings() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _inputGridFieldTextSettings() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Apply(Il2CppArray<uintptr_t>* elementInfo) {
		return ((T (*)(ThemeSettings*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x21F6930))(this, elementInfo);
	}
	template <typename T = void> T Apply_1(Il2CppString* themeClass, uintptr_t component) {
		return ((T (*)(ThemeSettings*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21F6A78))(this, themeClass, component);
	}
	template <typename T = void> T Apply_2(Il2CppString* themeClass, uintptr_t item) {
		return ((T (*)(ThemeSettings*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21F6EE8))(this, themeClass, item);
	}
	template <typename T = void> T Apply_3(Il2CppString* themeClass, uintptr_t item) {
		return ((T (*)(ThemeSettings*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21F71F0))(this, themeClass, item);
	}
	template <typename T = void> T Apply_4(Il2CppString* themeClass, uintptr_t item) {
		return ((T (*)(ThemeSettings*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21F75D0))(this, themeClass, item);
	}
	template <typename T = void> T Apply_5(Il2CppString* themeClass, uintptr_t item) {
		return ((T (*)(ThemeSettings*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21F7968))(this, themeClass, item);
	}
	template <typename T = uintptr_t> static T GetFontStyle(uintptr_t style) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21F7B1C))(0, style);
	}

};

}
