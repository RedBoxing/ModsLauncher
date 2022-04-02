#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ThinkingAnalytics.Utils {

class TDLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ThinkingAnalytics.Utils", "TD_Log"));
	}

	template <typename T = bool> static T& enableLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T EnableLog(bool enabled) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x43C6F58))(0, enabled);
	}
	template <typename T = void> static T d(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C7220))(0, message);
	}
	template <typename T = void> static T e(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C72EC))(0, message);
	}
	template <typename T = void> static T w(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C73B8))(0, message);
	}

};

}
