#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class FallbackJoystickIdentificationDemo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "FallbackJoystickIdentificationDemo"));
	}

	template <typename T = float> static T& windowWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& windowHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& inputDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& identifyRequired() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& joysticksToIdentify() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& nextInputAllowedTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FallbackJoystickIdentificationDemo*))(Il2CppBase() + 0x206679C))(this);
	}
	template <typename T = void> T JoystickConnected(uintptr_t args) {
		return ((T (*)(FallbackJoystickIdentificationDemo*, uintptr_t))(Il2CppBase() + 0x2066A60))(this, args);
	}
	template <typename T = void> T JoystickDisconnected(uintptr_t args) {
		return ((T (*)(FallbackJoystickIdentificationDemo*, uintptr_t))(Il2CppBase() + 0x2066AD4))(this, args);
	}
	template <typename T = void> T IdentifyAllJoysticks() {
		return ((T (*)(FallbackJoystickIdentificationDemo*))(Il2CppBase() + 0x2066900))(this);
	}
	template <typename T = void> T SetInputDelay() {
		return ((T (*)(FallbackJoystickIdentificationDemo*))(Il2CppBase() + 0x2066BAC))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(FallbackJoystickIdentificationDemo*))(Il2CppBase() + 0x2066C1C))(this);
	}
	template <typename T = void> T DrawDialogWindow(int32_t windowId) {
		return ((T (*)(FallbackJoystickIdentificationDemo*, int32_t))(Il2CppBase() + 0x2066EC4))(this, windowId);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FallbackJoystickIdentificationDemo*))(Il2CppBase() + 0x2066B48))(this);
	}

};

}
