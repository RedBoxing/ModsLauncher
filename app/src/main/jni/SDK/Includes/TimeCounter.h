#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TimeCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeCounter"));
	}

	template <typename T = float> T& _startTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& TimeLength() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsUnscaled() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T get_isTimeOut() {
		return ((T (*)(TimeCounter*))(Il2CppBase() + 0x1E44120))(this);
	}
	template <typename T = float> T get_TimeLength() {
		return ((T (*)(TimeCounter*))(Il2CppBase() + 0x1E44228))(this);
	}
	template <typename T = void> T set_TimeLength(float value) {
		return ((T (*)(TimeCounter*, float))(Il2CppBase() + 0x1E44230))(this, value);
	}
	template <typename T = float> T get_TimePass() {
		return ((T (*)(TimeCounter*))(Il2CppBase() + 0x1E441A8))(this);
	}
	template <typename T = float> T get_CountProgress() {
		return ((T (*)(TimeCounter*))(Il2CppBase() + 0x1E44240))(this);
	}
	template <typename T = bool> T get_IsUnscaled() {
		return ((T (*)(TimeCounter*))(Il2CppBase() + 0x1E44238))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(TimeCounter*))(Il2CppBase() + 0x1E44320))(this);
	}
	template <typename T = void> T ResetTime(float timeLength) {
		return ((T (*)(TimeCounter*, float))(Il2CppBase() + 0x1E4439C))(this, timeLength);
	}

};

}
