#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Calibration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Calibration"));
	}

	template <typename T = uintptr_t> T& player() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& controllerType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& joystick() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& calibrationMap() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& selectedElementIdentifierId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& recording() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = uintptr_t> T get_player() {
		return ((T (*)(Calibration*))(Il2CppBase() + 0x2062010))(this);
	}
	template <typename T = void> T set_player(uintptr_t value) {
		return ((T (*)(Calibration*, uintptr_t))(Il2CppBase() + 0x2062018))(this, value);
	}
	template <typename T = uintptr_t> T get_controllerType() {
		return ((T (*)(Calibration*))(Il2CppBase() + 0x2062020))(this);
	}
	template <typename T = void> T set_controllerType(uintptr_t value) {
		return ((T (*)(Calibration*, uintptr_t))(Il2CppBase() + 0x2062028))(this, value);
	}
	template <typename T = uintptr_t> T get_joystick() {
		return ((T (*)(Calibration*))(Il2CppBase() + 0x205F390))(this);
	}
	template <typename T = void> T set_joystick(uintptr_t value) {
		return ((T (*)(Calibration*, uintptr_t))(Il2CppBase() + 0x2062030))(this, value);
	}
	template <typename T = uintptr_t> T get_calibrationMap() {
		return ((T (*)(Calibration*))(Il2CppBase() + 0x205F398))(this);
	}
	template <typename T = void> T set_calibrationMap(uintptr_t value) {
		return ((T (*)(Calibration*, uintptr_t))(Il2CppBase() + 0x2062038))(this, value);
	}

};

}
