#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class Callbacks
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "Callbacks"));
	}

	template <typename T = void*> static T& NoopUICallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T ToIntPtr(void* callback, void* conversionFunction) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x0))(0, callback, conversionFunction);
	}
	template <typename T = uintptr_t> static T ToIntPtr_1(void* callback, void* conversionFunction) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x0))(0, callback, conversionFunction);
	}
	template <typename T = uintptr_t> static T ToIntPtr_2(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x283CF50))(0, callback);
	}
	template <typename T = uintptr_t> static T IntPtrToTempCallback(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, handle);
	}
	template <typename T = uintptr_t> static T IntPtrToCallback(uintptr_t handle, bool unpinHandle) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x0))(0, handle, unpinHandle);
	}
	template <typename T = uintptr_t> static T IntPtrToPermanentCallback(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, handle);
	}
	template <typename T = void> static T InternalShowUICallback(uintptr_t status, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x283F0C4))(0, status, data);
	}
	template <typename T = void> static T PerformInternalCallback(Il2CppString* callbackName, uintptr_t callbackType, uintptr_t response, uintptr_t userData) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x283D180))(0, callbackName, callbackType, response, userData);
	}
	template <typename T = void> static T PerformInternalCallback_1(Il2CppString* callbackName, uintptr_t callbackType, uintptr_t param1, uintptr_t param2, uintptr_t userData) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, callbackName, callbackType, param1, param2, userData);
	}
	template <typename T = void*> static T AsOnGameThreadCallback(void* toInvokeOnGameThread) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, toInvokeOnGameThread);
	}
	template <typename T = void*> static T AsOnGameThreadCallback_1(void* toInvokeOnGameThread) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, toInvokeOnGameThread);
	}
	template <typename T = void> static T AsCoroutine(uintptr_t routine) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2836B28))(0, routine);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T IntPtrAndSizeToByteArray(uintptr_t data, uintptr_t dataLength) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x283F2D8))(0, data, dataLength);
	}

};

}
