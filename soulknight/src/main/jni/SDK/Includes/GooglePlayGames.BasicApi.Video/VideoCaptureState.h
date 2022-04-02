#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Video {

class VideoCaptureState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Video", "VideoCaptureState"));
	}

	template <typename T = bool> T& mIsCapturing() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mCaptureMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mQualityLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mIsOverlayVisible() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& mIsPaused() {
		return *(T*)((uintptr_t)this + 0x1D);
	}

	template <typename T = bool> T get_IsCapturing() {
		return ((T (*)(VideoCaptureState*))(Il2CppBase() + 0x35C8010))(this);
	}
	template <typename T = uintptr_t> T get_CaptureMode() {
		return ((T (*)(VideoCaptureState*))(Il2CppBase() + 0x35C8070))(this);
	}
	template <typename T = uintptr_t> T get_QualityLevel() {
		return ((T (*)(VideoCaptureState*))(Il2CppBase() + 0x35C80D0))(this);
	}
	template <typename T = bool> T get_IsOverlayVisible() {
		return ((T (*)(VideoCaptureState*))(Il2CppBase() + 0x35C8130))(this);
	}
	template <typename T = bool> T get_IsPaused() {
		return ((T (*)(VideoCaptureState*))(Il2CppBase() + 0x35C8190))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(VideoCaptureState*))(Il2CppBase() + 0x35C81F0))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(VideoCaptureState*))(Il2CppBase() + 0x35C852C))(this);
	}

};

}
