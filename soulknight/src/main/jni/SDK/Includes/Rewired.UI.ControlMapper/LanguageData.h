#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class LanguageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "LanguageData"));
	}

	template <typename T = Il2CppString*> T& _yes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _no() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _add() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _replace() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& _remove() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _swap() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& _cancel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& _none() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& _okay() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& _done() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _default() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& _assignControllerWindowTitle() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& _assignControllerWindowMessage() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& _controllerAssignmentConflictWindowTitle() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& _controllerAssignmentConflictWindowMessage() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& _elementAssignmentPrePollingWindowMessage() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& _joystickElementAssignmentPollingWindowMessage() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& _joystickElementAssignmentPollingWindowMessage_fullAxisFieldOnly() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& _keyboardElementAssignmentPollingWindowMessage() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& _mouseElementAssignmentPollingWindowMessage() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& _mouseElementAssignmentPollingWindowMessage_fullAxisFieldOnly() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& _elementAssignmentConflictWindowMessage() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& _elementAlreadyInUseBlocked() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& _elementAlreadyInUseCanReplace() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& _elementAlreadyInUseCanReplace_conflictAllowed() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> T& _mouseAssignmentConflictWindowTitle() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& _mouseAssignmentConflictWindowMessage() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& _calibrateControllerWindowTitle() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& _calibrateAxisStep1WindowTitle() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& _calibrateAxisStep1WindowMessage() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& _calibrateAxisStep2WindowTitle() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& _calibrateAxisStep2WindowMessage() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppString*> T& _inputBehaviorSettingsWindowTitle() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& _restoreDefaultsWindowTitle() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppString*> T& _restoreDefaultsWindowMessage_onePlayer() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppString*> T& _restoreDefaultsWindowMessage_multiPlayer() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppString*> T& _actionColumnLabel() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppString*> T& _keyboardColumnLabel() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppString*> T& _mouseColumnLabel() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppString*> T& _controllerColumnLabel() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppString*> T& _removeControllerButtonLabel() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppString*> T& _calibrateControllerButtonLabel() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppString*> T& _assignControllerButtonLabel() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppString*> T& _inputBehaviorSettingsButtonLabel() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppString*> T& _doneButtonLabel() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppString*> T& _restoreDefaultsButtonLabel() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppString*> T& _playersGroupLabel() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppString*> T& _controllerSettingsGroupLabel() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = Il2CppString*> T& _assignedControllersGroupLabel() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = Il2CppString*> T& _settingsGroupLabel() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppString*> T& _mapCategoriesGroupLabel() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppString*> T& _calibrateWindow_deadZoneSliderLabel() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppString*> T& _calibrateWindow_zeroSliderLabel() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppString*> T& _calibrateWindow_sensitivitySliderLabel() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = Il2CppString*> T& _calibrateWindow_invertToggleLabel() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = Il2CppString*> T& _calibrateWindow_calibrateButtonLabel() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& _modifierKeys() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _customEntries() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = bool> T& _initialized() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& customDict() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F30B0))(this);
	}
	template <typename T = Il2CppString*> T GetCustomEntry(Il2CppString* key) {
		return ((T (*)(LanguageData*, Il2CppString*))(Il2CppBase() + 0x21F3404))(this, key);
	}
	template <typename T = bool> T ContainsCustomEntryKey(Il2CppString* key) {
		return ((T (*)(LanguageData*, Il2CppString*))(Il2CppBase() + 0x21F34F0))(this, key);
	}
	template <typename T = Il2CppString*> T get_yes() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F35CC))(this);
	}
	template <typename T = Il2CppString*> T get_no() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F362C))(this);
	}
	template <typename T = Il2CppString*> T get_add() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F368C))(this);
	}
	template <typename T = Il2CppString*> T get_replace() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F36EC))(this);
	}
	template <typename T = Il2CppString*> T get_remove() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F374C))(this);
	}
	template <typename T = Il2CppString*> T get_swap() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F37AC))(this);
	}
	template <typename T = Il2CppString*> T get_cancel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F380C))(this);
	}
	template <typename T = Il2CppString*> T get_none() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F386C))(this);
	}
	template <typename T = Il2CppString*> T get_okay() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F38CC))(this);
	}
	template <typename T = Il2CppString*> T get_done() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F392C))(this);
	}
	template <typename T = Il2CppString*> T get_default_() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F398C))(this);
	}
	template <typename T = Il2CppString*> T get_assignControllerWindowTitle() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F39EC))(this);
	}
	template <typename T = Il2CppString*> T get_assignControllerWindowMessage() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3A4C))(this);
	}
	template <typename T = Il2CppString*> T get_controllerAssignmentConflictWindowTitle() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3AAC))(this);
	}
	template <typename T = Il2CppString*> T get_elementAssignmentPrePollingWindowMessage() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3B0C))(this);
	}
	template <typename T = Il2CppString*> T get_elementAssignmentConflictWindowMessage() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3B6C))(this);
	}
	template <typename T = Il2CppString*> T get_mouseAssignmentConflictWindowTitle() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3BCC))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateControllerWindowTitle() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3C2C))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateAxisStep1WindowTitle() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3C8C))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateAxisStep2WindowTitle() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3CEC))(this);
	}
	template <typename T = Il2CppString*> T get_inputBehaviorSettingsWindowTitle() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3D4C))(this);
	}
	template <typename T = Il2CppString*> T get_restoreDefaultsWindowTitle() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3DAC))(this);
	}
	template <typename T = Il2CppString*> T get_actionColumnLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3E0C))(this);
	}
	template <typename T = Il2CppString*> T get_keyboardColumnLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3E6C))(this);
	}
	template <typename T = Il2CppString*> T get_mouseColumnLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3ECC))(this);
	}
	template <typename T = Il2CppString*> T get_controllerColumnLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3F2C))(this);
	}
	template <typename T = Il2CppString*> T get_removeControllerButtonLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3F8C))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateControllerButtonLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F3FEC))(this);
	}
	template <typename T = Il2CppString*> T get_assignControllerButtonLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F404C))(this);
	}
	template <typename T = Il2CppString*> T get_inputBehaviorSettingsButtonLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F40AC))(this);
	}
	template <typename T = Il2CppString*> T get_doneButtonLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F410C))(this);
	}
	template <typename T = Il2CppString*> T get_restoreDefaultsButtonLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F416C))(this);
	}
	template <typename T = Il2CppString*> T get_controllerSettingsGroupLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F41CC))(this);
	}
	template <typename T = Il2CppString*> T get_playersGroupLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F422C))(this);
	}
	template <typename T = Il2CppString*> T get_assignedControllersGroupLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F428C))(this);
	}
	template <typename T = Il2CppString*> T get_settingsGroupLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F42EC))(this);
	}
	template <typename T = Il2CppString*> T get_mapCategoriesGroupLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F434C))(this);
	}
	template <typename T = Il2CppString*> T get_restoreDefaultsWindowMessage() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F43AC))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateWindow_deadZoneSliderLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F4480))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateWindow_zeroSliderLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F44E0))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateWindow_sensitivitySliderLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F4540))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateWindow_invertToggleLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F45A0))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateWindow_calibrateButtonLabel() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x21F4600))(this);
	}
	template <typename T = Il2CppString*> T GetControllerAssignmentConflictWindowMessage(Il2CppString* joystickName, Il2CppString* otherPlayerName, Il2CppString* currentPlayerName) {
		return ((T (*)(LanguageData*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21F4660))(this, joystickName, otherPlayerName, currentPlayerName);
	}
	template <typename T = Il2CppString*> T GetJoystickElementAssignmentPollingWindowMessage(Il2CppString* actionName) {
		return ((T (*)(LanguageData*, Il2CppString*))(Il2CppBase() + 0x21F4700))(this, actionName);
	}
	template <typename T = Il2CppString*> T GetJoystickElementAssignmentPollingWindowMessage_FullAxisFieldOnly(Il2CppString* actionName) {
		return ((T (*)(LanguageData*, Il2CppString*))(Il2CppBase() + 0x21F477C))(this, actionName);
	}
	template <typename T = Il2CppString*> T GetKeyboardElementAssignmentPollingWindowMessage(Il2CppString* actionName) {
		return ((T (*)(LanguageData*, Il2CppString*))(Il2CppBase() + 0x21F47F8))(this, actionName);
	}
	template <typename T = Il2CppString*> T GetMouseElementAssignmentPollingWindowMessage(Il2CppString* actionName) {
		return ((T (*)(LanguageData*, Il2CppString*))(Il2CppBase() + 0x21F4874))(this, actionName);
	}
	template <typename T = Il2CppString*> T GetMouseElementAssignmentPollingWindowMessage_FullAxisFieldOnly(Il2CppString* actionName) {
		return ((T (*)(LanguageData*, Il2CppString*))(Il2CppBase() + 0x21F48F0))(this, actionName);
	}
	template <typename T = Il2CppString*> T GetElementAlreadyInUseBlocked(Il2CppString* elementName) {
		return ((T (*)(LanguageData*, Il2CppString*))(Il2CppBase() + 0x21F496C))(this, elementName);
	}
	template <typename T = Il2CppString*> T GetElementAlreadyInUseCanReplace(Il2CppString* elementName, bool allowConflicts) {
		return ((T (*)(LanguageData*, Il2CppString*, bool))(Il2CppBase() + 0x21F49E8))(this, elementName, allowConflicts);
	}
	template <typename T = Il2CppString*> T GetMouseAssignmentConflictWindowMessage(Il2CppString* otherPlayerName, Il2CppString* thisPlayerName) {
		return ((T (*)(LanguageData*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x21F4A78))(this, otherPlayerName, thisPlayerName);
	}
	template <typename T = Il2CppString*> T GetCalibrateAxisStep1WindowMessage(Il2CppString* axisName) {
		return ((T (*)(LanguageData*, Il2CppString*))(Il2CppBase() + 0x21F4B00))(this, axisName);
	}
	template <typename T = Il2CppString*> T GetCalibrateAxisStep2WindowMessage(Il2CppString* axisName) {
		return ((T (*)(LanguageData*, Il2CppString*))(Il2CppBase() + 0x21F4B7C))(this, axisName);
	}
	template <typename T = Il2CppString*> T GetPlayerName(int32_t playerId) {
		return ((T (*)(LanguageData*, int32_t))(Il2CppBase() + 0x21F4BF8))(this, playerId);
	}
	template <typename T = Il2CppString*> T GetControllerName(uintptr_t controller) {
		return ((T (*)(LanguageData*, uintptr_t))(Il2CppBase() + 0x21F4D50))(this, controller);
	}
	template <typename T = Il2CppString*> T GetElementIdentifierName(uintptr_t actionElementMap) {
		return ((T (*)(LanguageData*, uintptr_t))(Il2CppBase() + 0x21F4E34))(this, actionElementMap);
	}
	template <typename T = Il2CppString*> T GetElementIdentifierName_1(uintptr_t controller, int32_t elementIdentifierId, uintptr_t axisRange) {
		return ((T (*)(LanguageData*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x21F4FDC))(this, controller, elementIdentifierId, axisRange);
	}
	template <typename T = Il2CppString*> T GetElementIdentifierName_2(uintptr_t keyCode, uintptr_t modifierKeyFlags) {
		return ((T (*)(LanguageData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21F51B4))(this, keyCode, modifierKeyFlags);
	}
	template <typename T = Il2CppString*> T GetActionName(int32_t actionId) {
		return ((T (*)(LanguageData*, int32_t))(Il2CppBase() + 0x21F52C8))(this, actionId);
	}
	template <typename T = Il2CppString*> T GetActionName_1(int32_t actionId, uintptr_t axisRange) {
		return ((T (*)(LanguageData*, int32_t, uintptr_t))(Il2CppBase() + 0x21F5420))(this, actionId, axisRange);
	}
	template <typename T = Il2CppString*> T GetMapCategoryName(int32_t id) {
		return ((T (*)(LanguageData*, int32_t))(Il2CppBase() + 0x21F5684))(this, id);
	}
	template <typename T = Il2CppString*> T GetActionCategoryName(int32_t id) {
		return ((T (*)(LanguageData*, int32_t))(Il2CppBase() + 0x21F57DC))(this, id);
	}
	template <typename T = Il2CppString*> T GetLayoutName(uintptr_t controllerType, int32_t id) {
		return ((T (*)(LanguageData*, uintptr_t, int32_t))(Il2CppBase() + 0x21F5934))(this, controllerType, id);
	}
	template <typename T = Il2CppString*> T ModifierKeyFlagsToString(uintptr_t flags) {
		return ((T (*)(LanguageData*, uintptr_t))(Il2CppBase() + 0x21F5B78))(this, flags);
	}

};

}
