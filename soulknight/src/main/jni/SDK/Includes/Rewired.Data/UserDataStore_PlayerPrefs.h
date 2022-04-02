#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Data {

class UserDataStorePlayerPrefs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Data", "UserDataStore_PlayerPrefs"));
	}

	template <typename T = Il2CppString*> static T& thisScriptName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& logPrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& editorLoadedMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& playerPrefsKeySuffix_controllerAssignments() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& controllerMapPPKeyVersion_original() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& controllerMapPPKeyVersion_includeDuplicateJoystickIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& controllerMapPPKeyVersion_supportDisconnectedControllers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& controllerMapPPKeyVersion_includeFormatVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& controllerMapPPKeyVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isEnabled() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& loadDataOnStart() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& loadJoystickAssignments() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& loadKeyboardAssignments() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = bool> T& loadMouseAssignments() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& playerPrefsKeyPrefix() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& allowImpreciseJoystickAssignmentMatching() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& deferredJoystickAssignmentLoadPending() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& wasJoystickEverDetected() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = Il2CppList<int32_t>*> T& __allActionIds() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& __allActionIdsString() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T get_IsEnabled() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204BCA8))(this);
	}
	template <typename T = void> T set_IsEnabled(bool value) {
		return ((T (*)(UserDataStorePlayerPrefs*, bool))(Il2CppBase() + 0x204BD08))(this, value);
	}
	template <typename T = bool> T get_LoadDataOnStart() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204BD80))(this);
	}
	template <typename T = void> T set_LoadDataOnStart(bool value) {
		return ((T (*)(UserDataStorePlayerPrefs*, bool))(Il2CppBase() + 0x204BDE0))(this, value);
	}
	template <typename T = bool> T get_LoadJoystickAssignments() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204BE58))(this);
	}
	template <typename T = void> T set_LoadJoystickAssignments(bool value) {
		return ((T (*)(UserDataStorePlayerPrefs*, bool))(Il2CppBase() + 0x204BEB8))(this, value);
	}
	template <typename T = bool> T get_LoadKeyboardAssignments() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204BF30))(this);
	}
	template <typename T = void> T set_LoadKeyboardAssignments(bool value) {
		return ((T (*)(UserDataStorePlayerPrefs*, bool))(Il2CppBase() + 0x204BF90))(this, value);
	}
	template <typename T = bool> T get_LoadMouseAssignments() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204C008))(this);
	}
	template <typename T = void> T set_LoadMouseAssignments(bool value) {
		return ((T (*)(UserDataStorePlayerPrefs*, bool))(Il2CppBase() + 0x204C068))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlayerPrefsKeyPrefix() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204C0E0))(this);
	}
	template <typename T = void> T set_PlayerPrefsKeyPrefix(Il2CppString* value) {
		return ((T (*)(UserDataStorePlayerPrefs*, Il2CppString*))(Il2CppBase() + 0x204C140))(this, value);
	}
	template <typename T = Il2CppString*> T get_playerPrefsKey_controllerAssignments() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204C1B4))(this);
	}
	template <typename T = bool> T get_loadControllerAssignments() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204C254))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_allActionIds() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204C2D4))(this);
	}
	template <typename T = Il2CppString*> T get_allActionIdsString() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204C530))(this);
	}
	template <typename T = void> T Save() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204C6D8))(this);
	}
	template <typename T = void> T SaveControllerData(int32_t playerId, uintptr_t controllerType, int32_t controllerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x204C9AC))(this, playerId, controllerType, controllerId);
	}
	template <typename T = void> T SaveControllerData_1(uintptr_t controllerType, int32_t controllerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, int32_t))(Il2CppBase() + 0x204CB70))(this, controllerType, controllerId);
	}
	template <typename T = void> T SavePlayerData(int32_t playerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t))(Il2CppBase() + 0x204CCF4))(this, playerId);
	}
	template <typename T = void> T SaveInputBehavior(int32_t playerId, int32_t behaviorId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t, int32_t))(Il2CppBase() + 0x204CEC4))(this, playerId, behaviorId);
	}
	template <typename T = void> T Load() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204D11C))(this);
	}
	template <typename T = void> T LoadControllerData(int32_t playerId, uintptr_t controllerType, int32_t controllerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x204D400))(this, playerId, controllerType, controllerId);
	}
	template <typename T = void> T LoadControllerData_1(uintptr_t controllerType, int32_t controllerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, int32_t))(Il2CppBase() + 0x204D5D4))(this, controllerType, controllerId);
	}
	template <typename T = void> T LoadPlayerData(int32_t playerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t))(Il2CppBase() + 0x204D764))(this, playerId);
	}
	template <typename T = void> T LoadInputBehavior(int32_t playerId, int32_t behaviorId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t, int32_t))(Il2CppBase() + 0x204D92C))(this, playerId, behaviorId);
	}
	template <typename T = void> T OnInitialize() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204DB80))(this);
	}
	template <typename T = void> T OnControllerConnected(uintptr_t args) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t))(Il2CppBase() + 0x204E300))(this, args);
	}
	template <typename T = void> T OnControllerPreDisconnect(uintptr_t args) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t))(Il2CppBase() + 0x204E740))(this, args);
	}
	template <typename T = void> T OnControllerDisconnected(uintptr_t args) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t))(Il2CppBase() + 0x204EA54))(this, args);
	}
	template <typename T = void> T SaveControllerMap(int32_t playerId, uintptr_t controllerMap) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t, uintptr_t))(Il2CppBase() + 0x204EAEC))(this, playerId, controllerMap);
	}
	template <typename T = uintptr_t> T LoadControllerMap(int32_t playerId, uintptr_t controllerIdentifier, int32_t categoryId, int32_t layoutId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x204EE24))(this, playerId, controllerIdentifier, categoryId, layoutId);
	}
	template <typename T = int32_t> T LoadAll() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204D1E8))(this);
	}
	template <typename T = int32_t> T LoadPlayerDataNow(int32_t playerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t))(Il2CppBase() + 0x204D84C))(this, playerId);
	}
	template <typename T = int32_t> T LoadPlayerDataNow_1(uintptr_t player) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t))(Il2CppBase() + 0x204F2A4))(this, player);
	}
	template <typename T = int32_t> T LoadAllJoystickCalibrationData() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204F664))(this);
	}
	template <typename T = int32_t> T LoadJoystickCalibrationData(uintptr_t joystick) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t))(Il2CppBase() + 0x20500F8))(this, joystick);
	}
	template <typename T = int32_t> T LoadJoystickCalibrationData_1(int32_t joystickId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t))(Il2CppBase() + 0x2050270))(this, joystickId);
	}
	template <typename T = int32_t> T LoadJoystickData(int32_t joystickId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t))(Il2CppBase() + 0x204E40C))(this, joystickId);
	}
	template <typename T = int32_t> T LoadControllerDataNow(int32_t playerId, uintptr_t controllerType, int32_t controllerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x204D510))(this, playerId, controllerType, controllerId);
	}
	template <typename T = int32_t> T LoadControllerDataNow_1(uintptr_t controllerType, int32_t controllerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, int32_t))(Il2CppBase() + 0x204D6C8))(this, controllerType, controllerId);
	}
	template <typename T = int32_t> T LoadControllerMaps(int32_t playerId, uintptr_t controllerType, int32_t controllerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x204FAC8))(this, playerId, controllerType, controllerId);
	}
	template <typename T = uintptr_t> T LoadControllerMap_1(uintptr_t player, uintptr_t controllerIdentifier, int32_t categoryId, int32_t layoutId) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x204EF7C))(this, player, controllerIdentifier, categoryId, layoutId);
	}
	template <typename T = int32_t> T LoadInputBehaviors(int32_t playerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t))(Il2CppBase() + 0x204F858))(this, playerId);
	}
	template <typename T = int32_t> T LoadInputBehaviorNow(int32_t playerId, int32_t behaviorId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t, int32_t))(Il2CppBase() + 0x204DA20))(this, playerId, behaviorId);
	}
	template <typename T = int32_t> T LoadInputBehaviorNow_1(uintptr_t player, uintptr_t inputBehavior) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2050E88))(this, player, inputBehavior);
	}
	template <typename T = bool> T LoadControllerAssignmentsNow() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204F160))(this);
	}
	template <typename T = bool> T LoadKeyboardAndMouseAssignmentsNow(uintptr_t data) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t))(Il2CppBase() + 0x2051204))(this, data);
	}
	template <typename T = bool> T LoadJoystickAssignmentsNow(uintptr_t data) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t))(Il2CppBase() + 0x2051764))(this, data);
	}
	template <typename T = uintptr_t> T LoadControllerAssignmentData() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x2051078))(this);
	}
	template <typename T = uintptr_t> T LoadJoystickAssignmentsDeferred() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204E68C))(this);
	}
	template <typename T = void> T SaveAll() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204C7A4))(this);
	}
	template <typename T = void> T SavePlayerDataNow(int32_t playerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t))(Il2CppBase() + 0x204CDDC))(this, playerId);
	}
	template <typename T = void> T SavePlayerDataNow_1(uintptr_t player) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t))(Il2CppBase() + 0x2053488))(this, player);
	}
	template <typename T = void> T SaveAllJoystickCalibrationData() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x2053574))(this);
	}
	template <typename T = void> T SaveJoystickCalibrationData(int32_t joystickId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t))(Il2CppBase() + 0x2053C88))(this, joystickId);
	}
	template <typename T = void> T SaveJoystickCalibrationData_1(uintptr_t joystick) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t))(Il2CppBase() + 0x2053BA8))(this, joystick);
	}
	template <typename T = void> T SaveJoystickData(int32_t joystickId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t))(Il2CppBase() + 0x204E808))(this, joystickId);
	}
	template <typename T = void> T SaveControllerDataNow(int32_t playerId, uintptr_t controllerType, int32_t controllerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x204CABC))(this, playerId, controllerType, controllerId);
	}
	template <typename T = void> T SaveControllerDataNow_1(uintptr_t controllerType, int32_t controllerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, int32_t))(Il2CppBase() + 0x204CC64))(this, controllerType, controllerId);
	}
	template <typename T = void> T SaveControllerMaps(uintptr_t player, uintptr_t playerSaveData) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, uintptr_t))(Il2CppBase() + 0x205386C))(this, player, playerSaveData);
	}
	template <typename T = void> T SaveControllerMaps_1(int32_t playerId, uintptr_t controllerType, int32_t controllerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x2053F2C))(this, playerId, controllerType, controllerId);
	}
	template <typename T = void> T SaveControllerMap_1(uintptr_t player, uintptr_t controllerMap) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, uintptr_t))(Il2CppBase() + 0x204EBF4))(this, player, controllerMap);
	}
	template <typename T = void> T SaveInputBehaviors(uintptr_t player, uintptr_t playerSaveData) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, uintptr_t))(Il2CppBase() + 0x205375C))(this, player, playerSaveData);
	}
	template <typename T = void> T SaveInputBehaviorNow(int32_t playerId, int32_t behaviorId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t, int32_t))(Il2CppBase() + 0x204CFB8))(this, playerId, behaviorId);
	}
	template <typename T = void> T SaveInputBehaviorNow_1(uintptr_t player, uintptr_t inputBehavior) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, uintptr_t))(Il2CppBase() + 0x205439C))(this, player, inputBehavior);
	}
	template <typename T = bool> T SaveControllerAssignments() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x204DC7C))(this);
	}
	template <typename T = bool> T ControllerAssignmentSaveDataExists() {
		return ((T (*)(UserDataStorePlayerPrefs*))(Il2CppBase() + 0x2054694))(this);
	}
	template <typename T = Il2CppString*> T GetBasePlayerPrefsKey(uintptr_t player) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t))(Il2CppBase() + 0x205472C))(this, player);
	}
	template <typename T = Il2CppString*> T GetControllerMapPlayerPrefsKey(uintptr_t player, uintptr_t controllerIdentifier, int32_t categoryId, int32_t layoutId, int32_t ppKeyVersion) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x20540FC))(this, player, controllerIdentifier, categoryId, layoutId, ppKeyVersion);
	}
	template <typename T = Il2CppString*> T GetControllerMapKnownActionIdsPlayerPrefsKey(uintptr_t player, uintptr_t controllerIdentifier, int32_t categoryId, int32_t layoutId, int32_t ppKeyVersion) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x205424C))(this, player, controllerIdentifier, categoryId, layoutId, ppKeyVersion);
	}
	template <typename T = Il2CppString*> static T GetControllerMapPlayerPrefsKeyCommonSuffix(uintptr_t player, uintptr_t controllerIdentifier, int32_t categoryId, int32_t layoutId, int32_t ppKeyVersion) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x20547F4))(0, player, controllerIdentifier, categoryId, layoutId, ppKeyVersion);
	}
	template <typename T = Il2CppString*> T GetJoystickCalibrationMapPlayerPrefsKey(uintptr_t joystick) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t))(Il2CppBase() + 0x2053D68))(this, joystick);
	}
	template <typename T = Il2CppString*> T GetInputBehaviorPlayerPrefsKey(uintptr_t player, int32_t inputBehaviorId) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, int32_t))(Il2CppBase() + 0x2054464))(this, player, inputBehaviorId);
	}
	template <typename T = Il2CppString*> T GetControllerMapXml(uintptr_t player, uintptr_t controllerIdentifier, int32_t categoryId, int32_t layoutId) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x2050350))(this, player, controllerIdentifier, categoryId, layoutId);
	}
	template <typename T = Il2CppList<int32_t>*> T GetControllerMapKnownActionIds(uintptr_t player, uintptr_t controllerIdentifier, int32_t categoryId, int32_t layoutId) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x205048C))(this, player, controllerIdentifier, categoryId, layoutId);
	}
	template <typename T = Il2CppString*> T GetJoystickCalibrationMapXml(uintptr_t joystick) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t))(Il2CppBase() + 0x2050194))(this, joystick);
	}
	template <typename T = Il2CppString*> T GetInputBehaviorXml(uintptr_t player, int32_t id) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, int32_t))(Il2CppBase() + 0x2050F90))(this, player, id);
	}
	template <typename T = void> T AddDefaultMappingsForNewActions(uintptr_t controllerIdentifier, uintptr_t controllerMap, Il2CppList<int32_t>* knownActionIds) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, uintptr_t, Il2CppList<int32_t>*))(Il2CppBase() + 0x2050720))(this, controllerIdentifier, controllerMap, knownActionIds);
	}
	template <typename T = uintptr_t> T FindJoystickPrecise(uintptr_t joystickInfo) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t))(Il2CppBase() + 0x2052C68))(this, joystickInfo);
	}
	template <typename T = bool> T TryFindJoysticksImprecise(uintptr_t joystickInfo, uintptr_t* matches) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x20530B8))(this, joystickInfo, matches);
	}
	template <typename T = int32_t> static T GetDuplicateIndex(uintptr_t player, uintptr_t controllerIdentifier) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2054F10))(0, player, controllerIdentifier);
	}
	template <typename T = void> T RefreshLayoutManager(int32_t playerId) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t))(Il2CppBase() + 0x204FFCC))(this, playerId);
	}
	template <typename T = uintptr_t> static T GetControllerMapType(uintptr_t controllerType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2054D30))(0, controllerType);
	}
	template <typename T = void> T iFixBaseProxy_OnControllerPreDisconnect(uintptr_t P0) {
		return ((T (*)(UserDataStorePlayerPrefs*, uintptr_t))(Il2CppBase() + 0x2055588))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SaveControllerMap(int32_t P0, uintptr_t P1) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t, uintptr_t))(Il2CppBase() + 0x2055590))(this, P0, P1);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_LoadControllerMap(int32_t P0, uintptr_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(UserDataStorePlayerPrefs*, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x2055598))(this, P0, P1, P2, P3);
	}

};

}
