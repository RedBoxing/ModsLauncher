#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Video {

class IVideoClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Video", "IVideoClient"));
	}


	template <typename T = void> T GetCaptureCapabilities(void* callback) {
		return ((T (*)(IVideoClient*, void*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T ShowCaptureOverlay() {
		return ((T (*)(IVideoClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T GetCaptureState(void* callback) {
		return ((T (*)(IVideoClient*, void*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T IsCaptureAvailable(uintptr_t captureMode, void* callback) {
		return ((T (*)(IVideoClient*, uintptr_t, void*))(Il2CppBase() + 0x0))(this, captureMode, callback);
	}
	template <typename T = bool> T IsCaptureSupported() {
		return ((T (*)(IVideoClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T RegisterCaptureOverlayStateChangedListener(uintptr_t listener) {
		return ((T (*)(IVideoClient*, uintptr_t))(Il2CppBase() + 0x0))(this, listener);
	}
	template <typename T = void> T UnregisterCaptureOverlayStateChangedListener() {
		return ((T (*)(IVideoClient*))(Il2CppBase() + 0x0))(this);
	}

};

}
