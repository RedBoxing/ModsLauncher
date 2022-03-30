#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LogUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LogUtil"));
	}

	template <typename T = bool> static T& isShowLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& isDebugBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& datas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& isSetAndroidLogOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> static T get_IsShowLog() {
		return ((T (*)(void *))(Il2CppBase() + 0x4268D9C))(0);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x4268E40))(0);
	}
	template <typename T = void> static T ReceivedLog(Il2CppString* logString, Il2CppString* stackTrace, uintptr_t logType) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4268FB0))(0, logString, stackTrace, logType);
	}
	template <typename T = void> static T AddSavedLog() {
		return ((T (*)(void *))(Il2CppBase() + 0x426917C))(0);
	}
	template <typename T = void> static T Log(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4269478))(0, data);
	}
	template <typename T = void> static T LogRecord(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4269610))(0, data);
	}
	template <typename T = void> static T Log_1(uintptr_t obj, uintptr_t msg) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42696B4))(0, obj, msg);
	}
	template <typename T = void> static T LogFormat(Il2CppString* data, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x426984C))(0, data, args);
	}
	template <typename T = void> static T LogFormatRecord(Il2CppString* data, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42699E4))(0, data, args);
	}
	template <typename T = void> static T LogWarning(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4269AA0))(0, data);
	}
	template <typename T = void> static T LogWarningRecord(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4269C38))(0, data);
	}
	template <typename T = void> static T LogWarningFormat(Il2CppString* data, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4269CDC))(0, data, args);
	}
	template <typename T = void> static T LogWarningFormatRecord(Il2CppString* data, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4269E74))(0, data, args);
	}
	template <typename T = void> static T LogError(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42637E4))(0, data);
	}
	template <typename T = void> static T LogErrorRecord(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4269F30))(0, data);
	}
	template <typename T = void> static T LogErrorFormat(Il2CppString* data, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4269FD4))(0, data, args);
	}
	template <typename T = void> static T LogErrorFormatRecord(Il2CppString* data, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x426A16C))(0, data, args);
	}
	template <typename T = Il2CppString*> static T get_ApiSvr() {
		return ((T (*)(void *))(Il2CppBase() + 0x426A228))(0);
	}
	template <typename T = void> static T GetIsShowLog() {
		return ((T (*)(void *))(Il2CppBase() + 0x426A2E4))(0);
	}
	template <typename T = void> static T TryOpenAndroidDebug() {
		return ((T (*)(void *))(Il2CppBase() + 0x426A3CC))(0);
	}
	template <typename T = void> static T TrySetAndroidDebug(bool isDebug) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x426A58C))(0, isDebug);
	}

};

}
