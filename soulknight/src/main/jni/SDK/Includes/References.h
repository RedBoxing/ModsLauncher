#pragma once
#include "Il2Cpp/Il2Cpp.h"

class References
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "References"));
	}

	template <typename T = uintptr_t> T& _canvas() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _mainCanvasGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _mainContent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _mainContentInner() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _playersGroup() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _controllerGroup() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _controllerGroupLabelGroup() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _controllerSettingsGroup() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _assignedControllersGroup() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _settingsAndMapCategoriesGroup() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _settingsGroup() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _mapCategoriesGroup() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _inputGridGroup() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _inputGridContainer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _inputGridHeadersGroup() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _inputGridVScrollbar() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _inputGridScrollRect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _inputGridInnerGroup() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _controllerNameLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _removeControllerButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _assignControllerButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _calibrateControllerButton() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _doneButton() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _restoreDefaultsButton() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _defaultSelection() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _fixedSelectableUIElements() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _mainBackgroundImage() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& inputGridLayoutElement() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& inputGridActionColumn() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& inputGridKeyboardColumn() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& inputGridMouseColumn() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& inputGridControllerColumn() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& inputGridHeader1() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& inputGridHeader2() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& inputGridHeader3() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& inputGridHeader4() {
		return *(T*)((uintptr_t)this + 0x128);
	}

	template <typename T = uintptr_t> T get_canvas() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E8F54))(this);
	}
	template <typename T = uintptr_t> T get_mainCanvasGroup() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E8FB4))(this);
	}
	template <typename T = uintptr_t> T get_mainContent() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9014))(this);
	}
	template <typename T = uintptr_t> T get_mainContentInner() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9074))(this);
	}
	template <typename T = uintptr_t> T get_playersGroup() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E90D4))(this);
	}
	template <typename T = uintptr_t> T get_controllerGroup() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9134))(this);
	}
	template <typename T = uintptr_t> T get_controllerGroupLabelGroup() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9194))(this);
	}
	template <typename T = uintptr_t> T get_controllerSettingsGroup() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E91F4))(this);
	}
	template <typename T = uintptr_t> T get_assignedControllersGroup() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9254))(this);
	}
	template <typename T = uintptr_t> T get_settingsAndMapCategoriesGroup() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E92B4))(this);
	}
	template <typename T = uintptr_t> T get_settingsGroup() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9314))(this);
	}
	template <typename T = uintptr_t> T get_mapCategoriesGroup() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9374))(this);
	}
	template <typename T = uintptr_t> T get_inputGridGroup() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E93D4))(this);
	}
	template <typename T = uintptr_t> T get_inputGridContainer() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9434))(this);
	}
	template <typename T = uintptr_t> T get_inputGridHeadersGroup() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9494))(this);
	}
	template <typename T = uintptr_t> T get_inputGridVScrollbar() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E94F4))(this);
	}
	template <typename T = uintptr_t> T get_inputGridScrollRect() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9554))(this);
	}
	template <typename T = uintptr_t> T get_inputGridInnerGroup() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E95B4))(this);
	}
	template <typename T = uintptr_t> T get_controllerNameLabel() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9614))(this);
	}
	template <typename T = uintptr_t> T get_removeControllerButton() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9674))(this);
	}
	template <typename T = uintptr_t> T get_assignControllerButton() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E96D4))(this);
	}
	template <typename T = uintptr_t> T get_calibrateControllerButton() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9734))(this);
	}
	template <typename T = uintptr_t> T get_doneButton() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9794))(this);
	}
	template <typename T = uintptr_t> T get_restoreDefaultsButton() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E97F4))(this);
	}
	template <typename T = uintptr_t> T get_defaultSelection() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9854))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_fixedSelectableUIElements() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E98B4))(this);
	}
	template <typename T = uintptr_t> T get_mainBackgroundImage() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9914))(this);
	}
	template <typename T = uintptr_t> T get_inputGridLayoutElement() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9974))(this);
	}
	template <typename T = void> T set_inputGridLayoutElement(uintptr_t value) {
		return ((T (*)(References*, uintptr_t))(Il2CppBase() + 0x21E997C))(this, value);
	}
	template <typename T = uintptr_t> T get_inputGridActionColumn() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9984))(this);
	}
	template <typename T = void> T set_inputGridActionColumn(uintptr_t value) {
		return ((T (*)(References*, uintptr_t))(Il2CppBase() + 0x21E998C))(this, value);
	}
	template <typename T = uintptr_t> T get_inputGridKeyboardColumn() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9994))(this);
	}
	template <typename T = void> T set_inputGridKeyboardColumn(uintptr_t value) {
		return ((T (*)(References*, uintptr_t))(Il2CppBase() + 0x21E999C))(this, value);
	}
	template <typename T = uintptr_t> T get_inputGridMouseColumn() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E99A4))(this);
	}
	template <typename T = void> T set_inputGridMouseColumn(uintptr_t value) {
		return ((T (*)(References*, uintptr_t))(Il2CppBase() + 0x21E99AC))(this, value);
	}
	template <typename T = uintptr_t> T get_inputGridControllerColumn() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E99B4))(this);
	}
	template <typename T = void> T set_inputGridControllerColumn(uintptr_t value) {
		return ((T (*)(References*, uintptr_t))(Il2CppBase() + 0x21E99BC))(this, value);
	}
	template <typename T = uintptr_t> T get_inputGridHeader1() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E99C4))(this);
	}
	template <typename T = void> T set_inputGridHeader1(uintptr_t value) {
		return ((T (*)(References*, uintptr_t))(Il2CppBase() + 0x21E99CC))(this, value);
	}
	template <typename T = uintptr_t> T get_inputGridHeader2() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E99D4))(this);
	}
	template <typename T = void> T set_inputGridHeader2(uintptr_t value) {
		return ((T (*)(References*, uintptr_t))(Il2CppBase() + 0x21E99DC))(this, value);
	}
	template <typename T = uintptr_t> T get_inputGridHeader3() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E99E4))(this);
	}
	template <typename T = void> T set_inputGridHeader3(uintptr_t value) {
		return ((T (*)(References*, uintptr_t))(Il2CppBase() + 0x21E99EC))(this, value);
	}
	template <typename T = uintptr_t> T get_inputGridHeader4() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E99F4))(this);
	}
	template <typename T = void> T set_inputGridHeader4(uintptr_t value) {
		return ((T (*)(References*, uintptr_t))(Il2CppBase() + 0x21E99FC))(this, value);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(References*))(Il2CppBase() + 0x21E9A04))(this);
	}

};

}
