#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Utils {

class ExternalTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Utils", "ExternalTools"));
	}

	template <typename T = void*> static T& _getPlatformInitializerDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& _isEditorPaused() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _EditorPausedStateChangedEvent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& XboxOneInput_OnGamepadStateChange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& API_LEVEL_HONEYCOMB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& API_LEVEL_KITKAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void*> static T get_getPlatformInitializerDelegate() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BE59E0))(0);
	}
	template <typename T = void> static T set_getPlatformInitializerDelegate(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1BE5A6C))(0, value);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(ExternalTools*))(Il2CppBase() + 0x1BE5B08))(this);
	}
	template <typename T = bool> T get_isEditorPaused() {
		return ((T (*)(ExternalTools*))(Il2CppBase() + 0x1BE5B64))(this);
	}
	template <typename T = void> T add_EditorPausedStateChangedEvent(void* value) {
		return ((T (*)(ExternalTools*, void*))(Il2CppBase() + 0x1BE5BC4))(this, value);
	}
	template <typename T = void> T remove_EditorPausedStateChangedEvent(void* value) {
		return ((T (*)(ExternalTools*, void*))(Il2CppBase() + 0x1BE5CD0))(this, value);
	}
	template <typename T = uintptr_t> T GetPlatformInitializer() {
		return ((T (*)(ExternalTools*))(Il2CppBase() + 0x1BE5DDC))(this);
	}
	template <typename T = Il2CppString*> T GetFocusedEditorWindowTitle() {
		return ((T (*)(ExternalTools*))(Il2CppBase() + 0x1BE5E3C))(this);
	}
	template <typename T = bool> T IsEditorSceneViewFocused() {
		return ((T (*)(ExternalTools*))(Il2CppBase() + 0x1BE5ED0))(this);
	}
	template <typename T = bool> T LinuxInput_IsJoystickPreconfigured(Il2CppString* name) {
		return ((T (*)(ExternalTools*, Il2CppString*))(Il2CppBase() + 0x1BE5F30))(this, name);
	}
	template <typename T = void> T add_XboxOneInput_OnGamepadStateChange(void* value) {
		return ((T (*)(ExternalTools*, void*))(Il2CppBase() + 0x1BE5FA4))(this, value);
	}
	template <typename T = void> T remove_XboxOneInput_OnGamepadStateChange(void* value) {
		return ((T (*)(ExternalTools*, void*))(Il2CppBase() + 0x1BE6090))(this, value);
	}
	template <typename T = int32_t> T XboxOneInput_GetUserIdForGamepad(uint32_t id) {
		return ((T (*)(ExternalTools*, uint32_t))(Il2CppBase() + 0x1BE617C))(this, id);
	}
	template <typename T = uint64_t> T XboxOneInput_GetControllerId(uint32_t unityJoystickId) {
		return ((T (*)(ExternalTools*, uint32_t))(Il2CppBase() + 0x1BE61F0))(this, unityJoystickId);
	}
	template <typename T = bool> T XboxOneInput_IsGamepadActive(uint32_t unityJoystickId) {
		return ((T (*)(ExternalTools*, uint32_t))(Il2CppBase() + 0x1BE6264))(this, unityJoystickId);
	}
	template <typename T = Il2CppString*> T XboxOneInput_GetControllerType(uint64_t xboxControllerId) {
		return ((T (*)(ExternalTools*, uint64_t))(Il2CppBase() + 0x1BE62D8))(this, xboxControllerId);
	}
	template <typename T = uint32_t> T XboxOneInput_GetJoystickId(uint64_t xboxControllerId) {
		return ((T (*)(ExternalTools*, uint64_t))(Il2CppBase() + 0x1BE6380))(this, xboxControllerId);
	}
	template <typename T = void> T XboxOne_Gamepad_UpdatePlugin() {
		return ((T (*)(ExternalTools*))(Il2CppBase() + 0x1BE63F4))(this);
	}
	template <typename T = bool> T XboxOne_Gamepad_SetGamepadVibration(uint64_t xboxOneJoystickId, float leftMotor, float rightMotor, float leftTriggerLevel, float rightTriggerLevel) {
		return ((T (*)(ExternalTools*, uint64_t, float, float, float, float))(Il2CppBase() + 0x1BE6450))(this, xboxOneJoystickId, leftMotor, rightMotor, leftTriggerLevel, rightTriggerLevel);
	}
	template <typename T = void> T XboxOne_Gamepad_PulseVibrateMotor(uint64_t xboxOneJoystickId, int32_t motorInt, float startLevel, float endLevel, uint64_t durationMS) {
		return ((T (*)(ExternalTools*, uint64_t, int32_t, float, float, uint64_t))(Il2CppBase() + 0x1BE64FC))(this, xboxOneJoystickId, motorInt, startLevel, endLevel, durationMS);
	}
	template <typename T = Il2CppVector3> T PS4Input_GetLastAcceleration(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE65A4))(this, id);
	}
	template <typename T = Il2CppVector3> T PS4Input_GetLastGyro(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE665C))(this, id);
	}
	template <typename T = uintptr_t> T PS4Input_GetLastOrientation(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE6714))(this, id);
	}
	template <typename T = void> T PS4Input_GetLastTouchData(int32_t id, uintptr_t* touchNum, uintptr_t* touch0x, uintptr_t* touch0y, uintptr_t* touch0id, uintptr_t* touch1x, uintptr_t* touch1y, uintptr_t* touch1id) {
		return ((T (*)(ExternalTools*, int32_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1BE67CC))(this, id, touchNum, touch0x, touch0y, touch0id, touch1x, touch1y, touch1id);
	}
	template <typename T = void> T PS4Input_GetPadControllerInformation(int32_t id, uintptr_t* touchpixelDensity, uintptr_t* touchResolutionX, uintptr_t* touchResolutionY, uintptr_t* analogDeadZoneLeft, uintptr_t* analogDeadZoneright, uintptr_t* connectionType) {
		return ((T (*)(ExternalTools*, int32_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1BE68A4))(this, id, touchpixelDensity, touchResolutionX, touchResolutionY, analogDeadZoneLeft, analogDeadZoneright, connectionType);
	}
	template <typename T = void> T PS4Input_PadSetMotionSensorState(int32_t id, bool bEnable) {
		return ((T (*)(ExternalTools*, int32_t, bool))(Il2CppBase() + 0x1BE6970))(this, id, bEnable);
	}
	template <typename T = void> T PS4Input_PadSetTiltCorrectionState(int32_t id, bool bEnable) {
		return ((T (*)(ExternalTools*, int32_t, bool))(Il2CppBase() + 0x1BE69E8))(this, id, bEnable);
	}
	template <typename T = void> T PS4Input_PadSetAngularVelocityDeadbandState(int32_t id, bool bEnable) {
		return ((T (*)(ExternalTools*, int32_t, bool))(Il2CppBase() + 0x1BE6A60))(this, id, bEnable);
	}
	template <typename T = void> T PS4Input_PadSetLightBar(int32_t id, int32_t red, int32_t green, int32_t blue) {
		return ((T (*)(ExternalTools*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1BE6AD8))(this, id, red, green, blue);
	}
	template <typename T = void> T PS4Input_PadResetLightBar(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE6B6C))(this, id);
	}
	template <typename T = void> T PS4Input_PadSetVibration(int32_t id, int32_t largeMotor, int32_t smallMotor) {
		return ((T (*)(ExternalTools*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1BE6BDC))(this, id, largeMotor, smallMotor);
	}
	template <typename T = void> T PS4Input_PadResetOrientation(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE6C68))(this, id);
	}
	template <typename T = bool> T PS4Input_PadIsConnected(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE6CD8))(this, id);
	}
	template <typename T = void> T PS4Input_GetUsersDetails(int32_t slot, uintptr_t loggedInUser) {
		return ((T (*)(ExternalTools*, int32_t, uintptr_t))(Il2CppBase() + 0x1BE6D4C))(this, slot, loggedInUser);
	}
	template <typename T = int32_t> T PS4Input_GetDeviceClassForHandle(int32_t handle) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE6DC4))(this, handle);
	}
	template <typename T = Il2CppString*> T PS4Input_GetDeviceClassString(int32_t intValue) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE6E38))(this, intValue);
	}
	template <typename T = int32_t> T PS4Input_PadGetUsersHandles2(int32_t maxControllers, Il2CppArray<uintptr_t>* handles) {
		return ((T (*)(ExternalTools*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BE6EAC))(this, maxControllers, handles);
	}
	template <typename T = void> T PS4Input_GetSpecialControllerInformation(int32_t id, int32_t padIndex, uintptr_t controllerInformation) {
		return ((T (*)(ExternalTools*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1BE6F28))(this, id, padIndex, controllerInformation);
	}
	template <typename T = Il2CppVector3> T PS4Input_SpecialGetLastAcceleration(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE6FB4))(this, id);
	}
	template <typename T = Il2CppVector3> T PS4Input_SpecialGetLastGyro(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE706C))(this, id);
	}
	template <typename T = uintptr_t> T PS4Input_SpecialGetLastOrientation(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE7124))(this, id);
	}
	template <typename T = int32_t> T PS4Input_SpecialGetUsersHandles(int32_t maxNumberControllers, Il2CppArray<uintptr_t>* handles) {
		return ((T (*)(ExternalTools*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BE71DC))(this, maxNumberControllers, handles);
	}
	template <typename T = int32_t> T PS4Input_SpecialGetUsersHandles2(int32_t maxNumberControllers, Il2CppArray<uintptr_t>* handles) {
		return ((T (*)(ExternalTools*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BE7258))(this, maxNumberControllers, handles);
	}
	template <typename T = bool> T PS4Input_SpecialIsConnected(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE72D4))(this, id);
	}
	template <typename T = void> T PS4Input_SpecialResetLightSphere(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE7348))(this, id);
	}
	template <typename T = void> T PS4Input_SpecialResetOrientation(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE73B8))(this, id);
	}
	template <typename T = void> T PS4Input_SpecialSetAngularVelocityDeadbandState(int32_t id, bool bEnable) {
		return ((T (*)(ExternalTools*, int32_t, bool))(Il2CppBase() + 0x1BE7428))(this, id, bEnable);
	}
	template <typename T = void> T PS4Input_SpecialSetLightSphere(int32_t id, int32_t red, int32_t green, int32_t blue) {
		return ((T (*)(ExternalTools*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1BE74A0))(this, id, red, green, blue);
	}
	template <typename T = void> T PS4Input_SpecialSetMotionSensorState(int32_t id, bool bEnable) {
		return ((T (*)(ExternalTools*, int32_t, bool))(Il2CppBase() + 0x1BE7534))(this, id, bEnable);
	}
	template <typename T = void> T PS4Input_SpecialSetTiltCorrectionState(int32_t id, bool bEnable) {
		return ((T (*)(ExternalTools*, int32_t, bool))(Il2CppBase() + 0x1BE75AC))(this, id, bEnable);
	}
	template <typename T = void> T PS4Input_SpecialSetVibration(int32_t id, int32_t largeMotor, int32_t smallMotor) {
		return ((T (*)(ExternalTools*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1BE7624))(this, id, largeMotor, smallMotor);
	}
	template <typename T = Il2CppVector3> T PS4Input_AimGetLastAcceleration(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE76B0))(this, id);
	}
	template <typename T = Il2CppVector3> T PS4Input_AimGetLastGyro(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE7768))(this, id);
	}
	template <typename T = uintptr_t> T PS4Input_AimGetLastOrientation(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE7820))(this, id);
	}
	template <typename T = int32_t> T PS4Input_AimGetUsersHandles(int32_t maxNumberControllers, Il2CppArray<uintptr_t>* handles) {
		return ((T (*)(ExternalTools*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BE78D8))(this, maxNumberControllers, handles);
	}
	template <typename T = int32_t> T PS4Input_AimGetUsersHandles2(int32_t maxNumberControllers, Il2CppArray<uintptr_t>* handles) {
		return ((T (*)(ExternalTools*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BE7954))(this, maxNumberControllers, handles);
	}
	template <typename T = bool> T PS4Input_AimIsConnected(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE79D0))(this, id);
	}
	template <typename T = void> T PS4Input_AimResetLightSphere(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE7A44))(this, id);
	}
	template <typename T = void> T PS4Input_AimResetOrientation(int32_t id) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE7AB4))(this, id);
	}
	template <typename T = void> T PS4Input_AimSetAngularVelocityDeadbandState(int32_t id, bool bEnable) {
		return ((T (*)(ExternalTools*, int32_t, bool))(Il2CppBase() + 0x1BE7B24))(this, id, bEnable);
	}
	template <typename T = void> T PS4Input_AimSetLightSphere(int32_t id, int32_t red, int32_t green, int32_t blue) {
		return ((T (*)(ExternalTools*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1BE7B9C))(this, id, red, green, blue);
	}
	template <typename T = void> T PS4Input_AimSetMotionSensorState(int32_t id, bool bEnable) {
		return ((T (*)(ExternalTools*, int32_t, bool))(Il2CppBase() + 0x1BE7C30))(this, id, bEnable);
	}
	template <typename T = void> T PS4Input_AimSetTiltCorrectionState(int32_t id, bool bEnable) {
		return ((T (*)(ExternalTools*, int32_t, bool))(Il2CppBase() + 0x1BE7CA8))(this, id, bEnable);
	}
	template <typename T = void> T PS4Input_AimSetVibration(int32_t id, int32_t largeMotor, int32_t smallMotor) {
		return ((T (*)(ExternalTools*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1BE7D20))(this, id, largeMotor, smallMotor);
	}
	template <typename T = Il2CppVector3> T PS4Input_GetLastMoveAcceleration(int32_t id, int32_t index) {
		return ((T (*)(ExternalTools*, int32_t, int32_t))(Il2CppBase() + 0x1BE7DAC))(this, id, index);
	}
	template <typename T = Il2CppVector3> T PS4Input_GetLastMoveGyro(int32_t id, int32_t index) {
		return ((T (*)(ExternalTools*, int32_t, int32_t))(Il2CppBase() + 0x1BE7E6C))(this, id, index);
	}
	template <typename T = int32_t> T PS4Input_MoveGetButtons(int32_t id, int32_t index) {
		return ((T (*)(ExternalTools*, int32_t, int32_t))(Il2CppBase() + 0x1BE7F2C))(this, id, index);
	}
	template <typename T = int32_t> T PS4Input_MoveGetAnalogButton(int32_t id, int32_t index) {
		return ((T (*)(ExternalTools*, int32_t, int32_t))(Il2CppBase() + 0x1BE7FA8))(this, id, index);
	}
	template <typename T = bool> T PS4Input_MoveIsConnected(int32_t id, int32_t index) {
		return ((T (*)(ExternalTools*, int32_t, int32_t))(Il2CppBase() + 0x1BE8024))(this, id, index);
	}
	template <typename T = int32_t> T PS4Input_MoveGetUsersMoveHandles(int32_t maxNumberControllers, Il2CppArray<uintptr_t>* primaryHandles, Il2CppArray<uintptr_t>* secondaryHandles) {
		return ((T (*)(ExternalTools*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BE80A0))(this, maxNumberControllers, primaryHandles, secondaryHandles);
	}
	template <typename T = int32_t> T PS4Input_MoveGetUsersMoveHandles_1(int32_t maxNumberControllers, Il2CppArray<uintptr_t>* primaryHandles) {
		return ((T (*)(ExternalTools*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BE8130))(this, maxNumberControllers, primaryHandles);
	}
	template <typename T = int32_t> T PS4Input_MoveGetUsersMoveHandles_2(int32_t maxNumberControllers) {
		return ((T (*)(ExternalTools*, int32_t))(Il2CppBase() + 0x1BE81AC))(this, maxNumberControllers);
	}
	template <typename T = uintptr_t> T PS4Input_MoveGetControllerInputForTracking() {
		return ((T (*)(ExternalTools*))(Il2CppBase() + 0x1BE8220))(this);
	}
	template <typename T = int32_t> T PS4Input_MoveSetLightSphere(int32_t id, int32_t index, int32_t red, int32_t green, int32_t blue) {
		return ((T (*)(ExternalTools*, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1BE82A4))(this, id, index, red, green, blue);
	}
	template <typename T = int32_t> T PS4Input_MoveSetVibration(int32_t id, int32_t index, int32_t motor) {
		return ((T (*)(ExternalTools*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1BE8350))(this, id, index, motor);
	}
	template <typename T = void> T GetDeviceVIDPIDs(uintptr_t* vids, uintptr_t* pids) {
		return ((T (*)(ExternalTools*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1BE83E0))(this, vids, pids);
	}
	template <typename T = int32_t> T GetAndroidAPILevel() {
		return ((T (*)(ExternalTools*))(Il2CppBase() + 0x1BE8A80))(this);
	}
	template <typename T = bool> T UnityUI_Graphic_GetRaycastTarget(uintptr_t graphic) {
		return ((T (*)(ExternalTools*, uintptr_t))(Il2CppBase() + 0x1BE8CE0))(this, graphic);
	}
	template <typename T = void> T UnityUI_Graphic_SetRaycastTarget(uintptr_t graphic, bool value) {
		return ((T (*)(ExternalTools*, uintptr_t, bool))(Il2CppBase() + 0x1BE8E5C))(this, graphic, value);
	}
	template <typename T = bool> T get_UnityInput_IsTouchPressureSupported() {
		return ((T (*)(ExternalTools*))(Il2CppBase() + 0x1BE8FE0))(this);
	}
	template <typename T = float> T UnityInput_GetTouchPressure(uintptr_t touch) {
		return ((T (*)(ExternalTools*, uintptr_t))(Il2CppBase() + 0x1BE9040))(this, touch);
	}
	template <typename T = float> T UnityInput_GetTouchMaximumPossiblePressure(uintptr_t touch) {
		return ((T (*)(ExternalTools*, uintptr_t))(Il2CppBase() + 0x1BE90B8))(this, touch);
	}
	template <typename T = uintptr_t> T CreateControllerTemplate(uintptr_t typeGuid, uintptr_t payload) {
		return ((T (*)(ExternalTools*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BE9130))(this, typeGuid, payload);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetControllerTemplateTypes() {
		return ((T (*)(ExternalTools*))(Il2CppBase() + 0x1BE9210))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetControllerTemplateInterfaceTypes() {
		return ((T (*)(ExternalTools*))(Il2CppBase() + 0x1BE92B4))(this);
	}

};

}
