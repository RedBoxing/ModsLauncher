#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native {

class NativeVideoClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native", "NativeVideoClient"));
	}

	template <typename T = uintptr_t> T& mManager() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T GetCaptureCapabilities(void* callback) {
		return ((T (*)(NativeVideoClient*, void*))(Il2CppBase() + 0x283B990))(this, callback);
	}
	template <typename T = uintptr_t> T FromNativeVideoCapabilities(uintptr_t capabilities) {
		return ((T (*)(NativeVideoClient*, uintptr_t))(Il2CppBase() + 0x283BB40))(this, capabilities);
	}
	template <typename T = void> T ShowCaptureOverlay() {
		return ((T (*)(NativeVideoClient*))(Il2CppBase() + 0x283BE88))(this);
	}
	template <typename T = void> T GetCaptureState(void* callback) {
		return ((T (*)(NativeVideoClient*, void*))(Il2CppBase() + 0x283BEFC))(this, callback);
	}
	template <typename T = uintptr_t> T FromNativeVideoCaptureState(uintptr_t captureState) {
		return ((T (*)(NativeVideoClient*, uintptr_t))(Il2CppBase() + 0x283C0AC))(this, captureState);
	}
	template <typename T = void> T IsCaptureAvailable(uintptr_t captureMode, void* callback) {
		return ((T (*)(NativeVideoClient*, uintptr_t, void*))(Il2CppBase() + 0x283C240))(this, captureMode, callback);
	}
	template <typename T = bool> T IsCaptureSupported() {
		return ((T (*)(NativeVideoClient*))(Il2CppBase() + 0x283C408))(this);
	}
	template <typename T = void> T RegisterCaptureOverlayStateChangedListener(uintptr_t listener) {
		return ((T (*)(NativeVideoClient*, uintptr_t))(Il2CppBase() + 0x283C47C))(this, listener);
	}
	template <typename T = void> T UnregisterCaptureOverlayStateChangedListener() {
		return ((T (*)(NativeVideoClient*))(Il2CppBase() + 0x283C7B0))(this);
	}

};

}
