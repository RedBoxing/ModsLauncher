#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class VideoManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "VideoManager"));
	}


	template <typename T = void> static T VideoManager_GetCaptureCapabilities(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35899E4))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T VideoManager_ShowCaptureOverlay(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3589AA0))(0, self);
	}
	template <typename T = void> static T VideoManager_GetCaptureState(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3589B3C))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T VideoManager_IsCaptureAvailable(uintptr_t self, uintptr_t capture_mode, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3589BF8))(0, self, capture_mode, callback, callback_arg);
	}
	template <typename T = bool> static T VideoManager_IsCaptureSupported(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3589CC4))(0, self);
	}
	template <typename T = void> static T VideoManager_RegisterCaptureOverlayStateChangedListener(uintptr_t self, uintptr_t helper) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3589D68))(0, self, helper);
	}
	template <typename T = void> static T VideoManager_UnregisterCaptureOverlayStateChangedListener(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3589E14))(0, self);
	}
	template <typename T = void> static T VideoManager_GetCaptureCapabilitiesResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3589EB0))(0, self);
	}
	template <typename T = uintptr_t> static T VideoManager_GetCaptureCapabilitiesResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3589F4C))(0, self);
	}
	template <typename T = uintptr_t> static T VideoManager_GetCaptureCapabilitiesResponse_GetVideoCapabilities(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3589FE8))(0, self);
	}
	template <typename T = void> static T VideoManager_GetCaptureStateResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x358A084))(0, self);
	}
	template <typename T = uintptr_t> static T VideoManager_GetCaptureStateResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x358A120))(0, self);
	}
	template <typename T = uintptr_t> static T VideoManager_GetCaptureStateResponse_GetVideoCaptureState(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x358A1BC))(0, self);
	}
	template <typename T = void> static T VideoManager_IsCaptureAvailableResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x358A258))(0, self);
	}
	template <typename T = uintptr_t> static T VideoManager_IsCaptureAvailableResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x358A2F4))(0, self);
	}
	template <typename T = bool> static T VideoManager_IsCaptureAvailableResponse_GetIsCaptureAvailable(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x358A390))(0, self);
	}

};

}
