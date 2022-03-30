#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AxisCalibrator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AxisCalibrator"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& joystick() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& axisIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& axis() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& firstRun() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = bool> T get_isValid() {
		return ((T (*)(AxisCalibrator*))(Il2CppBase() + 0x21DEDC0))(this);
	}
	template <typename T = void> T RecordMinMax() {
		return ((T (*)(AxisCalibrator*))(Il2CppBase() + 0x21DEFBC))(this);
	}
	template <typename T = void> T RecordZero() {
		return ((T (*)(AxisCalibrator*))(Il2CppBase() + 0x21DF064))(this);
	}
	template <typename T = void> T Commit() {
		return ((T (*)(AxisCalibrator*))(Il2CppBase() + 0x21DF0D4))(this);
	}

};

}
