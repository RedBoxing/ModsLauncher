#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InputBehaviorSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputBehaviorSettings"));
	}

	template <typename T = int32_t> T& _inputBehaviorId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _showJoystickAxisSensitivity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _showMouseXYAxisSensitivity() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = Il2CppString*> T& _labelLanguageKey() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _joystickAxisSensitivityLabelLanguageKey() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _mouseXYAxisSensitivityLabelLanguageKey() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _joystickAxisSensitivityIcon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _mouseXYAxisSensitivityIcon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& _joystickAxisSensitivityMin() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _joystickAxisSensitivityMax() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& _mouseXYAxisSensitivityMin() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _mouseXYAxisSensitivityMax() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = int32_t> T get_inputBehaviorId() {
		return ((T (*)(InputBehaviorSettings*))(Il2CppBase() + 0x21E2870))(this);
	}
	template <typename T = bool> T get_showJoystickAxisSensitivity() {
		return ((T (*)(InputBehaviorSettings*))(Il2CppBase() + 0x21E28D0))(this);
	}
	template <typename T = bool> T get_showMouseXYAxisSensitivity() {
		return ((T (*)(InputBehaviorSettings*))(Il2CppBase() + 0x21E2930))(this);
	}
	template <typename T = Il2CppString*> T get_labelLanguageKey() {
		return ((T (*)(InputBehaviorSettings*))(Il2CppBase() + 0x21E2990))(this);
	}
	template <typename T = Il2CppString*> T get_joystickAxisSensitivityLabelLanguageKey() {
		return ((T (*)(InputBehaviorSettings*))(Il2CppBase() + 0x21E29F0))(this);
	}
	template <typename T = Il2CppString*> T get_mouseXYAxisSensitivityLabelLanguageKey() {
		return ((T (*)(InputBehaviorSettings*))(Il2CppBase() + 0x21E2A50))(this);
	}
	template <typename T = uintptr_t> T get_joystickAxisSensitivityIcon() {
		return ((T (*)(InputBehaviorSettings*))(Il2CppBase() + 0x21E2AB0))(this);
	}
	template <typename T = uintptr_t> T get_mouseXYAxisSensitivityIcon() {
		return ((T (*)(InputBehaviorSettings*))(Il2CppBase() + 0x21E2B10))(this);
	}
	template <typename T = float> T get_joystickAxisSensitivityMin() {
		return ((T (*)(InputBehaviorSettings*))(Il2CppBase() + 0x21E2B70))(this);
	}
	template <typename T = float> T get_joystickAxisSensitivityMax() {
		return ((T (*)(InputBehaviorSettings*))(Il2CppBase() + 0x21E2BD0))(this);
	}
	template <typename T = float> T get_mouseXYAxisSensitivityMin() {
		return ((T (*)(InputBehaviorSettings*))(Il2CppBase() + 0x21E2C30))(this);
	}
	template <typename T = float> T get_mouseXYAxisSensitivityMax() {
		return ((T (*)(InputBehaviorSettings*))(Il2CppBase() + 0x21E2C90))(this);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(InputBehaviorSettings*))(Il2CppBase() + 0x21E2CF0))(this);
	}

};

}
