#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class InputBehaviorWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "InputBehaviorWindow"));
	}

	template <typename T = float> static T& minSensitivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& spawnTransform() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& doneButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& cancelButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& defaultButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& doneButtonLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& cancelButtonLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& defaultButtonLabel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& uiControlSetPrefab() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& uiSliderControlPrefab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& inputBehaviorInfo() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> T& buttonCallbacks() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = void> T Initialize(int32_t id, void* isFocusedCallback) {
		return ((T (*)(InputBehaviorWindow*, int32_t, void*))(Il2CppBase() + 0x21F0CAC))(this, id, isFocusedCallback);
	}
	template <typename T = void> T SetData(int32_t playerId, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(InputBehaviorWindow*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x21F10A8))(this, playerId, data);
	}
	template <typename T = void> T SetButtonCallback(uintptr_t buttonIdentifier, void* callback) {
		return ((T (*)(InputBehaviorWindow*, uintptr_t, void*))(Il2CppBase() + 0x21F1C80))(this, buttonIdentifier, callback);
	}
	template <typename T = void> T Cancel() {
		return ((T (*)(InputBehaviorWindow*))(Il2CppBase() + 0x21F1DC4))(this);
	}
	template <typename T = void> T OnDone() {
		return ((T (*)(InputBehaviorWindow*))(Il2CppBase() + 0x21F202C))(this);
	}
	template <typename T = void> T OnCancel() {
		return ((T (*)(InputBehaviorWindow*))(Il2CppBase() + 0x21F212C))(this);
	}
	template <typename T = void> T OnRestoreDefault() {
		return ((T (*)(InputBehaviorWindow*))(Il2CppBase() + 0x21F2194))(this);
	}
	template <typename T = void> T JoystickAxisSensitivityValueChanged(int32_t inputBehaviorId, int32_t controlId, float value) {
		return ((T (*)(InputBehaviorWindow*, int32_t, int32_t, float))(Il2CppBase() + 0x21F2380))(this, inputBehaviorId, controlId, value);
	}
	template <typename T = void> T MouseXYAxisSensitivityValueChanged(int32_t inputBehaviorId, int32_t controlId, float value) {
		return ((T (*)(InputBehaviorWindow*, int32_t, int32_t, float))(Il2CppBase() + 0x21F2430))(this, inputBehaviorId, controlId, value);
	}
	template <typename T = void> T JoystickAxisSensitivityCanceled(int32_t inputBehaviorId, int32_t controlId) {
		return ((T (*)(InputBehaviorWindow*, int32_t, int32_t))(Il2CppBase() + 0x21F24E0))(this, inputBehaviorId, controlId);
	}
	template <typename T = void> T MouseXYAxisSensitivityCanceled(int32_t inputBehaviorId, int32_t controlId) {
		return ((T (*)(InputBehaviorWindow*, int32_t, int32_t))(Il2CppBase() + 0x21F28C4))(this, inputBehaviorId, controlId);
	}
	template <typename T = void> T TakeInputFocus() {
		return ((T (*)(InputBehaviorWindow*))(Il2CppBase() + 0x21F2964))(this);
	}
	template <typename T = uintptr_t> T CreateControlSet() {
		return ((T (*)(InputBehaviorWindow*))(Il2CppBase() + 0x21F1804))(this);
	}
	template <typename T = uintptr_t> T CreateSlider(uintptr_t set, int32_t inputBehaviorId, Il2CppString* defaultTitle, Il2CppString* overrideTitle, uintptr_t icon, float minValue, float maxValue, void* valueChangedCallback, void* cancelCallback) {
		return ((T (*)(InputBehaviorWindow*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, uintptr_t, float, float, void*, void*))(Il2CppBase() + 0x21F1920))(this, set, inputBehaviorId, defaultTitle, overrideTitle, icon, minValue, maxValue, valueChangedCallback, cancelCallback);
	}
	template <typename T = uintptr_t> T GetInputBehavior(int32_t id) {
		return ((T (*)(InputBehaviorWindow*, int32_t))(Il2CppBase() + 0x21F1728))(this, id);
	}
	template <typename T = uintptr_t> T GetInputBehaviorInfo(int32_t inputBehaviorId) {
		return ((T (*)(InputBehaviorWindow*, int32_t))(Il2CppBase() + 0x21F2580))(this, inputBehaviorId);
	}
	template <typename T = void> T iFixBaseProxy_Initialize(int32_t P0, void* P1) {
		return ((T (*)(InputBehaviorWindow*, int32_t, void*))(Il2CppBase() + 0x21F2A38))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Cancel() {
		return ((T (*)(InputBehaviorWindow*))(Il2CppBase() + 0x21F2A40))(this);
	}
	template <typename T = void> T iFixBaseProxy_TakeInputFocus() {
		return ((T (*)(InputBehaviorWindow*))(Il2CppBase() + 0x21F2A48))(this);
	}

};

}
