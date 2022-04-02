#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class CalibrationWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "CalibrationWindow"));
	}

	template <typename T = float> static T& minSensitivityOtherAxes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& maxDeadzone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& rightContentContainer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& valueDisplayGroup() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& calibratedValueMarker() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& rawValueMarker() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& calibratedZeroMarker() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& deadzoneArea() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& deadzoneSlider() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& zeroSlider() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& sensitivitySlider() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& invertToggle() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& axisScrollAreaContent() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& doneButton() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& calibrateButton() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& doneButtonLabel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& cancelButtonLabel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& defaultButtonLabel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& deadzoneSliderLabel() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& zeroSliderLabel() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& sensitivitySliderLabel() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& invertToggleLabel() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& calibrateButtonLabel() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& axisButtonPrefab() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& joystick() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppString*> T& origCalibrationData() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& selectedAxis() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& origSelectedAxisCalibrationData() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& displayAreaWidth() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& axisButtons() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> T& buttonCallbacks() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = int32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& rewiredStandaloneInputModule() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& menuHorizActionId() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& menuVertActionId() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& minSensitivity() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = bool> T get_axisSelected() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E886A8))(this);
	}
	template <typename T = uintptr_t> T get_axisCalibration() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E88744))(this);
	}
	template <typename T = void> T Initialize(int32_t id, void* isFocusedCallback) {
		return ((T (*)(CalibrationWindow*, int32_t, void*))(Il2CppBase() + 0x1E887F4))(this, id, isFocusedCallback);
	}
	template <typename T = void> T SetJoystick(int32_t playerId, uintptr_t joystick) {
		return ((T (*)(CalibrationWindow*, int32_t, uintptr_t))(Il2CppBase() + 0x1E890C8))(this, playerId, joystick);
	}
	template <typename T = void> T SetButtonCallback(uintptr_t buttonIdentifier, void* callback) {
		return ((T (*)(CalibrationWindow*, uintptr_t, void*))(Il2CppBase() + 0x1E89DCC))(this, buttonIdentifier, callback);
	}
	template <typename T = void> T Cancel() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E89F10))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8A038))(this);
	}
	template <typename T = void> T OnDone() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8A120))(this);
	}
	template <typename T = void> T OnCancel() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8A220))(this);
	}
	template <typename T = void> T OnRestoreDefault() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8A288))(this);
	}
	template <typename T = void> T OnCalibrate() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8A334))(this);
	}
	template <typename T = void> T OnInvert(bool state) {
		return ((T (*)(CalibrationWindow*, bool))(Il2CppBase() + 0x1E8A428))(this, state);
	}
	template <typename T = void> T OnZeroValueChange(float value) {
		return ((T (*)(CalibrationWindow*, float))(Il2CppBase() + 0x1E8A4E4))(this, value);
	}
	template <typename T = void> T OnZeroCancel() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8A6DC))(this);
	}
	template <typename T = void> T OnDeadzoneValueChange(float value) {
		return ((T (*)(CalibrationWindow*, float))(Il2CppBase() + 0x1E8A7A4))(this, value);
	}
	template <typename T = void> T OnDeadzoneCancel() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8AAC0))(this);
	}
	template <typename T = void> T OnSensitivityValueChange(float value) {
		return ((T (*)(CalibrationWindow*, float))(Il2CppBase() + 0x1E8AB88))(this, value);
	}
	template <typename T = void> T OnSensitivityCancel(float value) {
		return ((T (*)(CalibrationWindow*, float))(Il2CppBase() + 0x1E8AE18))(this, value);
	}
	template <typename T = void> T OnAxisScrollRectScroll(Il2CppVector2 pos) {
		return ((T (*)(CalibrationWindow*, Il2CppVector2))(Il2CppBase() + 0x1E8AEE0))(this, pos);
	}
	template <typename T = void> T OnAxisSelected(int32_t axisIndex, uintptr_t button) {
		return ((T (*)(CalibrationWindow*, int32_t, uintptr_t))(Il2CppBase() + 0x1E8AF60))(this, axisIndex, button);
	}
	template <typename T = void> T UpdateDisplay() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8A0C0))(this);
	}
	template <typename T = void> T Redraw() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E89D64))(this);
	}
	template <typename T = void> T RefreshControls() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E89B3C))(this);
	}
	template <typename T = void> T RedrawDeadzone() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8A914))(this);
	}
	template <typename T = void> T RedrawCalibratedZero() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8A5A8))(this);
	}
	template <typename T = void> T RedrawValueMarkers() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8B018))(this);
	}
	template <typename T = void> T SelectAxis(int32_t index) {
		return ((T (*)(CalibrationWindow*, int32_t))(Il2CppBase() + 0x1E898AC))(this, index);
	}
	template <typename T = void> T TakeInputFocus() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8B524))(this);
	}
	template <typename T = void> T SetMinSensitivity() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8B400))(this);
	}
	template <typename T = bool> T IsMenuAxis(int32_t actionId, int32_t axisIndex) {
		return ((T (*)(CalibrationWindow*, int32_t, int32_t))(Il2CppBase() + 0x1E8B5A8))(this, actionId, axisIndex);
	}
	template <typename T = void> T GetAxisButtonDeadZone(int32_t playerId, int32_t actionId, uintptr_t value) {
		return ((T (*)(CalibrationWindow*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1E8BAB8))(this, playerId, actionId, value);
	}
	template <typename T = float> T GetSliderSensitivity(uintptr_t axisCalibration) {
		return ((T (*)(CalibrationWindow*, uintptr_t))(Il2CppBase() + 0x1E8B29C))(this, axisCalibration);
	}
	template <typename T = void> T SetSensitivity(uintptr_t axisCalibration, float sliderValue) {
		return ((T (*)(CalibrationWindow*, uintptr_t, float))(Il2CppBase() + 0x1E8AC38))(this, axisCalibration, sliderValue);
	}
	template <typename T = float> static T ProcessPowerValue(float value, float minValue, float maxValue) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x1E8BC1C))(0, value, minValue, maxValue);
	}
	template <typename T = void> T iFixBaseProxy_Initialize(int32_t P0, void* P1) {
		return ((T (*)(CalibrationWindow*, int32_t, void*))(Il2CppBase() + 0x1E8BD5C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Cancel() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8BD64))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8BD6C))(this);
	}
	template <typename T = void> T iFixBaseProxy_TakeInputFocus() {
		return ((T (*)(CalibrationWindow*))(Il2CppBase() + 0x1E8BD74))(this);
	}

};

}
