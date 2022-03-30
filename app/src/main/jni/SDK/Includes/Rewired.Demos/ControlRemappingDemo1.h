#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class ControlRemappingDemo1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "ControlRemappingDemo1"));
	}

	template <typename T = float> static T& defaultModalWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& defaultModalHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& assignmentTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& dialog() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& inputMapper() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& conflictFoundEventData() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& guiState() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& busy() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& pageGUIState() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = uintptr_t> T& selectedPlayer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& selectedMapCategoryId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& selectedController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& selectedMap() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& showMenu() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& startListening() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = Il2CppVector2> T& actionScrollPos() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector2> T& calibrateScrollPos() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& actionQueue() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& setupFinished() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& initialized() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = bool> T& isCompiling() {
		return *(T*)((uintptr_t)this + 0x7A);
	}
	template <typename T = uintptr_t> T& style_wordWrap() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& style_centeredBox() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x20561AC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x205651C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x20566B4))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x20562B4))(this);
	}
	template <typename T = void> T Setup() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2056CF0))(this);
	}
	template <typename T = void> T Subscribe() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x205657C))(this);
	}
	template <typename T = void> T Unsubscribe() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2056714))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2056E74))(this);
	}
	template <typename T = void> T HandleMenuControl() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2056F2C))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2057CD8))(this);
	}
	template <typename T = void> T Open() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2057D40))(this);
	}
	template <typename T = void> T DrawInitialScreen() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2057128))(this);
	}
	template <typename T = void> T DrawPage() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x20578F4))(this);
	}
	template <typename T = void> T DrawPlayerSelector() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2057F90))(this);
	}
	template <typename T = void> T DrawMouseAssignment() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2058C98))(this);
	}
	template <typename T = void> T DrawJoystickSelector() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2058524))(this);
	}
	template <typename T = void> T DrawControllerSelector() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2059258))(this);
	}
	template <typename T = void> T DrawCalibrateButton() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2059B84))(this);
	}
	template <typename T = void> T DrawMapCategories() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2059FB0))(this);
	}
	template <typename T = void> T DrawCategoryActions() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x205A86C))(this);
	}
	template <typename T = void> T DrawActionAssignmentButton(int32_t playerId, uintptr_t action, uintptr_t actionRange, uintptr_t controller, uintptr_t controllerMap, uintptr_t elementMap) {
		return ((T (*)(ControlRemappingDemo1*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x205C790))(this, playerId, action, actionRange, controller, controllerMap, elementMap);
	}
	template <typename T = void> T DrawInvertButton(int32_t playerId, uintptr_t action, uintptr_t actionAxisContribution, uintptr_t controller, uintptr_t controllerMap, uintptr_t elementMap) {
		return ((T (*)(ControlRemappingDemo1*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x205CA98))(this, playerId, action, actionAxisContribution, controller, controllerMap, elementMap);
	}
	template <typename T = void> T DrawAddActionMapButton(int32_t playerId, uintptr_t action, uintptr_t actionRange, uintptr_t controller, uintptr_t controllerMap) {
		return ((T (*)(ControlRemappingDemo1*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x205C53C))(this, playerId, action, actionRange, controller, controllerMap);
	}
	template <typename T = void> T ShowDialog() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2057B20))(this);
	}
	template <typename T = void> T DrawModalWindow(Il2CppString* title, Il2CppString* message) {
		return ((T (*)(ControlRemappingDemo1*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x205CD10))(this, title, message);
	}
	template <typename T = void> T DrawModalWindow_OkayOnly(Il2CppString* title, Il2CppString* message) {
		return ((T (*)(ControlRemappingDemo1*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x205D074))(this, title, message);
	}
	template <typename T = void> T DrawElementAssignmentWindow(Il2CppString* title, Il2CppString* message) {
		return ((T (*)(ControlRemappingDemo1*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x205D1B0))(this, title, message);
	}
	template <typename T = void> T DrawElementAssignmentProtectedConflictWindow(Il2CppString* title, Il2CppString* message) {
		return ((T (*)(ControlRemappingDemo1*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x205D62C))(this, title, message);
	}
	template <typename T = void> T DrawElementAssignmentNormalConflictWindow(Il2CppString* title, Il2CppString* message) {
		return ((T (*)(ControlRemappingDemo1*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x205D99C))(this, title, message);
	}
	template <typename T = void> T DrawReassignOrRemoveElementAssignmentWindow(Il2CppString* title, Il2CppString* message) {
		return ((T (*)(ControlRemappingDemo1*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x205DBAC))(this, title, message);
	}
	template <typename T = void> T DrawFallbackJoystickIdentificationWindow(Il2CppString* title, Il2CppString* message) {
		return ((T (*)(ControlRemappingDemo1*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x205DE88))(this, title, message);
	}
	template <typename T = void> T DrawCalibrationWindow(Il2CppString* title, Il2CppString* message) {
		return ((T (*)(ControlRemappingDemo1*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x205E13C))(this, title, message);
	}
	template <typename T = void> T DialogResultCallback(int32_t queueActionId, uintptr_t response) {
		return ((T (*)(ControlRemappingDemo1*, int32_t, uintptr_t))(Il2CppBase() + 0x205F3A0))(this, queueActionId, response);
	}
	template <typename T = Il2CppRect> T GetScreenCenteredRect(float width, float height) {
		return ((T (*)(ControlRemappingDemo1*, float, float))(Il2CppBase() + 0x2057EAC))(this, width, height);
	}
	template <typename T = void> T EnqueueAction(uintptr_t entry) {
		return ((T (*)(ControlRemappingDemo1*, uintptr_t))(Il2CppBase() + 0x205C234))(this, entry);
	}
	template <typename T = void> T ProcessQueue() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2057518))(this);
	}
	template <typename T = bool> T ProcessJoystickAssignmentChange(uintptr_t entry) {
		return ((T (*)(ControlRemappingDemo1*, uintptr_t))(Il2CppBase() + 0x205F62C))(this, entry);
	}
	template <typename T = bool> T ProcessElementAssignmentChange(uintptr_t entry) {
		return ((T (*)(ControlRemappingDemo1*, uintptr_t))(Il2CppBase() + 0x205F96C))(this, entry);
	}
	template <typename T = bool> T ProcessRemoveOrReassignElementAssignment(uintptr_t entry) {
		return ((T (*)(ControlRemappingDemo1*, uintptr_t))(Il2CppBase() + 0x205FFD0))(this, entry);
	}
	template <typename T = bool> T ProcessRemoveElementAssignment(uintptr_t entry) {
		return ((T (*)(ControlRemappingDemo1*, uintptr_t))(Il2CppBase() + 0x2060260))(this, entry);
	}
	template <typename T = bool> T ProcessAddOrReplaceElementAssignment(uintptr_t entry) {
		return ((T (*)(ControlRemappingDemo1*, uintptr_t))(Il2CppBase() + 0x20604E0))(this, entry);
	}
	template <typename T = bool> T ProcessElementAssignmentConflictCheck(uintptr_t entry) {
		return ((T (*)(ControlRemappingDemo1*, uintptr_t))(Il2CppBase() + 0x206084C))(this, entry);
	}
	template <typename T = bool> T ProcessFallbackJoystickIdentification(uintptr_t entry) {
		return ((T (*)(ControlRemappingDemo1*, uintptr_t))(Il2CppBase() + 0x205FAB4))(this, entry);
	}
	template <typename T = bool> T ProcessCalibration(uintptr_t entry) {
		return ((T (*)(ControlRemappingDemo1*, uintptr_t))(Il2CppBase() + 0x205FC9C))(this, entry);
	}
	template <typename T = void> T PlayerSelectionChanged() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2060DF0))(this);
	}
	template <typename T = void> T ControllerSelectionChanged() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x205C184))(this);
	}
	template <typename T = void> T ClearControllerSelection() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2060E50))(this);
	}
	template <typename T = void> T ClearMapSelection() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2060EC8))(this);
	}
	template <typename T = void> T ResetAll() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x205686C))(this);
	}
	template <typename T = void> T ClearWorkingVars() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2057DA4))(this);
	}
	template <typename T = void> T SetGUIStateStart() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x20573C8))(this);
	}
	template <typename T = void> T SetGUIStateEnd() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2057B90))(this);
	}
	template <typename T = void> T JoystickConnected(uintptr_t args) {
		return ((T (*)(ControlRemappingDemo1*, uintptr_t))(Il2CppBase() + 0x2060F98))(this, args);
	}
	template <typename T = void> T JoystickPreDisconnect(uintptr_t args) {
		return ((T (*)(ControlRemappingDemo1*, uintptr_t))(Il2CppBase() + 0x20615F4))(this, args);
	}
	template <typename T = void> T JoystickDisconnected(uintptr_t args) {
		return ((T (*)(ControlRemappingDemo1*, uintptr_t))(Il2CppBase() + 0x2061CC8))(this, args);
	}
	template <typename T = void> T OnConflictFound(uintptr_t data) {
		return ((T (*)(ControlRemappingDemo1*, uintptr_t))(Il2CppBase() + 0x2061DAC))(this, data);
	}
	template <typename T = void> T OnStopped(uintptr_t data) {
		return ((T (*)(ControlRemappingDemo1*, uintptr_t))(Il2CppBase() + 0x2061E20))(this, data);
	}
	template <typename T = void> T IdentifyAllJoysticks() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x20568D8))(this);
	}
	template <typename T = void> T CheckRecompile() {
		return ((T (*)(ControlRemappingDemo1*))(Il2CppBase() + 0x2061EDC))(this);
	}
	template <typename T = void> T RecompileWindow(int32_t windowId) {
		return ((T (*)(ControlRemappingDemo1*, int32_t))(Il2CppBase() + 0x2061F38))(this, windowId);
	}

};

}
