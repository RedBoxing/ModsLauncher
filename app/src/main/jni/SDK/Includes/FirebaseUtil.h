#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FirebaseUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FirebaseUtil"));
	}

	template <typename T = bool> static T& inited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T InitializeFirebase() {
		return ((T (*)(void *))(Il2CppBase() + 0x447AC48))(0);
	}
	template <typename T = void> static T LogEvent(Il2CppString* name, Il2CppString* parameterName, int32_t parameterValue) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x447AC9C))(0, name, parameterName, parameterValue);
	}
	template <typename T = void> static T LogEvent_1(Il2CppString* name, Il2CppString* parameterName, Il2CppString* parameterValue) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x447AD14))(0, name, parameterName, parameterValue);
	}
	template <typename T = void> static T LogEvent_2(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x447AD8C))(0, name);
	}
	template <typename T = void> static T LogActivate() {
		return ((T (*)(void *))(Il2CppBase() + 0x447ADE8))(0);
	}

};

}
