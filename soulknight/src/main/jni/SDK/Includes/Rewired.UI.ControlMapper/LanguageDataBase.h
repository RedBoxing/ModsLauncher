#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class LanguageDataBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "LanguageDataBase"));
	}


	template <typename T = void> T Initialize() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetCustomEntry(Il2CppString* key) {
		return ((T (*)(LanguageDataBase*, Il2CppString*))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = bool> T ContainsCustomEntryKey(Il2CppString* key) {
		return ((T (*)(LanguageDataBase*, Il2CppString*))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = Il2CppString*> T get_yes() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_no() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_add() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_replace() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_remove() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_swap() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_cancel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_none() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_okay() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_done() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_default_() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_assignControllerWindowTitle() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_assignControllerWindowMessage() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_controllerAssignmentConflictWindowTitle() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_elementAssignmentPrePollingWindowMessage() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_elementAssignmentConflictWindowMessage() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_mouseAssignmentConflictWindowTitle() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateControllerWindowTitle() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateAxisStep1WindowTitle() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateAxisStep2WindowTitle() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_inputBehaviorSettingsWindowTitle() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_restoreDefaultsWindowTitle() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_actionColumnLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_keyboardColumnLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_mouseColumnLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_controllerColumnLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_removeControllerButtonLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateControllerButtonLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_assignControllerButtonLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_inputBehaviorSettingsButtonLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_doneButtonLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_restoreDefaultsButtonLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_controllerSettingsGroupLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_playersGroupLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_assignedControllersGroupLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_settingsGroupLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_mapCategoriesGroupLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_restoreDefaultsWindowMessage() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateWindow_deadZoneSliderLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateWindow_zeroSliderLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateWindow_sensitivitySliderLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateWindow_invertToggleLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_calibrateWindow_calibrateButtonLabel() {
		return ((T (*)(LanguageDataBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetControllerAssignmentConflictWindowMessage(Il2CppString* joystickName, Il2CppString* otherPlayerName, Il2CppString* currentPlayerName) {
		return ((T (*)(LanguageDataBase*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, joystickName, otherPlayerName, currentPlayerName);
	}
	template <typename T = Il2CppString*> T GetJoystickElementAssignmentPollingWindowMessage(Il2CppString* actionName) {
		return ((T (*)(LanguageDataBase*, Il2CppString*))(Il2CppBase() + 0x0))(this, actionName);
	}
	template <typename T = Il2CppString*> T GetJoystickElementAssignmentPollingWindowMessage_FullAxisFieldOnly(Il2CppString* actionName) {
		return ((T (*)(LanguageDataBase*, Il2CppString*))(Il2CppBase() + 0x0))(this, actionName);
	}
	template <typename T = Il2CppString*> T GetKeyboardElementAssignmentPollingWindowMessage(Il2CppString* actionName) {
		return ((T (*)(LanguageDataBase*, Il2CppString*))(Il2CppBase() + 0x0))(this, actionName);
	}
	template <typename T = Il2CppString*> T GetMouseElementAssignmentPollingWindowMessage(Il2CppString* actionName) {
		return ((T (*)(LanguageDataBase*, Il2CppString*))(Il2CppBase() + 0x0))(this, actionName);
	}
	template <typename T = Il2CppString*> T GetMouseElementAssignmentPollingWindowMessage_FullAxisFieldOnly(Il2CppString* actionName) {
		return ((T (*)(LanguageDataBase*, Il2CppString*))(Il2CppBase() + 0x0))(this, actionName);
	}
	template <typename T = Il2CppString*> T GetElementAlreadyInUseBlocked(Il2CppString* elementName) {
		return ((T (*)(LanguageDataBase*, Il2CppString*))(Il2CppBase() + 0x0))(this, elementName);
	}
	template <typename T = Il2CppString*> T GetElementAlreadyInUseCanReplace(Il2CppString* elementName, bool allowConflicts) {
		return ((T (*)(LanguageDataBase*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, elementName, allowConflicts);
	}
	template <typename T = Il2CppString*> T GetMouseAssignmentConflictWindowMessage(Il2CppString* otherPlayerName, Il2CppString* thisPlayerName) {
		return ((T (*)(LanguageDataBase*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, otherPlayerName, thisPlayerName);
	}
	template <typename T = Il2CppString*> T GetCalibrateAxisStep1WindowMessage(Il2CppString* axisName) {
		return ((T (*)(LanguageDataBase*, Il2CppString*))(Il2CppBase() + 0x0))(this, axisName);
	}
	template <typename T = Il2CppString*> T GetCalibrateAxisStep2WindowMessage(Il2CppString* axisName) {
		return ((T (*)(LanguageDataBase*, Il2CppString*))(Il2CppBase() + 0x0))(this, axisName);
	}
	template <typename T = Il2CppString*> T GetPlayerName(int32_t playerId) {
		return ((T (*)(LanguageDataBase*, int32_t))(Il2CppBase() + 0x0))(this, playerId);
	}
	template <typename T = Il2CppString*> T GetControllerName(uintptr_t controller) {
		return ((T (*)(LanguageDataBase*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = Il2CppString*> T GetElementIdentifierName(uintptr_t actionElementMap) {
		return ((T (*)(LanguageDataBase*, uintptr_t))(Il2CppBase() + 0x0))(this, actionElementMap);
	}
	template <typename T = Il2CppString*> T GetElementIdentifierName_1(uintptr_t controller, int32_t elementIdentifierId, uintptr_t axisRange) {
		return ((T (*)(LanguageDataBase*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, controller, elementIdentifierId, axisRange);
	}
	template <typename T = Il2CppString*> T GetElementIdentifierName_2(uintptr_t keyCode, uintptr_t modifierKeyFlags) {
		return ((T (*)(LanguageDataBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, keyCode, modifierKeyFlags);
	}
	template <typename T = Il2CppString*> T GetActionName(int32_t actionId) {
		return ((T (*)(LanguageDataBase*, int32_t))(Il2CppBase() + 0x0))(this, actionId);
	}
	template <typename T = Il2CppString*> T GetActionName_1(int32_t actionId, uintptr_t axisRange) {
		return ((T (*)(LanguageDataBase*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, actionId, axisRange);
	}
	template <typename T = Il2CppString*> T GetMapCategoryName(int32_t id) {
		return ((T (*)(LanguageDataBase*, int32_t))(Il2CppBase() + 0x0))(this, id);
	}
	template <typename T = Il2CppString*> T GetActionCategoryName(int32_t id) {
		return ((T (*)(LanguageDataBase*, int32_t))(Il2CppBase() + 0x0))(this, id);
	}
	template <typename T = Il2CppString*> T GetLayoutName(uintptr_t controllerType, int32_t id) {
		return ((T (*)(LanguageDataBase*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, controllerType, id);
	}
	template <typename T = Il2CppString*> T ModifierKeyFlagsToString(uintptr_t flags) {
		return ((T (*)(LanguageDataBase*, uintptr_t))(Il2CppBase() + 0x0))(this, flags);
	}

};

}
