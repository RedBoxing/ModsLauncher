#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.OurUtils {

class Logger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.OurUtils", "Logger"));
	}

	template <typename T = bool> static T& debugLogEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& warningLogEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}

	template <typename T = bool> static T get_DebugLogEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x460EC38))(0);
	}
	template <typename T = void> static T set_DebugLogEnabled(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x460ECDC))(0, value);
	}
	template <typename T = bool> static T get_WarningLogEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x460ED8C))(0);
	}
	template <typename T = void> static T set_WarningLogEnabled(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x460EE30))(0, value);
	}
	template <typename T = void> static T d(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x460A428))(0, msg);
	}
	template <typename T = void> static T w(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x460EB00))(0, msg);
	}
	template <typename T = void> static T e(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x460A96C))(0, msg);
	}
	template <typename T = Il2CppString*> static T describe(Il2CppArray<uintptr_t>* b) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x460F0E8))(0, b);
	}
	template <typename T = Il2CppString*> static T ToLogMessage(Il2CppString* prefix, Il2CppString* logType, Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x460F1CC))(0, prefix, logType, msg);
	}

};

}
