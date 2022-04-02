#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class VideoManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "VideoManager"));
	}

	template <typename T = uintptr_t> T& mServices() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_NumCaptureModes() {
		return ((T (*)(VideoManager*))(Il2CppBase() + 0x460DAB4))(this);
	}
	template <typename T = int32_t> T get_NumQualityLevels() {
		return ((T (*)(VideoManager*))(Il2CppBase() + 0x460DB14))(this);
	}
	template <typename T = void> T GetCaptureCapabilities(void* callback) {
		return ((T (*)(VideoManager*, void*))(Il2CppBase() + 0x460DB74))(this, callback);
	}
	template <typename T = void> static T InternalCaptureCapabilitiesCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x460D7D4))(0, response, data);
	}
	template <typename T = void> T ShowCaptureOverlay() {
		return ((T (*)(VideoManager*))(Il2CppBase() + 0x460DCE4))(this);
	}
	template <typename T = void> T GetCaptureState(void* callback) {
		return ((T (*)(VideoManager*, void*))(Il2CppBase() + 0x460DD60))(this, callback);
	}
	template <typename T = void> static T InternalCaptureStateCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x460D8A4))(0, response, data);
	}
	template <typename T = void> T IsCaptureAvailable(uintptr_t captureMode, void* callback) {
		return ((T (*)(VideoManager*, uintptr_t, void*))(Il2CppBase() + 0x460DED0))(this, captureMode, callback);
	}
	template <typename T = void> static T InternalIsCaptureAvailableCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x460D974))(0, response, data);
	}
	template <typename T = bool> T IsCaptureSupported() {
		return ((T (*)(VideoManager*))(Il2CppBase() + 0x460E04C))(this);
	}
	template <typename T = void> T RegisterCaptureOverlayStateChangedListener(uintptr_t helper) {
		return ((T (*)(VideoManager*, uintptr_t))(Il2CppBase() + 0x460E0C8))(this, helper);
	}
	template <typename T = void> T UnregisterCaptureOverlayStateChangedListener() {
		return ((T (*)(VideoManager*))(Il2CppBase() + 0x460E184))(this);
	}

};

}
