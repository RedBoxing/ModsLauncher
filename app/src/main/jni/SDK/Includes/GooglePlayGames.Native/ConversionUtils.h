#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native {

class ConversionUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native", "ConversionUtils"));
	}


	template <typename T = uintptr_t> static T ConvertResponseStatus(uintptr_t status) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35C9F70))(0, status);
	}
	template <typename T = uintptr_t> static T ConvertResponseStatusToCommonStatus(uintptr_t status) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CA09C))(0, status);
	}
	template <typename T = uintptr_t> static T ConvertUIStatus(uintptr_t status) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CA1CC))(0, status);
	}
	template <typename T = uintptr_t> static T AsDataSource(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CA2F8))(0, source);
	}
	template <typename T = uintptr_t> static T ConvertVideoCaptureMode(uintptr_t captureMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CA414))(0, captureMode);
	}
	template <typename T = uintptr_t> static T ConvertNativeVideoCaptureMode(uintptr_t nativeCaptureMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CA528))(0, nativeCaptureMode);
	}
	template <typename T = uintptr_t> static T ConvertNativeVideoQualityLevel(uintptr_t nativeQualityLevel) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CA63C))(0, nativeQualityLevel);
	}
	template <typename T = uintptr_t> static T ConvertNativeVideoCaptureOverlayState(uintptr_t nativeOverlayState) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CA750))(0, nativeOverlayState);
	}

};

}
