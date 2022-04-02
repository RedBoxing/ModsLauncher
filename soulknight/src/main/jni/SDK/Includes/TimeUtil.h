#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TimeUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeUtil"));
	}


	template <typename T = uintptr_t> static T FromSoulKnightDay(int32_t dayIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1E4442C))(0, dayIndex);
	}
	template <typename T = int32_t> static T ToSoulKnightDay(uintptr_t dateTime) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E444D4))(0, dateTime);
	}
	template <typename T = bool> static T AtNight(uintptr_t dateTime) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E4457C))(0, dateTime);
	}
	template <typename T = uintptr_t> static T GetTimeMaxUnitFromDay2Minute(uintptr_t timeSpan, uintptr_t* units) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1E44618))(0, timeSpan, units);
	}
	template <typename T = int64_t> static T GetCurTicks() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E44800))(0);
	}
	template <typename T = int64_t> static T Tick2Mels(int64_t tick) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x1E448B0))(0, tick);
	}
	template <typename T = int64_t> static T Tick2Sec(int64_t tick) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x1E44920))(0, tick);
	}
	template <typename T = uintptr_t> static T TimeStampToDateTime(Il2CppString* timeStamp) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E44998))(0, timeStamp);
	}

};

}
