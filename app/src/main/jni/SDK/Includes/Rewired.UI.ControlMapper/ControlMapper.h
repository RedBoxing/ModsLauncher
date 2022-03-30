#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class ControlMapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "ControlMapper"));
	}

	template <typename T = int32_t> static T& versionMajor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& versionMinor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& usesTMPro() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& blockInputOnFocusTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buttonIdentifier_playerSelection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buttonIdentifier_removeController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buttonIdentifier_assignController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buttonIdentifier_calibrateController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buttonIdentifier_editInputBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buttonIdentifier_mapCategorySelection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buttonIdentifier_assignedControllerSelection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buttonIdentifier_done() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buttonIdentifier_restoreDefaults() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _rewiredInputManager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _dontDestroyOnLoad() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _openOnStart() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = int32_t> T& _keyboardMapDefaultLayout() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _mouseMapDefaultLayout() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _joystickMapDefaultLayout() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _mappingSets() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _showPlayers() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _showControllers() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& _showKeyboard() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = bool> T& _showMouse() {
		return *(T*)((uintptr_t)this + 0x3B);
	}
	template <typename T = int32_t> T& _maxControllersPerPlayer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& _showActionCategoryLabels() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _keyboardInputFieldCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _mouseInputFieldCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _controllerInputFieldCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& _showFullAxisInputFields() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _showSplitAxisInputFields() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = bool> T& _allowElementAssignmentConflicts() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = bool> T& _allowElementAssignmentSwap() {
		return *(T*)((uintptr_t)this + 0x53);
	}
	template <typename T = int32_t> T& _actionLabelWidth() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _keyboardColMaxWidth() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _mouseColMaxWidth() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _controllerColMaxWidth() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _inputRowHeight() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& _inputRowPadding() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _inputRowFieldSpacing() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& _inputColumnSpacing() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _inputRowCategorySpacing() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _invertToggleWidth() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& _defaultWindowWidth() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _defaultWindowHeight() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& _controllerAssignmentTimeout() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& _preInputAssignmentTimeout() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& _inputAssignmentTimeout() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& _axisCalibrationTimeout() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& _ignoreMouseXAxisAssignment() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& _ignoreMouseYAxisAssignment() {
		return *(T*)((uintptr_t)this + 0x99);
	}
	template <typename T = int32_t> T& _screenToggleAction() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& _screenOpenAction() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _screenCloseAction() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& _universalCancelAction() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& _universalCancelClosesScreen() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& _showInputBehaviorSettings() {
		return *(T*)((uintptr_t)this + 0xAD);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _inputBehaviorSettings() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& _useThemeSettings() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _themeSettings() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _language() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& prefabs() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& references() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& _showPlayersGroupLabel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& _showControllerGroupLabel() {
		return *(T*)((uintptr_t)this + 0xE1);
	}
	template <typename T = bool> T& _showAssignedControllersGroupLabel() {
		return *(T*)((uintptr_t)this + 0xE2);
	}
	template <typename T = bool> T& _showSettingsGroupLabel() {
		return *(T*)((uintptr_t)this + 0xE3);
	}
	template <typename T = bool> T& _showMapCategoriesGroupLabel() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& _showControllerNameLabel() {
		return *(T*)((uintptr_t)this + 0xE5);
	}
	template <typename T = bool> T& _showAssignedControllers() {
		return *(T*)((uintptr_t)this + 0xE6);
	}
	template <typename T = uintptr_t> T& _ScreenClosedEvent() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _ScreenOpenedEvent() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _PopupWindowOpenedEvent() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _PopupWindowClosedEvent() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _InputPollingStartedEvent() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _InputPollingEndedEvent() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _onScreenClosed() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _onScreenOpened() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _onPopupWindowClosed() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _onPopupWindowOpened() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _onInputPollingStarted() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _onInputPollingEnded() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& initialized() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& playerCount() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& inputGrid() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& windowManager() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = int32_t> T& currentPlayerId() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int32_t> T& currentMapCategoryId() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& playerButtons() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mapCategoryButtons() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& assignedControllerButtons() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& assignedControllerButtonsPlaceholder() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& miscInstantiatedObjects() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& canvas() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& lastUISelection() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = int32_t> T& currentJoystickId() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& blockInputOnFocusEndTime() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = bool> T& isPollingForInput() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& pendingInputMapping() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& pendingAxisCalibration() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = void*> T& inputFieldActivatedDelegate() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = void*> T& inputFieldInvertToggleStateChangedDelegate() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& _restoreDefaultsDelegate() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}

	template <typename T = void> T add_ScreenClosedEvent(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8C284))(this, value);
	}
	template <typename T = void> T remove_ScreenClosedEvent(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8C390))(this, value);
	}
	template <typename T = void> T add_ScreenOpenedEvent(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8C49C))(this, value);
	}
	template <typename T = void> T remove_ScreenOpenedEvent(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8C5A8))(this, value);
	}
	template <typename T = void> T add_PopupWindowClosedEvent(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8C6B4))(this, value);
	}
	template <typename T = void> T remove_PopupWindowClosedEvent(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8C7C0))(this, value);
	}
	template <typename T = void> T add_PopupWindowOpenedEvent(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8C8CC))(this, value);
	}
	template <typename T = void> T remove_PopupWindowOpenedEvent(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8C9D8))(this, value);
	}
	template <typename T = void> T add_InputPollingStartedEvent(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8CAE4))(this, value);
	}
	template <typename T = void> T remove_InputPollingStartedEvent(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8CBF0))(this, value);
	}
	template <typename T = void> T add_InputPollingEndedEvent(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8CCFC))(this, value);
	}
	template <typename T = void> T remove_InputPollingEndedEvent(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8CE08))(this, value);
	}
	template <typename T = void> T add_onScreenClosed(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8CF14))(this, value);
	}
	template <typename T = void> T remove_onScreenClosed(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8CFA0))(this, value);
	}
	template <typename T = void> T add_onScreenOpened(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8D02C))(this, value);
	}
	template <typename T = void> T remove_onScreenOpened(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8D0B8))(this, value);
	}
	template <typename T = void> T add_onPopupWindowClosed(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8D144))(this, value);
	}
	template <typename T = void> T remove_onPopupWindowClosed(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8D1D0))(this, value);
	}
	template <typename T = void> T add_onPopupWindowOpened(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8D25C))(this, value);
	}
	template <typename T = void> T remove_onPopupWindowOpened(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8D2E8))(this, value);
	}
	template <typename T = void> T add_onInputPollingStarted(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8D374))(this, value);
	}
	template <typename T = void> T remove_onInputPollingStarted(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8D400))(this, value);
	}
	template <typename T = void> T add_onInputPollingEnded(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8D48C))(this, value);
	}
	template <typename T = void> T remove_onInputPollingEnded(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8D518))(this, value);
	}
	template <typename T = uintptr_t> T get_rewiredInputManager() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8D5A4))(this);
	}
	template <typename T = void> T set_rewiredInputManager(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8D604))(this, value);
	}
	template <typename T = bool> T get_dontDestroyOnLoad() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8D708))(this);
	}
	template <typename T = void> T set_dontDestroyOnLoad(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8D768))(this, value);
	}
	template <typename T = int32_t> T get_keyboardMapDefaultLayout() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8D868))(this);
	}
	template <typename T = void> T set_keyboardMapDefaultLayout(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8D8C8))(this, value);
	}
	template <typename T = int32_t> T get_mouseMapDefaultLayout() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8D944))(this);
	}
	template <typename T = void> T set_mouseMapDefaultLayout(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8D9A4))(this, value);
	}
	template <typename T = int32_t> T get_joystickMapDefaultLayout() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8DA20))(this);
	}
	template <typename T = void> T set_joystickMapDefaultLayout(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8DA80))(this, value);
	}
	template <typename T = bool> T get_showPlayers() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8DAFC))(this);
	}
	template <typename T = void> T set_showPlayers(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8DBD4))(this, value);
	}
	template <typename T = bool> T get_showControllers() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8DC54))(this);
	}
	template <typename T = void> T set_showControllers(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8DCB4))(this, value);
	}
	template <typename T = bool> T get_showKeyboard() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8DD34))(this);
	}
	template <typename T = void> T set_showKeyboard(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8DD94))(this, value);
	}
	template <typename T = bool> T get_showMouse() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8DE14))(this);
	}
	template <typename T = void> T set_showMouse(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8DE74))(this, value);
	}
	template <typename T = int32_t> T get_maxControllersPerPlayer() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8DEF4))(this);
	}
	template <typename T = void> T set_maxControllersPerPlayer(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8DF54))(this, value);
	}
	template <typename T = bool> T get_showActionCategoryLabels() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8DFD0))(this);
	}
	template <typename T = void> T set_showActionCategoryLabels(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8E030))(this, value);
	}
	template <typename T = int32_t> T get_keyboardInputFieldCount() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8E0B0))(this);
	}
	template <typename T = void> T set_keyboardInputFieldCount(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8E110))(this, value);
	}
	template <typename T = int32_t> T get_mouseInputFieldCount() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8E18C))(this);
	}
	template <typename T = void> T set_mouseInputFieldCount(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8E1EC))(this, value);
	}
	template <typename T = int32_t> T get_controllerInputFieldCount() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8E268))(this);
	}
	template <typename T = void> T set_controllerInputFieldCount(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8E2C8))(this, value);
	}
	template <typename T = bool> T get_showFullAxisInputFields() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8E344))(this);
	}
	template <typename T = void> T set_showFullAxisInputFields(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8E3A4))(this, value);
	}
	template <typename T = bool> T get_showSplitAxisInputFields() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8E424))(this);
	}
	template <typename T = void> T set_showSplitAxisInputFields(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8E484))(this, value);
	}
	template <typename T = bool> T get_allowElementAssignmentConflicts() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8E504))(this);
	}
	template <typename T = void> T set_allowElementAssignmentConflicts(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8E564))(this, value);
	}
	template <typename T = bool> T get_allowElementAssignmentSwap() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8E5E4))(this);
	}
	template <typename T = void> T set_allowElementAssignmentSwap(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8E644))(this, value);
	}
	template <typename T = int32_t> T get_actionLabelWidth() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8E6C4))(this);
	}
	template <typename T = void> T set_actionLabelWidth(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8E724))(this, value);
	}
	template <typename T = int32_t> T get_keyboardColMaxWidth() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8E7A0))(this);
	}
	template <typename T = void> T set_keyboardColMaxWidth(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8E800))(this, value);
	}
	template <typename T = int32_t> T get_mouseColMaxWidth() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8E87C))(this);
	}
	template <typename T = void> T set_mouseColMaxWidth(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8E8DC))(this, value);
	}
	template <typename T = int32_t> T get_controllerColMaxWidth() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8E958))(this);
	}
	template <typename T = void> T set_controllerColMaxWidth(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8E9B8))(this, value);
	}
	template <typename T = int32_t> T get_inputRowHeight() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8EA34))(this);
	}
	template <typename T = void> T set_inputRowHeight(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8EA94))(this, value);
	}
	template <typename T = int32_t> T get_inputColumnSpacing() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8EB10))(this);
	}
	template <typename T = void> T set_inputColumnSpacing(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8EB70))(this, value);
	}
	template <typename T = int32_t> T get_inputRowCategorySpacing() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8EBEC))(this);
	}
	template <typename T = void> T set_inputRowCategorySpacing(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8EC4C))(this, value);
	}
	template <typename T = int32_t> T get_invertToggleWidth() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8ECC8))(this);
	}
	template <typename T = void> T set_invertToggleWidth(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8ED28))(this, value);
	}
	template <typename T = int32_t> T get_defaultWindowWidth() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8EDA4))(this);
	}
	template <typename T = void> T set_defaultWindowWidth(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8EE04))(this, value);
	}
	template <typename T = int32_t> T get_defaultWindowHeight() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8EE80))(this);
	}
	template <typename T = void> T set_defaultWindowHeight(int32_t value) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E8EEE0))(this, value);
	}
	template <typename T = float> T get_controllerAssignmentTimeout() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8EF5C))(this);
	}
	template <typename T = void> T set_controllerAssignmentTimeout(float value) {
		return ((T (*)(ControlMapper*, float))(Il2CppBase() + 0x1E8EFBC))(this, value);
	}
	template <typename T = float> T get_preInputAssignmentTimeout() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8F038))(this);
	}
	template <typename T = void> T set_preInputAssignmentTimeout(float value) {
		return ((T (*)(ControlMapper*, float))(Il2CppBase() + 0x1E8F098))(this, value);
	}
	template <typename T = float> T get_inputAssignmentTimeout() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8F114))(this);
	}
	template <typename T = void> T set_inputAssignmentTimeout(float value) {
		return ((T (*)(ControlMapper*, float))(Il2CppBase() + 0x1E8F174))(this, value);
	}
	template <typename T = float> T get_axisCalibrationTimeout() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8F1F0))(this);
	}
	template <typename T = void> T set_axisCalibrationTimeout(float value) {
		return ((T (*)(ControlMapper*, float))(Il2CppBase() + 0x1E8F250))(this, value);
	}
	template <typename T = bool> T get_ignoreMouseXAxisAssignment() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8F2CC))(this);
	}
	template <typename T = void> T set_ignoreMouseXAxisAssignment(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8F32C))(this, value);
	}
	template <typename T = bool> T get_ignoreMouseYAxisAssignment() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8F3AC))(this);
	}
	template <typename T = void> T set_ignoreMouseYAxisAssignment(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8F40C))(this, value);
	}
	template <typename T = bool> T get_universalCancelClosesScreen() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8F48C))(this);
	}
	template <typename T = void> T set_universalCancelClosesScreen(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8F4EC))(this, value);
	}
	template <typename T = bool> T get_showInputBehaviorSettings() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8F56C))(this);
	}
	template <typename T = void> T set_showInputBehaviorSettings(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8F5CC))(this, value);
	}
	template <typename T = bool> T get_useThemeSettings() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8F64C))(this);
	}
	template <typename T = void> T set_useThemeSettings(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8F6AC))(this, value);
	}
	template <typename T = uintptr_t> T get_language() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8F72C))(this);
	}
	template <typename T = void> T set_language(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8F78C))(this, value);
	}
	template <typename T = bool> T get_showPlayersGroupLabel() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8F880))(this);
	}
	template <typename T = void> T set_showPlayersGroupLabel(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8F8E0))(this, value);
	}
	template <typename T = bool> T get_showControllerGroupLabel() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8F960))(this);
	}
	template <typename T = void> T set_showControllerGroupLabel(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8F9C0))(this, value);
	}
	template <typename T = bool> T get_showAssignedControllersGroupLabel() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8FA40))(this);
	}
	template <typename T = void> T set_showAssignedControllersGroupLabel(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8FAA0))(this, value);
	}
	template <typename T = bool> T get_showSettingsGroupLabel() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8FB20))(this);
	}
	template <typename T = void> T set_showSettingsGroupLabel(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8FB80))(this, value);
	}
	template <typename T = bool> T get_showMapCategoriesGroupLabel() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8FC00))(this);
	}
	template <typename T = void> T set_showMapCategoriesGroupLabel(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8FC60))(this, value);
	}
	template <typename T = bool> T get_showControllerNameLabel() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8FCE0))(this);
	}
	template <typename T = void> T set_showControllerNameLabel(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8FD40))(this, value);
	}
	template <typename T = bool> T get_showAssignedControllers() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8FDC0))(this);
	}
	template <typename T = void> T set_showAssignedControllers(bool value) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8FE20))(this, value);
	}
	template <typename T = uintptr_t> T get_restoreDefaultsDelegate() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8FEA0))(this);
	}
	template <typename T = void> T set_restoreDefaultsDelegate(uintptr_t value) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E8FF00))(this, value);
	}
	template <typename T = bool> T get_isOpen() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E8FF74))(this);
	}
	template <typename T = bool> T get_isFocused() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E900BC))(this);
	}
	template <typename T = bool> T get_inputAllowed() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E90144))(this);
	}
	template <typename T = int32_t> T get_inputGridColumnCount() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E901C0))(this);
	}
	template <typename T = int32_t> T get_inputGridWidth() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E9023C))(this);
	}
	template <typename T = uintptr_t> T get_currentPlayer() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E902FC))(this);
	}
	template <typename T = uintptr_t> T get_currentMapCategory() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E903C0))(this);
	}
	template <typename T = uintptr_t> T get_currentMappingSet() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E90484))(this);
	}
	template <typename T = uintptr_t> T get_currentJoystick() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E905B4))(this);
	}
	template <typename T = bool> T get_isJoystickSelected() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E90678))(this);
	}
	template <typename T = uintptr_t> T get_currentUISelection() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E906E0))(this);
	}
	template <typename T = bool> T get_showSettings() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E90808))(this);
	}
	template <typename T = bool> T get_showMapCategories() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E90890))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E90908))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E914B0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E91528))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E91688))(this);
	}
	template <typename T = void> T PreInitialize() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E90A18))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E90B04))(this);
	}
	template <typename T = void> T OnJoystickConnected(uintptr_t args) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E920DC))(this, args);
	}
	template <typename T = void> T OnJoystickDisconnected(uintptr_t args) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E92274))(this, args);
	}
	template <typename T = void> T OnJoystickPreDisconnect(uintptr_t args) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E92310))(this, args);
	}
	template <typename T = void> T OnButtonActivated(uintptr_t buttonInfo) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E92380))(this, buttonInfo);
	}
	template <typename T = void> T OnInputFieldActivated(uintptr_t fieldInfo) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E93670))(this, fieldInfo);
	}
	template <typename T = void> T OnInputFieldInvertToggleStateChanged(uintptr_t toggleInfo, bool newState) {
		return ((T (*)(ControlMapper*, uintptr_t, bool))(Il2CppBase() + 0x1E942E0))(this, toggleInfo, newState);
	}
	template <typename T = void> T OnPlayerSelected(int32_t playerId, bool redraw) {
		return ((T (*)(ControlMapper*, int32_t, bool))(Il2CppBase() + 0x1E926C0))(this, playerId, redraw);
	}
	template <typename T = void> T OnControllerSelected(int32_t joystickId) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E9276C))(this, joystickId);
	}
	template <typename T = void> T OnRemoveCurrentController() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E92804))(this);
	}
	template <typename T = void> T OnMapCategorySelected(int32_t id, bool redraw) {
		return ((T (*)(ControlMapper*, int32_t, bool))(Il2CppBase() + 0x1E9338C))(this, id, redraw);
	}
	template <typename T = void> T OnRestoreDefaults() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E935FC))(this);
	}
	template <typename T = void> T OnScreenToggleActionPressed(uintptr_t data) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E94A74))(this, data);
	}
	template <typename T = void> T OnScreenOpenActionPressed(uintptr_t data) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E94BB8))(this, data);
	}
	template <typename T = void> T OnScreenCloseActionPressed(uintptr_t data) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E94C5C))(this, data);
	}
	template <typename T = void> T OnUniversalCancelActionPressed(uintptr_t data) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E94D28))(this, data);
	}
	template <typename T = void> T OnWindowCancel(int32_t windowId) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E94EC8))(this, windowId);
	}
	template <typename T = void> T OnRemoveElementAssignment(int32_t windowId, uintptr_t map, uintptr_t aem) {
		return ((T (*)(ControlMapper*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E95020))(this, windowId, map, aem);
	}
	template <typename T = void> T OnBeginElementAssignment(uintptr_t fieldInfo, uintptr_t map, uintptr_t aem, Il2CppString* actionName) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1E950F0))(this, fieldInfo, map, aem, actionName);
	}
	template <typename T = void> T OnControllerAssignmentConfirmed(int32_t windowId, uintptr_t player, int32_t controllerId) {
		return ((T (*)(ControlMapper*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x1E95940))(this, windowId, player, controllerId);
	}
	template <typename T = void> T OnMouseAssignmentConfirmed(int32_t windowId, uintptr_t player) {
		return ((T (*)(ControlMapper*, int32_t, uintptr_t))(Il2CppBase() + 0x1E95EA0))(this, windowId, player);
	}
	template <typename T = void> T OnElementAssignmentConflictReplaceConfirmed(int32_t windowId, uintptr_t mapping, uintptr_t assignment, bool skipOtherPlayers, bool allowSwap) {
		return ((T (*)(ControlMapper*, int32_t, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x1E96188))(this, windowId, mapping, assignment, skipOtherPlayers, allowSwap);
	}
	template <typename T = void> T OnElementAssignmentAddConfirmed(int32_t windowId, uintptr_t mapping, uintptr_t assignment) {
		return ((T (*)(ControlMapper*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E97350))(this, windowId, mapping, assignment);
	}
	template <typename T = void> T OnRestoreDefaultsConfirmed(int32_t windowId) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E9746C))(this, windowId);
	}
	template <typename T = void> T OnAssignControllerWindowUpdate(int32_t windowId) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E97764))(this, windowId);
	}
	template <typename T = void> T OnElementAssignmentPrePollingWindowUpdate(int32_t windowId) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E984D8))(this, windowId);
	}
	template <typename T = void> T OnJoystickElementAssignmentPollingWindowUpdate(int32_t windowId) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E98868))(this, windowId);
	}
	template <typename T = void> T OnKeyboardElementAssignmentPollingWindowUpdate(int32_t windowId) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E9994C))(this, windowId);
	}
	template <typename T = void> T OnMouseElementAssignmentPollingWindowUpdate(int32_t windowId) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E9A390))(this, windowId);
	}
	template <typename T = void> T OnCalibrateAxisStep1WindowUpdate(int32_t windowId) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E9AAAC))(this, windowId);
	}
	template <typename T = void> T OnCalibrateAxisStep2WindowUpdate(int32_t windowId) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E9B374))(this, windowId);
	}
	template <typename T = void> T ShowAssignControllerWindow() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E928AC))(this);
	}
	template <typename T = void> T ShowControllerAssignmentConflictWindow(int32_t controllerId) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E97BD4))(this, controllerId);
	}
	template <typename T = void> T ShowBeginElementAssignmentReplacementWindow(uintptr_t fieldInfo, uintptr_t action, uintptr_t map, uintptr_t aem, Il2CppString* actionName) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1E93A7C))(this, fieldInfo, action, map, aem, actionName);
	}
	template <typename T = void> T ShowCreateNewElementAssignmentWindow(uintptr_t fieldInfo, uintptr_t action, uintptr_t map, Il2CppString* actionName) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1E9414C))(this, fieldInfo, action, map, actionName);
	}
	template <typename T = void> T ShowElementAssignmentPrePollingWindow() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E9530C))(this);
	}
	template <typename T = void> T ShowElementAssignmentPollingWindow() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E957F0))(this);
	}
	template <typename T = void> T ShowJoystickElementAssignmentPollingWindow() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E9B720))(this);
	}
	template <typename T = void> T ShowKeyboardElementAssignmentPollingWindow() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E9BB88))(this);
	}
	template <typename T = void> T ShowMouseElementAssignmentPollingWindow() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E9C050))(this);
	}
	template <typename T = void> T ShowElementAssignmentConflictWindow(uintptr_t assignment, bool skipOtherPlayers) {
		return ((T (*)(ControlMapper*, uintptr_t, bool))(Il2CppBase() + 0x1E9902C))(this, assignment, skipOtherPlayers);
	}
	template <typename T = void> T ShowMouseAssignmentConflictWindow() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E9C4B8))(this);
	}
	template <typename T = void> T ShowCalibrateControllerWindow() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E92CFC))(this);
	}
	template <typename T = void> T ShowCalibrateAxisStep1Window() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E9E3B4))(this);
	}
	template <typename T = void> T ShowCalibrateAxisStep2Window() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E9AD38))(this);
	}
	template <typename T = void> T ShowEditInputBehaviorsWindow() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E93078))(this);
	}
	template <typename T = void> T ShowRestoreDefaultsWindow() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E9489C))(this);
	}
	template <typename T = void> T CreateInputGrid() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E91B60))(this);
	}
	template <typename T = void> T InitializeInputGrid() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E9EEE4))(this);
	}
	template <typename T = void> T RefreshInputGridStructure() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA18C8))(this);
	}
	template <typename T = void> T CreateHeaderLabels() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E9F9C8))(this);
	}
	template <typename T = void> T CreateActionLabelColumn() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E9FF24))(this);
	}
	template <typename T = void> T CreateKeyboardInputFieldColumn() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA0014))(this);
	}
	template <typename T = void> T CreateMouseInputFieldColumn() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA00C8))(this);
	}
	template <typename T = void> T CreateControllerInputFieldColumn() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA017C))(this);
	}
	template <typename T = void> T CreateInputFieldColumn(Il2CppString* name, uintptr_t controllerType, int32_t maxWidth, int32_t cols, bool disableFullAxis) {
		return ((T (*)(ControlMapper*, Il2CppString*, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x1EA1E58))(this, name, controllerType, maxWidth, cols, disableFullAxis);
	}
	template <typename T = void> T CreateInputActionLabels() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA0230))(this);
	}
	template <typename T = void> T CreateInputFields() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA1618))(this);
	}
	template <typename T = void> T CreateInputFields_1(uintptr_t columnXform, uintptr_t controllerType, int32_t maxWidth, int32_t cols, bool disableFullAxis) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x1EA2108))(this, columnXform, controllerType, maxWidth, cols, disableFullAxis);
	}
	template <typename T = void> T CreateInputFieldSet(uintptr_t parent, int32_t mapCategoryId, uintptr_t action, uintptr_t axisRange, uintptr_t controllerType, int32_t cols, int32_t fieldWidth, uintptr_t yPos, bool disableFullAxis) {
		return ((T (*)(ControlMapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x1EA2BAC))(this, parent, mapCategoryId, action, axisRange, controllerType, cols, fieldWidth, yPos, disableFullAxis);
	}
	template <typename T = void> T PopulateInputFields() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA35F0))(this);
	}
	template <typename T = void> T PopulateInputFieldGroup(uintptr_t actionSet, uintptr_t controllerMap, uintptr_t controllerType, int32_t controllerId, int32_t maxFields) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1EA3C38))(this, actionSet, controllerMap, controllerType, controllerId, maxFields);
	}
	template <typename T = void> T DisableInputFieldGroup(uintptr_t actionSet, uintptr_t controllerType, int32_t fieldCount) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1EA46F8))(this, actionSet, controllerType, fieldCount);
	}
	template <typename T = void> T ResetInputGridScrollBar() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA173C))(this);
	}
	template <typename T = void> T CreateLayout() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E91C1C))(this);
	}
	template <typename T = void> T Draw() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E91AE0))(this);
	}
	template <typename T = void> T DrawPlayersGroup() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA48D4))(this);
	}
	template <typename T = void> T DrawControllersGroup() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA4CDC))(this);
	}
	template <typename T = void> T DrawSettingsGroup() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA520C))(this);
	}
	template <typename T = void> T DrawMapCategoriesGroup() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA54EC))(this);
	}
	template <typename T = void> T DrawWindowButtonsGroup() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA5928))(this);
	}
	template <typename T = void> T Redraw(bool listsChanged, bool playTransitions) {
		return ((T (*)(ControlMapper*, bool, bool))(Il2CppBase() + 0x1E94578))(this, listsChanged, playTransitions);
	}
	template <typename T = void> T RedrawPlayerGroup(bool playTransitions) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1EA5C10))(this, playTransitions);
	}
	template <typename T = void> T RedrawControllerGroup() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA5D9C))(this);
	}
	template <typename T = void> T RedrawMapCategoriesGroup(bool playTransitions) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1EA6C48))(this, playTransitions);
	}
	template <typename T = void> T RedrawInputGrid(bool listsChanged) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1EA6DD4))(this, listsChanged);
	}
	template <typename T = void> T ForceRefresh() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E921DC))(this);
	}
	template <typename T = void> T CreateInputCategoryRow(uintptr_t rowCount, uintptr_t category) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1EA7190))(this, rowCount, category);
	}
	template <typename T = uintptr_t> T CreateLabel(Il2CppString* labelText, uintptr_t parent, Il2CppVector2 offset) {
		return ((T (*)(ControlMapper*, Il2CppString*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1EA2040))(this, labelText, parent, offset);
	}
	template <typename T = uintptr_t> T CreateLabel_1(uintptr_t prefab, Il2CppString* labelText, uintptr_t parent, Il2CppVector2 offset) {
		return ((T (*)(ControlMapper*, uintptr_t, Il2CppString*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1EA1C78))(this, prefab, labelText, parent, offset);
	}
	template <typename T = uintptr_t> T CreateButton(Il2CppString* labelText, uintptr_t parent, Il2CppVector2 offset) {
		return ((T (*)(ControlMapper*, Il2CppString*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1EA5AD8))(this, labelText, parent, offset);
	}
	template <typename T = uintptr_t> T CreateFitButton(Il2CppString* labelText, uintptr_t parent, Il2CppVector2 offset) {
		return ((T (*)(ControlMapper*, Il2CppString*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1EA743C))(this, labelText, parent, offset);
	}
	template <typename T = uintptr_t> T CreateInputField(uintptr_t parent, Il2CppVector2 offset, Il2CppString* label, int32_t actionId, uintptr_t axisRange, uintptr_t controllerType, int32_t fieldIndex) {
		return ((T (*)(ControlMapper*, uintptr_t, Il2CppVector2, Il2CppString*, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1EA3248))(this, parent, offset, label, actionId, axisRange, controllerType, fieldIndex);
	}
	template <typename T = uintptr_t> T CreateInputField_1(uintptr_t parent, Il2CppVector2 offset) {
		return ((T (*)(ControlMapper*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1EA7574))(this, parent, offset);
	}
	template <typename T = uintptr_t> T CreateToggle(uintptr_t prefab, uintptr_t parent, Il2CppVector2 offset, Il2CppString* label, int32_t actionId, uintptr_t axisRange, uintptr_t controllerType, int32_t fieldIndex) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, Il2CppVector2, Il2CppString*, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1EA3400))(this, prefab, parent, offset, label, actionId, axisRange, controllerType, fieldIndex);
	}
	template <typename T = uintptr_t> T CreateToggle_1(uintptr_t prefab, uintptr_t parent, Il2CppVector2 offset) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1EA7684))(this, prefab, parent, offset);
	}
	template <typename T = uintptr_t> T InstantiateGUIObject(uintptr_t prefab, uintptr_t parent, Il2CppVector2 offset) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1EA72C4))(this, prefab, parent, offset);
	}
	template <typename T = uintptr_t> T CreateNewGUIObject(Il2CppString* name, uintptr_t parent, Il2CppVector2 offset) {
		return ((T (*)(ControlMapper*, Il2CppString*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1EA3114))(this, name, parent, offset);
	}
	template <typename T = uintptr_t> T InitializeNewGUIGameObject(uintptr_t gameObject, uintptr_t parent, Il2CppVector2 offset) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1EA7780))(this, gameObject, parent, offset);
	}
	template <typename T = uintptr_t> T CreateNewColumnGroup(Il2CppString* name, uintptr_t parent, int32_t maxWidth) {
		return ((T (*)(ControlMapper*, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x1EA1A84))(this, name, parent, maxWidth);
	}
	template <typename T = uintptr_t> T OpenWindow(bool closeOthers) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E9B670))(this, closeOthers);
	}
	template <typename T = uintptr_t> T OpenWindow_1(Il2CppString* name, bool closeOthers) {
		return ((T (*)(ControlMapper*, Il2CppString*, bool))(Il2CppBase() + 0x1EA79A4))(this, name, closeOthers);
	}
	template <typename T = uintptr_t> T OpenWindow_2(uintptr_t windowPrefab, bool closeOthers) {
		return ((T (*)(ControlMapper*, uintptr_t, bool))(Il2CppBase() + 0x1EA7B98))(this, windowPrefab, closeOthers);
	}
	template <typename T = uintptr_t> T OpenWindow_3(uintptr_t windowPrefab, Il2CppString* name, bool closeOthers) {
		return ((T (*)(ControlMapper*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x1E9E270))(this, windowPrefab, name, closeOthers);
	}
	template <typename T = void> T OpenModal(Il2CppString* title, Il2CppString* message, Il2CppString* confirmText, void* confirmAction, Il2CppString* cancelText, void* cancelAction, bool closeOthers) {
		return ((T (*)(ControlMapper*, Il2CppString*, Il2CppString*, Il2CppString*, void*, Il2CppString*, void*, bool))(Il2CppBase() + 0x1E9E9F0))(this, title, message, confirmText, confirmAction, cancelText, cancelAction, closeOthers);
	}
	template <typename T = void> T CloseWindow(int32_t windowId) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1E94F5C))(this, windowId);
	}
	template <typename T = void> T CloseTopWindow() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA7D04))(this);
	}
	template <typename T = void> T CloseAllWindows() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E94E18))(this);
	}
	template <typename T = void> T ChildWindowOpened() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA7AE8))(this);
	}
	template <typename T = void> T ChildWindowClosed() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA7C54))(this);
	}
	template <typename T = bool> T HasElementAssignmentConflicts(uintptr_t player, uintptr_t mapping, uintptr_t assignment, bool skipOtherPlayers) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1E98D58))(this, player, mapping, assignment, skipOtherPlayers);
	}
	template <typename T = bool> T IsBlockingAssignmentConflict(uintptr_t mapping, uintptr_t assignment, bool skipOtherPlayers) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1E9CCD8))(this, mapping, assignment, skipOtherPlayers);
	}
	template <typename T = void*> T ElementAssignmentConflicts(uintptr_t player, uintptr_t mapping, uintptr_t assignment, bool skipOtherPlayers) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1EA7E88))(this, player, mapping, assignment, skipOtherPlayers);
	}
	template <typename T = bool> T CreateConflictCheck(uintptr_t mapping, uintptr_t assignment, uintptr_t* conflictCheck) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1E96C00))(this, mapping, assignment, conflictCheck);
	}
	template <typename T = void> T PollKeyboardForAssignment(uintptr_t* pollingInfo, uintptr_t* modifierKeyPressed, uintptr_t* modifierFlags, uintptr_t* label) {
		return ((T (*)(ControlMapper*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1E99D58))(this, pollingInfo, modifierKeyPressed, modifierFlags, label);
	}
	template <typename T = bool> T GetFirstElementAssignmentConflict(uintptr_t conflictCheck, uintptr_t* conflict, bool skipOtherPlayers) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x1E96E24))(this, conflictCheck, conflict, skipOtherPlayers);
	}
	template <typename T = bool> T GetFirstElementAssignmentConflict_1(uintptr_t player, uintptr_t conflictCheck, uintptr_t* conflict) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1EA8040))(this, player, conflictCheck, conflict);
	}
	template <typename T = void> T StartAxisCalibration(int32_t axisIndex) {
		return ((T (*)(ControlMapper*, int32_t))(Il2CppBase() + 0x1EA8440))(this, axisIndex);
	}
	template <typename T = void> T EndAxisCalibration() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E9B600))(this);
	}
	template <typename T = void> T SetUISelection(uintptr_t selection) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1EA6F60))(this, selection);
	}
	template <typename T = void> T RestoreLastUISelection() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA6E70))(this);
	}
	template <typename T = void> T SetDefaultUISelection() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA8580))(this);
	}
	template <typename T = void> T SelectDefaultMapCategory(bool redraw) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1EA86B8))(this, redraw);
	}
	template <typename T = void> T CheckUISelection() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E915A8))(this);
	}
	template <typename T = void> T OnUIElementSelected(uintptr_t selectedObject) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1EA8B54))(this, selectedObject);
	}
	template <typename T = void> T SetIsFocused(bool state) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1EA7DAC))(this, state);
	}
	template <typename T = void> T Toggle() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA8BC8))(this);
	}
	template <typename T = void> T Open() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E94B54))(this);
	}
	template <typename T = void> T Open_1(bool force) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E91390))(this, force);
	}
	template <typename T = void> T Close(bool save) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E93430))(this, save);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA8C48))(this);
	}
	template <typename T = void> T ClearCompletely() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA8CCC))(this);
	}
	template <typename T = void> T ClearSpawnedObjects() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA8D34))(this);
	}
	template <typename T = void> T ClearVarsOnPlayerChange() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E94514))(this);
	}
	template <typename T = void> T ClearVarsOnJoystickChange() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E92178))(this);
	}
	template <typename T = void> T ClearAllVars() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA92C0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA9394))(this);
	}
	template <typename T = void> T SetActionAxisInverted(bool state, uintptr_t controllerType, int32_t actionElementMapId) {
		return ((T (*)(ControlMapper*, bool, uintptr_t, int32_t))(Il2CppBase() + 0x1E943D0))(this, state, controllerType, actionElementMapId);
	}
	template <typename T = uintptr_t> T GetControllerMap(uintptr_t type) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E938E0))(this, type);
	}
	template <typename T = uintptr_t> T GetControllerMapOrCreateNew(uintptr_t controllerType, int32_t controllerId, int32_t layoutId) {
		return ((T (*)(ControlMapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1EA3AE4))(this, controllerType, controllerId, layoutId);
	}
	template <typename T = int32_t> T CountIEnumerable(void* enumerable) {
		return ((T (*)(ControlMapper*, void*))(Il2CppBase() + 0x0))(this, enumerable);
	}
	template <typename T = int32_t> T GetDefaultMapCategoryId() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA897C))(this);
	}
	template <typename T = void> T SubscribeFixedUISelectionEvents() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E91EE4))(this);
	}
	template <typename T = void> T SubscribeMenuControlInputEvents() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E9195C))(this);
	}
	template <typename T = void> T UnsubscribeMenuControlInputEvents() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E917D8))(this);
	}
	template <typename T = void> T SubscribeRewiredInputEventAllPlayers(int32_t actionId, void* callback) {
		return ((T (*)(ControlMapper*, int32_t, void*))(Il2CppBase() + 0x1EA9428))(this, actionId, callback);
	}
	template <typename T = void> T UnsubscribeRewiredInputEventAllPlayers(int32_t actionId, void* callback) {
		return ((T (*)(ControlMapper*, int32_t, void*))(Il2CppBase() + 0x1EA9844))(this, actionId, callback);
	}
	template <typename T = int32_t> T GetMaxControllersPerPlayer() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA70A0))(this);
	}
	template <typename T = bool> T ShowAssignedControllers() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1EA4848))(this);
	}
	template <typename T = void> T InspectorPropertyChanged(bool reset) {
		return ((T (*)(ControlMapper*, bool))(Il2CppBase() + 0x1E8D680))(this, reset);
	}
	template <typename T = void> T AssignController(uintptr_t player, int32_t controllerId) {
		return ((T (*)(ControlMapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1E95A04))(this, player, controllerId);
	}
	template <typename T = void> T RemoveAllControllers(uintptr_t player) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1EA9C84))(this, player);
	}
	template <typename T = void> T RemoveController(uintptr_t player, int32_t controllerId) {
		return ((T (*)(ControlMapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1E946C0))(this, player, controllerId);
	}
	template <typename T = bool> T IsAllowedAssignment(uintptr_t pendingInputMapping, uintptr_t pollingInfo) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E98C68))(this, pendingInputMapping, pollingInfo);
	}
	template <typename T = void> T InputPollingStarted() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E97AB0))(this);
	}
	template <typename T = void> T InputPollingStopped() {
		return ((T (*)(ControlMapper*))(Il2CppBase() + 0x1E97B44))(this);
	}
	template <typename T = int32_t> T GetControllerInputFieldCount(uintptr_t controllerType) {
		return ((T (*)(ControlMapper*, uintptr_t))(Il2CppBase() + 0x1E9725C))(this, controllerType);
	}
	template <typename T = bool> T ShowSwapButton(int32_t windowId, uintptr_t mapping, uintptr_t assignment, bool skipOtherPlayers) {
		return ((T (*)(ControlMapper*, int32_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1E9D7B0))(this, windowId, mapping, assignment, skipOtherPlayers);
	}
	template <typename T = bool> T SwapIsSameInputRange(uintptr_t origElementType, uintptr_t origAxisRange, uintptr_t origAxisContribution, uintptr_t conflictElementType, uintptr_t conflictAxisRange, uintptr_t conflictAxisContribution) {
		return ((T (*)(ControlMapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E9716C))(this, origElementType, origAxisRange, origAxisContribution, conflictElementType, conflictAxisRange, conflictAxisContribution);
	}
	template <typename T = void> static T ApplyTheme(Il2CppArray<uintptr_t>* elementInfo) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1EA9E5C))(0, elementInfo);
	}
	template <typename T = uintptr_t> static T GetLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E88FE4))(0);
	}

};

}
