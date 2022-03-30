#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class VideoCaptureState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "VideoCaptureState"));
	}


	template <typename T = bool> static T VideoCaptureState_IsCapturing(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3589580))(0, self);
	}
	template <typename T = uintptr_t> static T VideoCaptureState_CaptureMode(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3589624))(0, self);
	}
	template <typename T = uintptr_t> static T VideoCaptureState_QualityLevel(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35896C0))(0, self);
	}
	template <typename T = bool> static T VideoCaptureState_IsOverlayVisible(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x358975C))(0, self);
	}
	template <typename T = bool> static T VideoCaptureState_IsPaused(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3589800))(0, self);
	}
	template <typename T = void> static T VideoCaptureState_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35898A4))(0, self);
	}
	template <typename T = bool> static T VideoCaptureState_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3589940))(0, self);
	}

};

}
